#if 0
#include <map>
#include <iostream>
#include <string>

using namespace std;

typedef multimap <int, string> MULTIMAP_INT_STRING;

int main(void)
{
	MULTIMAP_INT_STRING  mmapIntToString;

	mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(3, "Three"));
	mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(45, "Forty Five"));

	// Eraseing an element with key as -1 from the multimap
	if (mmapIntToString.erase(-1) > 0)
		cout << "Erased all pairs with -1 as key." << endl;

	MULTIMAP_INT_STRING::const_iterator iPairLocator;

	// Print the contents of the multimap to the screen
	for (iPairLocator = mmapIntToString.begin()
		; iPairLocator != mmapIntToString.end()
		; ++iPairLocator)
	{
		cout << "Key: " << iPairLocator->first;
		cout << ", Value: " << iPairLocator->second.c_str() << endl;
	}

	return 0;
}
#endif


#if 0
#include <map>
#include <iostream>
#include <string>

using namespace std;

typedef multimap <int, string> MULTIMAP_INT_STRING;

int main(void)
{
	MULTIMAP_INT_STRING  mmapIntToString;

	mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(3, "Three"));
	mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(45, "Forty Five"));

	// Erase an element given an iterator from the multimap
	MULTIMAP_INT_STRING::iterator iElementLocator = mmapIntToString.find(45);
	if (iElementLocator != mmapIntToString.end())
	{
		mmapIntToString.erase(iElementLocator);
		cout << "Erased a pair with 45 as key using an iterator" << endl;
	}
	MULTIMAP_INT_STRING::const_iterator iPairLocator;

	// Print the contents of the multimap to the screen
	for (iPairLocator = mmapIntToString.begin()
		; iPairLocator != mmapIntToString.end()
		; ++iPairLocator)
	{
		cout << "Key: " << iPairLocator->first;
		cout << ", Value: " << iPairLocator->second.c_str() << endl;
	}

	return 0;
}
#endif



#if 0
include <map>
#include <iostream>
#include <string>

using namespace std;

typedef multimap <int, string> MULTIMAP_INT_STRING;

int main(void)
{
	MULTIMAP_INT_STRING  mmapIntToString;

	mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(3, "Three"));
	mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(45, "Forty Five"));

	// Erase a range from the multimap...
	cout << "Erasing the range of pairs with 1000 as key." << endl;
	mmapIntToString.erase(mmapIntToString.lower_bound(1000)
		, mmapIntToString.upper_bound(1000));

	cout << endl;
	cout << "The multimap now contains " << mmapIntToString.size();
	cout << " key-value pair(s)." << "They are: " << endl;

	MULTIMAP_INT_STRING::const_iterator iPairLocator;

	// Print the contents of the multimap to the screen
	for (iPairLocator = mmapIntToString.begin()
		; iPairLocator != mmapIntToString.end()
		; ++iPairLocator)
	{
		cout << "Key: " << iPairLocator->first;
		cout << ", Value: " << iPairLocator->second.c_str() << endl;
	}

	return 0;
}
#endif
