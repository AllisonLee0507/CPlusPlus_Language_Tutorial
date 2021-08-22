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
	deque<int> coll;
	list<int> subcoll;

	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll, 1, 7);

	INSERT_ELEMENTS(subcoll, 3, 6);

	PRINT_ELEMENTS(coll, "coll:    ");
	PRINT_ELEMENTS(subcoll, "subcoll: ");

	// search first occurrence of subcoll in coll
	deque<int>::iterator pos;
	pos = search(coll.begin(), coll.end(),         // range
		subcoll.begin(), subcoll.end());  // subrange

	// loop while subcoll found as subrange of coll
	while (pos != coll.end()) {
		// print position of first element
		cout << "subcoll found starting with element "
			<< distance(coll.begin(), pos) + 1
			<< endl;

		// search next occurrence of subcoll
		++pos;
		pos = search(pos, coll.end(),                  // range
			subcoll.begin(), subcoll.end());  // subrange
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

bool checkEven(int elem, bool even)
{
	if (even) {
		return elem  2 == 0;
	}
	else {
		return elem  2 == 1;
	}
}

int main(void)
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	bool checkEvenArgs[3] = { true, false, true };

	vector<int>::iterator pos;
	pos = search(coll.begin(), coll.end(),       // range
		checkEvenArgs, checkEvenArgs + 3, // subrange values
		checkEven);                     // subrange criterion

	// loop while subrange found
	while (pos != coll.end()) {
		// print position of first element
		cout << "subrange found starting with element "
			<< distance(coll.begin(), pos) + 1
			<< endl;

		// search next subrange in coll
		pos = search(++pos, coll.end(),              // range
			checkEvenArgs, checkEvenArgs + 3, // subr. values
			checkEven);                     // subr. criterion
	}

	return 0;
}
#endif