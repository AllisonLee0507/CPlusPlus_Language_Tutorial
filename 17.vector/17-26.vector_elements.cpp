#if 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(const string& name, const int age);
	Employee(const Employee& rhs);
	~Employee();

	void    SetName(const string& name);
	string  GetName()      const;
	void    SetAge(const int age);
	int     GetAge()       const;

	Employee& operator=(const Employee& rhs);

private:
	string itsName;
	int itsAge;
};

Employee::Employee()
: itsName("New Employee"), itsAge(16)
{}

Employee::Employee(const string& name, const int age)
: itsName(name), itsAge(age)
{}

Employee::Employee(const Employee& rhs)
: itsName(rhs.GetName()), itsAge(rhs.GetAge())
{}

Employee::~Employee()
{}

void Employee::SetName(const string& name)
{
	itsName = name;
}

string Employee::GetName() const
{
	return itsName;
}

void Employee::SetAge(const int age)
{
	itsAge = age;
}

int Employee::GetAge() const
{
	return itsAge;
}

Employee& Employee::operator=(const Employee& rhs)
{
	itsName = rhs.GetName();
	itsAge = rhs.GetAge();
	return *this;
}

ostream& operator<<(ostream& os, const Employee& rhs)
{
	os << rhs.GetName() << " is " << rhs.GetAge() << " years old";
	return os;
}

template<class T>
void ShowVector(const vector<T>& v);    // display vector properties

typedef vector<Employee>        SchoolClass;

int main(void)
{
	Employee Harry;
	Employee Sally("Sally", 15);
	Employee Bill("Bill", 17);
	Employee Peter("Peter", 16);

	SchoolClass    EmptyClass;
	cout << "EmptyClass:\n";
	ShowVector(EmptyClass);

	SchoolClass GrowingClass(3);
	cout << "GrowingClass(3):\n";
	ShowVector(GrowingClass);

	GrowingClass[0] = Harry;
	GrowingClass[1] = Sally;
	GrowingClass[2] = Bill;
	cout << "GrowingClass(3) after assigning students:\n";
	ShowVector(GrowingClass);

	GrowingClass.push_back(Peter);
	cout << "GrowingClass() after added 4th student:\n";
	ShowVector(GrowingClass);

	GrowingClass[0].SetName("Harry");
	GrowingClass[0].SetAge(18);
	cout << "GrowingClass() after Set\n:";
	ShowVector(GrowingClass);

	return 0;
}

template<class T>
void ShowVector(const vector<T>& v)
{
	cout << "max_size() = " << v.max_size();
	cout << "\tsize() = " << v.size();
	cout << "\tcapacity() = " << v.capacity();
	cout << "\t" << (v.empty() ? "empty" : "not empty");
	cout << "\n";

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << "\n";

	cout << endl;
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

	vector<double>::reverse_iterator ri;

	ri = vector1.rbegin();          // Set iterator 
	while (ri != vector1.rend()) cout << (*ri++) << " ";
	cout << endl << endl;

	// Change element 
	cout << "Change first element with mutable iterator" << endl;
	bi = vector1.begin();
	*bi = double(99);
	print(vector1);

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

	vector<double>::reverse_iterator ri;

	ri = vector1.rbegin();          // Set iterator 
	while (ri != vector1.rend()) cout << (*ri++) << " ";
	cout << endl << endl;

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
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector <int> v;

	// Insert sample integers into the vector:
	v.push_back(50);
	v.push_back(1);
	v.push_back(987);
	v.push_back(1001);

	unsigned int nElementIndex = 0;
	while (nElementIndex < v.size()){
		cout << "Element at position " << nElementIndex;
		cout << " is: " << v[nElementIndex] << endl;

		++nElementIndex;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;

	vector <int> v;

	v.push_back(50);
	v.push_back(1);
	v.push_back(987);
	v.push_back(1001);

	// Access objects in a vector using iterators:
	vector<int>::iterator i = v.begin();

	while (i != v.end())
	{
		size_t nElementIndex = distance(v.begin(),
			i);

		cout << "Element at position ";
		cout << nElementIndex << " is: " << *i << endl;

		// move to the next element
		++i;
	}

	return 0;
}
#endif


#if 0
#include <vector>
#include <iostream>

int main(void)
{
	std::vector <int> v (4);

	// Copy integer values into individual element locations
	v[0] = 50;
	v[1] = 1;
	v[2] = 987;
	v[3] = 1001;

	std::cout << "The vector contains ";
	std::cout << v.size() << " Elements";

	return 0;
}
#endif



#if 0
#include <vector>

int main(void)
{
	std::vector <int> v;

	// Instantiate a vector with 10 elements (it can grow larger)
	std::vector <int> v1(10);


	return 0;
}
#endif



#if 0
#include <vector>

int main(void)
{
	std::vector <int> v;

	// Instantiate a vector with 10 elements (it can grow larger)
	std::vector <int> v1(10);

	// Instantiate a vector with 10 elements, each initialized to 90
	std::vector <int> vecArrayWithTenInitializedElements(10, 90);

	return 0;
}
#endif



#if 0
#include <vector>

int main(void)
{
	std::vector <int> v;

	// Instantiate a vector with 10 elements (it can grow larger)
	std::vector <int> v1(10);

	// Instantiate a vector with 10 elements, each initialized to 90
	std::vector <int> vecArrayWithTenInitializedElements(10, 90);

	// Instantiate one vector and initialize it to the contents of another
	std::vector <int> vecArrayCopy(vecArrayWithTenInitializedElements);

	// Instantiate a vector to 5 elements taken from another
	std::vector<int> vecSomeElementsCopied(v.begin(), v.begin() + 5);

	return 0;
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

	cout << "The first and last element in v as"
		<< " pointed to by begin() and end()-1:\n"
		<< *v.begin() << ", " << *(v.end() - 1) << "\n\n";

	return 0;
}

void show(const char *msg, vector<int> vect) {
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

	show("Contents of v: ", v);

	// the use of the subscripting operator.
	int sum = 0;
	for (unsigned i = 0; i < v.size(); ++i) sum += v[i];
	double avg = sum / v.size();
	cout << "The average of the elements is " << avg << "\n\n";

	// Add elements to the end of v.
	v.push_back(100);
	v.push_back(121);

	cout << "The first and last element in v as"
		<< " pointed to by rbegin() and rend()-1:\n"
		<< *v.rbegin() << ", " << *(v.rend() - 1) << "\n\n";

	return 0;
}

void show(const char *msg, vector<int> vect) {
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

	show("Contents of v: ", v);

	// Add elements to the end of v.
	v.push_back(100);
	v.push_back(121);

	return 0;
}

// Display the contents of a vector<int>.
void show(const char *msg, vector<int> vect) {
	cout << msg;
	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << " ";
	cout << "\n";
}
#endif



#if 0
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
	const int num_elements = 5;
	const float value = 3.14f;

	// construct a vector filled with copies of one value
	vector<float> v(num_elements, value);
	print(v);
	return 0;
}
#endif



#if 0
#include <list>
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
	const int num_elements = 4;
	const double data[num_elements] = { 4.78, 6.97, 8.81, 9.02 };
	list<double> l(data, data + num_elements);

	const char* flavors[] = { "A", "B", "C" };
	vector<string> v(flavors,
		flavors + sizeof(flavors) / sizeof(flavors[0]));

	// display containers
	print(l);
	print(v);

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>

using namespace std;

class Element
{

public:
	Element();
	Element(const Element&);
	~Element();
	Element& operator=(const Element&);
};

inline
Element::Element()
{
	cout << "\nIn default constructor";
}

inline
Element::Element(const Element&)
{
	cout << "\nIn copy constructor";
}

inline
Element::~Element()
{
	cout << "\nIn destructor";
}

inline
Element& Element::operator=(const Element&)
{
	cout << "\nIn assignment operator";
	return *this;
}

int main(void)
{
	cout << "Constructing Vector With Three Elements";
	vector<Element> d(3);

	cout << "\n\nDeleting First Element";
	d.erase(d.begin());

	cout << "\n\nDeleting All Elements";
	d.clear();

	return 0;
}
#endif



#if 0
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

void printVector(const vector<int>& v){
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main(int argc, char** argv){
	vector<int> v1, v2;
	int i;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(5);

	// Insert it in the correct place
	v1.insert(v1.begin() + 3, 4);

	// Add elements 6 through 10 to v2
	for (i = 6; i <= 10; i++) {
		v2.push_back(i);
	}

	printVector(v1);
	printVector(v2);

	// add all the elements from v2 to the end of v1
	v1.insert(v1.end(), v2.begin(), v2.end());

	printVector(v1);

	return (0);
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

	return (0);
}
#endif



#if 0
#include <vector>
#include <iostream>

int main(void)
{
	using namespace std;

	// Instantiate a vector with 4 elements, each initialized to 90
	vector <int> v(4, 90);

	vector <int>::iterator i;
	for (i = v.begin(); i != v.end(); ++i){
		cout << *i << ' ';
	}

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
	cout << "Modified Contents:\n";
	p = v.begin();
	while (p != v.end()) {
		cout << *p << " ";
		p++;
	}
	cout << endl;

	return 0;
}
#endif