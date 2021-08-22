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
	std::vector< int > c2(10, 0); // instantiate vector c2
	cout << "Vector v4 before removing all elements"
		<< "\ngreater than 9 and copying:\n   ";
	std::copy(v4.begin(), v4.end(), output);

	std::remove_copy_if(v4.begin(), v4.end(), c2.begin(), greater9);
	cout << "\nVector c2 after removing all elements"
		<< "\ngreater than 9 from v4:\n   ";
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

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

int main(void)
{
	list<int> coll1;

	INSERT_ELEMENTS(coll1, 1, 6);
	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1);

	remove_copy_if(coll1.begin(), coll1.end(),ostream_iterator<int>(cout, " "),	bind2nd(greater<int>(), 4));
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
	list<int> coll1;

	INSERT_ELEMENTS(coll1, 1, 6);
	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1);

	multiset<int> coll2;
	remove_copy_if(coll1.begin(), coll1.end(), inserter(coll2, coll2.end()), bind2nd(less<int>(), 4));
	PRINT_ELEMENTS(coll2);

	return 0;
}
#endif