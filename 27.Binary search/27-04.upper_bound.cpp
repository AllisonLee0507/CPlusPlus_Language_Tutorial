#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[10] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
	std::vector< int > v(a1, a1 + 10);
	std::ostream_iterator< int > output(cout, " ");

	std::copy(v.begin(), v.end(), output);

	// determine upper-bound insertion point for 6 in v
	std::vector< int >::iterator upper;
	upper = std::upper_bound(v.begin(), v.end(), 6);
	cout << "::" << (upper - v.begin());

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
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);
	coll.sort();
	PRINT_ELEMENTS(coll);

	// print first and last position 5 could get inserted
	list<int>::iterator pos1, pos2;

	pos1 = lower_bound(coll.begin(), coll.end(), 5);
	pos2 = upper_bound(coll.begin(), coll.end(), 5);

	cout << "5 could get position " << distance(coll.begin(), pos1) + 1
		<< " up to " << distance(coll.begin(), pos2) + 1
		<< " without breaking the sorting" << endl;

	// insert 3 at the first possible position without breaking the sorting
	coll.insert(lower_bound(coll.begin(), coll.end(),
		3),
		3);

	// insert 7 at the last possible position without breaking the sorting
	coll.insert(upper_bound(coll.begin(), coll.end(),
		7),
		7);

	PRINT_ELEMENTS(coll);
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
	int a1[] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
	vector< int > v(a1, a1 + SIZE);

	vector< int >::iterator upper;

	cout << "\n\nUse upper_bound to locate the last point\n"
		<< "at which 7 can be inserted in order";
	upper = upper_bound(v.begin(), v.end(), 7);
	cout << "\n   Upper bound of 7 is element "
		<< (upper - v.begin()) << " of vector v";

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
	int a1[] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
	vector< int > v(a1, a1 + SIZE);

	vector< int >::iterator upper;
	upper = upper_bound(v.begin(), v.end(), 6);
	cout << "\nUpper bound of 6 is element " << (upper - v.begin()) << " of vector v";

	return 0;
}
#endif