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
	std::vector< int > c1(10); // instantiate vector c1
	cout << "Vector v2 before replacing all 10s and copying:\n   ";
	std::copy(v2.begin(), v2.end(), output);

	// copy from v2 to c1, replacing 10s with 100s
	std::replace_copy(v2.begin(), v2.end(), c1.begin(), 10, 100);
	cout << "\nVector c1 after replacing all 10s in v2:\n   ";
	std::copy(c1.begin(), c1.end(), output);

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

	replace_copy(coll.begin(), coll.end(),ostream_iterator<int>(cout, " "),	5, 55);
	cout << endl;
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

	cout << "Input sequence:\n";
	for (i = 0; i<v.size(); i++) cout << v[i];
	cout << endl;

	// replace spaces with colons
	replace_copy(v.begin(), v.end(), v2.begin(), ' ', ':');


	cout << "Result after replacing spaces with colons:\n";
	for (i = 0; i<v2.size(); i++) cout << v2[i];
	cout << endl << endl;

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

	// copy from v2 to c1, replacing 10s with 100s
	vector< int > v2(a, a + SIZE);
	vector< int > c1(SIZE);
	replace_copy(v2.begin(), v2.end(), c1.begin(), 10, 100);

	return 0;
}

bool greater9(int x)
{
	return x > 9;
}
#endif