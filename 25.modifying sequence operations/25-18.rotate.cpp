#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	string s("Software Engineering ");
	vector<char> vector1(s.begin(), s.end());

	// Rotate the vector so that "Engineering " comes first:
	rotate(vector1.begin(), vector1.begin() + 9, vector1.end());


	for (int i = 0; i<vector1.size(); i++){
		cout << vector1[i];
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
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll:      ");


	rotate(coll.begin(), coll.begin() + 1, coll.end());
	PRINT_ELEMENTS(coll, "one left:  ");

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
	PRINT_ELEMENTS(coll, "coll:      ");

	rotate(coll.begin(), coll.end() - 2, coll.end());
	PRINT_ELEMENTS(coll, "two right: ");
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
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll:      ");

	rotate(coll.begin(), find(coll.begin(), coll.end(), 4), coll.end());
	PRINT_ELEMENTS(coll, "4 first:   ");

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(const char *msg, vector<int> vect);

int main(void)
{
	vector<int> v;

	for (int i = 0; i<10; i++) v.push_back(i);

	show("Original order: ", v);

	rotate(v.begin(), v.begin() + 2, v.end());
	show("Order after rotating left two positions: ", v);

	return 0;
}

void show(const char *msg, vector<int> vect) {
	cout << msg << endl;
	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << endl;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(const char *msg, vector<int> vect);

int main(void)
{
	vector<int> v;

	for (int i = 0; i<10; i++) v.push_back(i);

	show("Original order: ", v);

	rotate(v.begin(), v.begin() + 1, v.end());
	show("Order after rotating left one position: ", v);

	return 0;
}

void show(const char *msg, vector<int> vect) {
	cout << msg << endl;
	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << endl;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(const char *msg, vector<int> vect);

int main(void)
{
	vector<int> v;

	for (int i = 0; i<10; i++)
		v.push_back(i);

	show("Original order: ", v);

	rotate(v.rbegin(), v.rbegin() + 2, v.rend());

	show("Order after two right-rotates: ", v);

	return 0;
}

void show(const char *msg, vector<int> vect) {
	cout << msg << endl;
	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << endl;
}
#endif
