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
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	cout << "inner product: "
		<< inner_product(coll.begin(), coll.end(),  // first range
		coll.begin(),              // second range
		0)                         // initial value
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
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	cout << "inner reverse product: "
		<< inner_product(coll.begin(), coll.end(),  // first range
		coll.rbegin(),             // second range
		0)                         // initial value
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
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	cout << "product of sums: "
		<< inner_product(coll.begin(), coll.end(),  // first range
		coll.begin(),              // second range
		1,                         // initial value
		multiplies<int>(),       // inner operation
		plus<int>())             // outer operation
		<< endl;
	return 0;
}
#endif
