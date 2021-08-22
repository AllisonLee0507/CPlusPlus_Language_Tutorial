#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	vector<char> v;

	for (int i = 0; i < 26; i++) v.push_back('A' + i);

	// Use not2() to reverse sort v.
	sort(v.begin(), v.end(), not2(less<char>()));

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(void)
{
	vector<char> v;

	for (int i = 0; i < 26; i++)
		v.push_back('A' + i);

	vector<char>::iterator res_end;
	res_end = remove_if(v.begin(), v.end(), not1(bind2nd(equal_to<char>(), 'H')));

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>
using namespace std;

int main(int argc, char** argv)
{
	int num;

	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);

	vector<int>::iterator it = find_if(myVector.begin(), myVector.end(), not1(bind2nd(greater_equal<int>(), 1)));
	if (it == myVector.end()) {
		cout << "All perfect scores\n";
	}
	else {
		cout << "Found a \"less-than-perfect\" score of " << *it << endl;
	}

	return 0;
}
#endif
