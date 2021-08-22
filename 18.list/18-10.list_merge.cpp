#if 0
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

void printLists(const list<int>& l1, const list<int>& l2)
{
	cout << "list1: ";
	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "list2: ";
	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));
	cout << endl << endl;
}

int main(void)
{
	// create two empty lists
	list<int> list1, list2;

	// fill both lists with elements
	for (int i = 0; i<6; ++i) {
		list1.push_back(i);
		list2.push_front(i);
	}
	printLists(list1, list2);


	// merge both sorted lists into the first list
	list1.merge(list2);
	printLists(list1, list2);

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>

using namespace std;

class Salesperson
{
public:
	Salesperson(const string& name = "", int sales = 0, int district = 0);
	bool operator>(const Salesperson& rhs) const;
	void print() const;

private:
	int district_;
	string name_;
	int sales_;
};

inline Salesperson::Salesperson(const string& name, int sales,
int district)
: district_(district), name_(name), sales_(sales)
{}

inline bool Salesperson::operator>(const Salesperson& rhs) const
{
	return sales_ > rhs.sales_;
}

inline void Salesperson::print() const
{
	cout << name_ << " from District " << district_ << " has sales of $" << sales_ << endl;
}

int main(void)
{
	list<Salesperson> list1;
	list1.push_back(Salesperson("A", 37000, 1));
	list1.push_back(Salesperson("B", 49000, 1));
	list1.push_back(Salesperson("C", 48500, 1));

	// sort District 1 salespeople in descending order and display
	list1.sort(greater<Salesperson>());
	for_each(list1.begin(), list1.end(), mem_fun_ref(&Salesperson::print));

	list<Salesperson> list2;
	list2.push_back(Salesperson("A", 65000, 2));
	list2.push_back(Salesperson("B", 33000, 2));
	list2.push_back(Salesperson("C", 47000, 2));

	list1.merge(list2, greater<Salesperson>());
	for_each(list1.begin(), list1.end(), mem_fun_ref(&Salesperson::print));

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst1, lst2;
	int i;

	for (i = 0; i<10; i += 2) lst1.push_back(i);
	for (i = 1; i<11; i += 2) lst2.push_back(i);

	cout << "Contents of lst1:\n";
	list<int>::iterator p = lst1.begin();
	while (p != lst1.end()) {
		cout << *p << " ";
		p++;
	}
	cout << endl << endl;

	cout << "Contents of lst2:\n";
	p = lst2.begin();
	while (p != lst2.end()) {
		cout << *p << " ";
		p++;
	}
	cout << endl << endl;

	lst1.merge(lst2);
	if (lst2.empty())
		cout << "lst2 is now empty\n";

	cout << "Contents of lst1 after merge:\n";
	p = lst1.begin();
	while (p != lst1.end()) {
		cout << *p << " ";
		p++;
	}

	return 0;
}
#endif