#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>

int main(void)
{
	std::ostream_iterator< int > output(cout, " ");

	int a2[10] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	std::vector< int > v2(a2, a2 + 10); // copy of a2
	cout << "\n\nVector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);

	// calculate sum of elements in v
	cout << "\n\nThe total of the elements in Vector v is: "
		<< std::accumulate(v2.begin(), v2.end(), 0);

	cout << endl;
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

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);


	// process product of elements
	cout << "product: "
		<< accumulate(coll.begin(), coll.end(),    // range
		1,                           // initial value
		multiplies<int>())           // operation
		<< endl;

	// process product of elements (use 0 as initial value)
	cout << "product: "
		<< accumulate(coll.begin(), coll.end(),    // range
		0,                           // initial value
		multiplies<int>())           // operation
		<< endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <cassert>
#include <numeric>  // For accumulate
using namespace std;

int main(void)
{
	float small = (float)1.0 / (1 << 26);
	float x[5] = { 1.0, 3 * small, 2 * small, small, small };

	vector<float> vector1(&x[0], &x[5]);

	cout << "Values to be added: " << endl;

	vector<float>::iterator i;
	cout.precision(10);

	for (i = vector1.begin(); i != vector1.end(); ++i)
		cout << *i << endl;
	cout << endl;

	float sum1 = accumulate(vector1.rbegin(), vector1.rend(), (float)0.0);
	cout << "Sum accumulated from right = " << (double)sum1 << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

int main()
{
	int x[20];

	for (int i = 0; i < 20; ++i)
		x[i] = i;

	// Show that 10 * 1 * 2 * 3 * 4 == 240:
	int result = accumulate(&x[1], &x[5], 10, multiplies<int>());
	cout << result;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(void)
{
	const int SIZE = 10;
	int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector< int > v(a1, a1 + SIZE);

	cout << "\n\nThe total of the elements in Vector v is: " << accumulate(v.begin(), v.end(), 0);

	return 0;
}
#endif
