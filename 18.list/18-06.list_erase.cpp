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
		cout << *i << " ";
	cout << endl;
	listAnother.assign(4, 1);

	for (i = listAnother.begin(); i != listAnother.end(); ++i)
		cout << *i << " ";
	cout << endl;
	listAnother.erase(listAnother.begin());

	for (i = listAnother.begin(); i != listAnother.end(); ++i)
		cout << *i << " ";
	cout << endl;

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
	std::list <int> listIntegers;

	listIntegers.push_front(4);
	listIntegers.push_front(3);

	// Store an iterator obtained in using the 'insert' function
	list <int>::iterator iElementValueTwo;
	iElementValueTwo = listIntegers.insert(listIntegers.begin(), 2);

	listIntegers.push_front(1);
	listIntegers.push_front(0);

	// Insert an element at the end...
	listIntegers.push_back(5);

	cout << "Initial contents of the list:" << endl;
	PrintListContents(listIntegers);

	listIntegers.erase(listIntegers.begin(), iElementValueTwo);
	cout << "Contents after erasing a range of elements:" << endl;
	PrintListContents(listIntegers);

	cout << "Contents after erasing element '" << *iElementValueTwo << "':" << endl;
	listIntegers.erase(iElementValueTwo);
	PrintListContents(listIntegers);

	listIntegers.erase(listIntegers.begin(), listIntegers.end());
	cout << "Contents after erasing a range:" << endl;
	PrintListContents(listIntegers);

	return 0;
}

void PrintListContents(const list <int>& listInput)
{
	if (listInput.size() > 0)
	{
		std::list <int>::const_iterator i;
		for (i = listInput.begin(); i != listInput.end(); ++i)
			cout << *i << " ";
	}
	else
		cout << "List is empty!" << endl;
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
		cout << *i << " ";
	cout << endl;
	listAnother.assign(4, 1);

	for (i = listAnother.begin(); i != listAnother.end(); ++i)
		cout << *i << " ";
	cout << endl;
	listAnother.erase(listAnother.begin());

	for (i = listAnother.begin(); i != listAnother.end(); ++i)
		cout << *i << " ";
	cout << endl;
	listAnother.erase(listAnother.begin(), listAnother.end());
	if (listAnother.empty())
		cout << "All gone\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <algorithm>  // for find
using namespace std;

int main(void)
{
	string s("remembering");

	list<char> list1(s.begin(), s.end());

	list<char>::iterator j;

	j = find(list1.begin(), list1.end(), 'i');

	list1.erase(j++);

	list<char>::iterator i;

	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i << " ";
	cout << "\n\n\n";
	// j now points to the 'n':
	list1.erase(j++);
	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i << " ";
	cout << "\n\n\n";

	// j now points to the 'g':
	list1.erase(j++);
	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i << " ";
	cout << "\n\n\n";
	list1.erase(list1.begin());
	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i << " ";
	cout << "\n\n\n";

	list1.erase(list1.begin());
	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i << " ";
	cout << "\n\n\n";

	return 0;
}
#endif
