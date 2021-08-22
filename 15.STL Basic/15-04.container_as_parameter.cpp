#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

template < typename T > void printVector(const vector< T > &integers2);

int main(void)
{
	int array[6] = { 1, 2, 3, 4, 5, 6 }; // initialize array
	vector< int > integers; // create vector of ints

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	printVector(integers);

	cout << endl;
	return 0;
}

template < typename T > void printVector(const vector< T > &integers2){
	typename vector< T >::const_iterator constIterator;

	for (constIterator = integers2.begin();
		constIterator != integers2.end(); ++constIterator)
		cout << *constIterator << ' ';
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <list>      // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

template < typename T > void printList(const std::list< T > &listRef);

int main(void)
{
	int array[4] = { 2, 6, 4, 8 };
	std::list< int > values;      // create list of ints
	std::list< int > otherValues; // create list of ints

	// insert items in values
	values.push_front(1);
	values.push_front(2);
	values.push_back(4);
	values.push_back(3);

	cout << "values contains: ";
	printList(values);
	cout << endl;
	return 0;
}

template < typename T > void printList(const std::list< T > &listRef)
{
	std::ostream_iterator< T > output(cout, " ");
	std::copy(listRef.begin(), listRef.end(), output);
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



#if 0
#include <iostream>
using std::cout;
using std::endl;

template< typename T >
void printArray(const T *array, int count)
{
	for (int i = 0; i < count; i++)
		cout << array[i] << " ";

	cout << endl;
}

int main(void)
{
	const int aCount = 5;
	const int bCount = 7;
	const int cCount = 6;

	int a[aCount] = { 1, 2, 3, 4, 5 };
	double b[bCount] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	char c[cCount] = "HELLO";

	printArray(a, aCount);

	printArray(b, bCount);

	printArray(c, cCount);
	return 0;
}
#endif
