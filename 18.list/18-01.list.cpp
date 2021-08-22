#if 0
#include <list>
#include <iostream>
#include <string>

using namespace std;
typedef list<string> LISTSTR;


int main(void)
{
	LISTSTR::iterator i;
	LISTSTR test;                       // default constructor

	test.insert(test.end(), "one");
	test.insert(test.end(), "two");

	LISTSTR test2(test);                      // construct from another list
	LISTSTR test3(3, "three");                // construct with three elements
	// containing the value "three" 
	LISTSTR test4(++test3.begin(), test3.end());  // create from part of test3

	for (i = test.begin(); i != test.end(); ++i)
		cout << *i << " ";
	cout << endl;

	for (i = test2.begin(); i != test2.end(); ++i)
		cout << *i << " ";
	cout << endl;

	for (i = test3.begin(); i != test3.end(); ++i)
		cout << *i << " ";
	cout << endl;

	for (i = test4.begin(); i != test4.end(); ++i)
		cout << *i << " ";
	cout << endl;

	return 0;
}
#endif


#if 0
#include <iomanip>
#include <iostream>
#include <list>
#include <vector> 

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const int data[] = { 1, 1, 2, 3, 5 };
	list<int> original(data, data + sizeof(data) / sizeof(data[0]));

	// make a vector from a list
	vector<int> vector_copy(original.begin(), original.end());

	// make a list from a list
	list<int> list_copy(original);

	// make a list of floats from a list of ints
	list<float> list_float(original.begin(), original.end());

	// show results
	print(original);
	print(vector_copy);
	print(list_copy);
	cout << fixed << setprecision(1);
	print(list_float);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <algorithm>  // For reverse
using namespace std;



int main(void)
{
	char x[5] = { 'a', 'b', 'c', 'd', 'e' };

	list<char> list1(&x[0], &x[5]);


	reverse(list1.begin(), list1.end());

	list<char>::iterator i;

	cout.precision(10);

	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i << endl;

	cout << endl;


	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <algorithm>  // For reverse
using namespace std;

int main(void)
{
	string x[5] = { "asdf", "1234", "2345", "6789", "0000" };

	list<string> list1(&x[0], &x[5]);


	reverse(list1.begin(), list1.end());

	list<string>::iterator i;

	cout.precision(10);

	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i << endl;

	cout << endl;


	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <cstring>
using namespace std;

class MyClass {
	int a, b;
	int sum;
public:
	MyClass() {
		a = b = 0;
	}
	MyClass(int i, int j) {
		a = i;
		b = j;
		sum = a + b;
	}
	int getsum() {
		return sum;
	}

	friend bool operator<(const MyClass &o1, const MyClass &o2);
	friend bool operator>(const MyClass &o1, const MyClass &o2);
	friend bool operator==(const MyClass &o1, const MyClass &o2);
	friend bool operator!=(const MyClass &o1, const MyClass &o2);
};

bool operator<(const MyClass &o1, const MyClass &o2)
{
	return o1.sum < o2.sum;
}

bool operator>(const MyClass &o1, const MyClass &o2)
{
	return o1.sum > o2.sum;
}

bool operator==(const MyClass &o1, const MyClass &o2)
{
	return o1.sum == o2.sum;
}

bool operator!=(const MyClass &o1, const MyClass &o2)
{
	return o1.sum != o2.sum;
}

int main(void)
{
	list<MyClass> lst1;
	for (int i = 0; i<10; i++) lst1.push_back(MyClass(i, i));

	cout << "First list: ";
	list<MyClass>::iterator p = lst1.begin();
	while (p != lst1.end()) {
		cout << p->getsum() << " ";
		p++;
	}
	cout << endl;

	// create a second list
	list<MyClass> lst2;
	for (int i = 0; i<10; i++) lst2.push_back(MyClass(i * 2, i * 3));

	cout << "Second list: ";
	p = lst2.begin();
	while (p != lst2.end()) {
		cout << p->getsum() << " ";
		p++;
	}
	cout << endl;

	lst1.merge(lst2);

	cout << "Merged list: ";
	p = lst1.begin();
	while (p != lst1.end()) {
		cout << p->getsum() << " ";
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

	// insert items in values
	values.push_front(1);
	values.push_front(2);
	values.push_back(4);
	values.push_back(3);

	cout << "values contains: ";
	std::ostream_iterator< int > output(cout, " ");
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

template < typename T > void printList(const std::list< T > &listRef);

int main(void)
{
	int array[4] = { 2, 6, 4, 8 };
	std::list< int > values;      // create list of ints
	std::list< int > otherValues; // create list of ints

	// insert items in values
	values.push_front(1);
	values.push_front(2);
	values.push_back(4);
	values.push_back(3);

	cout << "values contains: ";
	printList(values);
	cout << endl;
	return 0;
}

template < typename T > void printList(const std::list< T > &listRef)
{
	std::ostream_iterator< T > output(cout, " ");
	std::copy(listRef.begin(), listRef.end(), output);
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <list>      // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

template < typename T > void printList(const std::list< T > &listRef);

int main(void)
{
	int array[4] = { 2, 6, 4, 8 };
	std::list< int > values;      // create list of ints
	std::list< int > otherValues; // create list of ints

	// insert items in values
	values.push_front(1);
	values.push_front(2);
	values.push_back(4);
	values.push_back(3);

	cout << "values contains: ";
	printList(values);
	cout << endl;
	return 0;
}

template < typename T > void printList(const std::list< T > &listRef)
{
	std::ostream_iterator< T > output(cout, " ");
	std::copy(listRef.begin(), listRef.end(), output);
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <set>
using namespace std;

int main(void)
{
	string s("There is no distinctly native American criminal class");

	list<char> list1(s.begin(), s.end());

	// Put the characters in list1 into multiset1:
	multiset<char> multiset1;
	list<char>::iterator i;
	for (i = list1.begin(); i != list1.end(); ++i)
		multiset1.insert(*i);

	// Put the characters in multiset1 into list2:
	list<char> list2;
	multiset<char>::iterator k;
	for (k = multiset1.begin(); k != multiset1.end(); ++k)
		list2.push_back(*k);


	for (i = list2.begin(); i != list2.end(); ++i)
		cout << *i;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <set>
using namespace std;

int main(void)
{
	string s("There is no distinctly native American criminal class");


	list<char> list1(s.begin(), s.end());

	// Put the characters in list1 into set1:
	set<char> set1;
	list<char>::iterator i;

	for (i = list1.begin(); i != list1.end(); ++i)
		set1.insert(*i);

	set<char>::iterator j;

	list<char> list2;
	set<char>::iterator k;
	for (k = set1.begin(); k != set1.end(); ++k)
		list2.push_back(*k);


	for (i = list2.begin(); i != list2.end(); ++i)
		cout << *i;

	return 0;
}
#endif