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

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 5, 9);
	INSERT_ELEMENTS(coll, 1, 4);

	PRINT_ELEMENTS(coll, "on entry:           ");

	make_heap(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "after make_heap():  ");
	sort_heap(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "after sort_heap():  ");

	return 0;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;

int main(void)
{
	int a[10] = { 3, 100, 52, 77, 22, 31, 1, 98, 13, 40 };
	std::vector< int > v(a, a + 10); // copy of a
	std::vector< int > v2;
	std::ostream_iterator< int > output(cout, " ");

	std::copy(v.begin(), v.end(), output);
	std::make_heap(v.begin(), v.end());
	std::sort_heap(v.begin(), v.end());
	cout << "\n\n";
	std::copy(v.begin(), v.end(), output);


	cout << endl;

	return 0;
}
#endif
