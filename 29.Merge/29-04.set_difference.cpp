#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <iterator>

int main(void)
{
	const int SIZE1 = 10, SIZE2 = 5, SIZE3 = 20;
	int a1[SIZE1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2[SIZE2] = { 4, 5, 6, 7, 8 };
	int a3[SIZE2] = { 4, 7, 6, 11, 15 };
	std::ostream_iterator< int > output(cout, " ");

	cout << "a1 contains: ";
	std::copy(a1, a1 + SIZE1, output);
	cout << "\na2 contains: ";
	std::copy(a2, a2 + SIZE2, output);
	cout << "\na3 contains: ";
	std::copy(a3, a3 + SIZE2, output);

	int difference[SIZE1];

	int *ptr = std::set_difference(a1, a1 + SIZE1, a2, a2 + SIZE2, difference)
		;
	cout << "\n\nset_difference of a1 and a2 is: ";
	std::copy(difference, ptr, output);

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
	int c1[] = { 1, 2, 2, 4, 6, 7, 7, 9 };
	int num1 = sizeof(c1) / sizeof(int);

	int c2[] = { 2, 2, 2, 3, 6, 6, 8, 9 };
	int num2 = sizeof(c2) / sizeof(int);

	// print source ranges
	cout << "c1:                         ";
	copy(c1, c1 + num1, ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "c2:                         ";
	copy(c2, c2 + num2, ostream_iterator<int>(cout, " "));
	cout << '\n' << endl;

	// determine elements of first range without elements of second range by using set_difference()
	cout << "set_difference():           ";
	set_difference(c1, c1 + num1, c2, c2 + num2, ostream_iterator<int>(cout, " "));

	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	const int SIZE1 = 10, SIZE2 = 5, SIZE3 = 20;
	int a1[SIZE1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2[SIZE2] = { 4, 5, 6, 7, 8 };
	int a3[SIZE2] = { 4, 5, 6, 11, 15 };

	if (includes(a1, a1 + SIZE1, a2, a2 + SIZE2))
		cout << "\na1 includes a2";
	else
		cout << "\na1 does not include a2";

	if (includes(a1, a1 + SIZE1, a3, a3 + SIZE2))
		cout << "\na1 includes a3";
	else
		cout << "\na1 does not include a3";

	int difference[SIZE1];
	int *ptr = set_difference(a1, a1 + SIZE1, a2, a2 + SIZE2, difference);

	int intersection[SIZE1];
	ptr = set_intersection(a1, a1 + SIZE1, a2, a2 + SIZE2, intersection);

	int symmetric_difference[SIZE1];
	ptr = set_symmetric_difference(a1, a1 + SIZE1, a2, a2 + SIZE2, symmetric_difference);

	int unionSet[SIZE3];
	ptr = set_union(a1, a1 + SIZE1, a3, a3 + SIZE2, unionSet);

	return 0;
}
#endif
