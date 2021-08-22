#if 0
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;

bool above40(int n) { return (n > 4); }

int main(void)
{
	const int N = 7;
	int array0[N] = { 5, 3, 1, 7, 6, 4, 2 };
	int array1[N];

	copy(&array0[0], &array0[N], &array1[0]);

	ostream_iterator<int> out(cout, " ");

	cout << "Original sequence:                 ";
	copy(&array1[0], &array1[N], out); cout << endl;

	// Partition array1, putting numbers greater than 4
	// first, followed by those less than or equal to 4,
	// preserving relative order in each group:
	int* split = stable_partition(&array1[0], &array1[N], above40);

	cout << "Result of stable partitioning:     ";
	copy(&array1[0], split, out); cout << "| ";
	copy(split, &array1[N], out); cout << endl;
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
	vector<int> coll1;
	vector<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");
	cout << endl;

	// move all even elements to the front
	vector<int>::iterator pos1, pos2;
	pos1 = partition(coll1.begin(), coll1.end(),         // range
		not1(bind2nd(modulus<int>(), 2)));   // criterion
	pos2 = stable_partition(coll2.begin(), coll2.end(),       // range
		not1(bind2nd(modulus<int>(), 2))); // crit.

	// print collections and first odd element
	PRINT_ELEMENTS(coll1, "coll1: ");
	cout << "first odd element: " << *pos1 << endl;
	PRINT_ELEMENTS(coll2, "coll2: ");
	cout << "first odd element: " << *pos2 << endl;

	return 0;
}
#endif