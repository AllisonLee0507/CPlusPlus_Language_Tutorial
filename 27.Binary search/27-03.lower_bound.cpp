#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[10] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
	std::vector< int > v(a1, a1 + 10);
	std::ostream_iterator< int > output(cout, " ");

	std::copy(v.begin(), v.end(), output);

	std::vector< int >::iterator lower;
	lower = std::lower_bound(v.begin(), v.end(), 6);
	cout << (lower - v.begin());

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
	const int SIZE = 10;
	int a1[] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
	vector< int > v(a1, a1 + SIZE);

	vector< int >::iterator lower;

	cout << "\n\nUse lower_bound to locate the first point\n" << "at which 5 can be inserted in order";
	lower = lower_bound(v.begin(), v.end(), 5);
	cout << "\n   Lower bound of 5 is element " << (lower - v.begin()) << " of vector v";

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
	const int SIZE = 10;
	int a1[] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
	vector< int > v(a1, a1 + SIZE);

	vector< int >::iterator lower;
	lower = lower_bound(v.begin(), v.end(), 6);
	cout << "\n\nLower bound of 6 is element " << (lower - v.begin()) << " of vector v";

	return 0;
}
#endif