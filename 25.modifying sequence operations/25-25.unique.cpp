#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[5] = { 1, 1, 1, 7, 9 };

	std::vector< int > v1(a1, a1 + 5);

	std::ostream_iterator< int > output(cout, " ");

	std::copy(v1.begin(), v1.end(), output); // display vector output

	// eliminate duplicate values
	std::vector< int >::iterator endLocation;
	endLocation = std::unique(v1.begin(), v1.end());

	cout << endl;
	std::copy(v1.begin(), endLocation, output);

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

	int source[] = { 1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4 };
	int sourceNum = sizeof(source) / sizeof(source[0]);

	list<int> coll;

	copy(source, source + sourceNum,
		back_inserter(coll));
	PRINT_ELEMENTS(coll);

	list<int>::iterator pos;
	pos = unique(coll.begin(), coll.end());

	copy(coll.begin(), pos,	ostream_iterator<int>(cout, " "));
	cout << "\n\n";

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
	int source[] = { 1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7,
		5, 4, 4 };
	int sourceNum = sizeof(source) / sizeof(source[0]);

	list<int> coll;

	copy(source, source + sourceNum, coll.begin());
	PRINT_ELEMENTS(coll);

	coll.erase(unique(coll.begin(), coll.end(),	greater<int>()), coll.end());
	PRINT_ELEMENTS(coll);

	return 0;
}
#endif