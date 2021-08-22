#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	string s("abcdefghihklmnopqrstuvwxyz");

	vector<char> vector1(s.begin(), s.end());

	copy_backward(vector1.begin(), vector1.end() - 2, vector1.end());
	vector<char>::iterator pos;

	for (pos = vector1.begin(); pos != vector1.end(); ++pos) {
		cout << *pos << ' ';
	}

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[5] = { 1, 3, 5, 7, 9 };
	int a2[5] = { 2, 4, 5, 7, 9 };

	std::vector< int > v1(a1, a1 + 5);
	std::vector< int > v2(a2, a2 + 5);

	std::ostream_iterator< int > output(cout, " ");

	std::copy(v1.begin(), v1.end(), output); // display vector output
	std::copy(v2.begin(), v2.end(), output); // display vector output

	std::vector< int > results(v1.size());

	// place elements of v1 into results in reverse order
	std::copy_backward(v1.begin(), v1.end(), results.end());
	cout << "\n\nAfter copy_backward, results contains: ";
	std::copy(results.begin(), results.end(), output);

	cout << endl;
	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main(void)
{
	list <int> l;

	for (int nCount = 0; nCount < 10; ++nCount)
		l.push_back(nCount);

	list <int>::const_iterator li;
	for (li = l.begin(); li != l.end(); ++li)
		cout << *li << ' ';

	vector <int> v(l.size() * 2);

	copy_backward(l.begin(), l.end(), v.end());

	vector <int>::const_iterator vi;
	for (vi = v.begin(); vi != v.end(); ++vi)
		cout << *vi << ' ';

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	const int SIZE = 5;
	int a1[SIZE] = { 1, 3, 5, 7, 9 };
	int a2[SIZE] = { 2, 4, 5, 7, 9 };
	vector< int > v1(a1, a1 + SIZE);
	vector< int > v2(a2, a2 + SIZE);

	vector< int > results(v1.size());
	copy_backward(v1.begin(), v1.end(), results.end());

	vector< int > results2(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), results2.begin());

	vector< int >::iterator endLocation;
	endLocation = unique(results2.begin(), results2.end());

	reverse(v1.begin(), v1.end());

	cout << endl;
	return 0;
}
#endif
