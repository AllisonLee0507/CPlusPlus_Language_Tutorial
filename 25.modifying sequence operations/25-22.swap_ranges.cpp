#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(void)
{
	string s("HELLO");
	string s2("THERE");

	vector<char> vector1(s.begin(), s.end());
	vector<char> vector2(s2.begin(), s2.end());

	// Swap the contents of vector1 and vector2:
	swap_ranges(vector1.begin(), vector1.end(), vector2.begin());



	for (int i = 0; i<vector1.size(); i++){
		cout << vector1[i];
	}
	cout << "\n\n\n\n\n";

	for (int i = 0; i<vector2.size(); i++){
		cout << vector2[i];
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
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::ostream_iterator< int > output(cout, " ");

	cout << "Array a contains:\n   ";
	std::copy(a, a + 10, output);

	std::swap_ranges(a, a + 5, a + 5);

	std::copy(a, a + 10, output);

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
	vector<int> coll1;
	deque<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 11, 23);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// swap elements of coll1 with corresponding elements of coll2
	deque<int>::iterator pos;
	pos = swap_ranges(coll1.begin(), coll1.end(),  // first range
		coll2.begin());              // second range

	PRINT_ELEMENTS(coll1, "\ncoll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");
	if (pos != coll2.end()) {
		cout << "first element not modified: "
			<< *pos << endl;
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
	vector<int> coll1;
	deque<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 11, 23);

	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");

	// mirror first three with last three elements in coll2
	swap_ranges(coll2.begin(), coll2.begin() + 3,    // first range
		coll2.rbegin());                   // second range

	PRINT_ELEMENTS(coll2, "\ncoll2: ");

	return 0;
}
#endif