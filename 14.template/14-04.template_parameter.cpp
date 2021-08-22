#if 0
#include <iostream>
#include <cstdlib>
using namespace std;

//int size is a non-type agument
template <class T, int size> class MyType {
	T a[size];
public:
	MyType() {
		for (int i = 0; i<size; i++)
			a[i] = i;
	}
	T &operator[](int i){

		if (i<0 || i> size - 1) {
			cout << "\nIndex value of ";
			cout << i << " is out-of-bounds.\n";
			exit(1);
		}
		return a[i];
	}
};


int main(void)
{
	MyType<int, 10> intob;
	MyType<double, 15> doubleob;

	cout << "Integer array: ";
	for (int i = 0; i<10; i++)
		intob[i] = i;
	for (int i = 0; i<10; i++)
		cout << intob[i] << "  ";
	cout << '\n';

	cout << "Double array: ";
	for (int i = 0; i<15; i++)
		doubleob[i] = (double)i / 3;

	for (int i = 0; i<15; i++)
		cout << doubleob[i] << "  ";
	cout << '\n';

	intob[12] = 100; // generates runtime error

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cstdlib>
using namespace std;

// T defaults to int and size defaults to 10
template <class T = int, int size = 10> class MyType {
	T a[size];
public:
	MyType() {
		for (int i = 0; i<size; i++)
			a[i] = i;
	}
	T &operator[](int i){
		if (i<0 || i> size - 1) {
			cout << "\nIndex value of ";
			cout << i << " is out-of-bounds.\n";
			exit(1);
		}
		return a[i];
	}
};


int main(void)
{
	MyType<int, 100> intarray;
	MyType<double> doublearray;
	MyType<> defarray;

	cout << "int array: ";
	for (int i = 0; i<100; i++)
		intarray[i] = i;
	for (int i = 0; i<100; i++)
		cout << intarray[i] << "  ";
	cout << '\n';

	cout << "double array: ";
	for (int i = 0; i<10; i++)
		doublearray[i] = (double)i / 3;
	for (int i = 0; i<10; i++)
		cout << doublearray[i] << "  ";
	cout << '\n';

	cout << "defarray array: ";
	for (int i = 0; i<10; i++)
		defarray[i] = i;
	for (int i = 0; i<10; i++)
		cout << defarray[i] << "  ";
	cout << '\n';

	return 0;
}
#endif



#if 0
#include <iostream>


// primary template: yield second or third argument depending on first argument
template<bool C, typename Ta, typename Tb>
class IfThenElse;

// partial specialization: true yields second argument
template<typename Ta, typename Tb>
class IfThenElse<true, Ta, Tb> {
public:
	typedef Ta ResultT;
};

// partial specialization: false yields third argument
template<typename Ta, typename Tb>
class IfThenElse<false, Ta, Tb> {
public:
	typedef Tb ResultT;
};



// primary template for main recursive step
template<int N, int LO = 1, int HI = N>
class Sqrt {
public:
	// compute the midpoint, rounded up
	enum { mid = (LO + HI + 1) / 2 };

	// search a not too large value in a halved interval
	typedef typename IfThenElse<(N<mid*mid),
		Sqrt<N, LO, mid - 1>,
		Sqrt<N, mid, HI> >::ResultT
		SubT;
	enum { result = SubT::result };
};

// partial specialization for end of recursion criterion
template<int N, int S>
class Sqrt<N, S, S> {
public:
	enum { result = S };
};


int main(void)
{
	std::cout << "Sqrt<16>::result = " << Sqrt<16>::result		<< '\n';
	std::cout << "Sqrt<25>::result = " << Sqrt<25>::result		<< '\n';
	std::cout << "Sqrt<42>::result = " << Sqrt<42>::result		<< '\n';
	std::cout << "Sqrt<1>::result =  " << Sqrt<1>::result		<< '\n';

	return 0;
}
#endif



#if 0
#include <iostream>


// primary template to compute sqrt(N) via iteration
template <int N, int I = 1>
class Sqrt {
public:
	enum {
		result = (I*I<N) ? Sqrt<N, I + 1>::result
		: I
	};
};

// partial specialization to end the iteration
template<int N>
class Sqrt<N, N> {
public:
	enum { result = N };
};


int main()
{
	std::cout << "Sqrt<16>::result = " << Sqrt<16>::result << std::endl;
	std::cout << "Sqrt<25>::result = " << Sqrt<25>::result << std::endl;
	std::cout << "Sqrt<42>::result = " << Sqrt<42>::result << std::endl;
	std::cout << "Sqrt<1>::result =  " << Sqrt<1>::result << std::endl;
}
#endif



#if 0
#include <iostream>

// primary template: yield second or third argument depending on first argument
template<bool C, typename Ta, typename Tb>
class IfThenElse;

// partial specialization: true yields second argument
template<typename Ta, typename Tb>
class IfThenElse<true, Ta, Tb> {
public:
	typedef Ta ResultT;
};

// partial specialization: false yields third argument
template<typename Ta, typename Tb>
class IfThenElse<false, Ta, Tb> {
public:
	typedef Tb ResultT;
};



// template to yield template argument as result
template<int N>
class Value {
public:
	enum { result = N };
};

// template to compute sqrt(N) via iteration
template <int N, int I = 1>
class Sqrt {
public:
	// instantiate next step or result type as branch
	typedef typename IfThenElse<(I*I<N),
		Sqrt<N, I + 1>,
		Value<I>
	>::ResultT
	SubT;

	// use the result of branch type
	enum { result = SubT::result };
};

int main(void)
{
	std::cout << "Sqrt<16>::result = " << Sqrt<16>::result << std::endl;
	std::cout << "Sqrt<25>::result = " << Sqrt<25>::result << std::endl;
	std::cout << "Sqrt<42>::result = " << Sqrt<42>::result << std::endl;
	std::cout << "Sqrt<1>::result =  " << Sqrt<1>::result << std::endl;
}
#endif


#if 0
#include <iostream>

template <typename T>
inline T dot_product(int dim, T* a, T* b)
{
	T result = T();
	for (int i=0; i<dim; ++i) {
		result += a[i] * b[i];
	}
	return result;
}

int main(void)
{
	int a[3] = { 1, 2, 3 };
	int b[3] = { 5, 6, 7 };

	std::cout << "dot_product(3,a,b) = " << dot_product(3, a, b)		<< '\n';
	std::cout << "dot_product(3,a,a) = " << dot_product(3, a, a)		<< '\n';

	return 0;
}

#endif



#if 0
template <typename DstT, typename SrcT>
inline DstT implicit_cast(SrcT const& x)  // SrcT can be deduced,
{                                          // but DstT cannot
	return x;
}

int main(void)
{
	double value = implicit_cast<double>(-1);

	return 0;
}
#endif



#if 0
#include <iostream>

template<typename T>
int f(T)
{
	return 1;
}

template<typename T>
int f(T*)
{
	return 2;
}


int main(void)
{
	std::cout << f<int*>((int*)0) << std::endl;
	std::cout << f<int>((int*)0) << std::endl;

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
#include <memory>

template <typename T,
	template <typename ELEM,
	typename = std::allocator<ELEM> >
class CONT = std::deque>
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

	// assign stack of elements of type T2
	template<typename T2,
		template<typename ELEM2,
		typename = std::allocator<ELEM2>
	>class CONT2>
	Stack<T, CONT>& operator= (Stack<T2, CONT2> const&);
};

template <typename T, template <typename, typename> class CONT>
void Stack<T, CONT>::push(T const& elem)
{
	elems.push_back(elem);    // append copy of passed elem
}

template<typename T, template <typename, typename> class CONT>
void Stack<T, CONT>::pop()
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::pop(): empty stack");
	}
	elems.pop_back();         // remove last element
}

template <typename T, template <typename, typename> class CONT>
T Stack<T, CONT>::top() const
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::top(): empty stack");
	}
	return elems.back();      // return copy of last element
}

template <typename T, template <typename, typename> class CONT>
template <typename T2, template <typename, typename> class CONT2>
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

#endif



#if 0

#endif