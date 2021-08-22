#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
#include <list>
#include <deque>
#include <vector>
using namespace std;

int main(void)
{
	list<string> driver_list;
	vector<string> vec;
	deque<string> deq;

	driver_list.insert(driver_list.end(), "AAA");
	driver_list.insert(driver_list.end(), "BBBB");
	driver_list.insert(driver_list.end(), "CCCCC");

	deq.insert(deq.end(), "AAA");
	deq.insert(deq.end(), "DDDDDD");

	pair<deque<string>::iterator, list<string>::iterator> pair1 = mismatch(deq.begin(), deq.end(), driver_list.begin());

	if (pair1.first != deq.end())
		cout << "First disagreement in deq and driver_list:\n  "
		<< *(pair1.first) << " and " << *(pair1.second)
		<< endl;

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2[10] = { 1, 2, 3, 4, 9, 6, 7, 8, 9, 10 };
	std::vector< int > v1(a1, a1 + 10);
	std::vector< int > v2(a1, a1 + 10);
	std::vector< int > v3(a2, a2 + 10);
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v1 contains: ";
	std::copy(v1.begin(), v1.end(), output);
	cout << "\nVector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);
	cout << "\nVector v3 contains: ";
	std::copy(v3.begin(), v3.end(), output);

	std::pair< std::vector< int >::iterator, std::vector< int >::iterator > location;

	location = std::mismatch(v1.begin(), v1.end(), v3.begin());
	cout << "\nThere is a mismatch between v1 and v3 at location "
		<< (location.first - v1.begin()) << "\nwhere v1 contains "
		<< *location.first << " and v3 contains " << *location.second;

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

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 6);

	for (int i = 1; i <= 16; i *= 2) {
		coll2.push_back(i);
	}
	coll2.push_back(3);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// find first mismatch
	pair<vector<int>::iterator, list<int>::iterator> values;
	values = mismatch(coll1.begin(), coll1.end(),  // first range
		coll2.begin());              // second range
	if (values.first == coll1.end()) {
		cout << "no mismatch" << endl;
	}
	else {
		cout << "first mismatch: "
			<< *values.first << " and "
			<< *values.second << endl;
	}

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

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 6);

	for (int i = 1; i <= 16; i *= 2) {
		coll2.push_back(i);
	}
	coll2.push_back(3);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// find first mismatch
	pair<vector<int>::iterator, list<int>::iterator> values;

	values = mismatch(coll1.begin(), coll1.end(),  // first range
		coll2.begin(),               // second range
		less_equal<int>());          // criterion
	if (values.first == coll1.end()) {
		cout << "always less-or-equal" << endl;
	}
	else {
		cout << "not less-or-equal: "
			<< *values.first << " and "
			<< *values.second << endl;
	}
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	const int SIZE = 10;
	int a1[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2[SIZE] = { 1, 2, 3, 4, 1000, 6, 7, 8, 9, 10 };
	vector< int > v1(a1, a1 + SIZE),
		v2(a1, a1 + SIZE),
		v3(a2, a2 + SIZE);

	bool result = equal(v1.begin(), v1.end(), v2.begin());
	cout << "\n\nVector v1 " << (result ? "is" : "is not")
		<< " equal to vector v2.\n";

	result = equal(v1.begin(), v1.end(), v3.begin());
	cout << "Vector v1 " << (result ? "is" : "is not")
		<< " equal to vector v3.\n";

	pair< vector< int >::iterator,
		vector< int >::iterator > location;
	location = mismatch(v1.begin(), v1.end(), v3.begin());
	cout << "\nThere is a mismatch between v1 and v3 at "
		<< "location " << (location.first - v1.begin())
		<< "\nwhere v1 contains " << *location.first
		<< " and v3 contains " << *location.second
		<< "\n\n";

	char c1[SIZE] = "HELLO", c2[SIZE] = "BYE BYE";

	result = lexicographical_compare(c1, c1 + SIZE, c2, c2 + SIZE);
	cout << c1
		<< (result ? " is less than " : " is greater than ")
		<< c2;

	cout << endl;
	return 0;
}
#endif
