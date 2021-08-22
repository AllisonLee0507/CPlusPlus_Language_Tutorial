#if 0
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

int main(void)
{
	int a[100], b[100];
	int i;
	for (i = 0; i < 100; ++i)
		a[i] = i;

	reverse_copy(&a[0], &a[100], &b[0]);

	for (i = 0; i < 100; ++i)
		cout << " a: " << a[i] << "b: " << b[i] << " \n";

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[10] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
	std::vector< int > v1(a1, a1 + 10); // copy of a
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v1 contains: ";
	std::copy(v1.begin(), v1.end(), output);

	std::vector< int > results2;

	std::reverse_copy(v1.begin(), v1.end(), std::back_inserter(results2));
	cout << "\nAfter reverse_copy, results2 contains: ";
	std::copy(results2.begin(), results2.end(), output);
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

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// print all of them in reverse order
	reverse_copy(coll.begin(), coll.end(),           // source
		ostream_iterator<int>(cout, " "));   // destination
	cout << endl;

	return 0;
}
#endif