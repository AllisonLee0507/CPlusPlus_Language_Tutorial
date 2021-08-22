#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

bool greater9(int);

int main(void)
{
	int a[10] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
	std::ostream_iterator< int > output(cout, " ");

	std::vector< int > v4(a, a + 10); // copy of a
	std::vector< int > c2(10); // instantiate vector c2
	cout << "Vector v4 before replacing all values greater than 9 and copying:\n;
		std::copy(v4.begin(), v4.end(), output);

	// copy v4 to c2, replacing elements greater than 9 with 100
	std::replace_copy_if(v4.begin(), v4.end(), c2.begin(), greater9, 100);
	cout << "\nVector c2 after replacing all values greater than 9 in v4:\n   ";

	std::copy(c2.begin(), c2.end(), output);

	cout << endl;
	return 0;
}

bool greater9(int x)
{
	return x > 9;
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

template <class T>inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template <class T>inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

using namespace std;

int main(void)
{
	list<int> coll;

	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	PRINT_ELEMENTS(coll);

	replace_copy_if(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "),	bind2nd(less<int>(), 5),42);
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

template <class T>inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}


template <class T>inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

int main(void)
{
	list<int> coll;

	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	PRINT_ELEMENTS(coll);

	replace_copy_if(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "),	bind2nd(modulus<int>(), 2), 0);
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool greater9(int);

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };

	// Replace 10s in v1 with 100
	vector< int > v1(a, a + SIZE);
	replace(v1.begin(), v1.end(), 10, 100);

	// Copy v4 to c2, replacing elements greater than 9 with 100
	vector< int > v4(a, a + SIZE);
	vector< int > c2(SIZE);
	replace_copy_if(v4.begin(), v4.end(), c2.begin(), greater9, 100);

	cout << endl;
	return 0;
}

bool greater9(int x)
{
	return x > 9;
}
#endif