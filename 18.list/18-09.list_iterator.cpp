#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst; // create an empty list
	int i;

	for (i = 0; i<10; i++) lst.push_back(i);

	cout << "Size = " << lst.size() << endl;

	cout << "Contents: ";
	list<int>::iterator p = lst.begin();
	while (p != lst.end()) {
		cout << *p << " ";
		p++;
	}
	cout << "\n\n";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst; // create an empty list
	int i;

	for (i = 0; i<10; i++) lst.push_back(i);

	cout << "Size = " << lst.size() << endl;

	cout << "Contents: ";
	list<int>::iterator p = lst.begin();
	while (p != lst.end()) {
		cout << *p << " ";
		p++;
	}
	cout << "\n\n";

	// change contents of list
	p = lst.begin();
	while (p != lst.end()) {
		*p = *p + 100;
		p++;
	}

	cout << "Contents modified: ";
	p = lst.begin();
	while (p != lst.end()) {
		cout << *p << " ";
		p++;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print (int elem)
{
	cout << elem << ' ';
}

int main(void)
{
	list<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// print all elements in normal order
	for_each(coll.begin(), coll.end(),      // range
		print);                        // operation
	cout << endl;

	// print all elements in reverse order
	for_each(coll.rbegin(), coll.rend(),    // range
		print);                        // operations
	cout << endl;
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

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// find position of element with value 5
	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(),    // range
		5);                          // value

	// print value of the element
	cout << "pos:   " << *pos << endl;

	// convert iterator to reverse iterator
	list<int>::reverse_iterator rpos(pos);

	// print value of the element to which the reverse iterator refers
	cout << "rpos:  " << *rpos << endl;

	// convert reverse iterator back to normal iterator
	list<int>::iterator rrpos;
	rrpos = rpos.base();

	// print value of the element to which the normal iterator refers
	cout << "rrpos: " << *rrpos << endl;
}
#endif



#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst;
	int i;

	for (i = 0; i<10; i++) lst.push_back(i);

	cout << "Size = " << lst.size() << endl;

	list<int>::iterator p = lst.begin();
	while (p != lst.end()) {
		cout << *p << endl;
		p++;
	}

	p = lst.begin();
	while (p != lst.end()) {
		*p = *p + 100;
		p++;
	}

	p = lst.begin();
	while (p != lst.end()) {
		cout << *p << " ";
		p++;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>

using namespace std;
typedef list<int> LISTINT;

int main(void)
{
	LISTINT listOne;
	LISTINT::iterator i;

	listOne.push_front(2);
	listOne.push_front(1);
	listOne.push_back(3);

	for (i = listOne.begin(); i != listOne.end(); ++i)
		cout << *i << " ";
	cout << endl;

	for (i = listOne.end(); i != listOne.begin(); --i)
		cout << *i << " ";
	cout << endl;

	return 0;

}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <algorithm> // for find
using namespace std;

int main(void)
{

	char x[5] = { 'a', 'r', 'e', 'q', 't' };

	list<char> list1(&x[0], &x[5]);

	// Search for the first occurrence of the letter e:
	list<char>::iterator where = find(list1.begin(), list1.end(), 'e');

	list<char>::iterator next = where;
	++next;

	cout << *next << endl;

	return 0;
}
#endif
