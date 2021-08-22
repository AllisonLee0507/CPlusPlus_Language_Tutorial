#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>

void outputSquare(int);

int main(void)
{
	std::ostream_iterator< int > output(cout, " ");

	int a2[10] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	std::vector< int > v2(a2, a2 + 10); // copy of a2
	cout << "Vector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);

	// output square of every element in v
	cout << "\n\nThe square of every integer in Vector v is:\n";
	std::for_each(v2.begin(), v2.end(), outputSquare);

	cout << endl;
	return 0;
}
void outputSquare(int value)
{
	cout << value * value << ' ';
}
#endif


#if 0
#include <iostream>
#include <list>
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


class AddValue {
private:
	int theValue;    // the value to add
public:
	// constructor initializes the value to add
	AddValue(int v) : theValue(v) {
	}

	// the ''function call'' for the element adds the value
	void operator() (int& elem) const {
		elem += theValue;
	}
};

int main(void)
{
	list<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	PRINT_ELEMENTS(coll, "initialized:                ");

	// add value 10 to each element
	for_each(coll.begin(), coll.end(),    // range
		AddValue(10));               // operation

	PRINT_ELEMENTS(coll, "after adding 10:            ");

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
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


class AddValue {
private:
	int theValue;    // the value to add
public:
	AddValue(int v) : theValue(v) {
	}

	// the ''function call'' for the element adds the value
	void operator() (int& elem) const {
		elem += theValue;
	}
};

int main(void)
{
	list<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	PRINT_ELEMENTS(coll, "initialized:                ");

	// add value of first element to each element
	for_each(coll.begin(), coll.end(),    // range
		AddValue(*coll.begin()));    // operation

	PRINT_ELEMENTS(coll, "after adding first element: ");

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print (int elem)
{
	cout << elem << ' ';
}

int main(void)
{
	vector<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// print all elements
	for_each(coll.begin(), coll.end(),    // range
		print);                      // operation
	cout << endl;

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

template <class T>
class AddValue {
private:
	T theValue;    // value to add
public:
	// constructor initializes the value to add
	AddValue(const T& v) : theValue(v) {
	}

	// the function call for the element adds the value
	void operator() (T& elem) const {
		elem += theValue;
	}
};

int main(void)
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);

	// add ten to each element
	for_each(coll.begin(), coll.end(),       // range
		AddValue<int>(10));             // operation
	PRINT_ELEMENTS(coll);

	// add value of first element to each element
	for_each(coll.begin(), coll.end(),       // range
		AddValue<int>(*coll.begin()));  // operation
	PRINT_ELEMENTS(coll);

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

class MeanValue {
private:
	long num;    // number of elements
	long sum;    // sum of all element values
public:
	// constructor
	MeanValue() : num(0), sum(0) {
	}

	// function call
	// - process one more element of the sequence
	void operator() (int elem) {
		num++;          // increment count
		sum += elem;    // add value
	}

	// return mean value (implicit type conversion)
	operator double() {
		return static_cast<double>(sum) / static_cast<double>(num);
	}
};

int main(void)
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 8);

	// process and print mean value
	double mv = for_each(coll.begin(), coll.end(),  // range
		MeanValue());              // operation
	cout << "mean value: " << mv << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void show(int i) {
	cout << i << endl;
}

// A running sum.
int summation(int i) {
	static int sum = 0;

	sum += i;
	return sum;
}

int main(void)
{
	vector<int> v;
	int i;

	for (i = 1; i < 11; i++) v.push_back(i);

	for_each(v.begin(), v.end(), show);

	for_each(v.begin(), v.end(), summation);

	cout << summation(0);

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename elementType>
class DisplayCounter{
private:
	int m_nCount;

public:
	DisplayCounter(){
		m_nCount = 0;
	}
	void operator () (const elementType& element) {
		++m_nCount;
		cout << element << ' ';
	}
	int GetCount(){
		return m_nCount;
	}
};

int main(void)
{
	vector <int> v;

	for (int nCount = 0; nCount < 10; ++nCount)
		v.push_back(nCount);

	DisplayCounter<int> mIntResult = for_each(v.begin(), v.end(), DisplayCounter<int>());
	cout << mIntResult.GetCount() << endl;


	string str("this is a test");
	cout << str << endl << endl;

	DisplayCounter<char> mCharResult = for_each(str.begin(), str.end(), DisplayCounter<char>());

	cout << mCharResult.GetCount() << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

void outputSquare(int);

int main(void)
{
	const int SIZE = 10;
	int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector< int > v(a1, a1 + SIZE);

	random_shuffle(v.begin(), v.end());


	cout << "\n\nThe square of every integer in Vector v is:\n";
	for_each(v.begin(), v.end(), outputSquare);

	cout << endl;
	return 0;
}

void outputSquare(int value) 
{ 
	cout << value * value << ' '; 
}
#endif