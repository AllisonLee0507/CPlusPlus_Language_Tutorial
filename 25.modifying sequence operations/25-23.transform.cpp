#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>

int calculateCube(int);

int main(void)
{

	std::ostream_iterator< int > output(cout, " ");

	int a2[10] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	std::vector< int > v2(a2, a2 + 10); // copy of a2
	cout << "Vector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);

	std::vector< int > cubes(10); // instantiate vector cubes

	// calculate cube of each element in v; place results in cubes
	std::transform(v2.begin(), v2.end(), cubes.begin(), calculateCube);
	cout << "\n\nThe cube of every integer in Vector v is:\n";
	std::copy(cubes.begin(), cubes.end(), output);


	cout << endl;
	return 0;
}
int calculateCube(int value)
{
	return value * value * value;
}
#endif


#if 0
#include <iostream>
#include <set>
#include <deque>
#include <algorithm>

using namespace std;

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


int main(void)
{
	set<int, greater<int> > coll1;
	deque<int> coll2;

	for (int i = 1; i <= 9; ++i) {
		coll1.insert(i);
	}

	PRINT_ELEMENTS(coll1, "initialized: ");
	transform(coll1.begin(), coll1.end(),back_inserter(coll2),bind2nd(multiplies<int>(), 10));
	PRINT_ELEMENTS(coll2, "transformed: ");

}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main(void)
{
	int coll[] = { 5, 6, 2, 4, 1, 3 };

	// square all elements
	transform(coll, coll + 6, coll, coll, multiplies<int>());

	// print all elements
	copy(coll, coll + 6,ostream_iterator<int>(cout, " "));
	cout << endl;

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
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>

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

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

using namespace std;

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1:   ");

	// negate all elements in coll1
	transform(coll1.begin(), coll1.end(), coll1.begin(),negate<int>());
	PRINT_ELEMENTS(coll1, "negated: ");
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>

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

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

using namespace std;

int main()
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1:   ");

	// transform elements of coll1 into coll2 with ten times their value
	transform(coll1.begin(), coll1.end(),      // source range
		back_inserter(coll2),            // destination range
		bind2nd(multiplies<int>(), 10));  // operation
	PRINT_ELEMENTS(coll2, "coll2:   ");
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>
using namespace std;

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

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1:   ");

	// print coll2 negatively and in reverse order
	transform(coll2.rbegin(), coll2.rend(),    // source range
		ostream_iterator<int>(cout, " "), // destination range
		negate<int>());                  // operation
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>

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

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

using namespace std;

int main()
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1:   ");

	// square each element
	transform(coll1.begin(), coll1.end(),       // first source range
		coll1.begin(),                    // second source range
		coll1.begin(),                    // destination range
		multiplies<int>());               // operation
	PRINT_ELEMENTS(coll1, "squared: ");

}
#endif



#if 0
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>

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

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

using namespace std;

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1:   ");

	transform(coll1.begin(), coll1.end(),       // first source range
		coll1.rbegin(),                   // second source range
		back_inserter(coll2),             // destination range
		plus<int>());                     // operation
	PRINT_ELEMENTS(coll2, "coll2:   ");

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <utility>
using namespace std;

typedef pair<int, string> Pair;

inline bool less_than_second(const Pair& b1, const Pair& b2){
	return b1.second < b2.second;
}

int main(void)
{
	const char* names[] = { "A", "B", "C", "D", "E" };
	const int values[] = { 18, 20, 26, 30, 41 };
	const int num_pairs = sizeof(names) / sizeof(names[0]);

	vector<Pair> pair(num_pairs);
	transform(values, values + num_pairs, names, pair.begin(), make_pair<int, string>);

	if (pair[1].first > pair[3].first)
		cout << pair[1].second << " > " << pair[3].second << endl;
	else if (pair[1].first == pair[3].first)
		cout << pair[1].second << " == " << pair[3].second << endl;
	else
		cout << pair[1].second << " < " << pair[3].second << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>
using namespace std;

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

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1:   ");

	// print differences of two corresponding elements
	cout << "diff:    ";
	transform(coll1.begin(), coll1.end(),       // first source range
		coll2.begin(),                    // second source range
		ostream_iterator<int>(cout, " "), // destination range
		minus<int>());                    // operation
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

double reciprocal(double i) {
	return 1.0/i;
}

int main(void)
{
	list<double> l;
	int i;

	for (i = 1; i<10; i++)
		l.push_back((double)i);

	list<double>::iterator p = l.begin();
	while (p != l.end()) {
		cout << *p << endl;
		p++;
	}

	p = transform(l.begin(), l.end(), l.begin(), reciprocal);

	p = l.begin();
	while (p != l.end()) {
		cout << *p << endl;
		p++;
	}
	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

// A function object that computes a reciprocal.
class reciprocal : unary_function<double, double> {
public:
	result_type sum;

	result_type operator()(argument_type val) {
		if (val == 0.0) return 0.0;
		return 1.0 / val; // return reciprocal
	}
};

int main(void)
{
	int i;

	vector<double> v;
	for (i = 1; i < 10; ++i) v.push_back((double)i);

	vector<double> v2(10);
	transform(v.begin(), v.end(), v2.begin(), reciprocal());

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	vector<int> v, v2, result(10);

	for (unsigned i = 0; i < 10; ++i) v.push_back(i);
	for (unsigned i = 0; i < 10; ++i) v2.push_back(i);

	transform(v.begin(), v.end(), v2.begin(), result.begin(), multiplies<int>());

	return 0;
}
#endif