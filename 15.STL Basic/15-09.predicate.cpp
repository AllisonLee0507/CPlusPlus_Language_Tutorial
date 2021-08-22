#if 0
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>
using namespace std;

class reciprocal : unary_function<double, double> {
public:
	result_type operator()(argument_type i)
	{
		return (result_type) 1.0 / i;
	}
};

int main(void)
{
	list<double> vals;

	for (int i = 1; i<10; i++) vals.push_back((double)i);

	cout << "Original contents of vals:\n";
	list<double>::iterator p = vals.begin();
	while (p != vals.end()) {
		cout << *p << " ";
		p++;
	}
	cout << endl;

	// use reciprocal function object
	p = transform(vals.begin(), vals.end(),
		vals.begin(),
		reciprocal()); // call function object

	cout << "Transformed contents of vals:\n";
	p = vals.begin();
	while (p != vals.end()) {
		cout << *p << " ";
		p++;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

template <typename T, int VAL>
T addValue(T const& x)
{
	return x + VAL;
}


void call_addValue()
{
	addValue<int, 5>(42);
}

template <typename IT, typename OP>
void transform(IT beg, IT end, IT to, OP op)
{
	while (beg != end) {
		*to++ = op(*beg++);
	}
}
int main(void)
{
	call_addValue();

	int m[] = { 1, 2, 3, 4, 5, 6 };

	transform(m, m + 6,
		m,
		(int(*)(int const&))    // cast necessary
		addValue<int, 5>);

	for (int i = 0; i<6; i++){
		cout << m[i] << " ";
	}
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function object to process the mean value
class MeanValue {
private:
	long num;    // number of elements
	long sum;    // sum of all element values
public:
	// constructor
	MeanValue() : num(0), sum(0) {
	}

	// ''function call''
	// - process one more element of the sequence
	void operator() (int elem) {
		num++;          // increment count
		sum += elem;    // add value
	}

	// return mean value
	double value() {
		return static_cast<double>(sum) / static_cast<double>(num);
	}
};

int main(void)
{
	vector<int> coll;

	// insert elments from 1 to 8
	for (int i = 1; i <= 8; ++i) {
		coll.push_back(i);
	}

	// process and print mean value
	MeanValue mv = for_each(coll.begin(), coll.end(),  // range
		MeanValue());              // operation
	cout << "mean value: " << mv.value() << endl;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <set>
using namespace std;

bool less1(const string& x, const string& y)
{
	return x < y;
}

bool greater1(const string& x, const string& y)
{
	return x > y;
}

int main(void)
{
	typedef set<string, pointer_to_binary_function<const string&, const string&, bool> >  set_type1;

	set_type1 set1(ptr_fun(less1));

	set1.insert("the");
	set1.insert("quick");
	set1.insert("brown");
	set1.insert("fox");

	set_type1::iterator i;
	for (i = set1.begin(); i != set1.end(); ++i)
		cout << *i << " ";
	cout << endl;

	set_type1 set2(ptr_fun(greater1));

	set2.insert("the");
	set2.insert("quick");
	set2.insert("brown");
	set2.insert("fox");

	for (i = set2.begin(); i != set2.end(); ++i)
		cout << *i << " ";
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>      // for abs()
using namespace std;

// predicate, which returns whether an integer is a prime number
bool isPrime(int number)
{
	// ignore negative sign
	number = abs(number);

	// 0 and 1 are no prime numbers
	if (number == 0 || number == 1) {
		return false;
	}

	// find divisor that divides without a remainder
	int divisor;
	for (divisor = number / 2; numberdivisor != 0; --divisor) {
		;
	}

	// if no divisor greater than 1 is found, it is a prime number
	return divisor == 1;
}

int main(void)
{
	list<int> coll;

	// insert elements from 24 to 30
	for (int i = 24; i <= 30; ++i) {
		coll.push_back(i);
	}

	// search for prime number
	list<int>::iterator pos;
	pos = find_if(coll.begin(), coll.end(),    // range
		isPrime);                    // predicate
	if (pos != coll.end()) {
		// found
		cout << *pos << " is first prime number found" << endl;
	}
	else {
		// not found
		cout << "no prime number found" << endl;
	}
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

/* PRINT_ELEMENTS()
* - prints optional C-string optcstr followed by
* - all elements of the collection coll
* - separated by spaces
*/
template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}




/* class for the compose_f_gx adapter
*/
template <class OP1, class OP2>
class compose_f_gx_t
	: public std::unary_function<typename OP2::argument_type,
	typename OP1::result_type>
{
private:
	OP1 op1;    // process: op1(op2(x))
	OP2 op2;
public:
	// constructor
	compose_f_gx_t(const OP1& o1, const OP2& o2)
		: op1(o1), op2(o2) {
	}

	// function call
	typename OP1::result_type
		operator()(const typename OP2::argument_type& x) const {
			return op1(op2(x));
		}
};

/* convenience function for the compose_f_gx adapter
*/
template <class OP1, class OP2>
inline compose_f_gx_t<OP1, OP2>
compose_f_gx(const OP1& o1, const OP2& o2) {
	return compose_f_gx_t<OP1, OP2>(o1, o2);
}


int main(void)
{
	vector<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);

	// for each element add 10 and multiply by 5
	transform(coll.begin(), coll.end(),
		ostream_iterator<int>(cout, " "),
		compose_f_gx(bind2nd(multiplies<int>(), 5),
		bind2nd(plus<int>(), 10)));
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <functional>

#include <iostream>

/* PRINT_ELEMENTS()
* - prints optional C-string optcstr followed by
* - all elements of the collection coll
* - separated by spaces
*/
template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}





/* class for the compose_f_gx_hx adapter
*/
template <class OP1, class OP2, class OP3>
class compose_f_gx_hx_t
	: public std::unary_function<typename OP2::argument_type,
	typename OP1::result_type>
{
private:
	OP1 op1;    // process: op1(op2(x),op3(x))
	OP2 op2;
	OP3 op3;
public:
	// constructor
	compose_f_gx_hx_t(const OP1& o1, const OP2& o2, const OP3& o3)
		: op1(o1), op2(o2), op3(o3) {
	}

	// function call
	typename OP1::result_type
		operator()(const typename OP2::argument_type& x) const {
			return op1(op2(x), op3(x));
		}
};

/* convenience function for the compose_f_gx_hx adapter
*/
template <class OP1, class OP2, class OP3>
inline compose_f_gx_hx_t<OP1, OP2, OP3>
compose_f_gx_hx(const OP1& o1, const OP2& o2, const OP3& o3) {
	return compose_f_gx_hx_t<OP1, OP2, OP3>(o1, o2, o3);
}
int main(void)
{
	vector<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);

	// remove all elements that are greater than four and less than seven
	// - retain new end
	vector<int>::iterator pos;
	pos = remove_if(coll.begin(), coll.end(),
		compose_f_gx_hx(logical_and<bool>(),
		bind2nd(greater<int>(), 4),
		bind2nd(less<int>(), 7)));

	// remove ''removed'' elements in coll
	coll.erase(pos, coll.end());

	PRINT_ELEMENTS(coll);
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <cctype>

using namespace std;


#include <functional>

/* class for the compose_f_gx_hy adapter
*/
template <class OP1, class OP2, class OP3>
class compose_f_gx_hy_t
	: public std::binary_function<typename OP2::argument_type,
	typename OP3::argument_type,
	typename OP1::result_type>
{
private:
	OP1 op1;    // process: op1(op2(x),op3(y))
	OP2 op2;
	OP3 op3;
public:
	// constructor
	compose_f_gx_hy_t(const OP1& o1, const OP2& o2, const OP3& o3)
		: op1(o1), op2(o2), op3(o3) {
	}

	// function call
	typename OP1::result_type
		operator()(const typename OP2::argument_type& x,
		const typename OP3::argument_type& y) const {
			return op1(op2(x), op3(y));
		}
};

/* convenience function for the compose_f_gx_hy adapter
*/
template <class OP1, class OP2, class OP3>
inline compose_f_gx_hy_t<OP1, OP2, OP3>
compose_f_gx_hy(const OP1& o1, const OP2& o2, const OP3& o3) {
	return compose_f_gx_hy_t<OP1, OP2, OP3>(o1, o2, o3);
}


int main(void)
{
	string s("Internationalization");
	string sub("Nation");

	// search substring case insensitive
	string::iterator pos;
	pos = search(s.begin(), s.end(),           // string to search in
		sub.begin(), sub.end(),       // substring to search
		compose_f_gx_hy(equal_to<int>(), // compar. criterion
		ptr_fun(::toupper),
		ptr_fun(::toupper)));

	if (pos != s.end()) {
		cout << "\"" << sub << "\" is part of \"" << s << "\""
			<< endl;
	}
}
#endif
