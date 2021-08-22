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

	// sort second list
	list2.sort();

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

inline Salesperson::Salesperson(const string& name, int sales,int district): district_(district), name_(name), sales_(sales)
{}

inline bool Salesperson::operator>(const Salesperson& rhs) const
{
	return sales_ > rhs.sales_;
}

inline void Salesperson::print() const
{
	cout << name_ << " from District " << district_
		<< " has sales of $" << sales_ << endl;
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

inline Salesperson::Salesperson(const string& name, int sales, int district)
: district_(district), name_(name), sales_(sales)
{}

inline bool Salesperson::operator>(const Salesperson& rhs) const
{
	return sales_ > rhs.sales_;
}

inline void Salesperson::print() const
{
	cout << name_ << " from District " << district_
		<< " has sales of $" << sales_ << endl;
}

int main()
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

	// sort District 2 salespeople in descending order and display
	list2.sort(greater<Salesperson>());
	for_each(list2.begin(), list2.end(), mem_fun_ref(&Salesperson::print));

}
#endif



#if 0
#include <list>
#include <iostream>

using namespace std;

void PrintListContents(const list <int>& listInput);
bool SortPredicate_Descending(const int& lsh, const int& rsh);

int main(void)
{
	std::list <int> listIntegers;

	// Insert elements at the beginning...
	listIntegers.push_front(4);
	listIntegers.push_front(3);
	listIntegers.push_front(2);

	listIntegers.push_front(-1);
	listIntegers.push_front(0);

	listIntegers.push_back(-5);

	cout << "Initial contents of the list are - " << endl;
	PrintListContents(listIntegers);

	listIntegers.sort();

	cout << "Order of elements after sort():" << endl;
	PrintListContents(listIntegers);

	listIntegers.sort(SortPredicate_Descending);
	cout << "Order of elements after sort() with a predicate:" << endl;

	PrintListContents(listIntegers);

	return 0;
}

void PrintListContents(const list <int>& listInput){
	if (listInput.size() > 0){
		std::list <int>::const_iterator i;
		for (i = listInput.begin(); i != listInput.end(); ++i)
			cout << *i << endl;
	}
	else
		cout << "List is empty!" << endl;
}

bool SortPredicate_Descending(const int& lsh, const int& rsh)
{
	return (rsh < lsh);
}
#endif



#if 0
#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>

using namespace std;

class Player
{
public:
	Player(const string& first_name = "John",
		const string& last_name = "Doe",
		int height = 60,
		float field_goal_percentage = 10);

	bool operator<(const Player& rhs) const;

	float field_goal_percentage() const;
	string first_name() const;
	int height() const;
	void height(int& feet, int& inches) const;
	string last_name() const;
	void print() const;

private:
	float field_goal_percentage_;
	string first_name_;
	int height_;
	string last_name_;
};

inline
Player::Player(const string& first_name, const string& last_name,
int height, float field_goal_percentage)
: field_goal_percentage_(field_goal_percentage),
first_name_(first_name), height_(height),
last_name_(last_name)
{}
inline
float Player::field_goal_percentage() const
{
	return field_goal_percentage_;
}

inline
string Player::first_name() const
{
	return first_name_;
}

inline
int Player::height() const  // in inches
{
	return height_;
}

inline
void Player::height(int& feet, int& inches) const
{
	feet = height() / 12;
	inches = height() % 12;
}

inline
string Player::last_name() const
{
	return last_name_;
}

void Player::print() const
{
	int feet, inches;
	height(feet, inches);
	string name(first_name());
	name += " ";
	name += last_name();
	cout << setw(20) << left << name << feet << " feet " << inches
		<< " inches   Field goal percentage: "
		<< field_goal_percentage() << endl;
}

inline bool Player::operator<(const Player& rhs) const
{
	return last_name() < rhs.last_name();
}

inline bool greater_height(const Player& lhs, const Player& rhs) 
{
	return lhs.height() > rhs.height();
}

inline bool greater_field_goal_percentage(const Player& lhs,const Player& rhs)
{
	return lhs.field_goal_percentage()
> rhs.field_goal_percentage();
}

int main(void)
{
	list<Player> players;

	players.push_back(Player("A", "F", 78, 0.422));
	players.push_back(Player("B", "G", 72, 0.392));
	players.push_back(Player("C", "H", 85, 0.555));
	players.push_back(Player("D", "I", 90, 0.531));
	players.push_back(Player("E", "J", 84, 0.502));

	// sort by name
	players.sort();
	for_each(players.begin(), players.end(), mem_fun_ref(&Player::print));

	// descending sort by height
	players.sort(greater_height);
	for_each(players.begin(), players.end(), mem_fun_ref(&Player::print));

	// descending sort by field goal percentage
	players.sort(greater_field_goal_percentage);
	for_each(players.begin(), players.end(), mem_fun_ref(&Player::print));

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <list>      // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	int array[4] = { 2, 6, 4, 8 };
	std::list< int > values;      // create list of ints
	std::list< int > otherValues; // create list of ints
	std::ostream_iterator< int > output(cout, " ");

	// insert items in values
	values.push_front(1);
	values.push_front(3);
	values.push_back(4);
	values.push_back(2);

	cout << "values contains: ";
	std::copy(values.begin(), values.end(), output);

	values.sort(); // sort values

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;
	return 0;
}
#endif
