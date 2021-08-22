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
	deque<int> coll1;
	vector<int> coll6(6);      // initialize with 6 elements
	vector<int> coll30(30);    // initialize with 30 elements

	INSERT_ELEMENTS(coll1, 3, 7);
	INSERT_ELEMENTS(coll1, 2, 6);
	INSERT_ELEMENTS(coll1, 1, 5);
	PRINT_ELEMENTS(coll1);

	// copy elements of coll1 sorted into coll6
	vector<int>::iterator pos6;
	pos6 = partial_sort_copy(coll1.begin(), coll1.end(),
		coll6.begin(), coll6.end());

	// print all copied elements
	copy(coll6.begin(), pos6, ostream_iterator<int>(cout, " "));
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

int main(void)
{
	deque<int> coll1;
	vector<int> coll6(6);      // initialize with 6 elements
	vector<int> coll30(30);    // initialize with 30 elements

	INSERT_ELEMENTS(coll1, 3, 7);
	INSERT_ELEMENTS(coll1, 2, 6);
	INSERT_ELEMENTS(coll1, 1, 5);
	PRINT_ELEMENTS(coll1);

	// copy elements of coll1 sorted into coll30
	vector<int>::iterator pos30;
	pos30 = partial_sort_copy(coll1.begin(), coll1.end(),
		coll30.begin(), coll30.end(),
		greater<int>());

	// print all copied elements
	copy(coll30.begin(), pos30,
		ostream_iterator<int>(cout, " "));
	cout << endl;
}

#endif
