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
