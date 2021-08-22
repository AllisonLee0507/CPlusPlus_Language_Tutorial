#if 0
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int> coll;
	list<int>::iterator pos;

	for (int i = 20; i <= 40; ++i) {
		coll.push_back(i);
	}
	
	pos = find(coll.begin(), coll.end(),3);

	reverse(pos, coll.end());


	list<int>::iterator pos25, pos35;
	pos25 = find(coll.begin(), coll.end(),25);
	pos35 = find(coll.begin(), coll.end(),35);

	cout << "max: " << *max_element(pos25, pos35) << endl;

	cout << "max: " << *max_element(pos25, ++pos35) << endl;

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Publication
{
public:
	Publication(string first_name = "", string last_name = "", string title = "", string journal = "", int year = 0);
	bool operator<(const Publication& rhs) const;
	// order by date

	string last_name() const;
	void print() const;
	// display publication data

	int year() const;

private:

	string first_name_;
	string journal_;
	string last_name_;
	string title_;
	int year_;
};

inline
Publication::Publication(string first_name, string last_name,
string title, string journal, int year)
: first_name_(first_name), journal_(journal),
last_name_(last_name), title_(title), year_(year)
{}

inline
bool Publication::operator<(const Publication& rhs) const
{
	return year() < rhs.year();
}

inline
string Publication::last_name() const
{
	return last_name_;
}

inline
void Publication::print() const
{
	cout << last_name() << ", " << first_name_ << endl
		<< title_ << endl << journal_ << ", " << year()
		<< endl << endl;
}

inline
int Publication::year() const
{
	return year_;
}

inline
bool equals_last_name(const Publication publication, string last_name)
{
	return publication.last_name() == last_name;
}

int main(void)
{
	list<Publication> publication;

	publication.push_back(Publication("A", "B", "C", "D", 1999));

	publication.push_back(Publication("E", "F", "G", "H", 1992));

	publication.push_back(Publication("I", "J", "K", "L", 1992));

	publication.sort();

	cout << publication.size() << " PUBLICATIONS\n";
	for_each(publication.begin(), publication.end(), mem_fun_ref(&Publication::print));

	// find earliest publication by Reese
	string author("A");
	list<Publication>::iterator earliest = find_if(publication.begin(), publication.end(), bind2nd(ptr_fun(equals_last_name), author));

	// if publication found, display and delete it
	if (earliest != publication.end()) {
		cout << "\nEARLIEST PUBLICATION BY " << author << endl;
		earliest->print();
		publication.erase(earliest);
	}
	else
		cout << "NO PUBLICATIONS BY " << author << endl;

	// find latest publication by A
	list<Publication>::reverse_iterator latest = find_if(publication.rbegin(), publication.rend(), bind2nd(ptr_fun(equals_last_name), author));

	// if publication found, display and delete it
	if (latest != publication.rend()){
		cout << "\nLATEST PUBLICATION BY " << author << endl;
		latest->print();
		publication.erase(--latest.base());
	}
	else
		cout << "NO PUBLICATIONS BY " << author << endl;

	// display all remaining publications
	cout << "THERE ARE " << publication.size() << " PUBLICATIONS REMAINING\n";
	for_each(publication.begin(), publication.end(), mem_fun_ref(&Publication::print));

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int> coll;
	list<int>::iterator pos;

	for (int i = 20; i <= 40; ++i) {
		coll.push_back(i);
	}

	pos = find(coll.begin(), coll.end(),3);

	reverse(pos, coll.end());

	list<int>::iterator pos25, pos35;
	pos25 = find(coll.begin(), coll.end(),25);
	pos35 = find(coll.begin(), coll.end(),35);

	cout << "max: " << *max_element(pos25, pos35) << endl;

	cout << "max: " << *max_element(pos25, ++pos35) << endl;
	
	return 0;
}
#endif