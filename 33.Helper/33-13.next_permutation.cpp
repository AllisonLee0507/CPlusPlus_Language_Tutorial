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

	next_permutation(vector1.begin(), vector1.end());
	cout << vector1[0] << " ";
	cout << vector1[1] << " ";
	cout << vector1[2] << " ";

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
	vector<char> v;
	unsigned i;

	for (i = 0; i<3; i++)
		v.push_back('A' + i);

	do {
		for (i = 0; i < v.size(); i++){
			cout << v[i] << endl;
		}
	} while (next_permutation(v.begin(), v.end()));

	prev_permutation(v.begin(), v.end());

	do {
		for (i = 0; i<v.size(); i++){
			cout << v[i] << endl;
		}

	} while (prev_permutation(v.begin(), v.end()));

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
	vector<char> v;
	unsigned i;

	for (i = 0; i<3; i++) v.push_back('A' + i);

	prev_permutation(v.begin(), v.end());

	do {
		for (i = 0; i<v.size(); i++)
			cout << v[i] << endl;
	} while (prev_permutation(v.begin(), v.end()));

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
	vector<char> v;
	unsigned i;

	for (i = 0; i<3; i++)
		v.push_back('A' + i);

	do {
		for (i = 0; i < v.size(); i++){
			cout << v[i] << endl;
		}
	} while (next_permutation(v.begin(), v.end()));

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
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 3);
	PRINT_ELEMENTS(coll, "on entry:  ");

	while (next_permutation(coll.begin(), coll.end())) {
		PRINT_ELEMENTS(coll, " ");
	}
	PRINT_ELEMENTS(coll, "afterward: ");

	return 0;
}
#endif
