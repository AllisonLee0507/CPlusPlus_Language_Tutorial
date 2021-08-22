#if 0
#include <iomanip>
#include <iostream>
#include <list>
#include <vector> 

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const int data[] = { 1, 1, 2, 3, 5 };
	list<int> original(data, data + sizeof(data) / sizeof(data[0]));

	// make a list from a list
	list<int> list_copy(original);


	// show results
	print(original);
	print(list_copy);

	return 0;
}
#endif


#if 0
#include <list> 
#include <string> 
#include <iostream> 

using namespace std;

int main(void) 
{
	list<int> list1;

	size_t n = 10;
	double val = 3.14;
	list<double> list2(n, val);

	list<double> list3(list2);

	cout << "Size of list1 " << list1.size() << endl;
	cout << "Size of list2 " << list2.size() << endl;
	cout << "Size of list3 " << list3.size() << endl;

	// populate a new list with the elements of list2 
	list<double> list4;
	list<double>::const_iterator i;
	for (i = list2.begin(); i != list2.end(); ++i)
	{
		list4.push_back(*i);
	}
	// Print every character in the list 
	for (i = list4.begin(); i != list4.end(); ++i)
	{
		cout << *i << ",";
	}
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iomanip>
#include <iostream>
#include <list>
#include <vector> 

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const int data[] = { 1, 1, 2, 3, 5 };
	list<int> original(data, data + sizeof(data) / sizeof(data[0]));

	// make a list of floats from a list of ints
	list<float> list_float(original.begin(), original.end());

	// show results
	print(original);
	print(list_float);

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <list>      // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	int array[4] = { 2, 6, 4, 8 };
	std::list< int > values;      // create list of ints
	std::list< int > otherValues; // create list of ints
	std::ostream_iterator< int > output(cout, " ");

	// insert items in values
	values.push_front(1);
	values.push_front(3);
	values.push_back(4);
	values.push_back(2);

	cout << "values contains: ";
	std::copy(values.begin(), values.end(), output);

	otherValues.insert(otherValues.begin(), array, array + 4);
	cout << "\n\notherValues contains: ";
	std::copy(otherValues.begin(), otherValues.end(), output);


	values.assign(otherValues.begin(), otherValues.end());

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;

	return 0;
}
#endif