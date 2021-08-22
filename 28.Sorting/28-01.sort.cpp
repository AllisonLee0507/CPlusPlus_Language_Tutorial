#if 0
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

int main(vodi)
{
	int a[1000];
	int i;

	for (i = 0; i < 1000; ++i)
		a[i] = 1000 - i - 1;

	sort(&a[0], &a[1000]);

	for (i = 0; i < 1000; ++i)
		assert(a[i] == i);

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
	vector<int> coll;
	vector<int>::iterator pos;

	// insert elements from 1 to 6 in arbitrary order
	coll.push_back(2);
	coll.push_back(5);
	coll.push_back(4);
	coll.push_back(1);
	coll.push_back(6);
	coll.push_back(3);

	// sort all elements
	sort(coll.begin(), coll.end());

	// print all elements
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << *pos << ' ';
	}

}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main(void)
{
	int coll[] = { 5, 6, 2, 4, 1, 3 };

	// sort beginning with the second element
	sort(coll, coll + 6);

	// print all elements
	copy(coll, coll + 6,
		ostream_iterator<int>(cout, " "));
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main(void)
{
	int coll[] = { 5, 6, 2, 4, 1, 3 };

	// sort beginning with the second element
	sort(coll + 3, coll + 6);

	// print all elements
	copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class MyClass : public binary_function<MyClass, MyClass, bool> {
public:
	int id;
	bool operator()(const MyClass& x, const MyClass& y) const {
		return x.id >= y.id;
	}
	friend ostream& operator<<(ostream& o, const MyClass& x) {
		o << x.id;
		return o;
	}
};

int main(void)
{
	vector<MyClass> vector1(100);
	for (int i = 0; i != 100; ++i)
		vector1[i].id = 100 - i - 1;

	sort(vector1.begin(), vector1.end(), not2(MyClass()));

	for (int k = 0; k != 100; ++k)
		cout << vector1[k].id << " ";

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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMENTS(coll, "on entry: ");

	// sort elements
	sort(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "sorted:   ");

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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMENTS(coll, "on entry: ");

	// sorted reverse
	sort(coll.begin(), coll.end(),    // range
		greater<int>());             // sorting criterion

	PRINT_ELEMENTS(coll, "sorted >: ");
}

#endif



#if 0
#include <iostream>
#include <algorithm>
#include <cassert>
#include <functional>
using namespace std;

int main(void)
{

	int a[100];
	int i;
	for (i = 0; i < 100; ++i)
		a[i] = i;

	random_shuffle(&a[0], &a[100]);

	for (i = 0; i < 100; ++i)
		cout << a[i] << " ";
	cout << "\n\n\n\n";
	// Sort into descending order:
	sort(&a[0], &a[100], greater<int>());


	for (i = 0; i < 100; ++i)
		cout << a[i] << " ";


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

bool lessLength(const string& s1, const string& s2)
{
	return s1.length() < s2.length();
}

int main(void)
{
	vector<string> coll1;
	vector<string> coll2;

	// fill both collections with the same elements
	coll1.push_back("1xxx");
	coll1.push_back("2x");
	coll1.push_back("3x");
	coll1.push_back("4x");
	coll1.push_back("5xx");
	coll1.push_back("6xxxx");
	coll1.push_back("7xx");
	coll1.push_back("8xxx");
	coll1.push_back("9xx");
	coll1.push_back("10xxx");
	coll1.push_back("11");
	coll1.push_back("12");
	coll1.push_back("13");
	coll1.push_back("14xx");
	coll1.push_back("15");
	coll1.push_back("16");
	coll1.push_back("17");
	coll2 = coll1;

	PRINT_ELEMENTS(coll1, "on entry:\n ");

	// sort (according to the length of the strings)
	sort(coll1.begin(), coll1.end(),           // range
		lessLength);                          // criterion
	stable_sort(coll2.begin(), coll2.end(),    // range
		lessLength);                   // criterion

	PRINT_ELEMENTS(coll1, "\nwith sort():\n ");
	PRINT_ELEMENTS(coll2, "\nwith stable_sort():\n ");
}

#endif