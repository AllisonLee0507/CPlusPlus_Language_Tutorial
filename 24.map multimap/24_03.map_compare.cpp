#if 0
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

/* function object to compare strings
* - allows you to set the comparison criterion at runtime
* - allows you to compare case insensitive
*/
class RuntimeStringCmp {
public:
	// constants for the comparison criterion
	enum cmp_mode { normal, nocase };
private:
	// actual comparison mode
	const cmp_mode mode;

	// auxiliary function to compare case insensitive
	static bool nocase_compare(char c1, char c2)
	{
		return toupper(c1) < toupper(c2);
	}

public:
	// constructor: initializes the comparison criterion
	RuntimeStringCmp(cmp_mode m = normal) : mode(m) {
	}

	// the comparison
	bool operator() (const string& s1, const string& s2) const {
		if (mode == normal) {
			return s1<s2;
		}
		else {
			return lexicographical_compare(s1.begin(), s1.end(),
				s2.begin(), s2.end(),
				nocase_compare);
		}
	}
};

typedef map<string, string, RuntimeStringCmp> StringStringMap;

// function that fills and prints such containers
void fillAndPrint(StringStringMap& coll);

int main(void)
{
	// create a container with the default comparison criterion
	StringStringMap coll1;
	fillAndPrint(coll1);

	// create an object for case-insensitive comparisons
	RuntimeStringCmp ignorecase(RuntimeStringCmp::nocase);

	// create a container with the case-insensitive comparisons criterion
	StringStringMap coll2(ignorecase);
	fillAndPrint(coll2);
}

void fillAndPrint(StringStringMap& coll)
{
	// fill insert elements in random order
	coll["Deutschland"] = "Germany";
	coll["deutsch"] = "German";
	coll["Haken"] = "snag";
	coll["arbeiten"] = "work";
	coll["Hund"] = "dog";
	coll["gehen"] = "go";
	coll["Unternehmen"] = "enterprise";
	coll["unternehmen"] = "undertake";
	coll["gehen"] = "walk";
	coll["Bestatter"] = "undertaker";

	// print elements
	StringStringMap::iterator pos;
	cout.setf(ios::left, ios::adjustfield);
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << setw(15) << pos->first.c_str() << " "
			<< pos->second << endl;
	}
	cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <map>

using namespace std;

void show(const char *msg, map<string, int> mp);

int main(void)
{
	map<string, int> m;

	m.insert(pair<string, int>("A", 100));
	m.insert(pair<string, int>("G", 300));
	m.insert(pair<string, int>("B", 200));

	// Create another map that is the same as the first.
	map<string, int> m2(m);
	show("Contents of m2: ", m2);

	// Compare two maps.
	if (m == m2) cout << "m and m2 are equivalent.\n\n";

	return 0;
}

// Display the contents of a map<string, int> by using an iterator.
void show(const char *msg, map<string, int> mp) {
	map<string, int>::iterator itr;

	cout << msg << endl;
	for (itr = mp.begin(); itr != mp.end(); ++itr)
		cout << "  " << itr->first << ", " << itr->second << endl;
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <map>

using namespace std;

void show(const char *msg, map<string, int> mp);

int main(void)
{
	map<string, int> m;

	m.insert(pair<string, int>("A", 100));
	m.insert(pair<string, int>("G", 300));
	m.insert(pair<string, int>("B", 200));

	// Declare an iterator to a map<string, int>.
	map<string, int>::iterator itr;

	// Create another map that is the same as the first.
	map<string, int> m2(m);
	show("Contents of m2: ", m2);

	if (m < m2) cout << "m is less than m2." << endl;

	// Remove the Beta from m.
	m.erase("Beta");
	show("m after removing Beta: ", m);

	if (m > m2)
		cout << "Now, m is greater than m2." << endl;

	return 0;
}

// Display the contents of a map<string, int> by using an iterator.
void show(const char *msg, map<string, int> mp) {
	map<string, int>::iterator itr;

	cout << msg << endl;
	for (itr = mp.begin(); itr != mp.end(); ++itr)
		cout << "  " << itr->first << ", " << itr->second << endl;
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <map>

using namespace std;

void show(const char *msg, map<string, int> mp);

int main(void)
{
	map<string, int> m;

	m.insert(pair<string, int>("A", 100));
	m.insert(pair<string, int>("G", 300));
	m.insert(pair<string, int>("B", 200));

	map<string, int>::iterator itr;

	// Create another map that is the same as the first.
	map<string, int> m2(m);
	show("Contents of m2: ", m2);

	return 0;
}

// Display the contents of a map<string, int> by using an iterator.
void show(const char *msg, map<string, int> mp) {
	map<string, int>::iterator itr;

	cout << msg << endl;
	for (itr = mp.begin(); itr != mp.end(); ++itr)
		cout << "  " << itr->first << ", " << itr->second << endl;
	cout << endl;
}
#endif



#if 0
include <iostream>
#include <map>
#include <string>

using namespace std;

class Employee {
	friend class EmployeeLessThan;
public:
	Employee(const string& first, const string& last) : lastName_(last), firstName_(first) {}

	string getFirstName() const { return(firstName_); }
	string getLastName() const { return(lastName_); }
private:
	string lastName_;
	string firstName_;
};

class EmployeeLessThan {
public:
	bool operator( )(const Employee& emp1, const Employee& emp2) const {
		if (emp1.lastName_ < emp2.lastName_)
			return(true);
		else if (emp1.lastName_ == emp2.lastName_)
			return(emp1.firstName_ < emp2.firstName_);
		else
			return(false);
	}
};

int main() {

	map<Employee, string, EmployeeLessThan> empMap;

	Employee emp1("B", "A"), emp2("J", "G"), emp3("F", "S"), emp4("G", "G");

	empMap[emp1] = "tester";
	empMap[emp2] = "coder";
	empMap[emp3] = "programmer";
	empMap[emp4] = "developer";

	for (map<Employee, string, EmployeeLessThan>::const_iterator p =
		empMap.begin(); p != empMap.end(); ++p) {
		cout << p->first.getFirstName() << " " << p->first.getLastName() << " is " << p->second << endl;
	}
}
#endif