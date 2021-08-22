#if 0
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

template <class K, class V>
class value_equals {
private:
	V value;
public:
	// constructor (initialize value to compare with)
	value_equals(const V& v)
		: value(v) {
	}
	// comparison
	bool operator() (pair<const K, V> elem) {
		return elem.second == value;
	}
};

int main(void)
{
	typedef map<float, float> FloatFloatMap;
	FloatFloatMap coll;
	FloatFloatMap::iterator pos;

	// fill container
	coll[1] = 7;
	coll[2] = 4;
	coll[3] = 2;
	coll[4] = 3;
	coll[5] = 6;
	coll[6] = 1;
	coll[7] = 3;

	// search an element with key 3.0
	pos = coll.find(3.0);                     // logarithmic complexity
	if (pos != coll.end()) {
		cout << pos->first << ": "
			<< pos->second << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

template <class K, class V>
class value_equals {
private:
	V value;
public:
	// constructor (initialize value to compare with)
	value_equals(const V& v)
		: value(v) {
	}
	// comparison
	bool operator() (pair<const K, V> elem) {
		return elem.second == value;
	}
};

int main(void)
{
	typedef map<float, float> FloatFloatMap;
	FloatFloatMap coll;
	FloatFloatMap::iterator pos;

	// fill container
	coll[1] = 7;
	coll[2] = 4;
	coll[3] = 2;
	coll[4] = 3;
	coll[5] = 6;
	coll[6] = 1;
	coll[7] = 3;

	// search an element with value 3.0
	pos = find_if(coll.begin(), coll.end(),    // linear complexity
		value_equals<float, float>(3.0));
	if (pos != coll.end()) {
		cout << pos->first << ": "
			<< pos->second << endl;
	}

	return 0;
}
#endif



#if 0
#include <map>
#include <iostream>
#include <string>

using namespace std;
typedef map<int, string> INT2STRING;

int main(void)
{
	INT2STRING theMap;
	INT2STRING::iterator theIterator;
	string theString = "One, Two";
	int index = 1;

	theMap.insert(INT2STRING::value_type(0, "Zero"));
	theMap.insert(INT2STRING::value_type(1, "One"));
	theMap.insert(INT2STRING::value_type(2, "Two"));
	theMap.insert(INT2STRING::value_type(3, "Three"));
	theMap.insert(INT2STRING::value_type(4, "Four"));
	theMap.insert(INT2STRING::value_type(5, "Five"));
	theMap.insert(INT2STRING::value_type(6, "Six"));
	theMap.insert(INT2STRING::value_type(7, "Seven"));
	theMap.insert(INT2STRING::value_type(8, "Eight"));
	theMap.insert(INT2STRING::value_type(9, "Nine"));


	for (index = 0; index < theString.length(); index++){
		theIterator = theMap.find(theString[index] - '0');
		if (theIterator != theMap.end())      // is 0 - 9
			cout << (*theIterator).second << " ";
		else                // not 0 - 9
			cout << "[err] ";
	}
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

	// Use find() to find a number.
	map<string, string>::iterator itr;
	itr = phonemap.find("B");
	if (itr != phonemap.end())
		cout << "Number is " << itr->second << endl;

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
