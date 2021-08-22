#if 0
#include <queue>
#include <list>

int main(void)
{
	using namespace std;

	// A queue of integers
	queue <int> qIntegers;

	// A queue of doubles
	queue <double> qDoubles;

	// A queue of doubles stored internally in a list
	queue <double, list <double> > qDoublesInList;

	return 0;
}
#endif


#if 0
#include <queue>
#include <iostream>

int main(void)
{
	using namespace std;

	// A queue of integers
	queue <int> qIntegers;

	cout << "Inserting {10, 5, -1, 20} into the queue" << endl;

	// elements pushed into the queue are inserted at the end
	qIntegers.push(10);
	qIntegers.push(5);
	qIntegers.push(-1);
	qIntegers.push(20);
	// the elements in the queue now are {20, -1, 5, 10} in that order

	cout << "The queue contains " << qIntegers.size();
	cout << " elements" << endl;
	cout << "Element at the front: " << qIntegers.front() << endl;
	cout << "Element at the back: " << qIntegers.back();
	cout << endl << endl;

	cout << "Removing them one after another..." << endl;
	while (qIntegers.size() != 0)
	{
		cout << "Deleting element " << qIntegers.front() << endl;

		// Remove the element at the front of the queue
		qIntegers.pop();
	}

	cout << endl;

	// Test if the queue is empty
	if (qIntegers.empty())
		cout << "The queue is now empty!";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;
int main(void)
{
	queue<string> q;

	cout << "Pushing one two three four\n";
	q.push("one");
	q.push("two");
	q.push("three");
	q.push("four");

	cout << "Now, retrieve those values in FIFO order.\n";
	while (!q.empty()) {
		cout << "Popping ";
		cout << q.front() << "\n";
		q.pop();
	}
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <queue>

int main(void)
{
	std::queue< double > values;

	values.push(3.2);
	values.push(9.8);
	values.push(5.4);

	cout << "Popping from values: ";

	while (!values.empty())
	{
		cout << values.front() << ' ';
		values.pop();
	}

	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void)
{
	queue<string> q;

	// insert three elements into the queue
	q.push("These ");
	q.push("are ");
	q.push("more than ");

	// read and print two elements from the queue
	cout << q.front();
	q.pop();
	cout << q.front();
	q.pop();

	// insert two new elements
	q.push("four ");
	q.push("words!");

	// skip one element
	q.pop();

	// read and print two elements
	cout << q.front();
	q.pop();
	cout << q.front() << endl;
	q.pop();

	// print number of elements in the queue
	cout << "number of elements in the queue: " << q.size()
		<< endl;
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <queue>

int main(void)
{
	std::queue< double > values;

	values.push(3.2);
	values.push(9.8);
	values.push(5.4);

	cout << "Popping from values: ";

	while (!values.empty())
	{
		cout << values.front() << ' ';
		values.pop();
	}

	cout << endl;
	return 0;
}
#endif



#if 0
#include <queue>
#include <stdexcept>
#include <iostream>
using namespace std;
using std::queue;

template <typename T>

class PacketBuffer{
public:
	PacketBuffer(int maxSize = -1);

	void bufferPacket(const T& packet);

	T getNextPacket() throw (std::out_of_range);

protected:
	queue<T> mPackets;
	int mMaxSize;

private:
	PacketBuffer(const PacketBuffer& src);
	PacketBuffer& operator=(const PacketBuffer& rhs);
};

template <typename T>
PacketBuffer<T>::PacketBuffer(int maxSize)
{
	mMaxSize = maxSize;
}

template <typename T>
void PacketBuffer<T>::bufferPacket(const T& packet)
{
	if (mMaxSize > 0 && mPackets.size() == static_cast<size_t>(mMaxSize)) {
		return;
	}
	mPackets.push(packet);
}

template <typename T>
T PacketBuffer<T>::getNextPacket() throw (std::out_of_range)
{
	if (mPackets.empty()) {
		throw (std::out_of_range("Buffer is empty"));
	}
	// retrieve the head element
	T temp = mPackets.front();
	// pop the head element
	mPackets.pop();
	// return the head element
	return (temp);
}


class IPPacket {};

int main(int argc, char** argv)
{
	PacketBuffer<IPPacket> ipPackets(3);

	ipPackets.bufferPacket(IPPacket());
	ipPackets.bufferPacket(IPPacket());
	ipPackets.bufferPacket(IPPacket());
	ipPackets.bufferPacket(IPPacket());

	while (true) {
		try {
			IPPacket packet = ipPackets.getNextPacket();
		}
		catch (out_of_range&) {
			cout << "Processed all packets!" << endl;
			break;
		}
	}
	return (0);
}
#endif



#if 0
#include <iostream>
#include <queue>
#include <string>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

class Vehicle{
public:
	Vehicle(string description = "Unknown car", string license = "Unknown license", bool wax = false);
	string description() const;
	string license() const;
	bool wax() const;

private:
	string description_, license_;
	bool wax_;
};
inline
Vehicle::Vehicle(string description, string license, bool wax)
: description_(description), license_(license), wax_(wax)
{} // empty

string Vehicle::description() const
{
	return description_;
}

string Vehicle::license() const
{
	return license_;
}

bool Vehicle::wax() const
{
	return wax_;
}

int main(void)
{
	const char* description[] = { "A", "B", "C", "D", "E" };
	const char* license[] = { "a", "b", "c", "d", "e" };
	const bool wax[] = { false, true, false, true, false };
	const int num_cars = sizeof(wax) / sizeof(wax[0]);

	queue<Vehicle> line;

	int count = 0;
	while (count < num_cars || !line.empty())
	{
		for (int i = 0; i < 2; ++i)
		if (count < num_cars)
		{
			cout << "A " << description[count] << ", license " << license[count] << ", is here for a wash";
			if (wax[count])
				cout << " and a wax";
			cout << endl << endl;

			line.push(Vehicle(description[count], license[count], wax[count]));
			++count;
		}
		else
			break;
		cout << "ATTENTION PLEASE: a " << line.front().description()
			<< ", license " << line.front().license()
			<< ",\n\has been carefully washed ";
		if (line.front().wax())
			cout << "and waxed ";
		cout << "and is available for pick-up\n\n";
		line.pop();
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <queue> 
#include <list>
using namespace std;

int main(void)
{

	int thedata[] = { 45, 34, 56, 27, 71, 50, 62 };
	queue<int, list<int> > q;
	cout << "The queue size is now " << q.size() << endl;

	cout << "Pushing 4 elements " << endl;
	for (int i = 0; i < 4; ++i)
		q.push(thedata[i]);
	cout << "The queue size is now " << q.size() << endl;

	cout << "Popping 3 elements " << endl;
	for (int i = 0; i < 3; ++i) {
		cout << q.front() << endl;
		q.pop();
	}
	cout << "The queue size is now " << q.size() << endl;

	return 0;
}
#endif