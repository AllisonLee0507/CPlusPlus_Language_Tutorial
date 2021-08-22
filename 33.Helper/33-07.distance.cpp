#if 0
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	cout << v.size() << endl;
	cout << distance(v.begin(), v.end()) << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int> coll;

	// insert elements from -3 to 9
	for (int i = -3; i <= 9; ++i) {
		coll.push_back(i);
	}

	// search element with value 5
	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(),    // range
		5);                          // value

	if (pos != coll.end()) {
		// process and print difference from the beginning
		cout << "difference between beginning and 5: "
			<< distance(coll.begin(), pos) << endl;
	}
	else {
		cout << "5 not found" << endl;
	}

	return 0;
}
#endif