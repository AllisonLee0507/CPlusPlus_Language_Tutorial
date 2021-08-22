#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[5] = { 1, 3, 5, 7, 9 };
	int a2[5] = { 2, 4, 5, 7, 9 };

	std::vector< int > v1(a1, a1 + 5);
	std::vector< int > v2(a2, a2 + 5);

	std::ostream_iterator< int > output(cout, " ");

	std::copy(v1.begin(), v1.end(), output); // display vector output
	cout << "\n\n";
	std::copy(v2.begin(), v2.end(), output); // display vector output

	std::vector< int > results2(v1.size() + v2.size());

	std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), results2.begin());

	cout << "\n\nAfter merge of v1 and v2 results2 contains:\n";
	std::copy(results2.begin(), results2.end(), output);

	cout << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	vector<string> v1, v2, v3;

	v1.push_back("a");
	v1.push_back("c");
	v1.push_back("e");

	v2.push_back("b");
	v2.push_back("d");
	v2.push_back("f");

	v3.reserve(v1.size() + v2.size() + 1);

	merge(v1.begin(), v1.end(),
		v2.begin(), v2.end(),
		back_inserter<vector<string> >(v3));

	for (int i = 0; i<6; i++){
		cout << v3[i];
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
	list<int> coll1;
	set<int> coll2;

	// fill both collections with some sorted elements
	INSERT_ELEMENTS(coll1, 1, 6);
	INSERT_ELEMENTS(coll2, 3, 8);

	PRINT_ELEMENTS(coll1, "coll1:  ");
	PRINT_ELEMENTS(coll2, "coll2:  ");

	// print merged sequence
	cout << "merged: ";
	merge(coll1.begin(), coll1.end(),
		coll2.begin(), coll2.end(),
		ostream_iterator<int>(cout, " "));
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
	int c1[] = { 1, 2, 2, 4, 6, 7, 7, 9 };
	int num1 = sizeof(c1) / sizeof(int);

	int c2[] = { 2, 2, 2, 3, 6, 6, 8, 9 };
	int num2 = sizeof(c2) / sizeof(int);

	// print source ranges
	cout << "c1:                         ";
	copy(c1, c1 + num1, ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "c2:                         ";
	copy(c2, c2 + num2, ostream_iterator<int>(cout, " "));
	cout << '\n' << endl;

	// sum the ranges by using merge()
	cout << "merge():                    ";
	merge(c1, c1 + num1, c2, c2 + num2, ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <deque>
#include <algorithm>  // For merge
using namespace std;

int main(void)
{
	char s[] = "aeiou";
	int len = strlen(s);
	list<char> list1(&s[0], &s[strlen(s)]);

	// Initialize deque1 with 26 copies of the letter x:
	deque<char> deque1(26, 'x');

	// Merge array s and list1, putting result in deque1:
	merge(&s[0], &s[len], list1.begin(), list1.end(), deque1.begin());

	deque<char>::iterator i;

	cout.precision(10);

	for (i = deque1.begin(); i != deque1.end(); ++i)
		cout << *i << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <cassert>
#include <list>
#include <deque>
#include <algorithm>  // For merge
using namespace std;

int main(void)
{
	char s[] = "acegikm";

	deque<char> deque1(&s[0], &s[strlen(s)]);

	// Initialize list1 with 26 copies of the letter x:
	list<char> list1(26, 'x');

	// Merge first 5 letters in array s with first 10 in
	// deque1, putting result in list1:
	merge(&s[0], &s[5], deque1.begin(), deque1.begin() + 10, list1.begin());

	list<char>::iterator i;

	cout.precision(10);

	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i << endl;

	return 0;
}
#endif
