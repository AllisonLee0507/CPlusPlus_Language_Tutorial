#if 0
#include <iostream>
#include <map>
#include <string>
using namespace std;

void shownumbers(const char *n, multimap<string, string> mp);

int main(void)
{
	multimap<string, string> phonemap;

	// Insert elements by using operator[].
	phonemap.insert(pair<string, string>("A", "B: 555-1111"));
	phonemap.insert(pair<string, string>("C", "D: 555-1234"));
	phonemap.insert(pair<string, string>("E", "F: 555-1122"));

	phonemap.insert(pair<string, string>("J", "K: 314 555-2222"));
	phonemap.insert(pair<string, string>("L", "M: 314 555-3322"));

	phonemap.insert(pair<string, string>("O", "P: 666 555-9876"));
	phonemap.insert(pair<string, string>("Q", "R: 555 555-1010"));
	phonemap.insert(pair<string, string>("S", "T: 444 555-9999"));

	shownumbers("A", phonemap);
	shownumbers("C", phonemap);
	shownumbers("E", phonemap);

	int count = phonemap.erase("A");
	cout << count << " elements have been removed.\n\n";

	shownumbers("Ken", phonemap);

	return 0;
}

// Show all numbers for a given name.
void shownumbers(const char *n, multimap<string, string> mmp) {
	multimap<string, string>::iterator itr;

	// Find the first matching key.
	itr = mmp.find(n);

	if (itr != mmp.end()) {
		cout << "the numbers for " << n << ": " << endl;
		do {
			cout << " " << itr->second << endl;
			++itr;
		} while (itr != mmp.upper_bound(n));
	}
	else
		cout << "No entry for " << n << " found." << endl;
}
#endif


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

	cout << endl << "The multimap contains " << mmapIntToString.size();
	cout << " key-value pairs." << endl;
	cout << "The elements in the multimap are: " << endl;


	return 0;
}
#endif



#if 0
#include <map>
#include <iostream>

using namespace std;

typedef map <int, string> MAP_INT_STRING;
typedef multimap <int, string> MMAP_INT_STRING;

int main(void)
{
	MMAP_INT_STRING mmapIntToString;

	mmapIntToString.insert(make_pair(-1, "Minus One"));

	cout << endl << "The multimap contains " << mmapIntToString.size();
	cout << " key-value pairs." << endl;
	cout << "The elements in the multimap are: " << endl;


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