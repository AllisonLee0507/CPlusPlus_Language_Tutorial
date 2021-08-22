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

	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	// print all partial sums
	partial_sum(coll.begin(), coll.end(),          // source range
		ostream_iterator<int>(cout, " "));  // destination
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

int main(void)
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	// print all partial products
	partial_sum(coll.begin(), coll.end(),          // source range
		ostream_iterator<int>(cout, " "),   // destination
		multiplies<int>());                // operation
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
	vector<int> coll;

	coll.push_back(17);
	coll.push_back(-3);
	coll.push_back(22);
	coll.push_back(13);
	coll.push_back(13);
	coll.push_back(-9);
	PRINT_ELEMENTS(coll, "coll:     ");

	// convert into absolute values
	partial_sum(coll.begin(), coll.end(),           // source
		coll.begin());                      // destination
	PRINT_ELEMENTS(coll, "absolute: ");

	return 0;
}
#endif
