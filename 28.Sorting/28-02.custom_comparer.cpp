#if 0
#include <iostream>
#include <string>
#include <deque>
#include <set>
#include <algorithm>
using namespace std;

class Person {
private:
	string fn;    // first name
	string ln;    // last name
public:
	Person() {
	}
	Person(const string& f, const string& n)
		: fn(f), ln(n) {
	}
	string firstname() const;
	string lastname() const;
	// ...
};

inline string Person::firstname() const {
	return fn;
}

inline string Person::lastname() const {
	return ln;
}

ostream& operator<< (ostream& s, const Person& p)
{
	s << "[" << p.firstname() << " " << p.lastname() << "]";
	return s;
}


bool personSortCriterion(const Person& p1, const Person& p2)
{
	/* a person is less than another person
	* - if the last name is less
	* - if the last name is equal and the first name is less
	*/
	return p1.lastname()<p2.lastname() ||
		(p1.lastname() == p2.lastname() &&
		p1.firstname()<p2.firstname());
}

int main(void)
{
	// create some persons
	Person p1("nicolai", "josuttis");
	Person p2("ulli", "josuttis");
	Person p3("anica", "josuttis");
	Person p4("lucas", "josuttis");
	Person p5("lucas", "otto");
	Person p6("lucas", "arm");
	Person p7("anica", "holle");

	// insert person into collection coll
	deque<Person> coll;
	coll.push_back(p1);
	coll.push_back(p2);
	coll.push_back(p3);
	coll.push_back(p4);
	coll.push_back(p5);
	coll.push_back(p6);
	coll.push_back(p7);

	// print elements
	cout << "deque before sort():" << endl;
	deque<Person>::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << *pos << endl;
	}

	// sort elements
	sort(coll.begin(), coll.end(),    // range
		personSortCriterion);       // sort criterion

	// print elements
	cout << "deque after sort():" << endl;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << *pos << endl;
	}
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>

template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

using namespace std;

void printCollection(const list<int>& l)
{
	PRINT_ELEMENTS(l);
}

bool lessForCollection(const list<int>& l1, const list<int>& l2)
{
	return lexicographical_compare
		(l1.begin(), l1.end(),   // first range
		l2.begin(), l2.end());  // second range
}

int main(void)
{
	list<int> c1, c2, c3, c4;

	// fill all collections with the same starting values
	INSERT_ELEMENTS(c1, 1, 5);
	c4 = c3 = c2 = c1;

	// and now some differences
	c1.push_back(7);
	c3.push_back(2);
	c3.push_back(0);
	c4.push_back(2);

	// create collection of collections
	vector<list<int> > cc;

	cc.push_back(c1);
	cc.push_back(c2);
	cc.push_back(c3);
	cc.push_back(c4);
	cc.push_back(c3);
	cc.push_back(c1);
	cc.push_back(c4);
	cc.push_back(c2);

	// print all collections
	for_each(cc.begin(), cc.end(),
		printCollection);
	cout << endl;

	// sort collection lexicographically
	sort(cc.begin(), cc.end(),    // range
		lessForCollection);      // sorting criterion

	// print all collections again
	for_each(cc.begin(), cc.end(),
		printCollection);

	return 0;
}
#endif