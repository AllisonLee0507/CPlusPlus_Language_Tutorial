#if 0
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<bool> v;
	unsigned int i;

	for (i = 0; i < 10; i++) {
		if (rand()  2) v.push_back(true);
		else v.push_back(false);
	}

	cout << "Sequence:\n";
	for (i = 0; i<v.size(); i++)
		cout << boolalpha << v[i] << " ";
	cout << endl;

	i = count(v.begin(), v.end(), true);
	cout << i << " elements are true.\n";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string str1("Strings handling is easy in C++");
	string::iterator p;
	unsigned int i;

	// use the count() algorithm
	i = count(str1.begin(), str1.end(), 'i');
	cout << "There are " << i << " i's in str1\n";

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
	int num;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// count and print elements with value 4
	num = count(coll.begin(), coll.end(),       // range
		4);                             // value
	cout << "number of elements equal to 4:      " << num << endl;

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

bool isEven(int elem)
{
	return elem  2 == 0;
}

int main(void)
{
	vector<int> coll;
	int num;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// count elements with even value
	num = count_if(coll.begin(), coll.end(), isEven);
	cout << "number of elements with even value: " << num << endl;

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

bool isEven(int elem)
{
	return elem  2 == 0;
}

int main(void)
{
	vector<int> coll;
	int num;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	// count elements that are greater than value 4
	num = count_if(coll.begin(), coll.end(),    // range
		bind2nd(greater<int>(), 4));  // criterion
	cout << "number of elements greater than 4:  " << num << endl;

	return 0;
}
#endif