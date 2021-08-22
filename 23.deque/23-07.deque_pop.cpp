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

	int sum = 0;
	for (unsigned i = 0; i < dq.size(); ++i) sum += dq[i];
	double avg = sum / dq.size();
	cout << avg << endl;

	// Add elements to the end of dq.
	dq.push_back(100);
	dq.push_back(121);

	show("dq after pushing elements onto the end: ", dq);

	// Now use pop_back() to remove one element.
	dq.pop_back();
	show("dq after back-popping one element: ", dq);

	cout << *dq.begin() << ", " << *(dq.end() - 1) << "\n\n";

	cout << *dq.rbegin() << ", " << *(dq.rend() - 1) << "\n\n";

	return 0;
}

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

void show(const char *msg, deque<int> q);

int main(void)
{
	deque<int> dq(10);

	for (unsigned i = 0; i < dq.size(); ++i) dq[i] = i*i;

	show("Contents of dq: ", dq);

	// clear dq by popping elements one at a time.
	cout << "Front popping elements from dq.\n";
	while (dq.size() > 0) {
		cout << "Popping: " << dq.front() << endl;
		dq.pop_front();
	}
	if (dq.empty()) cout << "dq is now empty.\n";

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
	coll.push_front("first string");

	// print elements separated by newlines
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
	cout << endl;

	// remove first and last element
	coll.pop_front();
	coll.pop_back();

	// print elements separated by newlines
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
	cout << endl;

	return 0;
}
#endif
