#if 0
#include <iostream>
#include <cassert>
#include <deque>
#include <algorithm>  // For find
using namespace std;

int main(void)
{
	int x[5] = { 1, 2, 3, 4, 5 };

	deque<int> deque1(&x[0], &x[5]);

	// Search for the first occurrence of the letter e:
	deque<int>::iterator i;

	cout.precision(10);

	for (i = deque1.begin(); i != deque1.end(); ++i)
		cout << *i << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <deque>
using namespace std;
void show(const char *msg, deque<int> q);

int main(void) 
{

	deque<int> dq(10);

	for (unsigned i = 0; i < dq.size(); ++i) dq[i] = i*i;

	show("Contents of dq: ", dq);

	deque<int>::iterator itr;
	deque<int>::reverse_iterator ritr;

	for (itr = dq.begin(); itr != dq.end(); ++itr)
		cout << *itr << " ";

	for (ritr = dq.rbegin(); ritr != dq.rend(); ++ritr)
		cout << *ritr << " ";

	return 0;
}
// Display the contents of a deque<int>.
void show(const char *msg, deque<int> q) {
	cout << msg;
	for (unsigned i = 0; i < q.size(); ++i)
		cout << q[i] << " ";
	cout << "\n";
}
#endif



#if 0
#include <deque>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

class Auction_item
{
public:
	Auction_item(const string& name = "nothing",
		int minimum_bid = 0);
	int minimum_bid() const;
	string name() const;

private:
	int minimum_bid_;
	string name_;
};

inline
Auction_item::Auction_item(const string& name, int minimum_bid)
: name_(name), minimum_bid_(minimum_bid)
{}
inline
int Auction_item::minimum_bid() const{ return minimum_bid_; }

inline
string Auction_item::name() const{ return name_; }

int main(void)
{
	vector<Auction_item> v(5);
	v[0] = Auction_item("A", 150);
	v[1] = Auction_item("B", 10);
	v[2] = Auction_item("C", 75);
	v[3] = Auction_item("D", 20);
	v[4] = Auction_item("E", 100);

	deque<Auction_item> items;

	// load auction items with cheap ones in front, expensive at back
	const int min_expensive_item = 50;
	for (vector<Auction_item>::iterator i = v.begin();
		i != v.end(); ++i)
	if (i->minimum_bid() >= min_expensive_item)
		items.push_back(*i);
	else
		items.push_front(*i);

	// sell the items
	bool sell_cheap = true;
	while (!items.empty())
	{
		if (sell_cheap)
		{
			cout << items.front().name()
				<< " for a minimum bid of "
				<< items.front().minimum_bid() << endl;
			items.pop_front();
		}
		else
		{
			cout << "Now selling: a " << items.back().name()
				<< " for a minimum bid of "
				<< items.back().minimum_bid() << endl;
			items.pop_back();
		}

		// Alternate selling cheap and expensive
		sell_cheap = !sell_cheap;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void print (int elem)
{
	cout << elem << ' ';
}

int main(void)
{
	deque<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// find position of element with value 2
	deque<int>::iterator pos1;
	pos1 = find(coll.begin(), coll.end(),    // range
		2);                          // value

	// find position of element with value 7
	deque<int>::iterator pos2;
	pos2 = find(coll.begin(), coll.end(),    // range
		7);                          // value

	// print all elements in range [pos1,pos2)
	for_each(pos1, pos2,     // range
		print);         // operation
	cout << endl;

	// convert iterators to reverse iterators
	deque<int>::reverse_iterator rpos1(pos1);
	deque<int>::reverse_iterator rpos2(pos2);

	// print all elements in range [pos1,pos2) in reverse order
	for_each(rpos2, rpos1,   // range
		print);         // operation
	cout << endl;

	return 0;
}
#endif



#if 0
#include <deque>
#include <iostream>

using namespace std;
typedef deque<int> INTDEQUE;

int main(void)
{
	INTDEQUE A;
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	A.push_back(4);
	A.push_back(5);

	INTDEQUE::reverse_iterator rpi;
	for (rpi = A.rbegin(); rpi != A.rend(); rpi++)
		cout << *rpi << " ";
	cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <deque>
using namespace std;

void show(const char *msg, deque<int> q);

int main(void) 
{
	deque<int> dq(10);

	for (unsigned i = 0; i < dq.size(); ++i) dq[i] = i*i;

	show("Contents of dq: ", dq);

	// Create an empty deque and then assign it a sequence that is the reverse of dq.
	deque<int> dq3;
	dq3.assign(dq.rbegin(), dq.rend());
	show("dq3 contains the reverse of dq: ", dq3);
	cout << endl;

	return 0;
}
// Display the contents of a deque<int>.
void show(const char *msg, deque<int> q) {
	cout << msg;
	for (unsigned i = 0; i < q.size(); ++i)
		cout << q[i] << " ";
	cout << "\n";
}
#endif



#if 0
#include <iostream>
#include <iterator>
#include <deque>
#include <string>
using namespace std;

void show(const char *msg, deque<string> dq);

int main(void)
{
	deque<string> dq, dq2, dq3, dq4;

	dq.push_back("A");
	dq.push_back("B");
	dq.push_back("C");
	dq.push_back("D");
	dq.push_back("E");
	dq.push_back("F.");

	dq2.push_back("G");
	dq2.push_back("H");
	dq2.push_back("I");

	dq3.push_back("J");
	dq3.push_back("K");
	dq3.push_back("L");

	dq4.push_back("M");
	dq4.push_back("N");
	dq4.push_back("O");

	cout << dq.size() << endl;
	show("Original contents of dq:", dq);

	// Use an insert_iterator to insert dq2 into dq.
	copy(dq2.begin(), dq2.end(), inserter(dq, dq.begin() + 3));

	cout << "Size of dq after inserting dq2: " << dq.size() << endl;
	show("dq2:", dq);

	// Use a back_insert_iterator to insert dq3 into dq.
	copy(dq3.begin(), dq3.end(), back_inserter(dq));

	cout << "Size of dq after inserting dq3: ";
	cout << dq.size() << endl;
	show("dq3:", dq);

	// Use a front_insert_iterator to insert dq4 into dq.
	copy(dq4.begin(), dq4.end(), front_inserter(dq));

	cout << "Size of dq after inserting dq4: " << dq.size() << endl;
	show("dq4:", dq);

	return 0;
}

void show(const char *msg, deque<string> dq) {
	cout << msg << endl;
	for (unsigned i = 0; i < dq.size(); ++i)
		cout << dq[i] << endl;
}
#endif
