#if 0
#include <iostream>
#include <cassert>
#include <string>
#include <deque>
#include <algorithm> // for reverse
using namespace std;

int main(void)
{
	string s("abcdef");


	deque<char> deque1(s.begin(), s.end());

	deque<char>::iterator i;

	for (i = deque1.begin(); i != deque1.end(); ++i)
		cout << *i;

	cout << "\n\n\n";

	reverse(deque1.begin(), deque1.end());

	for (i = deque1.begin(); i != deque1.end(); ++i)
		cout << *i;

	return 0;
}
#endif
