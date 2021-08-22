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

	values.splice(values.end(), otherValues);

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;
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

	// insert all elements of list1 before the first element with value 3 of list2
	// - find() returns an iterator to the first element with value 3
	list2.splice(find(list2.begin(), list2.end(),  // destination position
		3),
		list1);                          // source list
	printLists(list1, list2);

	return 0;

}
#endif



#if 0
#include <iostream>
#include <list>
using namespace std;

void show(const char *msg, list<char> lst);

int main(void)
{
	list<char> lstA;
	list<char> lstB;

	lstA.push_back('A');
	lstA.push_back('F');
	lstA.push_back('B');
	lstA.push_back('R');

	lstB.push_back('X');
	lstB.push_back('A');
	lstB.push_back('F');

	lstA.sort();
	lstB.sort();

	// Now, splice lstB into lstA.
	list<char>::iterator itr = lstA.begin();
	++itr;
	lstA.splice(itr, lstB);
	show("lstA after splice: ", lstA);
	cout << endl;

	return 0;
}

void show(const char *msg, list<char> lst) {
	list<char>::iterator itr;

	cout << msg << endl;

	for (itr = lst.begin(); itr != lst.end(); ++itr)
		cout << *itr << endl;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

void printLists(const list<int>& l1, const list<int>& l2)
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

	// move first element to the end
	list2.splice(list2.end(),        // destination position
		list2,              // source list
		list2.begin());     // source position
	printLists(list1, list2);

	return 0;

}
#endif