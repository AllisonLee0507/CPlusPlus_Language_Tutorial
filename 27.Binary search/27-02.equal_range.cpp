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

	std::pair< std::vector< int >::iterator, std::vector< int >::iterator > eq;
	eq = std::equal_range(v.begin(), v.end(), 6);
	cout << "\n\n\nLower bound of 6 is element " << (eq.first - v.begin()) << " of vector v \n\n\n";
	cout << "Upper bound of 6 is element " << (eq.second - v.begin()) << " of vector v";

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
	pair<list<int>::iterator, list<int>::iterator> range;

	range = equal_range(coll.begin(), coll.end(),
		5);

	cout << "5 could get position "
		<< distance(coll.begin(), range.first) + 1
		<< " up to "
		<< distance(coll.begin(), range.second) + 1
		<< " without breaking the sorting" << endl;

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
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 7);
	INSERT_ELEMENTS(coll2, 3, 9);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// check whether both collections are equal
	if (equal(coll1.begin(), coll1.end(),  // first range
		coll2.begin())) {            // second range
		cout << "coll1 == coll2" << endl;
	}
	else {
		cout << "coll1 != coll2" << endl;
	}

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

bool bothEvenOrOdd(int elem1, int elem2)
{
	return elem1  2;
}


int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 7);
	INSERT_ELEMENTS(coll2, 3, 9);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// check for corresponding even and odd elements
	if (equal(coll1.begin(), coll1.end(),  // first range
		coll2.begin(),               // second range
		bothEvenOrOdd)) {            // comparison criterion
		cout << "even and odd elements correspond" << endl;
	}
	else {
		cout << "even and odd elements do not correspond" << endl;
	}

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

	pair< vector< int >::iterator, vector< int >::iterator > eq;

	cout << "\n\nUse equal_range to locate the first and last point at which 5 can be inserted in order";
	eq = equal_range(v.begin(), v.end(), 5);
	cout << "\n   Lower bound of 5 is element "
		<< (eq.first - v.begin()) << " of vector v";
	cout << "\n   Upper bound of 5 is element "
		<< (eq.second - v.begin()) << " of vector v"
		<< endl;
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

	pair< vector< int >::iterator, vector< int >::iterator > eq;
	eq = equal_range(v.begin(), v.end(), 6);
	cout << "\nUsing equal_range:\n" << "   Lower bound of 6 is element "
		<< (eq.first - v.begin()) << " of vector v";
	cout << "\n   Upper bound of 6 is element "
		<< (eq.second - v.begin()) << " of vector v";

	return 0;
}
#endif