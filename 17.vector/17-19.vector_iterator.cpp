#if 0
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(void)
{
	vector<char> v(10); // create a vector of length 10
	vector<char>::iterator p; // create an iterator
	int i;

	// assign elements in vector a value
	p = v.begin();
	i = 0;
	while(p != v.end()) {
		*p = i + 'a';
		p++;
		i++;
	}

	// display contents of vector
	cout << "Original contents:\n";
	p = v.begin();
	while(p != v.end()) {
		cout << *p << " ";
		p++;
	}
	cout << "\n\n";

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main(void)
{
	int array[6] = { 1, 2, 3, 4, 5, 6 }; // initialize array
	vector< int > integers; // create vector of ints

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	vector< int >::const_iterator constIterator;

	// display vector elements using const_iterator
	for (constIterator = integers.begin();
		constIterator != integers.end(); ++constIterator)
		cout << *constIterator << ' ';

	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(void)
{
	vector<char> v(10); // create a vector of length 10
	vector<char>::iterator p; // create an iterator
	int i;

	// assign elements in vector a value
	p = v.begin();
	i = 0;
	while (p != v.end()) {
		*p = i + 'a';
		p++;
		i++;
	}

	// display contents of vector
	cout << "Original contents:\n";
	p = v.begin();
	while (p != v.end()) {
		cout << *p << " ";
		p++;
	}
	cout << "\n\n";



	// change contents of vector
	p = v.begin();
	while (p != v.end()) {
		*p = toupper(*p);
		p++;
	}


	// display contents of vector
	cout << "Original contents:\n";
	p = v.begin();
	while (p != v.end()) {
		cout << *p << " ";
		p++;
	}
	cout << "\n\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	vector<string> v;
	v.push_back("A");
	v.push_back("B");
	v.push_back("C");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << endl;

	myIterator = v.begin();
	*myIterator = "D";
	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << endl;

	cout << *myIterator << "' has ";
	cout << (*myIterator).size() << " letters in it.\n";

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << myIterator->size() << " letters in it.\n";

	v.insert(v.begin(), "A");
	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << endl;

	v.erase((v.begin() + 2));
	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<char> vect);

int main(void)
{
	vector<char> v;

	// Declare an iterator to a vector<char>.
	vector<char>::iterator itr;

	// Obtain an iterator to the start of v.
	itr = v.begin();

	return 0;
}

void show(const char *msg, vector<char> vect) {
	vector<char>::iterator itr;

	cout << msg << endl;
	for (itr = vect.begin(); itr != vect.end(); ++itr)
		cout << *itr << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<char> vect);

int main(void)
{
	vector<char> v;

	// Declare an iterator to a vector<char>.
	vector<char>::iterator itr;

	// Obtain an iterator to the start of v.
	itr = v.begin();

	return 0;
}

void show(const char *msg, vector<char> vect) {
	vector<char>::iterator itr;

	cout << msg << endl;
	for (itr = vect.begin(); itr != vect.end(); ++itr)
		cout << *itr << endl;
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<int> vect);

int main(void)
{
	// Declare a vector that has an initial capacity of 10.
	vector<int> v(10);

	for (unsigned i = 0; i < v.size(); ++i) v[i] = i*i;

	show("Contents of v: ", v);

	// the use of the subscripting operator.
	int sum = 0;
	for (unsigned i = 0; i < v.size(); ++i) sum += v[i];
	double avg = sum / v.size();
	cout << "The average of the elements is " << avg << "\n\n";

	// Add elements to the end of v.
	v.push_back(100);
	v.push_back(121);

	show("v after pushing elements onto the end: ", v);
	cout << endl;

	// Now use pop_back() to remove one element.
	v.pop_back();
	show("v after back-popping one element: ", v);
	cout << endl;

	// Declare an iterator to a vector<int>.
	vector<int>::iterator itr;
	// Now, declare reverse iterator to a vector<int>
	vector<int>::reverse_iterator ritr;

	// Cycle through v in the forward direction using an iterator.
	for (itr = v.begin(); itr != v.end(); ++itr)
		cout << *itr << " ";

	return 0;
}

void show(const char *msg, vector<int> vect) 
{
	cout << msg << endl;
	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << endl;
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<int> vect);

int main(void)
{
	// Declare a vector that has an initial capacity of 10.
	vector<int> v(10);

	for (unsigned i = 0; i < v.size(); ++i) v[i] = i*i;

	// Create an empty vector and then assign it a sequence that is the reverse of v.
	vector<int> v3;
	v3.assign(v.rbegin(), v.rend());
	show("v3 contains the reverse of v: ", v3);

	// Show the size and capacity of v.
	cout << "Size of v is " << v.size() << ". The capacity is " << v.capacity() << ".\n";

	// Now, resize v.
	v.resize(20);
	cout << "After calling resize(20), the size of v is "
		<< v.size() << " and the capacity is "
		<< v.capacity() << ".\n";

	// Now, reserve space for 50 elements.
	v.reserve(50);
	cout << "After calling reserve(50), the size of v is "
		<< v.size() << " and the capacity is "
		<< v.capacity() << ".\n";

	return 0;
}

void show(const char *msg, vector<int> vect) {
	cout << msg << endl;
	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << endl;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
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
	vector<double> v(5, 2.78);
	v[2] = 0.0;

	// make the vector as large as possible without reallocating
	v.resize(v.capacity(), 2.78);

	// find the smallest number
	vector<double>::iterator before_itr = min_element(v.begin(), v.end());

	// append one more element. This causes reallocation
	v.push_back(2.78);

	// find the smallest number. (Its value is the same as before.)
	vector<double>::iterator after_itr = min_element(v.begin(), v.end());

	// See if minimum is still in the same spot of memory
	if (before_itr == after_itr)
		cout << "The iterators are the same";
	else
		cout << "The iterators are not the same";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	vector<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// print all element in reverse order
	copy(coll.rbegin(), coll.rend(),        // source
		ostream_iterator<int>(cout, " "));  // destination
	cout << endl;

	return 0;
}
#endif



#if 0
#include <vector> 
#include <iostream> 

using namespace std;

vector<double> makevector(int size){

	vector<double> result;
	for (int i = 1; i <= size; i++) {
		result.push_back(double(i));
	}
	return result;
}

void print(const vector<double>& l)
{

	cout << "Size of vector is: " << l.size() << endl;

	vector<double>::const_iterator i;

	for (i = l.begin(); i != l.end(); i++)
	{
		cout << (*i) << " ";
	}

	cout << endl;
}

int main(void)
{
	vector<double> vector1 = makevector(5);

	vector<double>::iterator bi;

	// Create bidirectional iterator 
	vector<double>::reverse_iterator ri;

	// Traverse reverse forward 
	cout << "Traverse reverse forward" << endl;
	ri = vector1.rbegin();          // Set iterator 
	while (ri != vector1.rend()) cout << (*ri++) << " ";
	cout << endl << endl;

	// Traverse reverse backward 
	cout << "Traverse reverse backward" << endl;
	ri = (vector1.rend());
	do
	{
		cout << (*--ri) << " ";
	} while (ri != vector1.rbegin());
	cout << endl << endl;

	// Traverse reverse random 
	cout << "Traverse reverse random" << endl;
	cout << *ri << " ";               // First element 
	cout << *(ri += 3) << " ";        // 1+3 is 4th element 
	cout << *(ri -= 1) << " ";        // 4-1 is third element 
	cout << ri[-1] << " ";          // 3-1 is second element 
	cout << ri[1] << endl << endl;  // 3+1 is fourth element 


	return 0;
}
#endif



#if 0
#include <vector> 
#include <iostream> 

using namespace std;

vector<double> makevector(int size){

	vector<double> result;
	for (int i = 1; i <= size; i++) {
		result.push_back(double(i));
	}
	return result;
}

void print(const vector<double>& l)
{

	cout << "Size of vector is: " << l.size() << endl;

	vector<double>::const_iterator i;

	for (i = l.begin(); i != l.end(); i++)
	{
		cout << (*i) << " ";
	}

	cout << endl;
}

int main(void)
{
	vector<double> vector1 = makevector(5);
	vector<double>::iterator bi;

	// Change element with const iterator 
	cout << "Change first element with const iterator" << endl;
	vector<double>::const_iterator ci;
	ci = vector1.end();
	ci--;
	cout << *ci << endl;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const char* name_array[] = { "John", "Harry", "Mark", "Abe" };
	const int age_array[] = { 89, 34, 12, 20 };
	const int people = sizeof(age_array) / sizeof(age_array[0]);

	// make vectors with names and ages
	vector<string> names(name_array, name_array + people);
	vector<int> ages(age_array, age_array + people);

	// find the youngest age
	vector<int>::iterator age_itr = min_element(ages.begin(), ages.end());

	// convert from iterator to index
	cout << names[age_itr - ages.begin()]
		<< ", the youngest person, is " << *age_itr << " years old\n";

	// convert from index to iterator
	print(names);
	names.erase(names.begin() + 1); // erase the second element
	print(names);

	return 0;
}
#endif