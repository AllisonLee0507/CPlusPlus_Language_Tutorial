#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <map> // map class-template definition

int main(void)
{
	std::map< int, double, std::less< int > > pairs;

	pairs.insert(std::map< int, double, std::less< int > >::value_type(15, 2.7));
	pairs.insert(std::map< int, double, std::less< int > >::value_type(30, 111.11));
	pairs.insert(std::map< int, double, std::less< int > >::value_type(0, 1010.1));
	pairs.insert(std::map< int, double, std::less< int > >::value_type(10, 22.22));
	pairs.insert(std::map< int, double, std::less< int > >::value_type(25, 33.333));
	pairs.insert(std::map< int, double, std::less< int > >::value_type(0, 77.54)); // dup ignored
	pairs.insert(std::map< int, double, std::less< int > >::value_type(20, 9.345));
	pairs.insert(std::map< int, double, std::less< int > >::value_type(15, 99.3)); // dup ignored

	cout << "pairs contains:\nKey\tValue\n";

	// use const_iterator to walk through elements of pairs
	for (std::map< int, double, std::less< int > >::const_iterator iter = pairs.begin();
		iter != pairs.end(); ++iter)
		cout << iter->first << '\t' << iter->second << '\n';

	pairs[25] = 9999.99; // use subscripting to change value for key 25

	cout << "\n\n\n";

	// use const_iterator to walk through elements of pairs
	for (std::map< int, double, std::less< int > >::const_iterator iter = pairs.begin();
		iter != pairs.end(); ++iter)
		cout << iter->first << '\t' << iter->second << '\n';

	cout << endl;

	return 0;
}
#endif
