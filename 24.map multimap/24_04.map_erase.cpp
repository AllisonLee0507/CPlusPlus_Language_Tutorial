#if 0
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	/* create map / associative array
	* - keys are strings
	* - values are floats
	*/
	typedef map<string, float> StringFloatMap;

	StringFloatMap stocks;      // create empty container

	// insert some elements
	stocks["BASF"] = 369.50;
	stocks["VW"] = 413.50;
	stocks["Daimler"] = 819.00;
	stocks["BMW"] = 834.00;
	stocks["Siemens"] = 842.20;

	// print all elements
	StringFloatMap::iterator pos;
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
		cout << "stock: " << pos->first << "\t"
			<< "price: " << pos->second << endl;
	}
	cout << endl;


	stocks.erase("VW");
	// print all elements
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
		cout << "stock: " << pos->first << "\t"
			<< "price: " << pos->second << endl;
	}
	cout << endl;

	return 0;
}
#endif


#if 0
#include <map>
#include <iostream>
#include <string>

using namespace std;

typedef map<string, int> STRING2INT;

int main(void)
{
	STRING2INT DateMap;
	STRING2INT::iterator DateIterator;
	string DateBuffer;

	DateMap["January"] = 1;
	DateMap["February"] = 2;
	DateMap["March"] = 3;
	DateMap["April"] = 4;
	DateMap["May"] = 5;
	DateMap["June"] = 6;
	DateMap["July"] = 7;
	DateMap["August"] = 8;
	DateMap["September"] = 9;
	DateMap["October"] = 10;
	DateMap["November"] = 11;
	DateMap["December"] = 12;

	DateMap.erase(DateMap.begin(), DateMap.end());

	if (!DateMap.empty())
		cout << "DateMap has " << DateMap.size() << " entries" << endl;
	else
		cout << "DateMap is empty" << endl;
	return 0;
}
#endif



#if 0
#include <map>
#include <iostream>
#include <string>

using namespace std;

typedef map<string, int> STRING2INT;

int main(void)
{
	STRING2INT DateMap;
	STRING2INT::iterator DateIterator;
	string DateBuffer;

	DateMap["January"] = 1;
	DateMap["February"] = 2;
	DateMap["March"] = 3;
	DateMap["April"] = 4;
	DateMap["May"] = 5;
	DateMap["June"] = 6;
	DateMap["July"] = 7;
	DateMap["August"] = 8;
	DateMap["September"] = 9;
	DateMap["October"] = 10;
	DateMap["November"] = 11;
	DateMap["December"] = 12;

	// empty DateMap - note that clear simply calls erase(begin(),end());
	DateMap.clear();

	if (!DateMap.empty())
		cout << "DateMap has " << DateMap.size() << " entries" << endl;
	else
		cout << "DateMap is empty" << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	map<string, string> strMap;

	strMap["Monday"] = "1";
	strMap["Tuesday"] = "2";
	strMap["Wednesday"] = "3";
	strMap["Thursday"] = "4";
	strMap["Friday"] = "5";
	strMap["Saturday"] = "6";
	strMap.insert(pair<string, string>("Sunday", "7"));

	strMap.erase(strMap.find("Tuesday"));

	for (map<string, string>::iterator p = strMap.begin();
		p != strMap.end(); ++p) {
		cout << "English: " << p->first << ", #: " << p->second << endl;
	}

	cout << endl;

	return 0;
}
#endif
