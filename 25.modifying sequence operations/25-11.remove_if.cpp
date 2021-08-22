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

	std::vector< int > v3(a, a + 10); // copy of a
	cout << "Vector v3 before removing all elements"
		<< "\ngreater than 9:\n   ";
	std::copy(v3.begin(), v3.end(), output);

	// remove elements greater than 9 from v3
	std::vector< int >::iterator newLastElement = std::remove_if(v3.begin(), v3.end(), greater9);
	cout << "\nVector v3 after removing all elements"
		<< "\ngreater than 9:\n   ";
	std::copy(v3.begin(), newLastElement, output);

	return 0;
}

bool greater9(int x)
{
	return x > 9;
}
#endif


#if 0
#include <iostream>
#include <list>
#include <algorithm>
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


class Nth {    // function object that returns true for the nth call
private:
	int nth;       // call for which to return true
	int count;     // call counter
public:
	Nth(int n) : nth(n), count(0) {
	}
	bool operator() (int) {
		return ++count == nth;
	}
};

int main(void)
{
	list<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll, "coll:        ");

	// remove third element
	list<int>::iterator pos;
	pos = remove_if(coll.begin(), coll.end(),  // range
		Nth(3));                  // remove criterion
	coll.erase(pos, coll.end());

	PRINT_ELEMENTS(coll, "nth removed: ");

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int> list1;
	list<int>::iterator p, endp;

	int i;

	for (i = 1; i < 20; i++) list1.push_back(i);

	p = list1.begin();
	while (p != list1.end()) {
		cout << *p << endl;
		p++;
	}
	endp = remove_if(list1.begin(), list1.end(), bind2nd(greater<int>(), 4));

	p = list1.begin();
	while (p != endp) {
		cout << *p << endl;
		p++;
	}
	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>

using namespace std;

int main(void)
{
	list<int> list1;
	list<int>::iterator res_itr;

	for (unsigned i = 1; i < 20; ++i) list1.push_back(i);

	res_itr = remove_if(list1.begin(), list1.end(), bind2nd(greater<int>(), 10));

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

template <typename elementType>
bool IsOdd(const elementType& number){
	return ((number % 2) == 1);
}

int main(void)
{
	list <int> l;

	for (int nCount = 0; nCount < 10; ++nCount)
		l.push_back(nCount);

	list <int>::const_iterator li;
	for (li = l.begin(); li != l.end(); ++li)
		cout << *li << ' ';

	vector <int> v(l.size() * 2);

	vector <int>::iterator iLastPos;
	iLastPos = copy(l.begin(), l.end(), v.begin());

	vector <int>::iterator i;

	i = remove_if(v.begin(), v.end(), IsOdd <int>);    // The predicate

	v.erase(i, v.end());
	vector <int>::iterator vi;
	for (vi = v.begin(); vi != v.end(); ++vi)
		cout << *vi << ' ';

	return 0;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool greater9( int );

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };

	// Remove 10 from v
	vector< int > v(a, a + SIZE);
	vector< int >::iterator newLastElement;
	newLastElement = remove(v.begin(), v.end(), 10);

	// Remove elements greater than 9 from v3
	vector< int > v3(a, a + SIZE);
	newLastElement = remove_if(v3.begin(), v3.end(), greater9);

	return 0;
}

bool greater9(int x)
{
	return x > 9;
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

	// Copy elements from v4 to c, removing elements greater than 9
	vector< int > v4(a, a + SIZE);
	vector< int > c2(SIZE, 0);
	remove_copy_if(v4.begin(), v4.end(), c2.begin(), greater9);

	cout << endl;
	return 0;
}

bool greater9(int x)
{
	return x > 9;
}
#endif