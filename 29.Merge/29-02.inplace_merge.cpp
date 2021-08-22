#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	const int SIZE = 10;
	int a1[SIZE] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
	std::vector< int > v1(a1, a1 + SIZE); // copy of a
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v1 contains: ";
	std::copy(v1.begin(), v1.end(), output);

	std::inplace_merge(v1.begin(), v1.begin() + 2, v1.end());

	cout << "\nAfter inplace_merge, v1 contains: ";
	std::copy(v1.begin(), v1.end(), output);

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

int main()
{
	list<int> coll;

	// insert two sorted sequences
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll, 1, 8);
	PRINT_ELEMENTS(coll);

	// find beginning of second part (element after 7)
	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 7);
	++pos;

	// merge into one sorted range
	inplace_merge(coll.begin(), pos, coll.end());

	PRINT_ELEMENTS(coll);
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
	vector<int> vector2(5);
	vector<int> vector3(10);

	for (int i = 0; i < 5; ++i)
		vector1[i] = 2 * i;

	for (int i = 0; i < 5; ++i)
		vector2[i] = 1 + 2 * i;


	merge(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), vector3.begin());


	inplace_merge(vector3.begin(), vector3.begin() + 5, vector3.end());

	for (int i = 0; i < 10; ++i)
		cout << vector3[i];

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(void)
{
	const int SIZE = 10;
	int a1[SIZE] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
	vector< int > v1(a1, a1 + SIZE);

	inplace_merge(v1.begin(), v1.begin() + 5, v1.end());

	vector< int > results1;
	unique_copy(v1.begin(), v1.end(), back_inserter(results1));

	vector< int > results2;
	reverse_copy(v1.begin(), v1.end(), back_inserter(results2));

	cout << endl;

	return 0;
}
#endif
