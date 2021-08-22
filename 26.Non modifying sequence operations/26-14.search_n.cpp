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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);

	// find four consecutive elements with value 3
	deque<int>::iterator pos;
	pos = search_n(coll.begin(), coll.end(),    // range
		4,                           // count
		3);                          // value

	// print result
	if (pos != coll.end()) {
		cout << "four consecutive elements with value 3 "
			<< "start with " << distance(coll.begin(), pos) + 1
			<< ". element" << endl;
	}
	else {
		cout << "no four consecutive elements with value 3 found"
			<< endl;
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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);

	deque<int>::iterator pos;
	// find four consecutive elements with value greater than 3
	pos = search_n(coll.begin(), coll.end(),    // range
		4,                           // count
		3,                           // value
		greater<int>());             // criterion

	// print result
	if (pos != coll.end()) {
		<< "start with " << distance(coll.begin(), pos) + 1
			<< ". element" << endl;
	}
	else {
		<< endl;
	}
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main(void)
{
	vector <int> v;

	for (int nNum = -9; nNum < 10; ++nNum)
		v.push_back(nNum);

	v.push_back(9);
	v.push_back(9);

	list <int> l;

	for (int nNum = -4; nNum < 5; ++nNum)
		l.push_back(nNum);

	// search the vector for the occurrence of pattern {9, 9, 9}
	vector <int>::iterator vl;
	vl = search_n(v.begin() // Start range
		, v.end()   // End range
		, 3          // Count of item to be searched for
		, 9);       // Item to search for

	if (vl != v.end()){
		cout << "The sequence {9, 9, 9} found a match in the vector at ";
		cout << "offset-position: ";
		cout << distance(v.begin(), vl);

		cout << endl;
	}
	return 0;
}
#endif
