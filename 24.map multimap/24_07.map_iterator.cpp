#if 0
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	typedef map<string, float> StringFloatMap;

	StringFloatMap coll;

	// insert some elements into the collection
	coll["VAT"] = 0.15;
	coll["Pi"] = 3.1415;
	coll["an arbitrary number"] = 4983.223;
	coll["Null"] = 0;

	/* print all elements
	* - iterate over all elements
	* - element member first is the key
	* - element member second is the value
	*/
	StringFloatMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << "key: \"" << pos->first << "\" "
			<< "value: " << pos->second << endl;
	}
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

	// Declare an iterator to a map<string, int>.
	map<string, int>::iterator itr;

	// Display the first element in m.
	itr = m.begin();
	cout << "Here is the first key/value pair in m: "
		<< itr->first << ", " << itr->second << endl;

	return 0;
}
#endif



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

	// Declare an iterator to a map<string, int>.
	map<string, int>::iterator itr;

	// Display the last element in m.
	itr = m.end();
	--itr;
	cout << "Here is the last key/value pair in m: "
		<< itr->first << ", " << itr->second << "\n\n";


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
	cout << endl;

	phonemap["B"] = "555 555-5555";
	cout << "New number for B: " << phonemap["B"] << endl;

	// Use find() to find a number.
	map<string, string>::iterator itr;
	itr = phonemap.find("A");
	if (itr != phonemap.end())
		cout << "Number for A is " << itr->second << endl;

	// Cycle through the map in the reverse direction.
	map<string, string>::reverse_iterator ritr;
	cout << "Display phonemap in reverse order:" << endl;
	for (ritr = phonemap.rbegin(); ritr != phonemap.rend(); ++ritr)
		cout << " " << ritr->first << ": " << ritr->second << endl;
	cout << endl;

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

	phonemap["B"] = "555 555-5555";
	cout << "New number: " << phonemap["B"] << endl;

	// Cycle through the map in the reverse direction.
	map<string, string>::reverse_iterator ritr;
	cout << "Display phonemap in reverse order:" << endl;
	for (ritr = phonemap.rbegin(); ritr != phonemap.rend(); ++ritr)
		cout << ritr->first << ": " << ritr->second << endl;

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

using namespace std;

int main(void)
{
	map<string, int> m;

	m.insert(pair<string, int>("A", 100));
	m.insert(pair<string, int>("G", 300));
	m.insert(pair<string, int>("B", 200));

	// Declare an iterator to a map<string, int>.
	map<string, int>::iterator itr;

	// Declare a reverse iterator to a map<string, itr>.
	map<string, int>::reverse_iterator ritr;

	// show the contents of m in reverse order.
	cout << "The contents of m in reverse:\n";

	for (ritr = m.rbegin(); ritr != m.rend(); ++ritr)
		cout << "  " << ritr->first << ", " << ritr->second << endl;
	cout << endl;


	return 0;
}
#endif



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

	// Declare an iterator to a map<string, int>.
	map<string, int>::iterator itr;

	// Display the first element in m.
	itr = m.begin();
	cout << "Here is the first key/value pair in m: "
		<< itr->first << ", " << itr->second << endl;

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

	mapIntToString.insert(MAP_INT_STRING::value_type(3, "Three"));

	MAP_INT_STRING::const_iterator iMapPairLocator;

	for (iMapPairLocator = mapIntToString.begin(); iMapPairLocator != mapIntToString.end(); ++iMapPairLocator)
	{
		cout << "Key: " << iMapPairLocator->first;
		cout << " Value: " << iMapPairLocator->second.c_str();

		cout << endl;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	// type of the collection
	typedef multimap<int, string> IntStringMMap;

	IntStringMMap coll;        // container for int/string values

	// insert some elements in arbitrary order
	// - a value with key 1 gets inserted twice
	coll.insert(make_pair(5, "tagged"));
	coll.insert(make_pair(2, "a"));
	coll.insert(make_pair(1, "this"));
	coll.insert(make_pair(4, "of"));
	coll.insert(make_pair(6, "strings"));
	coll.insert(make_pair(1, "is"));
	coll.insert(make_pair(3, "multimap"));

	/* print all element values
	* - iterate over all elements
	* - element member second is the value
	*/
	IntStringMMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << pos->second << ' ';
	}
	cout << endl;

	return 0;
}
#endif