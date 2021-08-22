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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	// sort until the first five elements are sorted
	partial_sort(coll.begin(),      // beginning of the range
		coll.begin() + 5,    // end of sorted range
		coll.end());       // end of full range
	PRINT_ELEMENTS(coll);

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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	// sort inversely until the first five elements are sorted
	partial_sort(coll.begin(),      // beginning of the range
		coll.begin() + 5,    // end of sorted range
		coll.end(),        // end of full range
		greater<int>());   // sorting criterion
	PRINT_ELEMENTS(coll);
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
	deque<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	// sort all elements
	partial_sort(coll.begin(),      // beginning of the range
		coll.end(),        // end of sorted range
		coll.end());       // end of full range
	PRINT_ELEMENTS(coll);
}

#endif



#if 0
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

class comp_last {
public:
	bool operator()(int x, int y) const
		// Compare x and y based on their last base-10 digits:
	{
		return x  10;
	}
};

int main()
{
	const int N = 20;

	vector<int> vector0;
	for (int i = 0; i < N; ++i)
		vector0.push_back(i);

	vector<int> vector1 = vector0;

	ostream_iterator<int> out(cout, " ");

	cout << "Before sorting:\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl;

	sort(vector1.begin(), vector1.end(), comp_last());

	cout << "After sorting by last digits with sort:\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl << endl;

	vector1 = vector0;
	reverse(vector1.begin(), vector1.end());
	cout << "Before sorting:\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl << endl;

	partial_sort(vector1.begin(), vector1.begin() + 5, vector1.end(), comp_last());

	cout << "After sorting with partial_sort to get 5 values with smallest last digits:\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl << endl;

	return 0;
}
#endif



#if 0
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

class comp_last {
public:
	bool operator()(int x, int y) const
		// Compare x and y based on their last base-10 digits:
	{
		return x  10;
	}
};

int main(void)
{
	const int N = 20;

	vector<int> vector0;
	for (int i = 0; i < N; ++i)
		vector0.push_back(i);

	vector<int> vector1 = vector0;

	ostream_iterator<int> out(cout, " ");

	cout << "Before sorting:\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl;

	sort(vector1.begin(), vector1.end(), comp_last());

	cout << "After sorting by last digits with sort:\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl << endl;

	vector1 = vector0;
	reverse(vector1.begin(), vector1.end());
	cout << "Before sorting:\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl << endl;

	partial_sort(vector1.begin(), vector1.begin() + 5, vector1.end(), comp_last());

	cout << "After sorting with partial_sort to get 5 values with smallest last digits:\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl << endl;

	return 0;
}
#endif