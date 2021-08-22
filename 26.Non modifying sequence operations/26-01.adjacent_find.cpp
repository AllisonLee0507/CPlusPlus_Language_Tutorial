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

bool doubled(int elem1, int elem2)
{
	return elem1 * 2 == elem2;
}

int main(void)
{
	vector<int> coll;

	coll.push_back(1);
	coll.push_back(3);
	coll.push_back(2);
	coll.push_back(4);
	coll.push_back(5);
	coll.push_back(5);
	coll.push_back(0);

	PRINT_ELEMENTS(coll, "coll: ");

	// search first two elements with equal value
	vector<int>::iterator pos;
	pos = adjacent_find(coll.begin(), coll.end());

	if (pos != coll.end()) {
		cout << "first two elements with equal value have position "
			<< distance(coll.begin(), pos) + 1
			<< endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
#include <functional>
#include <deque>
using namespace std;

int main(void)
{
	deque<string> player(5);
	deque<string>::iterator i;

	player[0] = "PPPP";
	player[1] = "AAAAAA";
	player[2] = "AAAAAA";
	player[3] = "NNNNNNNN";
	player[4] = "RRRRRRRRR";

	// Find the first pair of equal consecutive names:
	i = adjacent_find(player.begin(), player.end());

	cout << *i;

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


bool doubled(int elem1, int elem2)
{
	return elem1 * 2 == elem2;
}

int main(void)
{
	vector<int> coll;

	coll.push_back(1);
	coll.push_back(3);
	coll.push_back(2);
	coll.push_back(4);
	coll.push_back(5);
	coll.push_back(5);
	coll.push_back(0);

	PRINT_ELEMENTS(coll, "coll: ");

	vector<int>::iterator pos;
	// search first two elements for which the second has double the value of the first
	pos = adjacent_find(coll.begin(), coll.end(),   // range
		doubled);                   // criterion

	if (pos != coll.end()) {
		cout << "first two elements with second value twice the "
			<< "first have pos. "
			<< distance(coll.begin(), pos) + 1
			<< endl;
	}

	return 0;

}
#endif



#if 0
#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
#include <functional>
#include <deque>
using namespace std;

int main(void)
{
	deque<string> player(5);
	deque<string>::iterator i;

	player[0] = "PPPP";
	player[1] = "AAAAAA";
	player[2] = "AAAAAA";
	player[3] = "NNNNNNNN";
	player[4] = "RRRRRRRRR";


	i = adjacent_find(player.begin(), player.end(), greater<string>());

	cout << *i << endl;

	return 0;
}
#endif