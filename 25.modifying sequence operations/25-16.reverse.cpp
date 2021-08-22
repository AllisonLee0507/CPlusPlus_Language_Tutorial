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
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	reverse(coll.begin(), coll.end());
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

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	reverse(coll.begin() + 1, coll.end() - 1);
	PRINT_ELEMENTS(coll, "coll: ");

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm> // For reverse
using namespace std;
template <typename Container>

Container make(const char s[])
{
	return Container(&s[0], &s[strlen(s)]);
}

int main(void)
{
	vector<char> vector1 = make< vector<char> >("abc");
	reverse(vector1.begin(), vector1.end());
	assert(vector1 == make< vector<char> >("cba"));
	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
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

	// find the first element with value 3
	pos = find(coll.begin(), coll.end(),  // range
		3);                        // value
	// reverse the order of the found element with value 3 and all following elements
	reverse(pos, coll.end());

	// print all elements
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << *pos << ' ';
	}
	cout << endl;

}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v;
	unsigned int i;

	for (i = 0; i<10; i++) v.push_back(i);

	cout << "Initial: ";
	for (i = 0; i<v.size(); i++)
		cout << v[i] << endl;

	reverse(v.begin(), v.end());

	for (i = 0; i<v.size(); i++)
		cout << v[i] << endl;

	return 0;
}
#endif
