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

	// p represents pair of const_iterators
	std::pair<std::multiset< int, std::less< int > >::const_iterator,
		std::multiset< int, std::less< int > >::const_iterator > p;

	//
	p = intMultiset.equal_range(22);

	cout << "\n\nequal_range of 22:" << "\n   Lower bound: "
		<< *(p.first) << "\n   Upper bound: " << *(p.second);

	cout << endl;

	return 0;
}
#endif
