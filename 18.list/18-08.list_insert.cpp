#if 0
#include <list>
#include <iostream>

using namespace std;

typedef list<int> LISTINT;

int main(void)
{
	int rgTest1[] = { 5, 6, 7 };
	int rgTest2[] = { 10, 11, 12 };

	LISTINT listInt;
	LISTINT listAnother;
	LISTINT::iterator i;

	// Insert one at a time
	listInt.insert(listInt.begin(), 2);
	listInt.insert(listInt.begin(), 1);
	listInt.insert(listInt.end(), 3);

	for (i = listInt.begin(); i != listInt.end(); ++i)
		cout << *i << endl;

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
	int rgTest1[] = { 5, 6, 7 };
	int rgTest2[] = { 10, 11, 12 };

	LISTINT listInt;
	LISTINT listAnother;
	LISTINT::iterator i;

	listInt.insert(listInt.end(), 3, 4);

	for (i = listInt.begin(); i != listInt.end(); ++i)
		cout << *i << endl;

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
	int rgTest1[] = { 5, 6, 7 };
	int rgTest2[] = { 10, 11, 12 };

	LISTINT listInt;
	LISTINT listAnother;
	LISTINT::iterator i;

	// Insert another LISTINT
	listAnother.insert(listAnother.begin(), rgTest2, rgTest2 + 3);
	listInt.insert(listInt.end(), listAnother.begin(), listAnother.end());

	for (i = listInt.begin(); i != listInt.end(); ++i)
		cout << *i << endl;

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
	int rgTest1[] = { 5, 6, 7 };
	int rgTest2[] = { 10, 11, 12 };

	LISTINT listInt;
	LISTINT listAnother;
	LISTINT::iterator i;

	// Insert another LISTINT
	listAnother.insert(listAnother.begin(), rgTest2, rgTest2 + 3);
	listInt.insert(listInt.end(), listAnother.begin(), listAnother.end());

	for (i = listInt.begin(); i != listInt.end(); ++i)
		cout << *i << endl;

	return 0;
}
#endif



#if 0
#include <list>
#include <iostream>

int main(void)
{
	std::list <int> listIntegers;

	listIntegers.push_front(10);
	listIntegers.push_front(2001);
	listIntegers.push_front(-1);
	listIntegers.push_front(9999);

	std::list <int> ::iterator i;

	for (i = listIntegers.begin(); i != listIntegers.end(); ++i)
		std::cout << *i << std::endl;

	return 0;
}
#endif


#if 0
#include <list>
#include <iostream>

int main(void)
{
	std::list <int> listIntegers;

	listIntegers.push_back(1);
	listIntegers.push_back(2);
	listIntegers.push_back(-1);
	listIntegers.push_back(9);

	std::list <int> ::iterator i;

	for (i = listIntegers.begin(); i != listIntegers.end(); ++i)
		std::cout << *i << std::endl;

	return 0;
}
#endif



#if 0
#include <list>
#include <iostream>

using namespace std;

void PrintListContents (const list <int>& listInput);

int main(void)
{
	list <int> list1;

	list1.insert(list1.begin(), 4);
	list1.insert(list1.begin(), 3);
	list1.insert(list1.begin(), 2);
	list1.insert(list1.begin(), 1);

	list1.insert(list1.end(), 5);

	PrintListContents(list1);

	list <int> list2;

	list2.insert(list2.begin(), 4, 0);

	cout << list2.size() << "' elements of a value:" << endl;
	PrintListContents(list2);

	list <int> listIntegers3;

	// Inserting elements from another list at the beginning...
	listIntegers3.insert(listIntegers3.begin(), list1.begin(), list1.end());

	return 0;
}

void PrintListContents(const list <int>& listInput)
{
	std::list <int>::const_iterator i;
	for (i = listInput.begin(); i != listInput.end(); ++i)
		cout << *i << endl;
}
#endif



#if 0
#include <list>
#include <iostream>

using namespace std;

void PrintListContents (const list <int>& listInput);

int main()
{
	list <int> list1;

	list1.insert(list1.begin(), 4);
	list1.insert(list1.begin(), 3);
	list1.insert(list1.begin(), 2);
	list1.insert(list1.begin(), 1);

	list1.insert(list1.end(), 5);

	PrintListContents(list1);

	list <int> list2;

	list2.insert(list2.begin(), 4, 0);

	cout << list2.size() << "' elements of a value:" << endl;
	PrintListContents(list2);

	list <int> listIntegers3;


	// Inserting elements from another list at the end...
	listIntegers3.insert(listIntegers3.end(), list2.begin(), list2.end());

	PrintListContents(listIntegers3);

	return 0;
}

void PrintListContents(const list <int>& listInput)
{
	std::list <int>::const_iterator i;
	for (i = listInput.begin(); i != listInput.end(); ++i)
		cout << *i << " ";
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

	values.insert(values.begin(), array, array + 4);

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;

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

	values.insert(values.begin(), array, array + 4);

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
#include <list>
#include <iostream>
using namespace std;

void print_list(string s)
{
	cout << s << endl;
}

int main(void)
{
	list<string> dlist;

	dlist.insert(dlist.end(), "AAA");
	dlist.insert(dlist.end(), "BBBB");
	dlist.insert(dlist.end(), "CCCCC");


	for_each(dlist.begin(), dlist.end(), print_list);

	return 0;
}
#endif