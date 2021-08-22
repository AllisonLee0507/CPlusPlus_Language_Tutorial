#if 0
#include <map>
#include <iostream>

using namespace std;

typedef map <int, string> MAP_INT_STRING;
typedef multimap <int, string> MMAP_INT_STRING;

int main(void)
{
	MMAP_INT_STRING mmapIntToString;

	mmapIntToString.insert(MMAP_INT_STRING::value_type(3, "Three"));
	mmapIntToString.insert(MMAP_INT_STRING::value_type(45, "Forty Five"));

	MMAP_INT_STRING::const_iterator iMultiMapPairLocator;

	for (iMultiMapPairLocator = mmapIntToString.begin()
		; iMultiMapPairLocator != mmapIntToString.end()
		; ++iMultiMapPairLocator)
	{
		cout << "Key: " << iMultiMapPairLocator->first;
		cout << " Value: " << iMultiMapPairLocator->second.c_str();

		cout << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <map>

int main(void)
{
	std::multimap< int, double, std::less< int > > pairs; // declare the multimap pairs

	// insert two value_type objects in pairs
	pairs.insert(std::multimap< int, double, std::less< int > >::value_type(15, 2.7));
	pairs.insert(std::multimap< int, double, std::less< int > >::value_type(15, 99.3));

	cout << "Multimap pairs contains:\nKey\tValue\n";

	// use const_iterator to walk through elements of pairs
	for (std::multimap< int, double, std::less< int > >::const_iterator iter = pairs.begin();
		iter != pairs.end(); ++iter)
		cout << iter->first << '\t' << iter->second << '\n';


	cout << endl;
	return 0;
}
#endif