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
	coll.push_front("first string");

	// print elements separated by newlines
	copy(coll.begin(), coll.end(),
		ostream_iterator<string>(cout, "\n"));
	cout << endl;

	return 0;
}
#endif


#if 0
#include <deque>
#include <iostream>
#include <algorithm>

int main(void)
{
	using namespace std;

	deque <int> dqIntegers;

	dqIntegers.push_back(3);
	dqIntegers.push_back(4);
	dqIntegers.push_back(5);

	dqIntegers.push_front(2);
	dqIntegers.push_front(1);
	dqIntegers.push_front(0);

	for (size_t nCount = 0; nCount < dqIntegers.size(); ++nCount){
		cout << "Element [" << nCount << "] = ";
		cout << dqIntegers[nCount] << endl;
	}

	// Erase an element at the top
	dqIntegers.pop_front();

	// Erase an element at the bottom
	dqIntegers.pop_back();

	deque <int>::iterator iElementLocator;
	for (iElementLocator = dqIntegers.begin(); iElementLocator != dqIntegers.end(); ++iElementLocator)
	{
		size_t nOffset = distance(dqIntegers.begin(), iElementLocator);
		cout << "Element [" << nOffset << "] = " << *iElementLocator << endl;
	}

	return 0;
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

	// Push an element onto the front of dq.
	dq.push_front(-31416);
	show("dq after call to push_front(): ", dq);
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
using namespace std;

int main(void)
{
	deque<float> coll;    // deque container for floating-point elements

	// insert elements from 1.1 to 6.6 each at the front
	for (int i = 1; i <= 6; ++i) {
		coll.push_front(i*1.1);      // insert at the front
	}

	// print all elements followed by a space
	for (int i = 0; i<coll.size(); ++i) {
		cout << coll[i] << ' ';
	}
	cout << endl;

	return 0;
}
#endif
