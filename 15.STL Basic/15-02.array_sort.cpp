#if 0
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main(void)
{
	int coll[] = { 5, 6, 2, 4, 1, 3 };

	// sort beginning with the second element
	sort(coll, coll + 6);

	// print all elements
	copy(coll, coll + 6,
		ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

int main(void)
{
	int coll[] = { 5, 6, 2, 4, 1, 3 };

	// sort beginning with the second element
	sort(coll + 3, coll + 6);

	// print all elements
	copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
#endif
