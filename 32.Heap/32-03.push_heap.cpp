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

	// push new element into the heap
	coll.push_back(17);
	push_heap(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "after push_heap():  ");

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> vector1(5);
	for (int i = 0; i < 5; ++i)
		vector1[i] = i;

	random_shuffle(vector1.begin(), vector1.end());


	for (int i = 2; i <= 5; ++i)
		push_heap(vector1.begin(), vector1.begin() + i);

	for (int i = 5; i >= 2; --i)
		pop_heap(vector1.begin(), vector1.begin() + i);

	for (int i = 0; i < 5; ++i)
		cout << vector1[i];

	return 0;
}
#endif
