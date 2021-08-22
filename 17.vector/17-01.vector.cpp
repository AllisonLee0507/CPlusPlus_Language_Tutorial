#if 0
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main(void)
{
	vector<char> vector2(3, 'x');
	assert(vector2.size() == 3);
	assert(vector2[0] == 'x' && vector2[1] == 'x' && vector2[2] == 'x');
	assert(vector2 == vector<char>(3, 'x'));

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main(void)
{
	vector<char> vector1;
	cout << vector1.size();

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>  // For find
using namespace std;

int main(void)
{
	char x[5] = { 'a', 'b', 'c', 'd', 'f' };

	vector<char> vector1(&x[0], &x[5]);

	// Search for the first occurrence
	vector<char>::iterator where = find(vector1.begin(), vector1.end(), 'b');


	cout << *where << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>  // For find
using namespace std;


int main(void)
{
	int x[5] = { 2, 4, 6, 8, 10 };

	vector<int> vector1(&x[0], &x[5]);

	// Search for the first occurrence
	vector<int>::iterator where = find(vector1.begin(), vector1.end(), 4);


	cout << *where << endl;
	return 0;
}
#endif



#if 0
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	vector<int> intVector; // creates a vector of ints with zero elements
	return (0);
}
#endif


#if 0
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	vector<int> intVector(10, 100); // creates a vector of 10 ints with value 100
	return (0);
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>  // For find
using namespace std;


int main(void)
{
	string x[5] = { "1234", "2345", "3456", "4567", "0987" };

	vector<string> vector1(&x[0], &x[5]);

	// Search for the first occurrence
	vector<string>::iterator where = find(vector1.begin(), vector1.end(), "1234");


	cout << *where << endl;
	return 0;
}
#endif



#if 0
#include <vector>

int main(void)
{
	using namespace std;

	// Instantiate an object using the default constructor
	vector <bool> vecBool1;

	// A vector of 10 elements with value true (default: false)
	vector <bool> vecBool2(10, true);

	// Instantiate one object as a copy of another
	vector <bool> vecBool2Copy(vecBool2);

	return 0;
}
#endif



#if 0
#include <vector>
#include <iostream>

int main(void)
{
	using namespace std;

	// Instantiate a vector<bool> to hold 3 elements
	vector <bool> vecBool(3);

	// Assign 3 elements using the array operator []
	vecBool[0] = true;
	vecBool[1] = true;
	vecBool[2] = false;

	// Insert a 4th element using push_back:
	// this will cause the vector to resize the buffer
	vecBool.push_back(true);

	cout << "The contents of the vector are: " << endl << "{";
	for (size_t nIndex = 0; nIndex < vecBool.size(); ++nIndex)
		cout << vecBool[nIndex] << ' ';
	cout << "}" << endl << endl;

	vecBool.flip();

	cout << "The flipped contents of the vector are: " << endl << "{";
	for (size_t nIndex = 0; nIndex < vecBool.size(); ++nIndex)
		cout << vecBool[nIndex] << ' ';
	cout << "}";

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v(10, 66);
	v[1] = 100;

	// get an iterator that points to the maximum
	vector<int>::iterator before_itr = max_element(v.begin(), v.end());
	cout << "The maximum before resizing is " << *before_itr;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <cassert>
#include <numeric>  // for accumulate
using namespace std;

int main(void)
{
	int x[5] = { 2, 3, 5, 7, 11 };

	vector<int> vector1(&x[0], &x[5]);

	int sum = accumulate(vector1.begin(), vector1.end(), 0);

	cout << sum << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class DailyTemp {
	int temp;
public:
	DailyTemp() { temp = 0; }
	DailyTemp(int x) { temp = x; }

	DailyTemp &operator=(int x) {
		temp = x; return *this;
	}

	double get_temp() { return temp; }
};

bool operator<(DailyTemp a, DailyTemp b)
{
	return a.get_temp() < b.get_temp();
}

bool operator==(DailyTemp a, DailyTemp b)
{
	return a.get_temp() == b.get_temp();
}

int main(void)
{
	vector<DailyTemp> v;
	unsigned int i;

	for (i = 0; i<7; i++)
		v.push_back(DailyTemp(60 + rand() % 30));

	cout << "Fahrenheit temperatures:\n";
	for (i = 0; i<v.size(); i++)
		cout << v[i].get_temp() << " ";

	cout << endl;

	// convert from Fahrenheit to Centigrade
	for (i = 0; i<v.size(); i++)
		v[i] = (int)(v[i].get_temp() - 32) * 5 / 9;

	cout << "Centigrade temperatures:\n";
	for (i = 0; i<v.size(); i++)
		cout << v[i].get_temp() << " ";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
	/* create a string vector
	* - initialized by all words from standard input
	*/
	vector<string> coll((istream_iterator<string>(cin)),
		istream_iterator<string>());

	// sort elements
	sort(coll.begin(), coll.end());

	// print all elements ignoring subsequent duplicates
	unique_copy(coll.begin(), coll.end(),
		ostream_iterator<string>(cout, "\n"));
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;

class MyClass {
};

int main(void)
{

	vector<MyClass*> vec;

	MyClass* p = NULL;

	for (int i = 0; i < 10; i++) {
		p = new MyClass();
		vec.push_back(p);
	}
	for (vector<MyClass*>::iterator pObj = vec.begin();
		pObj != vec.end(); ++pObj) {
		delete *pObj;
	}

	vec.clear();
}
#endif


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
#include <vector>
#include <iostream>
using namespace std;

iint main(void)
{
	const long N = 600000; // Length of tuples x and y
	const long S = 10;     // Sparseness factor

	vector<double> x(N), y(N);


	for (long k = 0; 3 * k * S < N; ++k)
		x[3 * k * S] = 1.0;
	for (long k = 0; 5 * k * S < N; ++k)
		y[5 * k * S] = 1.0;

	double sum = 0.0;
	for (long k = 0; k < N; ++k)
		sum += x[k] * y[k];

	cout << sum << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	// create empty vector for strings
	vector<string> sentence;

	// reserve memory for five elements to avoid reallocation
	sentence.reserve(5);

	// append some elements
	sentence.push_back("Hello,");
	sentence.push_back("how");
	sentence.push_back("are");
	sentence.push_back("you");
	sentence.push_back("?");

	// assign "!" to the last element
	sentence.back() = "!";

	// print elements separated with spaces
	copy(sentence.begin(), sentence.end(),
		ostream_iterator<string>(cout, " "));
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main(void)
{
	char name[] = "abcedfghijklmn";
	vector<char> George(name, name + 6);

	vector<char> son1(George); // Uses copy constructor
	assert(son1 == George);

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
	std::vector <int> v2(10, 90);

	// Instantiate one vector and initialize it to the contents of another
	std::vector <int> v3(v2);

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

class MyClass {
public:
	unsigned long id;
	unsigned long generation;
	static unsigned long total_copies;

	MyClass() : id(0), generation(0) { }

	MyClass(unsigned long n) : id(n), generation(0) { }

	MyClass(const MyClass& z) : id(z.id), generation(z.generation + 1) {
		++total_copies;
	}
};

bool operator==(const MyClass& x, const MyClass& y)
{
	return x.id == y.id;
}

bool operator!=(const MyClass& x, const MyClass& y)
{
	return x.id != y.id;
}

unsigned long MyClass::total_copies = 0;

int main(void)
{
	vector<MyClass> vector1, vector2(3);

	assert(vector1.size() == 0);
	assert(vector2.size() == 3);

	assert(vector2[0] == MyClass() && vector2[1] == MyClass() &&
		vector2[2] == MyClass());

	for (int i = 0; i != 3; ++i)
		cout << "vector2[" << i << "].generation: " << vector2[i].generation << endl;

	cout << "Total copies: " << MyClass::total_copies << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>);

int main(void)
{
	int data[] = { 11, 12, 23, 34 };
	int size = sizeof(data) / sizeof(data[0]);
	vector<int> vec(data, &data[size]);
	print(vec);           // 11 12 23 34
	return 0;
}

void print(vector<int> vec) {
	vector<int>::iterator p = vec.begin();
	while (p < vec.end())
		cout << *p++ << " ";
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

class MyClass {
public:
	unsigned long id;
	MyClass() : id(0) { }
	MyClass(unsigned long x) : id(x) { }


};
bool operator==(const MyClass& x, const MyClass& y) {
	return x.id == y.id;
}

bool operator!=(const MyClass& x, const MyClass& y)
{
	return x.id != y.id;
}


int main(void)
{
	vector<MyClass> vector1, vector2(3);
	assert(vector1.size() == 0);
	assert(vector2.size() == 3);
	assert(vector2[0] == MyClass() && vector2[1] == MyClass() && vector2[2] == MyClass());
	assert(vector2 == vector<MyClass>(3, MyClass()));
	return 0;
}
#endif