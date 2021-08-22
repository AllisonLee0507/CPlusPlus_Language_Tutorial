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

int main()
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 5, 9);
	INSERT_ELEMENTS(coll, 1, 4);

	PRINT_ELEMENTS(coll, "on entry:           ");

	// convert collection into a heap
	make_heap(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "after make_heap():  ");

}

#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a[ 10 ] = { 3, 10, 52, 77, 22, 31, 1, 98, 13, 40 };
	std::vector< int > v( a, a + 10 ); // copy of a
	std::vector< int > v2;
	std::ostream_iterator< int > output(cout, " ");

	std::copy(v.begin(), v.end(), output);

	std::make_heap(v.begin(), v.end()); // create heap from vector v
	cout << "\n\n";

	std::copy(v.begin(), v.end(), output);

	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> vector1(5);
	for (int i = 0; i < 5; ++i)
		vector1[i] = i;

	// Shuffle the elements again:
	random_shuffle(vector1.begin(), vector1.end());


	make_heap(vector1.begin(), vector1.end());
	sort_heap(vector1.begin(), vector1.end());

	// Verify that the array is sorted:
	for (int i = 0; i < 5; ++i)
		cout << vector1[i];

	return 0;
}
#endif
