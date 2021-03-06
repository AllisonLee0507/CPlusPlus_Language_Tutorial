#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <map>

int main(void)
{
	std::multimap< int, double, std::less< int > > pairs; // declare the multimap pairs

	cout << "There are currently " << pairs.count(15)
		<< " pairs with key 15 in the multimap\n";

	// insert two value_type objects in pairs
	pairs.insert(std::multimap< int, double, std::less< int > >::value_type(15, 2.7));
	pairs.insert(std::multimap< int, double, std::less< int > >::value_type(15, 99.3));

	cout << "After inserts, there are " << pairs.count(15)
		<< " pairs with key 15\n\n";

	cout << endl;

	return 0;
}
#endif
