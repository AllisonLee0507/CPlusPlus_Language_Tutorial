#if 0
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	typedef multiset<int, greater<int> > IntSet;

	IntSet coll1;        // empty multiset container

	// insert elements in random order
	coll1.insert(4);
	coll1.insert(3);
	coll1.insert(5);
	coll1.insert(1);
	coll1.insert(6);
	coll1.insert(2);
	coll1.insert(5);

	// iterate over all elements and print them
	IntSet::iterator pos;
	for (pos = coll1.begin(); pos != coll1.end(); ++pos) {
		cout << *pos << ' ';
	}
	cout << endl;

	// insert 4 again and process return value
	IntSet::iterator ipos = coll1.insert(4);
	cout << "4 inserted as element "
		<< distance(coll1.begin(), ipos) + 1
		<< endl;

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

	cout << "There are currently " << intMultiset.count(15)
		<< " values of 15 in the multiset\n";

	intMultiset.insert(15);
	intMultiset.insert(15);
	cout << "After inserts, there are " << intMultiset.count(15)
		<< " values of 15 in the multiset\n\n";


	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
	typedef multiset< int, less< int > > ims;
	ims intMultiset;    // ims for "integer multiset"

	ims::const_iterator result;

	intMultiset.insert(a, a + SIZE); // add array a to multiset

	return 0;
}
#endif
