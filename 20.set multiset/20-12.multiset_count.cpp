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

	cout << "There are currently " << intMultiset.count(15)
		<< " values of 15 in the multiset\n";
	return 0;
}
#endif
