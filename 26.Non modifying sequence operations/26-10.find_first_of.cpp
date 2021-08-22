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
	vector<int> coll;
	list<int> searchcoll;

	INSERT_ELEMENTS(coll, 1, 11);
	INSERT_ELEMENTS(searchcoll, 3, 5);

	PRINT_ELEMENTS(coll, "coll:       ");
	PRINT_ELEMENTS(searchcoll, "searchcoll: ");

	// search first occurrence of an element of searchcoll in coll
	vector<int>::iterator pos;
	pos = find_first_of(coll.begin(), coll.end(),     // range
		searchcoll.begin(),   // beginning of search set
		searchcoll.end());    // end of search set
	cout << "first element of searchcoll in coll is element "
		<< distance(coll.begin(), pos) + 1
		<< endl;

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
	vector<int> coll;
	list<int> searchcoll;

	INSERT_ELEMENTS(coll, 1, 11);
	INSERT_ELEMENTS(searchcoll, 3, 5);

	PRINT_ELEMENTS(coll, "coll:       ");
	PRINT_ELEMENTS(searchcoll, "searchcoll: ");

	// search last occurrence of an element of searchcoll in coll
	vector<int>::reverse_iterator rpos;
	rpos = find_first_of(coll.rbegin(), coll.rend(),  // range
		searchcoll.begin(),  // beginning of search set
		searchcoll.end());   // end of search set
	cout << "last element of searchcoll in coll is element "
		<< distance(coll.begin(), rpos.base())
		<< endl;

	return 0;
}
#endif