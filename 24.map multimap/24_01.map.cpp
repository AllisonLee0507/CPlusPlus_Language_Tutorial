#if 0
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	map<string, long> directory;
	directory["A"] = 1234567;
	directory["B"] = 9876543;
	directory["C"] = 3459876;

	string name = "A";

	if (directory.find(name) != directory.end())
		cout << "The phone number for " << name
		<< " is " << directory[name] << "\n";
	else
		cout << "Sorry, no listing for " << name << "\n";

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
	map<string, string> directory;

	directory.insert(pair<string, string>("T", "555-4444"));
	directory.insert(pair<string, string>("C", "555-3333"));
	directory.insert(pair<string, string>("J", "555-2222"));
	directory.insert(pair<string, string>("R", "555-1111"));

	string s = "T";

	map<string, string>::iterator p;

	p = directory.find(s);
	if (p != directory.end())
		cout << "Phone number: " << p->second;
	else
		cout << "Name not in directory.\n";

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
	map<string, string> strMap;

	strMap["Monday"] = "1";
	strMap["Tuesday"] = "2";
	strMap["Wednesday"] = "3";
	strMap["Thursday"] = "4";
	strMap["Friday"] = "5";
	strMap["Saturday"] = "6";
	strMap.insert(pair<string, string>("Sunday", "7"));

	for (map<string, string>::iterator p = strMap.begin();
		p != strMap.end(); ++p) {
		cout << "English: " << p->first << ", #: " << p->second << endl;
	}

	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	map<char, int> m;

	// put pairs into map
	for (int i = 0; i<26; i++) {
		m.insert(pair<char, int>('A' + i, 65 + i));
	}

	char ch = 'G';

	map<char, int>::iterator p;

	// find value given key
	p = m.find(ch);
	if (p != m.end())
		cout << "Its ASCII value is  " << p->second;
	else
		cout << "Key not in map.\n";

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
	typedef map<string, float> StringFloatMap;

	StringFloatMap coll;

	// insert some elements into the collection
	coll["VAT"] = 0.15;
	coll["Pi"] = 3.1415;
	coll["an arbitrary number"] = 4983.223;
	coll["Null"] = 0;

	StringFloatMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << "key: \"" << pos->first << "\" "
			<< "value: " << pos->second << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main(void)
{
	// define multimap type as string/string dictionary
	typedef multimap<string, string> StrStrMMap;

	// create empty dictionary
	StrStrMMap dict;

	// insert some elements in random order
	dict.insert(make_pair("day", "Tag"));
	dict.insert(make_pair("strange", "fremd"));
	dict.insert(make_pair("car", "Auto"));
	dict.insert(make_pair("smart", "elegant"));
	dict.insert(make_pair("trait", "Merkmal"));
	dict.insert(make_pair("strange", "seltsam"));
	dict.insert(make_pair("smart", "raffiniert"));
	dict.insert(make_pair("smart", "klug"));
	dict.insert(make_pair("clever", "raffiniert"));

	// print all elements
	StrStrMMap::iterator pos;
	cout.setf(ios::left, ios::adjustfield);
	cout << ' ' << setw(10) << "english "
		<< "german " << endl;
	cout << setfill('-') << setw(20) << ""
		<< setfill(' ') << endl;
	for (pos = dict.begin(); pos != dict.end(); ++pos) {
		cout << ' ' << setw(10) << pos->first.c_str()
			<< pos->second << endl;
	}
	cout << endl;

	// print all values for key "smart"
	string word("smart");
	cout << word << ": " << endl;
	for (pos = dict.lower_bound(word);
		pos != dict.upper_bound(word); ++pos) {
		cout << "    " << pos->second << endl;
	}

	// print all keys for value "raffiniert"
	word = ("raffiniert");
	cout << word << ": " << endl;
	for (pos = dict.begin(); pos != dict.end(); ++pos) {
		if (pos->second == word) {
			cout << "    " << pos->first << endl;
		}
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class Name {
	char str[40];
public:
	Name() {
		strcpy(str, "");
	}
	Name(char *s) {
		strcpy(str, s);
	}
	char *get() {
		return str;
	}

};

// Must define less than relative to Name objects.
bool operator<(Name a, Name b)
{
	return strcmp(a.get(), b.get()) < 0;
}

class Number {
	char str[80];
public:
	Number() {
		strcmp(str, "");
	}
	Number(char *s) {
		strcpy(str, s);
	}
	char *get() {
		return str;
	}
};

int main(void)
{
	map<Name, Number> directory;

	directory.insert(pair<Name, Number>(Name("T"), Number("555-4444")));
	directory.insert(pair<Name, Number>(Name("C"), Number("555-3333")));
	directory.insert(pair<Name, Number>(Name("J"), Number("555-2222")));
	directory.insert(pair<Name, Number>(Name("R"), Number("555-1111")));

	char str[80] = "T";

	map<Name, Number>::iterator p;

	p = directory.find(Name(str));
	if (p != directory.end())
		cout << "Phone number: " << p->second.get();
	else
		cout << "Name not in directory.\n";

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

int main(void)
{
	const long N = 600000; // Length of tuples x and y
	const long S = 10;     // Sparseness factor

	map<long, double> x, y;
	for (long k = 0; 3 * k * S < N; ++k)
		x[3 * k * S] = 1.0;
	for (long k = 0; 5 * k * S < N; ++k)
		y[5 * k * S] = 1.0;

	double sum;
	map<long, double>::iterator ix, iy;

	for (sum = 0.0, ix = x.begin(); ix != x.end(); ++ix) {
		long i = ix->first;
		iy = y.find(i);
		if (iy != y.end())
			sum += ix->second * iy->second;
	}
	cout << sum << endl;
	return 0;
}
#endif