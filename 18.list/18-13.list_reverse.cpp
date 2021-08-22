#if 0
#include <list>
#include <iostream>

using namespace std;

void PrintListContents (const list <int>& listInput);

int main(void)
{
	std::list <int> listIntegers;

	listIntegers.push_front(4);
	listIntegers.push_front(3);
	listIntegers.push_front(2);
	listIntegers.push_front(1);
	listIntegers.push_front(0);
	listIntegers.push_back(5);

	PrintListContents(listIntegers);

	listIntegers.reverse();

	PrintListContents(listIntegers);

	return 0;
}

void PrintListContents(const list <int>& listInput)
{
	if (listInput.size() > 0)
	{
		std::list <int>::const_iterator i;
		for (i = listInput.begin(); i != listInput.end(); ++i)
			cout << *i << " ";
	}
	else
		cout << "List is empty!" << endl;
}
#endif


#if 0
#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>

using namespace std;

template <class ForwIter>
void print(ForwIter first, ForwIter last, const char* title)
{
	cout << title << endl;
	while (first != last)
		cout << *first++ << '\t';
	cout << endl;
}

class Card
{
public:
	enum Suit { spades, clubs, hearts, diamonds };

	Card(int value = 1, Suit suit = spades);
	// value - 1 = Ace, 2-10, 11 = Jack, 12 = Queen, 13 = King

	bool operator<(const Card& rhs) const;

	void print() const;

	int suit() const;
	int value() const;

private:
	int value_;
	Suit suit_;
};

inline Card::Card(int value, Suit suit): value_(value), suit_(suit)
{} // empty

inline bool Card::operator<(const Card& rhs) const
{
	return value() < rhs.value();
}

void Card::print() const
{
	if (value() >= 2 && value() <= 10)
		cout << value();
	else
		switch (value())
	{
		case  1: cout << "Ace"; break;
		case 11: cout << "Jack"; break;
		case 12: cout << "Queen"; break;
		case 13: cout << "King"; break;
	};

	cout << " of ";
	switch (suit())
	{
	case spades: cout << "spades"; break;
	case clubs: cout << "clubs"; break;
	case diamonds: cout << "diamonds"; break;
	case hearts: cout << "hearts"; break;
	default: cout << "unknown suit"; break;
	}
	cout << endl;
}

inline int Card::suit() const
{
	return suit_;
}

inline int Card::value() const
{
	return value_;
}

int main(void)
{
	list<Card> hand;

	hand.push_back(Card(12, Card::hearts));
	hand.push_back(Card(6, Card::clubs));
	hand.push_back(Card(12, Card::diamonds));
	hand.push_back(Card(1, Card::spades));
	hand.push_back(Card(11, Card::clubs));

	hand.sort();
	for_each(hand.begin(), hand.end(), mem_fun_ref(&Card::print));

	for_each(hand.rbegin(), hand.rend(), mem_fun_ref(&Card::print));

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <algorithm>  // for reverse
using namespace std;

int main(void)
{
	string s("asdfg");


	list<char> list1(s.begin(), s.end());
	list<char>::iterator i;

	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i;


	reverse(list1.begin(), list1.end());

	for (i = list1.begin(); i != list1.end(); ++i)
		cout << *i;


	return 0;
}
#endif