#if 0
#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char** argv)
{
	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);

	int num = 3;

	vector<int>::iterator it1;
	vector<int>::reverse_iterator it2;
	it1 = find(myVector.begin(), myVector.end(), num);
	it2 = find(myVector.rbegin(), myVector.rend(), num);

	if (it1 != myVector.end()) {
		cout << num << " : position " << it1 - myVector.begin() << " going forward.\n";
		cout << num << " : position " << it2.base() - 1 - myVector.begin() << " going backward.\n";
	}
	else {
		cout << "Failed to find " << num << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

static const int ARRAY_SIZE = 5;

int main(void) 
{
	list<string> lstStr;

	lstStr.push_back("A");
	lstStr.push_back("B");
	lstStr.push_back("C");
	lstStr.push_back("D");

	for (list<string>::iterator p = lstStr.begin();
		p != lstStr.end(); ++p) {
		cout << *p << endl;
	}

	for (list<string>::reverse_iterator p = lstStr.rbegin();
		p != lstStr.rend(); ++p) {
		cout << *p << endl;
	}

	return 0;
}
#endif
