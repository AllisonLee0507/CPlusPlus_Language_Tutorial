#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>

int main(void)
{
	std::ostream_iterator< int > output(cout, " ");

	int a2[10] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	std::vector< int > v2(a2, a2 + 10); // copy of a2
	cout << "Vector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);

	// count number of elements in v2 with value 8
	int result = std::count(v2.begin(), v2.end(), 8);
	cout << "\nNumber of elements matching 8: " << result;

	cout << endl;

	return 0;
}
#endif
