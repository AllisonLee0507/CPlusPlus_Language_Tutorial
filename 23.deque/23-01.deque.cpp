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
	deque<int>::iterator where = find(deque1.begin(), deque1.end(), 1);

	cout << *where << endl;

	return 0;
}
#endif


#if 0
#include <deque>
#include <iostream>

using namespace std;
typedef deque<char> CHARDEQUE;

void print_contents(CHARDEQUE deque, char*);

int main(void)
{
	CHARDEQUE  a(3, 'A');
	CHARDEQUE  b(4, 'B');

	print_contents(a, "a");
	print_contents(b, "b");
	a.swap(b);
	print_contents(a, "a");
	print_contents(b, "b");
	a.swap(b);
	print_contents(a, "a");
	print_contents(b, "b");
	a.assign(b.begin(), b.end());
	print_contents(a, "a");
	a.assign(b.begin(), b.begin() + 2);
	print_contents(a, "a");
	a.assign(3, 'Z');
	print_contents(a, "a");

	return 0;
}

void print_contents(CHARDEQUE deque, char *name){
	CHARDEQUE::iterator pdeque;

	cout << "The contents of " << name << " : ";
	for (pdeque = deque.begin(); pdeque != deque.end(); pdeque++)
		cout << *pdeque << " ";
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <deque>
#include <algorithm>  // For find
using namespace std;


int main(void)
{
	char x[5] = { 'a', 'r', 'e', 'q', 't' };

	deque<char> deque1(&x[0], &x[5]);

	// Search for the first occurrence of the letter e:
	deque<char>::iterator where = find(deque1.begin(), deque1.end(), 'e');

	assert(*where == 'e');
	cout << "Ok." << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <deque>
#include <algorithm>  // For find
using namespace std;


int main(void)
{
	string x[5] = { "1234", "2345", "3456", "4567", "5678" };

	deque<string> deque1(&x[0], &x[5]);

	// Search for the first occurrence of the letter e:
	deque<string>::iterator i;

	cout.precision(10);

	for (i = deque1.begin(); i != deque1.end(); ++i)
		cout << *i << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <deque>
#include <algorithm>  // For merge
using namespace std;

int main(void)
{
	// Initialize deque1 with 26 copies of the letter x:
	deque<char> deque1(26, 'x');

	deque<char>::iterator i;

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

	// Create another deque that contains a subrange of dq.
	deque<int> dq2(dq.begin() + 2, dq.end() - 4);

	// Display the contents of dq2 by using an iterator.
	show("dq2 contains a subrange of dq: ", dq2);
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
using std::cout;
using std::endl;

#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	std::deque< double > values; // create deque of doubles
	std::ostream_iterator< double > output(cout, " ");

	// insert elements in values
	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);

	cout << "values contains: ";
	std::copy(values.begin(), values.end(), output);

	values.pop_front(); // remove first element

	cout << "\nAfter pop_front, values contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	std::deque< double > values; // create deque of doubles
	std::ostream_iterator< double > output(cout, " ");

	// insert elements in values
	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);

	cout << "values contains: ";
	std::copy(values.begin(), values.end(), output);

	values.pop_front(); // remove first element

	cout << "\nAfter pop_front, values contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	std::deque< double > values; // create deque of doubles
	std::ostream_iterator< double > output(cout, " ");

	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);

	cout << "values contains: ";
	// use subscript operator to obtain elements of values
	for (int i = 0; i < values.size(); i++)
		cout << values[i] << ' ';
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	std::deque< double > values; // create deque of doubles
	std::ostream_iterator< double > output(cout, " ");

	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);

	cout << "values contains: ";
	// use subscript operator to obtain elements of values
	for (int i = 0; i < values.size(); i++)
		cout << values[i] << ' ';
	cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <deque>
#include <exception>

using namespace std;

template <class T>
class Stack {
protected:
	std::deque<T> c;        // container for the elements

public:
	/* exception class for pop() and top() with empty stack
	*/
	class ReadEmptyStack : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "read empty stack";
		}
	};

	// number of elements
	typename std::deque<T>::size_type size() const {
		return c.size();
	}

	// is stack empty?
	bool empty() const {
		return c.empty();
	}

	// push element into the stack
	void push(const T& elem) {
		c.push_back(elem);
	}

	// pop element out of the stack and return its value
	T pop() {
		if (c.empty()) {
			throw ReadEmptyStack();
		}
		T elem(c.back());
		c.pop_back();
		return elem;
	}

	// return value of next element
	T& top() {
		if (c.empty()) {
			throw ReadEmptyStack();
		}
		return c.back();
	}
};


int main(void)
{
	try {
		Stack<int> st;

		// push three elements into the stack
		st.push(1);
		st.push(2);
		st.push(3);

		// pop and print two elements from the stack
		cout << st.pop() << ' ';
		cout << st.pop() << ' ';

		// modify top element
		st.top() = 77;

		// push two new elements
		st.push(4);
		st.push(5);

		// pop one element without processing it
		st.pop();

		/* pop and print three elements
		* - ERROR: one element too many
		*/
		cout << st.pop() << ' ';
		cout << st.pop() << endl;
		cout << st.pop() << endl;
	}
	catch (const exception& e) {
		cerr << "EXCEPTION: " << e.what() << endl;
	}

	return 0;
}
#endif



#if 0
#include <deque>
#include <iostream>
#include <iterator>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	deque<float> data((istream_iterator<float>(cin)), istream_iterator<float>());

	print(data);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
#include <list>
#include <deque>
#include <vector>
using namespace std;

int main(void)
{
	deque<string> deq;

	deq.insert(deq.end(), "AAA");
	deq.insert(deq.end(), "DDDDDD");

	deque<string>::iterator pos;


	for (pos = deq.begin(); pos != deq.end(); ++pos) {
		cout << *pos << ' ';
	}

	return 0;
}
#endif