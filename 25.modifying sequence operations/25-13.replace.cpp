#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	string s("FERRARI");
	vector<char> vector1(s.begin(), s.end());


	replace(vector1.begin(), vector1.end(), 'R', 'S');

	for (int i = 0; i<vector1.size(); i++){
		cout << vector1[i] << " ";
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;

int main(void)
{
	int a[10] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
	std::ostream_iterator< int > output(cout, " ");

	std::vector< int > v1(a, a + 10); // copy of a
	cout << "Vector v1 before replacing all 10s:\n   ";
	std::copy(v1.begin(), v1.end(), output);

	// replace all 10s in v1 with 100
	std::replace(v1.begin(), v1.end(), 10, 100);
	cout << "\nVector v1 after replacing 10s with 100s:\n   ";
	std::copy(v1.begin(), v1.end(), output);

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

	INSERT_ELEMENTS(coll, 2, 7);
	INSERT_ELEMENTS(coll, 4, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	replace(coll.begin(), coll.end(), 6, 42);
	PRINT_ELEMENTS(coll, "coll: ");

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

	INSERT_ELEMENTS(coll, 2, 7);
	INSERT_ELEMENTS(coll, 4, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	replace_if(coll.begin(), coll.end(), bind2nd(less<int>(), 5), 0);
	PRINT_ELEMENTS(coll, "coll: ");

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

	// Replace B's with X's
	replace(v.begin(), v.end(), 'B', 'X');

	show_range("v after replacing B with X:", v.begin(), itr_end);

	return 0;
}

template<class InIter>
void show_range(const char *msg, InIter start, InIter end) {
	InIter itr;

	cout << msg << endl;
	for (itr = start; itr != end; ++itr){
		cout << *itr << endl;
	}
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool IsEven (const int & nNum){
	return ((nNum % 2) == 0);
}

int main(void)
{
	vector <int> v(6);

	fill(v.begin(), v.begin() + 3, 8);

	fill_n(v.begin() + 3, 3, 5);

	for (size_t nIndex = 0; nIndex < v.size(); ++nIndex){
		cout << "Element [" << nIndex << "] = ";
		cout << v[nIndex] << endl;
	}

	cout << endl << "Using 'std::replace' to replace value 5 by 8" << endl;
	replace(v.begin(), v.end(), 5, 8);

	for (size_t nIndex = 0; nIndex < v.size(); ++nIndex){
		cout << "Element [" << nIndex << "] = ";
		cout << v[nIndex] << endl;
	}

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

	return 0;
}

bool greater9(int x){
	return x > 9;
}
#endif