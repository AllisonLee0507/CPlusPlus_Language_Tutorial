#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	bool result;

	string s("abcde");
	string s2("aeiou");

	vector<char> vector1(s.begin(), s.end());
	vector<char> vector2(s2.begin(), s2.end());

	// Illustrate includes:
	result = includes(vector1.begin(), vector1.end(), vector2.begin(), vector2.end());
	assert(result == false);

	result = includes(vector1.begin(), vector1.end(), vector2.begin(), vector2.begin() + 2);
	// 'a' and 'e' are contained in vector1
	assert(result == true);

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <iterator>

int main(void)
{
	const int SIZE1 = 10, SIZE2 = 5, SIZE3 = 20;
	int a1[SIZE1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2[SIZE2] = { 4, 5, 6, 7, 8 };
	int a3[SIZE2] = { 4, 5, 6, 11, 15 };
	std::ostream_iterator< int > output(cout, " ");

	std::copy(a1, a1 + SIZE1, output);
	cout << "\n";
	std::copy(a2, a2 + SIZE2, output);
	cout << "\n";
	std::copy(a3, a3 + SIZE2, output);

	if (std::includes(a1, a1 + SIZE1, a2, a2 + SIZE2))
		cout << "\n\na1 includes a2";
	else
		cout << "\n\na1 does not include a2";

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
	list<int> coll;
	vector<int> search;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll:   ");

	search.push_back(3);
	search.push_back(4);
	search.push_back(7);
	PRINT_ELEMENTS(search, "search: ");

	// check whether all elements in search are also in coll
	if (includes(coll.begin(), coll.end(),
		search.begin(), search.end())) {
		cout << "all elements of search are also in coll"
			<< endl;
	}
	else {
		cout << "not all elements of search are also in coll"
			<< endl;
	}
}
#endif