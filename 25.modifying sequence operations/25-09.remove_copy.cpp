#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a[10] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };

	std::ostream_iterator< int > output(cout, " ");

	std::vector< int > v2(a, a + 10); // copy of a
	std::vector< int > c(10, 0); // instantiate vector c
	cout << "Vector v2 before removing all 10s and copying:\n   ";
	std::copy(v2.begin(), v2.end(), output);

	// copy from v2 to c, removing 10s in the process
	std::remove_copy(v2.begin(), v2.end(), c.begin(), 10);
	cout << "\nVector c after removing all 10s from v2:\n   ";
	std::copy(c.begin(), c.end(), output);

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	char str[] = "This is a test.";
	vector<char> v, v2(30);
	unsigned int i;

	for (i = 0; str[i]; i++) v.push_back(str[i]);

	for (i = 0; i<v.size(); i++) cout << v[i];

	// remove all spaces
	remove_copy(v.begin(), v.end(), v2.begin(), ' ');

	cout << "Result after removing spaces:\n";
	for (i = 0; i<v2.size(); i++) cout << v2[i];
	cout << endl << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	char str[] = "This is a test.";
	vector<char> v, v2(30);
	unsigned int i;

	for (i = 0; str[i]; i++) v.push_back(str[i]);

	for (i = 0; i<v.size(); i++) {
		cout << v[i] << endl;
	}

	remove_copy(v.begin(), v.end(), v2.begin(), ' ');

	for (i = 0; i<v2.size(); i++) cout << v2[i];
	cout << endl << endl;

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
	list<int> coll1;

	INSERT_ELEMENTS(coll1, 1, 6);
	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1);

	remove_copy(coll1.begin(), coll1.end(), ostream_iterator<int>(cout, " "), 3);
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

	// Remove 10 from v
	vector< int > v(a, a + SIZE);
	vector< int >::iterator newLastElement;
	newLastElement = remove(v.begin(), v.end(), 10);

	// Copy from v2 to c, removing 10s
	vector< int > v2(a, a + SIZE);
	vector< int > c(SIZE, 0);
	remove_copy(v2.begin(), v2.end(), c.begin(), 10);

	return 0;
}

bool greater9(int x)
{
	return x > 9;
}
#endif