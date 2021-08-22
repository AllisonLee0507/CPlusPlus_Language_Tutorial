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

	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<char> coll;      // list container for character elements

	// append elements from 'a' to 'z'
	for (char c = 'a'; c <= 'z'; ++c) {
		coll.push_back(c);
	}

	/* print all elements
	* - while there are elements
	* - print and remove the first element
	*/
	while (!coll.empty()) {
		cout << coll.front() << ' ';
		coll.pop_front();
	}
	cout << endl;

	return 0;
}
#endif



#if 0
#include <list>
#include <iostream>

using namespace std;

typedef list<int> LISTINT;

int main(void)
{
	LISTINT listOne;
	LISTINT listAnother;
	LISTINT::iterator i;

	listOne.push_front(2);
	listOne.push_front(1);
	listOne.push_back(3);
	listAnother.push_front(4);
	listAnother.assign(listOne.begin(), listOne.end());

	for (i = listAnother.begin(); i != listAnother.end(); ++i)
		cout << *i << endl;
	listAnother.assign(4, 1);

}
#endif



#if 0
#include <list>
#include <iostream>

using namespace std;

typedef list<int> LISTINT;

int main(void)
{
	LISTINT listOne;
	LISTINT listAnother;
	LISTINT::iterator i;

	listOne.push_front(2);
	listOne.push_front(1);
	listOne.push_back(3);
	listAnother.push_front(4);
	listAnother.assign(listOne.begin(), listOne.end());

	for (i = listAnother.begin(); i != listAnother.end(); ++i)
		cout << *i << endl;
	listAnother.assign(4, 1);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst1, lst2;
	int i;

	for (i = 0; i<10; i++) lst1.push_back(i);
	for (i = 0; i<10; i++) lst2.push_front(i);

	list<int>::iterator p;

	cout << "Contents of lst1:\n";
	p = lst1.begin();
	while (p != lst1.end()) {
		cout << *p << " ";
		p++;
	}
	cout << "\n\n";

	cout << "Contents of lst2:\n";
	p = lst2.begin();
	while (p != lst2.end()) {
		cout << *p << " ";
		p++;
	}

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

	values.pop_front(); // remove element from front

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst1, lst2;
	int i;

	for (i = 0; i<10; i++) lst1.push_back(i);
	for (i = 0; i<10; i++) lst2.push_front(i);

	list<int>::iterator p;

	p = lst1.begin();
	while (p != lst1.end()) {
		cout << *p << " ";
		p++;
	}

	p = lst2.begin();
	while (p != lst2.end()) {
		cout << *p << " ";
		p++;
	}

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

	values.pop_back();// remove element from back

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;
	return 0;
}
#endif