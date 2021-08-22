#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	vector<int> v;
	back_insert_iterator<std::vector<int> > p = back_inserter(v);

	for (int i = 0; i < 10; ++i)
		*p = i;

	for (int i = 0; i < 10; ++i){
		cout << v[i];
	}

	cout << "\n\n\n";
	random_shuffle(v.begin(), v.end());

	for (int i = 0; i < 10; ++i){
		cout << v[i];
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

int main(void)
{
	string arrStr[5] = { "A", "B", "A", "D", "E" };

	list<string> lstStrDest;
	unique_copy(&arrStr[0], &arrStr[5], back_inserter(lstStrDest));

	for (list<string>::iterator p = lstStrDest.begin();
		p != lstStrDest.end(); ++p) {
		cout << *p << endl;
	}

	return 0;
}
#endif
