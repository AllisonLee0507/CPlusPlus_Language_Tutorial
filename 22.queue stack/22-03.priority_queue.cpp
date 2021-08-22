#if 0
#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;
int main(void)
{
	priority_queue<int> pq;

	cout << "A priority_queue for integers.\n";

	pq.push(1);
	pq.push(3);
	pq.push(4);
	pq.push(2);

	cout << "retrieve those values in priority order.\n";
	while (!pq.empty()) {
		cout << "Popping ";
		cout << pq.top() << "\n";
		pq.pop();
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
	std::priority_queue< double > priorities;

	priorities.push(3.2);
	priorities.push(9.8);
	priorities.push(5.4);

	cout << "Popping from priorities: ";

	while (!priorities.empty())
	{
		cout << priorities.top() << ' ';
		priorities.pop();
	}

	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	priority_queue<float> q;

	// insert three elements into the priority queue
	q.push(66.6);
	q.push(22.2);
	q.push(44.4);

	// read and print two elements
	cout << q.top() << ' ';
	q.pop();
	cout << q.top() << endl;
	q.pop();

	// insert three more elements
	q.push(11.1);
	q.push(55.5);
	q.push(33.3);

	// skip one element
	q.pop();

	// pop and print remaining elements
	while (!q.empty()) {
		cout << q.top() << ' ';
		q.pop();
	}
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int thedata[] = { 45, 34, 56, 27, 71, 50, 62 };
	priority_queue<int> pq;
	cout << "The priority_queue size is now " << pq.size() << endl;

	cout << "Pushing 4 elements " << endl;
	for (int i = 0; i < 4; ++i)
		pq.push(thedata[i]);
	cout << "The priority_queue size is now " << pq.size() << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int thedata[] = { 45, 34, 56, 27, 71, 50, 62 };
	priority_queue<int> pq;
	cout << "The priority_queue size is now " << pq.size() << endl;

	cout << "Pushing 4 elements " << endl;
	for (int i = 0; i < 4; ++i)
		pq.push(thedata[i]);
	cout << "The priority_queue size is now " << pq.size() << endl;

	cout << "Popping 3 elements " << endl;
	for (int i = 0; i < 3; ++i) {
		cout << pq.top() << endl;
		pq.pop();
	}
	cout << "The priority_queue size is now " << pq.size() << endl;

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
	priority_queue<int> pq;

	cout << "A priority_queue for integers.\n";

	pq.push(1);
	pq.push(3);
	pq.push(4);
	pq.push(2);

	cout << "retrieve those values in priority order.\n";
	while (!pq.empty()) {
		cout << "Popping ";
		cout << pq.top() << "\n";
		pq.pop();
	}
	cout << endl;

	return 0;
}
#endif



#if 0
#include <queue>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	priority_queue<int> myQueue;

	myQueue.push(3);
	myQueue.push(4);
	myQueue.push(2);
	myQueue.push(1);

	while (!myQueue.empty()) {
		cout << myQueue.top() << endl;
		myQueue.pop();
	}

	return 0;
}
#endif



#if 0
#include <queue>

int main(void)
{
	using namespace std;

	// A priority queue of integers sorted using std::less <> (default)
	priority_queue <int> pqIntegers;

	// A priority queue of doubles
	priority_queue <double> pqDoubles;

	// A priority queue of integers sorted using std::greater <>
	priority_queue <int, deque <int>, greater <int> > pqIntegers_Inverse;

	return 0;
}
#endif



#if 0
#include <queue>
#include <functional>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	priority_queue<int, vector<int>, greater<int> > myQueue;

	myQueue.push(3);
	myQueue.push(4);
	myQueue.push(2);
	myQueue.push(1);

	while (!myQueue.empty()) {
		cout << myQueue.top() << endl;
		myQueue.pop();
	}

	return (0);
}
#endif



#if 0
#include <queue>
#include <iostream>

int main(void)
{
	using namespace std;

	priority_queue <int, vector <int>, greater <int> > pqIntegers;

	pqIntegers.push(10);
	pqIntegers.push(5);
	pqIntegers.push(-1);
	pqIntegers.push(20);

	cout << "The queue contains " << pqIntegers.size() << " elements";
	cout << endl;
	cout << "Element at the top: " << pqIntegers.top() << endl << endl;

	while (!pqIntegers.empty())
	{
		cout << "pop the topmost element " << pqIntegers.top();

		pqIntegers.pop();
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int thedata[] = { 45, 34, 56, 27, 71, 50, 62 };
	priority_queue<int> pq;
	cout << "The priority_queue size is now " << pq.size() << endl;

	cout << "Pushing 4 elements " << endl;
	for (int i = 0; i < 4; ++i)
		pq.push(thedata[i]);
	cout << "The priority_queue size is now " << pq.size() << endl;

	cout << "Popping 3 elements " << endl;
	for (int i = 0; i < 3; ++i) {
		cout << pq.top() << endl;
		pq.pop();
	}
	cout << "The priority_queue size is now " << pq.size() << endl;


	cout << "Popping all elements" << endl;
	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}
	cout << "The priority_queue size is now " << pq.size() << endl;

	return 0;
}
#endif