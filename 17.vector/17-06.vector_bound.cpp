#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v(5);
	bool found;

	v[1] = 7; v[2] = 7; v[3] = 7; v[4] = 8;

	vector<int>::iterator k;
	k = lower_bound(v.begin(), v.end(), 7);
	cout << *k;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v(5);
	bool found;

	v[1] = 7; v[2] = 7; v[3] = 7; v[4] = 8;

	vector<int>::iterator k;
	k = upper_bound(v.begin(), v.end(), 7);
	cout << *k;

	return 0;
}
#endif
