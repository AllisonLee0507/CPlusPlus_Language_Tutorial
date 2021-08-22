#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main(void)
{
	int array[6] = { 1, 2, 3, 4, 5, 6 }; // initialize array
	vector< int > integers; // create vector of ints

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	// two const reverse iterators
	vector< int >::const_reverse_iterator reverseIterator;
	vector< int >::const_reverse_iterator tempIterator = integers.rend();

	// Display vector in reverse order using reverse_iterator
	for (reverseIterator = integers.rbegin();
		reverseIterator != tempIterator; ++reverseIterator)
		cout << *reverseIterator << ' ';


	cout << endl;
	return 0;
}
#endif
