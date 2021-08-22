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

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 5, 9);
	INSERT_ELEMENTS(coll, 1, 4);

	PRINT_ELEMENTS(coll, "on entry:           ");

	// convert collection into a heap
	make_heap(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "after make_heap():  ");

	// pop next element out of the heap
	pop_heap(coll.begin(), coll.end());
	coll.pop_back();

	PRINT_ELEMENTS(coll, "after pop_heap():   ");

	return 0;
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
	int a[SIZE] = { 3, 100, 52, 77, 22, 31, 1, 98, 13, 40 };
	int i;
	vector< int > v(a, a + SIZE), v2;

	make_heap(v.begin(), v.end());
	sort_heap(v.begin(), v.end());

	for (i = 0; i < SIZE; ++i) {
		v2.push_back(a[i]);
		push_heap(v2.begin(), v2.end());
	}

	for (i = 0; i < v2.size(); ++i) {
		cout << "\nv2 after " << v2[0] << " popped from heap\n";
		pop_heap(v2.begin(), v2.end() - i);
	}

	cout << endl;

	return 0;
}
#endif
