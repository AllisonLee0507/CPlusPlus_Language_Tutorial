#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
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

	// find and print maximum elements
	pos = max_element(coll.begin(), coll.end());
	cout << "max: " << *pos << endl;

	return 0;
}
#endif


#if 0
#include <cstdlib>

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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 2, 8);
	INSERT_ELEMENTS(coll, -3, 5);

	PRINT_ELEMENTS(coll);

	//maximum
	cout << "maximum: "
		<< *max_element(coll.begin(), coll.end())
		<< endl;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	const float a[] = { 13.4, 27.6, 15.5, 44.3, 51.2, 30.2, 18.0 };
	vector<float> data(a, a + sizeof(a) / sizeof(a[0]));

	float data_min = *min_element(data.begin(), data.end());
	float data_max = *max_element(data.begin(), data.end());

	cout << data_max;

	return 0;
}
#endif



#if 0
#include <cstdlib>
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


bool absLess(int elem1, int elem2)
{
	return abs(elem1) < abs(elem2);
}

int main(void)
{
	deque<int> coll;

	INSERT_ELEMENTS(coll, 2, 8);
	INSERT_ELEMENTS(coll, -3, 5);

	PRINT_ELEMENTS(coll);

	cout << "maximum of absolute values: "
		<< *max_element(coll.begin(), coll.end(),
		absLess)
		<< endl;

	return 0;
}
#endif