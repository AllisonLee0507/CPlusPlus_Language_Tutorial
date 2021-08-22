#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

int main(void)
{
	deque<int>  deque1(5);

	for (int i = 0; i < 5; ++i)
		deque1[i] = i + 5;

	deque<int>::iterator pos;

	for (pos = deque1.begin(); pos != deque1.end(); ++pos) {
		cout << *pos << ' ';
	}

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	std::deque< double > values; // create deque of doubles
	std::ostream_iterator< double > output(cout, " ");

	// insert elements in values
	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);

	cout << "values contains: ";
	std::copy(values.begin(), values.end(), output);

	// use subscript operator to modify element at location 1
	values[1] = 5.4;
	cout << "\nAfter values[ 1 ] = 5.4, values contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	std::deque< double > values; // create deque of doubles
	std::ostream_iterator< double > output(cout, " ");

	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);

	cout << "values contains: ";
	// use subscript operator to obtain elements of values
	for (int i = 0; i < values.size(); i++)
		cout << values[i] << ' ';
	cout << endl;
	return 0;
}
#endif



#if 0
#include <deque>
#include <iostream>

using namespace std;
typedef deque<char> CHARDEQUE;
void print_contents(CHARDEQUE deque, char*);

int main(void)
{
	CHARDEQUE  a;

	if (a.empty())
		cout << "a is empty" << endl;
	else
		cout << "a is not empty" << endl;

	a.push_back('A');
	a.push_back('B');
	a.push_back('C');
	a.push_back('D');
	if (a.empty())
		cout << "a is empty" << endl;
	else
		cout << "a is not empty" << endl;
	print_contents(a, "a");

	cout << "The first element of a is  " << a[0] << endl;
	cout << "The first element of a is  " << a.at(0) << endl;
	cout << "The last element of a is  " << a[a.size() - 1] << endl;
	cout << "The last element of a is  " << a.at(a.size() - 1) << endl;

	return 0;
}

void print_contents(CHARDEQUE deque, char *name){
	CHARDEQUE::iterator pdeque;

	cout << "The contents of " << name << " : ";
	for (pdeque = deque.begin(); pdeque != deque.end(); pdeque++)
		cout << *pdeque << " ";
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <deque>

using namespace std;

void show(const char *msg, deque<int> q);

int main(void)
{

	deque<int> dq(10);

	for (unsigned i = 0; i < dq.size(); ++i) dq[i] = i*i;

	show("Contents of dq: ", dq);

	// Create another deque that contains a subrange of dq.
	deque<int> dq2(dq.begin() + 2, dq.end() - 4);

	// Display the contents of dq2 by using an iterator.
	show("dq2 contains a subrange of dq: ", dq2);
	cout << endl;

	// Change the values of some of dq2's elements.
	dq2[1] = 100;
	dq2[2] = 88;
	dq2[4] = 99;
	show("After the assignments, dq2 now contains: ", dq2);
	cout << endl;

	return 0;
}
// Display the contents of a deque<int>.
void show(const char *msg, deque<int> q) {
	cout << msg;
	for (unsigned i = 0; i < q.size(); ++i)
		cout << q[i] << " ";
	cout << "\n";
}
#endif


#if 0
#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	// create empty deque of strings
	deque<string> coll;

	// insert several elements
	coll.assign(3, string("string"));
	coll.push_back("last string");
	coll.push_front("BBB string");
	coll.push_front("CCC string");
	coll.push_front("AAA string");

	// print elements separated by newlines
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
	cout << endl;

	// insert ''another'' into every element but the first
	for (unsigned i = 1; i<coll.size(); ++i) {
		coll[i] = "another " + coll[i];
	}

	// print elements separated by newlines
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
	cout << endl;

	return 0;
}
#endif