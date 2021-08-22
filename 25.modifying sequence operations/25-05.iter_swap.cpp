#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <iterator>

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::ostream_iterator< int > output(cout, " ");

	cout << "Array a contains:\n   ";
	std::copy(a, a + 10, output);


	std::iter_swap(&a[0], &a[1]); // swap with iterators
	cout << "\nArray a after swapping a[0] and a[1] using iter_swap:\n   ";
	std::copy(a, a + 10, output);

	cout << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>
#include <algorithm>
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

int main(void)
{
	list<int> coll;

	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	PRINT_ELEMENTS(coll);

	iter_swap(coll.begin(), ++coll.begin());
	PRINT_ELEMENTS(coll);
	iter_swap(coll.begin(), --coll.end());
	PRINT_ELEMENTS(coll);

	return  0;
}
#endif