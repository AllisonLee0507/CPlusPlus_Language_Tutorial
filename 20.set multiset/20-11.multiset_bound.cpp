#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <set> // multiset class-template definition

#include <algorithm> // copy algorithm
#include <iterator> // ostream_iterator

int main(void)
{
	int a[10] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
	std::multiset< int, std::less< int > > intMultiset;
	std::ostream_iterator< int > output(cout, " ");

	// insert elements of array a into intMultiset
	intMultiset.insert(a, a + 10);
	cout << "\nAfter insert, intMultiset contains:\n";
	std::copy(intMultiset.begin(), intMultiset.end(), output);

	// determine lower and upper bound of 22 in intMultiset
	cout << "\nUpper bound of 22: " << *(intMultiset.upper_bound(22));


	cout << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <set> // multiset class-template definition

#include <algorithm> // copy algorithm
#include <iterator> // ostream_iterator

int main(void)
{
	int a[10] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
	std::multiset< int, std::less< int > > intMultiset;
	std::ostream_iterator< int > output(cout, " ");

	// insert elements of array a into intMultiset
	intMultiset.insert(a, a + 10);
	cout << "\nAfter insert, intMultiset contains:\n";
	std::copy(intMultiset.begin(), intMultiset.end(), output);

	// determine lower bound of 22 in intMultiset
	cout << "\n\nLower bound of 22: "
		<< *(intMultiset.lower_bound(22));


	cout << endl;
	return 0;
}
#endif
