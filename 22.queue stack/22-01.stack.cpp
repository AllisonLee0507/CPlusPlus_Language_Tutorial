#if 0
#include <stack>
#include <vector>

int main(void)
{
	using namespace std;

	// A stack of integers
	stack <int> stackIntegers;

	// A stack of doubles
	stack <double> stackDoubles;

	// A stack of doubles contained in a vector
	stack <double, vector <double> > stackDoublesInVector;

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <stack>  // stack adapter definition
#include <vector> // vector class-template definition
#include <list>   // list class-template definition

int main(void)
{
	// stack with default underlying deque
	std::stack< int > intStack;

	for (int i = 0; i < 10; i++)
	{
		intStack.push(i);
		cout << "\n\n\npushing: " << intStack.top() << ' \n';
	}
	
	while (!intStack.empty())
	{
		cout << "\n\n\ntopping: " << intStack.top() << ' \n';
		intStack.pop();
	}

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <stack>  // stack adapter definition
#include <vector> // vector class-template definition
#include <list>   // list class-template definition

int main(void)
{
	// stack with underlying vector
	std::stack< int, std::vector< int > > intVectorStack;

	for (int i = 0; i < 10; i++)
	{
		intVectorStack.push(i);
		cout << "\n\n\npushing: " << intVectorStack.top() << ' \n';
	}
	
	while (!intVectorStack.empty())
	{
		cout << "\n\n\ntopping: " << intVectorStack.top() << ' \n';
		intVectorStack.pop();
	}

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <stack>  // stack adapter definition
#include <vector> // vector class-template definition
#include <list>   // list class-template definition

int main(void)
{
	// stack with underlying list
	std::stack< int, std::list< int > > intListStack;

	for (int i = 0; i < 10; i++)
	{
		intListStack.push(i);
		cout << "\n\n\npushing: " << intListStack.top() << ' \n';
	}

	while (!intListStack.empty())
	{
		cout << "\n\n\ntopping: " << intListStack.top() << ' \n';
		intListStack.pop();
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int thedata[] = { 45, 34, 56, 27, 71, 50, 62 };
	stack<int> s;
	cout << "The stack size is now " << s.size() << endl;

	cout << "Pushing 4 elements " << endl;
	for (int i = 0; i < 4; ++i)
		s.push(thedata[i]);

	cout << "The stack size is now " << s.size() << endl;

	cout << "Popping 3 elements " << endl;
	for (int i = 0; i < 3; ++i) {
		cout << s.top() << endl;
		s.pop();
	}
	cout << "The stack size is now " << s.size() << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int thedata[] = {45, 34, 56, 27, 71, 50, 62};
	stack<int> s;
	cout << "The stack size is now " << s.size() << endl;

	cout << "Pushing 4 elements " << endl;
	for (int i = 0; i < 4; ++i)
		s.push(thedata[i]);

	cout << "The stack size is now " << s.size() << endl;

	cout << "Popping 3 elements " << endl;
	for (int i = 0; i < 3; ++i) {
		cout << s.top() << endl;
		s.pop();
	}
	cout << "The stack size is now " << s.size() << endl;

	cout << "Popping all elements" << endl;
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	cout << "The stack size is now " << s.size() << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int thedata[] = {45, 34, 56, 27, 71, 50, 62};
	stack<int> s;
	cout << "The stack size is now " << s.size() << endl;

	cout << "Pushing 4 elements " << endl;
	for (int i = 0; i < 4; ++i)
		s.push(thedata[i]);

	cout << "The stack size is now " << s.size() << endl;

	cout << "Popping 3 elements " << endl;
	for (int i = 0; i < 3; ++i) {
		cout << s.top() << endl;
		s.pop();
	}
	cout << "The stack size is now " << s.size() << endl;

	cout << "Popping all elements" << endl;
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	cout << "The stack size is now " << s.size() << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	stack<int> st;

	st.push(1);
	st.push(2);
	st.push(3);

	cout << st.top() << ' ';
	st.pop();
	cout << st.top() << ' ';
	st.pop();

	st.top() = 77;

	st.push(4);
	st.push(5);

	st.pop();

	while (!st.empty()) {
		cout << st.top() << ' ';
		st.pop();
	}
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	stack<string, vector<string> > str_stack;
	string quote[3] = { "A", "B", "C" };

	for (int i = 0; i < 3; ++i)
		str_stack.push(quote[i]);

	while (!str_stack.empty()) {
		cout << str_stack.top();
		str_stack.pop();
	}
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
	stack<char> stck;

	cout << "A stack for characters.\n";

	cout << "Pushing A, B, C, and D.\n";
	stck.push('A');
	stck.push('B');
	stck.push('C');
	stck.push('D');

	cout << "Now, retrieve those values in LIFO order.\n";
	while (!stck.empty()) {
		cout << "Popping: ";
		cout << stck.top() << "\n";
		stck.pop();
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <stack>
#include <string>
#include <utility>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}


int main(void)
{
	const int num_loads = 5;
	const int palettes[num_loads] = { 7, 6, 2, 5, 10 };
	const char* destinations[num_loads] = { "A", "B", "C", "D", "E" };

	// load up the truck
	stack< pair<int, string> > truck;
	cout << "LOADING TRUCK";
	for (int i = 0; i < num_loads; ++i)
	{
		truck.push(make_pair(palettes[i], destinations[i]));
		cout << "\nLoaded " << truck.top().first << " palettes for " << truck.top().second;
	}

	// make the trip
	cout << "\n\nTRUCK EN ROUTE";
	while (!truck.empty())
	{
		cout << "\nDelivered " << truck.top().first << " palettes to " << truck.top().second;
		truck.pop();
	}
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <stack>  // stack adapter definition
#include <vector> // vector class-template definition
#include <list>   // list class-template definition

template< typename T > void pushElements(T &stackRef);
template< typename T > void popElements(T &stackRef);

int main(void)
{
	std::stack< int > intDequeStack;

	cout << "Pushing onto intDequeStack: ";
	pushElements(intDequeStack);
	cout << endl << endl;

	cout << "Popping from intDequeStack: ";
	popElements(intDequeStack);
	cout << endl;

	return 0;
}

template< typename T > void pushElements(T &stackRef)
{
	for (int i = 0; i < 10; i++)
	{
		stackRef.push(i);
		cout << stackRef.top() << ' ';
	}
}

template< typename T > void popElements(T &stackRef)
{
	while (!stackRef.empty())
	{
		cout << stackRef.top() << ' ';
		stackRef.pop();
	}
}
#endif
