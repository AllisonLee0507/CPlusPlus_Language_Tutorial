#if 0
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
	map<string, int> m;

	m.insert(pair<string, int>("A", 100));
	m.insert(pair<string, int>("G", 300));
	m.insert(pair<string, int>("B", 200));

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

void show(const char *msg, map<string, string> mp);

int main(void)
{
	map<string, string> phonemap;

	phonemap["A"] = "444-555-1234";
	phonemap["B"] = "555-555-6576";
	phonemap["C"] = "555-555-9843";

	show("Here is the original map: ", phonemap);

	phonemap["B"] = "555 555-5555";
	cout << "New number: " << phonemap["B"] << endl;

	// Create a pair object that will contain the result of a call to insert().
	pair<map<string, string>::iterator, bool> result;

	// Use insert() to add an entry.
	result = phonemap.insert(pair<string, string>("J", "555-9999"));
	if (result.second) cout << "J added.";
	show("phonemap after adding J: ", phonemap);

	return 0;
}

// Display the contents of a map<string, string> by using an iterator.
void show(const char *msg, map<string, string> mp) {
	map<string, string>::iterator itr;

	cout << msg << endl;

	for (itr = mp.begin(); itr != mp.end(); ++itr)
		cout << " " << itr->first << ": " << itr->second << endl;

	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

void show(const char *msg, map<string, string> mp);

int main(void)
{
	map<string, string> phonemap;

	phonemap["A"] = "444-555-1234";
	phonemap["B"] = "555-555-6576";
	phonemap["C"] = "555-555-9843";

	show("Here is the original map: ", phonemap);
	cout << endl;

	// Now, change the phone number for Ken.
	phonemap["B"] = "555 555-5555";
	cout << "New number for Ken: " << phonemap["Ken"] << "\n\n";

	// Create a pair object that will contain the result of a call to insert().
	pair<map<string, string>::iterator, bool> result;

	// Duplicate keys are not allowed, as the following proves.
	result = phonemap.insert(pair<string, string>("B", "555-1010"));
	if (result.second)
		cout << "Duplicate added! Error!";
	else
		cout << "Duplicate not allowed.\n";
	show("phonemap after attempt to add duplicate key: ", phonemap);

	return 0;
}

// Display the contents of a map<string, string> by using an iterator.
void show(const char *msg, map<string, string> mp) {
	map<string, string>::iterator itr;

	cout << msg << endl;

	for (itr = mp.begin(); itr != mp.end(); ++itr)
		cout << " " << itr->first << ": " << itr->second << endl;

	cout << endl;
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
	MAP_INT_STRING mapIntToString;
	mapIntToString.insert(make_pair(-1, "Minus One"));

	cout << "The map contains " << mapIntToString.size();
	cout << " key-value pairs. " << endl;
	cout << "The elements in the map are: " << endl;

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
	MAP_INT_STRING mapIntToString;

	mapIntToString.insert(pair <int, string>(1000, "One Thousand"));

	cout << "The map contains " << mapIntToString.size();
	cout << " key-value pairs. " << endl;
	cout << "The elements in the map are: " << endl;

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
	MAP_INT_STRING mapIntToString;

	// Insert using an array-like syntax for inserting key-value pairs
	mapIntToString[1000000] = "One Million";

	cout << "The map contains " << mapIntToString.size();
	cout << " key-value pairs. " << endl;
	cout << "The elements in the map are: " << endl;

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
	MAP_INT_STRING mapIntToString;

	// Insert key-value pairs into the map using value_type
	mapIntToString.insert(MAP_INT_STRING::value_type(3, "Three"));

	cout << "The map contains " << mapIntToString.size();
	cout << " key-value pairs. " << endl;
	cout << "The elements in the map are: " << endl;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main(void)
{
	const char* word[] = { "A", "B", "C", "D", "E" };
	const char* clue[] = { "a", "b", "c", "d", "e" };

	map<string, string> dictionary1;
	transform(word, word + sizeof(word) / sizeof(word[0]), clue, inserter(dictionary1, dictionary1.end()), make_pair<string, string>);
	cout << "There are " << dictionary1.size() << " words in the dictionary\n\n";

	cout << "The clue for POPS is \"" << dictionary1["POPS"] << "\"\n"
		<< "The clue for TAT is \"" << dictionary1["TAT"] << "\"\n"
		<< "The clue for ESPO0 is \"" << dictionary1["ESPO0"] << "\"\n";

	cout << "\nThere are " << dictionary1.size() << " words in the dictionary\n\n";

	// use subscript operator to write value
	dictionary1["ESPO0"] = "Typo in name";
	cout << "The clue for ESPO0 is \"" << dictionary1["ESPO0"] << "\"";
	return 0;
}
#endif



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

	cout << endl;

	return 0;
}
#endif