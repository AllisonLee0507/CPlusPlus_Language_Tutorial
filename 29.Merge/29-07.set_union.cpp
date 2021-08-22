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

	vector<char> setUnion;
	set_union(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), back_inserter(setUnion));

	for (int i = 0; i<setUnion.size(); i++){
		cout << setUnion[i];
	}

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

	int unionSet[SIZE3];

	int *ptr = std::set_union(a1, a1 + SIZE1, a3, a3 + SIZE2, unionSet);
	cout << "set_union of a1 and a3 is: ";
	std::copy(unionSet, ptr, output);
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

	// unite the ranges by using set_union()
	cout << "set_union():                ";
	set_union(c1, c1 + num1, c2, c2 + num2, ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
#endif
