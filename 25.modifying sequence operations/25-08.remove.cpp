#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	const int  N = 11;
	int array1[N] = { 1, 2, 0, 3, 4, 0, 5, 6, 7, 0, 8 };
	vector<int> vector1;

	for (int i = 0; i < N; ++i)
		vector1.push_back(array1[i]);

	// Remove the zeros from vector1:
	vector<int>::iterator new_end;
	new_end = remove(vector1.begin(), vector1.end(), 0);

	for (int i = 0; i < (int)vector1.size(); ++i)
		cout << vector1[i];
	cout << "\n\n\n\n\n";
	// The size of vector1 remains the same:
	assert(vector1.size() == N);
	cout << vector1.size();

	cout << "\n\n\n\n\n";

	// The nonzero elements are left in [vector1.begin(), new_end).  Erase the rest:
	vector1.erase(new_end, vector1.end());

	// Show that 3 elements were removed and the nonzero elements remain, in their original order:
	assert(vector1.size() == N - 3);
	cout << vector1.size();
	cout << "\n\n\n\n\n";

	for (int i = 0; i < (int)vector1.size(); ++i)
		cout << vector1[i];

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
	int a[10] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };

	std::ostream_iterator< int > output(cout, " ");

	std::vector< int > v(a, a + 10); // copy of a

	std::vector< int >::iterator newLastElement;

	cout << "Vector v before removing all 10s:\n   ";
	std::copy(v.begin(), v.end(), output);

	// remove all 10s from v
	newLastElement = std::remove(v.begin(), v.end(), 10);
	cout << "\nVector v after removing all 10s:\n   ";
	std::copy(v.begin(), newLastElement, output);

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
	vector<int> coll;

	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	INSERT_ELEMENTS(coll, 1, 7);
	PRINT_ELEMENTS(coll, "coll:               ");

	vector<int>::iterator pos;
	pos = remove(coll.begin(), coll.end(),5);

	PRINT_ELEMENTS(coll, "size not changed:   ");

	coll.erase(pos, coll.end());
	PRINT_ELEMENTS(coll, "size changed:       ");

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
	vector<int> coll;

	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 4, 9);
	INSERT_ELEMENTS(coll, 1, 7);
	PRINT_ELEMENTS(coll, "coll:               ");

	// remove all elements with value 5
	vector<int>::iterator pos;
	// remove all elements less than 4
	coll.erase(remove_if(coll.begin(), coll.end(),  // range
		bind2nd(less<int>(), 4)),   // remove criterion
		coll.end());
	PRINT_ELEMENTS(coll, "<4 removed:         ");

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class InIter>
void show_range(const char *msg, InIter start, InIter end);

int main(void)
{
	vector<char> v;
	vector<char>::iterator itr, itr_end;

	for (int i = 0; i<5; i++) {
		v.push_back('A' + i);
	}
	for (int i = 0; i<5; i++) {
		v.push_back('A' + i);
	}

	show_range("Original contents of v:", v.begin(), v.end());

	// Remove all A's.
	itr_end = remove(v.begin(), v.end(), 'A');

	show_range("v after removing all A's:", v.begin(), itr_end);

	return 0;
}

template<class InIter>
void show_range(const char *msg, InIter start, InIter end) {
	InIter itr;

	cout << msg << endl;
	for (itr = start; itr != end; ++itr)
		cout << *itr << endl;
}
#endif


#if 0
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

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
	i = remove(v.begin(), v.end(), 0);

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

bool greater9(int);

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };

	// Remove 10 from v
	vector< int > v(a, a + SIZE);
	vector< int >::iterator newLastElement;
	newLastElement = remove(v.begin(), v.end(), 10);

	return 0;
}

bool greater9(int x)
{
	return x > 9;
}
#endif
