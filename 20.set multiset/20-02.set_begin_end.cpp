#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <set>

#include <algorithm>
#include <iterator> // ostream_iterator

int main(void)
{
	double a[5] = { 2.1, 4.2, 9.5, 2.1, 3.7 };
	std::set< double, std::less< double > > doubleSet(a, a + 5);;
	std::ostream_iterator< double > output(cout, " ");

	cout << "doubleSet contains: ";
	std::copy(doubleSet.begin(), doubleSet.end(), output);

	cout << endl;
	return 0;
}
#endif
