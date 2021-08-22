#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v;
	unsigned int i;

	for (i = 0; i<10; i++) v.push_back(i);

	cout << "Initial: ";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << endl;

	reverse(v.begin(), v.end());

	cout << "Reversed: ";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	double A[6] = { 1.2, 1.3, 1.4, 1.5, 1.6, 1.7 };
	int i;

	for (i = 0; i < 6; ++i)
		cout << "A[" << i << "] = " << A[i] << "  ";
	cout << endl;
	reverse(A, A + 6);
	for (i = 0; i < 6; ++i)
		cout << "A[" << i << "] = " << A[i] << "  ";
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void)
{

	vector<string> v1, v2, v3;

	v1.push_back("a");
	v1.push_back("c");
	v1.push_back("e");

	v2.push_back("b");
	v2.push_back("d");
	v2.push_back("f");

	v3.reserve(v1.size() + v2.size() + 1);

	merge(v1.begin(), v1.end(),
		v2.begin(), v2.end(),
		back_inserter<vector<string> >(v3));

	for (int i = 0; i<6; i++){
		cout << v3[i];
	}

	return 0;
}
#endif