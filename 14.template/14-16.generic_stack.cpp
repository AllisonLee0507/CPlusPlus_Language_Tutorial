#if 0
#include <iostream>
using std::cout;
using std::endl;

template< typename T >
class Stack 
{
public:
	template< typename T >
	Stack(int s) : size(s > 0 ? s : 10), top(-1), stackPtr(new T[size]){

	}


	~Stack()
	{
		delete[] stackPtr;
	}

	bool push(const T &pushValue)
	{
		if (!isFull())
		{
			stackPtr[++top] = pushValue;
			return true;
		}

		return false;
	}
	bool pop(T &popValue)
	{
		if (!isEmpty())
		{
			popValue = stackPtr[top--];
			return true;
		}

		return false;
	}
	bool isEmpty() const
	{
		return top == -1;
	}

	bool isFull() const
	{
		return top == size - 1;
	}

private:
	int size;
	int top;
	T *stackPtr;
};

int main(void)
{
	Stack< double > doubleStack(5); // size 5
	double doubleValue = 1.1;

	cout << "Pushing elements onto doubleStack\n";

	while (doubleStack.push(doubleValue))
	{
		cout << doubleValue << ' ';
		doubleValue += 1.1;
	}

	while (doubleStack.pop(doubleValue))
		cout << doubleValue << ' ';

	Stack< int > intStack; // default size 10
	int intValue = 1;
	cout << "\nPushing elements onto intStack\n";

	while (intStack.push(intValue))
	{
		cout << intValue << ' ';
		intValue++;
	}

	while (intStack.pop(intValue))
		cout << intValue << ' ';

	return 0;
}

#endif


#if 0
#include <iostream>
using namespace std;

const int SIZE = 10;

template <class StackType> class stack {
	StackType stck[SIZE];
	int tos;

public:
	stack() {
		tos = 0;
	}
	void push(StackType ob)
	{
		if (tos == SIZE) {
			cout << "Stack is full.\n";
			return;
		}
		stck[tos] = ob;
		tos++;
	}

	StackType pop()
	{
		if (tos == 0) {
			cout << "Stack is empty.\n";
			return 0; // return null on empty stack
		}
		tos--;
		return stck[tos];
	}
};

int main(void)
{
	stack<char> s1, s2;

	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');

	for (int i = 0; i<3; i++)
		cout << "Pop s1: " << s1.pop() << "\n";
	for (int i = 0; i<3; i++)
		cout << "Pop s2: " << s2.pop() << "\n";

	stack<double> ds1, ds2;

	ds1.push(1.1);
	ds2.push(2.2);
	ds1.push(3.3);
	ds2.push(4.4);
	ds1.push(5.5);
	ds2.push(6.6);

	for (int i = 0; i<3; i++)
		cout << "Pop ds1: " << ds1.pop() << "\n";
	for (int i = 0; i<3; i++)
		cout << "Pop ds2: " << ds2.pop() << "\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <cstdlib>


#include <deque>
#include <stdexcept>

template <typename T>
class Stack {
private:
	std::deque<T> elems;   // elements

public:
	void push(T const&);   // push element
	void pop();            // pop element
	T top() const;         // return top element
	bool empty() const {   // return whether the stack is empty
		return elems.empty();
	}

	// assign stack of elements of type T2
	template <typename T2>
	Stack<T>& operator= (Stack<T2> const&);
};



template <typename T>
template <typename T2>
Stack<T>& Stack<T>::operator= (Stack<T2> const& op2)
{
	if ((void*)this == (void*)&op2) {    // assignment to itself?
		return *this;
	}

	Stack<T2> tmp(op2);              // create a copy of the assigned stack

	elems.clear();                   // remove existing elements
	while (!tmp.empty()) {           // copy all elements
		elems.push_front(tmp.top());
		tmp.pop();
	}
	return *this;
}


template <typename T>
void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);    // append copy of passed elem
}

template<typename T>
void Stack<T>::pop()
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::pop(): empty stack");
	}
	elems.pop_back();         // remove last element
}

template <typename T>
T Stack<T>::top() const
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::top(): empty stack");
	}
	return elems.back();      // return copy of last element
}


int main(void)
{
	try {
		Stack<int>   intStack;       // stack of ints
		Stack<float> floatStack;     // stack of floats

		// manipulate int stack
		intStack.push(42);
		intStack.push(7);

		// manipulate float stack
		floatStack.push(7.7);

		// assign stacks of different type
		floatStack = intStack;

		// print float stack
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
		return EXIT_FAILURE;  // exit program with ERROR status
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>

template <typename T, int MAXSIZE>
class Stack {
private:
	T elems[MAXSIZE];        // elements
	int numElems;            // current number of elements

public:
	Stack();                  // constructor
	void push(T const&);      // push element
	void pop();               // pop element
	T top() const;            // return top element
	bool empty() const {      // return whether the stack is empty
		return numElems == 0;
	}
	bool full() const {       // return whether the stack is full
		return numElems == MAXSIZE;
	}
};

// constructor
template <typename T, int MAXSIZE>
Stack<T, MAXSIZE>::Stack()
: numElems(0)               // start with no elements
{
	// nothing else to do
}

template <typename T, int MAXSIZE>
void Stack<T, MAXSIZE>::push(T const& elem)
{
	if (numElems == MAXSIZE) {
		throw std::out_of_range("Stack<>::push(): stack is full");
	}
	elems[numElems] = elem;   // append element
	++numElems;               // increment number of elements
}

template<typename T, int MAXSIZE>
void Stack<T, MAXSIZE>::pop()
{
	if (numElems <= 0) {
		throw std::out_of_range("Stack<>::pop(): empty stack");
	}
	--numElems;               // decrement number of elements
}

template <typename T, int MAXSIZE>
T Stack<T, MAXSIZE>::top() const
{
	if (numElems <= 0) {
		throw std::out_of_range("Stack<>::top(): empty stack");
	}
	return elems[numElems - 1];  // return last element
}


int main(void)
{
	try {
		Stack<int, 20>         int20Stack;     // stack of up to 20 ints
		Stack<int, 40>         int40Stack;     // stack of up to 40 ints
		Stack<std::string, 40> stringStack;    // stack of up to 40 strings

		// manipulate stack of up to 20 ints
		int20Stack.push(7);
		std::cout << int20Stack.top() << std::endl;
		int20Stack.pop();

		// manipulate stack of up to 40 strings
		stringStack.push("hello");
		std::cout << stringStack.top() << std::endl;
		stringStack.pop();
		stringStack.pop();
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
		return EXIT_FAILURE;  // exit program with ERROR status
	}
	return 0;
}

#endif



#if 0
#include <iostream>
#include <deque>
#include <cstdlib>
#include <vector>
#include <stdexcept>

template <typename T, typename CONT = std::vector<T> >
class Stack {
private:
	CONT elems;               // elements

public:
	void push(T const&);      // push element
	void pop();               // pop element
	T top() const;            // return top element
	bool empty() const {      // return whether the stack is empty
		return elems.empty();
	}
};

template <typename T, typename CONT>
void Stack<T, CONT>::push(T const& elem)
{
	elems.push_back(elem);    // append copy of passed elem
}

template <typename T, typename CONT>
void Stack<T, CONT>::pop()
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::pop(): empty stack");
	}
	elems.pop_back();         // remove last element
}

template <typename T, typename CONT>
T Stack<T, CONT>::top() const
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::top(): empty stack");
	}
	return elems.back();      // return copy of last element
}


int main(void)
{
	try {
		// stack of ints:
		Stack<int> intStack;

		// stack of doubles which uses a std::deque<> to manage the elements
		Stack<double, std::deque<double> > dblStack;

		// manipulate int stack
		intStack.push(7);
		std::cout << intStack.top() << std::endl;
		intStack.pop();

		// manipulate double stack
		dblStack.push(42.42);
		std::cout << dblStack.top() << std::endl;
		dblStack.pop();
		dblStack.pop();
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
		return EXIT_FAILURE;  // exit program with ERROR status
	}
	return 0;
}
#endif


#if 0
#include <deque>
#include <string>
#include <stdexcept>

#include <iostream>
#include <cstdlib>

#include <vector>

template <typename T>
class Stack {
private:
	std::vector<T> elems;     // elements

public:
	void push(T const&);      // push element
	void pop();               // pop element
	T top() const;            // return top element
	bool empty() const {      // return whether the stack is empty
		return elems.empty();
	}
};

template <typename T>
void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);    // append copy of passed elem
}

template<typename T>
void Stack<T>::pop()
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::pop(): empty stack");
	}
	elems.pop_back();         // remove last element
}

template <typename T>
T Stack<T>::top() const
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::top(): empty stack");
	}
	return elems.back();      // return copy of last element
}



template<>
class Stack<std::string> {
private:
	std::deque<std::string> elems;  // elements

public:
	void push(std::string const&);  // push element
	void pop();                     // pop element
	std::string top() const;        // return top element
	bool empty() const {            // return whether the stack is empty
		return elems.empty();
	}
};

void Stack<std::string>::push(std::string const& elem)
{
	elems.push_back(elem);    // append copy of passed elem
}

void Stack<std::string>::pop()
{
	if (elems.empty()) {
		throw std::out_of_range
			("Stack<std::string>::pop(): empty stack");
	}
	elems.pop_back();         // remove last element
}

std::string Stack<std::string>::top() const
{
	if (elems.empty()) {
		throw std::out_of_range
			("Stack<std::string>::top(): empty stack");
	}
	return elems.back();      // return copy of last element
}


int main(void)
{
	try {
		Stack<int>         intStack;       // stack of ints
		Stack<std::string> stringStack;    // stack of strings

		// manipulate int stack
		intStack.push(7);
		std::cout << intStack.top() << std::endl;
		intStack.pop();

		// manipulate string stack
		stringStack.push("hello");
		std::cout << stringStack.top() << std::endl;
		stringStack.pop();
		stringStack.pop();
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
		return EXIT_FAILURE;  // exit program with ERROR status
	}

	return 0;
}

#endif



#if 0
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>


#include <deque>
#include <stdexcept>

template <typename T,
	template <typename ELEM> class CONT = std::deque >
class Stack {
private:
	CONT<T> elems;         // elements

public:
	void push(T const&);   // push element
	void pop();            // pop element
	T top() const;         // return top element
	bool empty() const {   // return whether the stack is empty
		return elems.empty();
	}
};


template <typename T, template <typename> class CONT>
void Stack<T, CONT>::push(T const& elem)
{
	elems.push_back(elem);    // append copy of passed elem
}

template<typename T, template <typename> class CONT>
void Stack<T, CONT>::pop()
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::pop(): empty stack");
	}
	elems.pop_back();         // remove last element
}

template <typename T, template <typename> class CONT>
T Stack<T, CONT>::top() const
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::top(): empty stack");
	}
	return elems.back();      // return copy of last element
}

int main(void)
{
	try {
		Stack<int>   intStack;       // stack of ints
		Stack<float> floatStack;     // stack of floats

		// manipulate int stack
		intStack.push(42);
		intStack.push(7);

		// manipulate float stack
		floatStack.push(7.7);

		// print float stack
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
	}

	// stack for ints using a vector as an internal container
	Stack<int, std::vector> vStack;
	//...
	vStack.push(42);
	vStack.push(7);
	std::cout << vStack.top() << std::endl;
	vStack.pop();

	return 0;
}

#endif



#if 0
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>


#include <deque>
#include <stdexcept>

template <typename T, typename CONT = std::deque<T> >
class Stack {
private:
	CONT elems;            // elements

public:
	void push(T const&);   // push element
	void pop();            // pop element
	T top() const;         // return top element
	bool empty() const {   // return whether the stack is empty
		return elems.empty();
	}

	// assign stack of elements of type T2
	template <typename T2, typename CONT2>
	Stack<T, CONT>& operator= (Stack<T2, CONT2> const&);
};

template <typename T, typename CONT>
template <typename T2, typename CONT2>
Stack<T, CONT>&
Stack<T, CONT>::operator= (Stack<T2, CONT2> const& op2)
{
	if ((void*)this == (void*)&op2) {    // assignment to itself?
		return *this;
	}

	Stack<T2, CONT2> tmp(op2);        // create a copy of the assigned stack

	elems.clear();                   // remove existing elements
	while (!tmp.empty()) {           // copy all elements
		elems.push_front(tmp.top());
		tmp.pop();
	}
	return *this;
}


template <typename T, typename CONT>
void Stack<T, CONT>::push(T const& elem)
{
	elems.push_back(elem);    // append copy of passed elem
}

template<typename T, typename CONT>
void Stack<T, CONT>::pop()
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::pop(): empty stack");
	}
	elems.pop_back();         // remove last element
}

template <typename T, typename CONT>
T Stack<T, CONT>::top() const
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::top(): empty stack");
	}
	return elems.back();      // return copy of last element
}


int main(void)
{
	try {
		Stack<int>   intStack;       // stack of ints
		Stack<float> floatStack;     // stack of floats

		// manipulate int stack
		intStack.push(42);
		intStack.push(7);

		// manipulate float stack
		floatStack.push(7.7);

		// assign stacks of different type
		floatStack = intStack;

		// print float stack
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
	}

	// stack for ints using a vector as an internal container
	Stack<int, std::vector<int> > vStack;
	//...
	vStack.push(42);
	vStack.push(7);
	std::cout << vStack.top() << std::endl;
	vStack.pop();

	return 0;
}

#endif
