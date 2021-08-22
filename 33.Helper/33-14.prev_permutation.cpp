#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> vector1(3);
	for (int i = 0; i < 3; ++i)
		vector1[i] = i;

	// In lexicographical order the permutations of 0 1 2 are
	// 0 1 2, 0 2 1, 1 0 2, 1 2 0, 2 0 1, 2 1 0. 
	// Show that from 0 1 2 next_permutation produces 0 2 1:
	next_permutation(vector1.begin(), vector1.end());
	cout << vector1[0] << " ";
	cout << vector1[1] << " ";
	cout << vector1[2] << " ";


	cout << "\n\n\n\n\n\n";

	// Show that from 0 2 1 prev_permutation() produces 0 1 2:
	prev_permutation(vector1.begin(), vector1.end());
	cout << vector1[0] << " ";
	cout << vector1[1] << " ";
	cout << vector1[2] << " ";

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
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 3);
	PRINT_ELEMENTS(coll, "on entry:  ");

	while (prev_permutation(coll.begin(), coll.end())) {
		PRINT_ELEMENTS(coll, " ");
	}
	PRINT_ELEMENTS(coll, "now:       ");

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
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 3);
	PRINT_ELEMENTS(coll, "on entry:  ");

	while (prev_permutation(coll.begin(), coll.end())) {
		PRINT_ELEMENTS(coll, " ");
	}
	PRINT_ELEMENTS(coll, "afterward: ");

	return 0;
}
#endif
