#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <vector>    // vector class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator iterator
#include <stdexcept> // out_of_range exception

int main(void)
{
	int array[6] = { 1, 2, 3, 4, 5, 6 };
	std::vector< int > integers(array, array + 6);
	std::ostream_iterator< int > output(cout, " ");

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	cout << "Vector integers contains: ";
	std::copy(integers.begin(), integers.end(), output);

	cout << "\nLast element of integers: " << integers.back();

	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>
#include <vector>

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

	int suit() const;
	int value() const;

private:
	int value_;
	Suit suit_;
};

inline
Card::Card(int value, Suit suit)
: value_(value), suit_(suit)
{} // empty

inline
int Card::suit() const
{
	return suit_;
}

inline
int Card::value() const
{
	return value_;
}

// global function
ostream& operator<<(ostream& out, const Card& card)
{
	if (card.value() >= 2 && card.value() <= 10)
		out << card.value();
	else
		switch (card.value())
	{
		case  1: out << "Ace"; break;
		case 11: out << "Jack"; break;
		case 12: out << "Queen"; break;
		case 13: out << "King"; break;
		default: out << "Unknown value"; break;
	};

	out << " of ";
	switch (card.suit())
	{
	case Card::spades:   out << "spades"; break;
	case Card::clubs:    out << "clubs"; break;
	case Card::diamonds: out << "diamonds"; break;
	case Card::hearts:   out << "hearts"; break;
	default:             out << "unknown suit"; break;
	}
	return out;
}

int main(void)
{
	const int num_players = 2;
	vector< list<Card> > hands(num_players);

	// deal first player a hand
	hands[0].push_front(Card(12, Card::hearts));
	hands[0].push_front(Card(1, Card::spades));
	hands[0].push_front(Card(4, Card::spades));

	// deal second player a hand
	hands[1].push_front(Card(13, Card::diamonds));
	hands[1].push_front(Card(12, Card::clubs));
	hands[1].push_front(Card(2, Card::hearts));
	const int num_plays = 3;
	bool discard[num_players][num_plays] = { { true, true, false },
	{ true, false, false } };
	vector<Card> discard_pile;

	// simulate card play
	for (int i = 0; i < num_plays; ++i)
	for (int j = 0; j < num_players; ++j)

		// if discard and hand not empty...
	if (discard[j][i] && !hands[j].empty())
	{
		discard_pile.push_back(hands[j].front());
		hands[j].pop_front();
		cout << "Player " << (j + 1) << " discarded a "
			<< discard_pile.back() << endl;
	}// if pick up and discard pile not empty...
	else if (!discard[j][i] && !discard_pile.empty())
	{
		hands[j].push_back(discard_pile.back());
		cout << "Player " << (j + 1) << " picked up a "
			<< discard_pile.back() << endl;
		discard_pile.pop_back();
	}
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	string s("abcdefghij");

	vector<char> vector1(s.begin(), s.end());

	while (vector1.size() > 0) {
		cout << vector1.back();
		vector1.pop_back();
	}
	cout << endl;
	return 0;
}
#endif