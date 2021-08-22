#if 0
#include <iostream>
#include <list>
#include <algorithm>

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

int main(void)
{
	list<int> coll;

	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	PRINT_ELEMENTS(coll, "initialized:                ");

	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

void printLists (const list<int>& l1, const list<int>& l2)
{
	cout << "list1: ";
	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "list2: ";
	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));
	cout << endl << endl;
}

int main(void)
{
	// create two empty lists
	list<int> list1, list2;

	// fill both lists with elements
	for (int i = 0; i<6; ++i) {
		list1.push_back(i);
		list2.push_front(i);
	}
	printLists(list1, list2);

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <list>      // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	int array[4] = { 2, 6, 4, 8 };
	std::list< int > values;      // create list of ints
	std::list< int > otherValues; // create list of ints
	std::ostream_iterator< int > output(cout, " ");

	// insert items in values
	values.push_front(1);
	values.push_front(3);
	values.push_back(4);
	values.push_back(2);

	cout << "values contains: ";
	std::copy(values.begin(), values.end(), output);

	otherValues.insert(otherValues.begin(), array, array + 4);
	cout << "\n\notherValues contains: ";
	std::copy(otherValues.begin(), otherValues.end(), output);


	values.merge(otherValues);

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;

	return 0;
}
#endif