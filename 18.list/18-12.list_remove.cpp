#if 0
#include <iostream>
#include <list>
using namespace std;

void show(const char *msg, list<char> lst);

int main(void) 
{
	list<char> lstA;

	lstA.push_back('A');
	lstA.push_back('F');
	lstA.push_back('B');
	lstA.push_back('R');

	// Remove A and H.
	lstA.remove('A');
	lstA.remove('H');
	show("lstA after removing A and H: ", lstA);
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
	values.push_back(1);
	values.push_back(2);
	values.push_back(3);

	cout << "values contains: ";
	std::copy(values.begin(), values.end(), output);

	values.remove(1); // remove all 1s

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
using namespace std;

int main(void)
{
	list<int> coll;

	// insert elements from 6 to 1 and 1 to 6
	for (int i = 1; i <= 6; ++i) {
		coll.push_front(i);
		coll.push_back(i);
	}

	// remove all elements with value 3
	// - poor performance
	coll.erase(remove(coll.begin(), coll.end(),
		3),
		coll.end());

	// remove all elements with value 4
	// - good performance
	coll.remove(4);

	return 0;
}
#endif