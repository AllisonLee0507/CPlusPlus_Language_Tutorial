#if 0
#include <algorithm>
#include <functional>
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

using namespace std;
class Dog
{
public:
	Dog(string name = "Unknown", string breed = "Poodle", int year = 2000);
	bool operator<(const Dog& rhs) const;

	string breed() const;
	string name() const;

	void print() const;

	int year() const;

private:
	string breed_;
	string name_;
	int year_;
};

inline
Dog::Dog(string name, string breed, int year)
: breed_(breed), name_(name), year_(year)
{} // empty

inline
bool Dog::operator<(const Dog& rhs) const
{
	return name() < rhs.name();
}

inline
string Dog::breed() const
{
	return breed_;
}

inline
string Dog::name() const
{
	return name_;
}

inline
void Dog::print() const
{
	cout << name() << ", a " << breed() << ", won in " << year()
		<< endl;
}

inline
int Dog::year() const
{
	return year_;
}

bool equal_breed(const Dog winner, string breed);


int main(void)
{
	const char* breed[] = { "A", "B", "C", "D", "E" };
	const char* name[] = { "a", "b", "c", "d", "e" };
	const int year[] = { 1971, 1972, 1973, 1974, 1975 };
	const int num_dogs = sizeof(breed) / sizeof(breed[0]);

	vector<Dog> v;
	for (int i = 0; i < num_dogs; ++i)
		v.push_back(Dog(name[i], breed[i], year[i]));

	const Dog query("A");
	cout << query.name();

	set<Dog> winner_set(v.begin(), v.end());
	set<Dog>::const_iterator winner_set_end = winner_set.end();

	// last occurrence in set, not by value
	const string query_breed("Spaniel (English Springer)");
	cout << query_breed << endl;
	set<Dog>::const_reverse_iterator last1;
	set<Dog>::const_reverse_iterator winner_set_rend
		= winner_set.rend();
	for (last1 = winner_set.rbegin(); last1 != winner_set_rend; ++last1)
	if (last1->breed() == query_breed)
		break;

	if (last1 != winner_set_rend)
		last1->print();
	else
		cout << "A " << query_breed << " didn't win in 1971-1975\n";

}

inline
bool equal_breed(const Dog winner, string breed)
{
	return winner.breed() == breed;
}
#endif


#if 0
#include <algorithm>
#include <functional>
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

using namespace std;
class Dog
{
public:
	Dog(string name = "Unknown", string breed = "Poodle", int year = 2000);
	bool operator<(const Dog& rhs) const;

	string breed() const;
	string name() const;

	void print() const;

	int year() const;

private:
	string breed_;
	string name_;
	int year_;
};

inline
Dog::Dog(string name, string breed, int year)
: breed_(breed), name_(name), year_(year)
{} // empty

inline
bool Dog::operator<(const Dog& rhs) const
{
	return name() < rhs.name();
}

inline
string Dog::breed() const
{
	return breed_;
}

inline
string Dog::name() const
{
	return name_;
}

inline
void Dog::print() const
{
	cout << name() << ", a " << breed() << ", won in " << year()
		<< endl;
}

inline
int Dog::year() const
{
	return year_;
}

bool equal_breed(const Dog winner, string breed);


int main(void)
{
	const char* breed[] = { "A", "B", "C", "D", "E" };
	const char* name[] = { "a", "b", "c", "d", "e" };
	const int year[] = { 1971, 1972, 1973, 1974, 1975 };
	const int num_dogs = sizeof(breed) / sizeof(breed[0]);

	vector<Dog> v;
	for (int i = 0; i < num_dogs; ++i)
		v.push_back(Dog(name[i], breed[i], year[i]));

	const Dog query("A");
	cout << query.name();

	set<Dog> winner_set(v.begin(), v.end());
	set<Dog>::const_iterator winner_set_end = winner_set.end();

	// search in the set by value
	set<Dog>::const_iterator spot = winner_set.find(query);
	if (spot != winner_set_end)
		spot->print();
	else
		cout << query.name() << " never won best-in-show\n";

}

inline
bool equal_breed(const Dog winner, string breed)
{
	return winner.breed() == breed;
}
#endif