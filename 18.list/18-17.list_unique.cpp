#if 0
#include <iostream>
#include <cassert>
#include <string>
#include <list>
using namespace std;

int main(void)
{
	string s("Stroustrup");

	list<char> list1(s.begin(), s.end());

	list1.sort();
	list1.unique();

	list<char>::iterator i;

	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i;


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

	lstA.push_back('A');
	lstA.push_back('F');
	lstA.push_back('B');
	lstA.push_back('A');

	lstA.sort();

	// Remove duplicates from lstA.
	lstA.unique();
	show("lstA after call to unique(): ", lstA);

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

	// sort second list, assign to list1 and remove duplicates
	list2.sort();
	list1 = list2;
	list2.unique();
	printLists(list1, list2);

	return 0;
}
#endif
