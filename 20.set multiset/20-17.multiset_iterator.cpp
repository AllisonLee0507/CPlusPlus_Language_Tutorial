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

	intMultiset.insert(15);
	intMultiset.insert(15);


	// iterator that cannot be used to change element values
	std::multiset< int, std::less< int > >::const_iterator result;

	// find 15 in intMultiset; find returns iterator
	result = intMultiset.find(15);

	if (result != intMultiset.end()) // if iterator not at end
		cout << "Found value 15\n"; // found search value 15

	cout << endl;
	return 0;
}
#endif
