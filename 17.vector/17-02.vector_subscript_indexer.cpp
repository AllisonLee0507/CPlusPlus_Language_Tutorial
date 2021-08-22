#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

int main(void)
{
	vector<int> vector1(20);

	for (int i = 0; i < 20; ++i)
		vector1[i] = i;

	vector<int>::iterator pos;

	for (pos = vector1.begin(); pos != vector1.end(); ++pos) {
		cout << *pos << ' ';
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> coll;    // vector container for integer elements

	// append elements with values 1 to 6
	for (int i = 1; i <= 6; ++i) {
		coll.push_back(i);
	}

	// print all elements followed by a space
	for (int i = 0; i<coll.size(); ++i) {
		cout << coll[i] << ' ';
	}
	cout << endl;
}
#endif



#if 0
#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
	vector<int> coll;

	// insert elements from -3 to 9
	for (int i = -3; i <= 9; ++i) {
		coll.push_back(i);
	}

	/* print all elements
	* - NOTE: uses operator < instead of operator !=
	*/
	vector<int>::iterator pos;
	for (pos = coll.begin(); pos<coll.end(); ++pos) {
		cout << *pos << ' ';
	}
	cout << endl;
}
#endif



#if 0
#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
	vector<int> coll;

	// insert elements from -3 to 9
	for (int i = -3; i <= 9; ++i) {
		coll.push_back(i);
	}

	/* print all elements
	* - NOTE: uses operator [] instead of operator *
	*/
	for (int i = 0; i<coll.size(); ++i) {
		cout << coll.begin()[i] << ' ';
	}
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s("STRINGS");
	const char *ptr1 = 0;
	int len = s.length();
	char *ptr2 = new char[len + 1]; // including null

	ptr1 = s.data();

	// copy characters out of string into allocated memory
	s.copy(ptr2, len, 0);
	ptr2[len] = 0;  // add null terminator

	cout << s.c_str() << "\nptr1 is ";

	for (int k = 0; k < len; ++k)
		cout << *(ptr1 + k);   // use pointer arithmetic

	cout << "\nptr2 is " << ptr2 << endl;
	delete[] ptr2;
	return 0;
}
#endif
