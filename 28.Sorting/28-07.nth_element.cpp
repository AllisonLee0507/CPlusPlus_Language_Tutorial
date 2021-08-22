#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(7);

	v[0] = 25;
	v[1] = 7;
	v[2] = 9;
	v[3] = 2;
	v[4] = 0;
	v[5] = 5;
	v[6] = 21;

	const int N = 4;

	// Use nth_element to place the Nth smallest 
	// element in v in the Nth position, v.begin() + N:

	nth_element(v.begin(), v.begin() + N, v.end());

	for (int i = 0; i < N; ++i)
		assert(v[N] >= v[i]);

	for (int i = N + 1; i < 7; ++i)
		cout << v[N];

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

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	// extract the four lowest elements
	nth_element(coll.begin(),     // beginning of range
		coll.begin() + 3,   // element that should be sorted correctly
		coll.end());      // end of range

	// print them
	cout << "the four lowest elements are:  ";
	copy(coll.begin(), coll.begin() + 4,
		ostream_iterator<int>(cout, " "));
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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	// extract the four highest elements
	nth_element(coll.begin(),     // beginning of range
		coll.end() - 4,     // element that should be sorted correctly
		coll.end());      // end of range

	// print them
	cout << "the four highest elements are: ";
	copy(coll.end() - 4, coll.end(),
		ostream_iterator<int>(cout, " "));
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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	// extract the four highest elements (second version)
	nth_element(coll.begin(),     // beginning of range
		coll.begin() + 3,   // element that should be sorted correctly
		coll.end(),       // end of range
		greater<int>());  // sorting criterion

	// print them
	cout << "the four highest elements are: ";
	copy(coll.begin(), coll.begin() + 4,
		ostream_iterator<int>(cout, " "));
	cout << endl;

}

#endif
