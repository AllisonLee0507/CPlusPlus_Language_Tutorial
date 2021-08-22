#if 0
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>

template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}


using namespace std;

int main(void)
{
	list<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMENTS(coll, "coll: ");

	list<int>::iterator pos1;
	pos1 = find(coll.begin(), coll.end(), 4);

	list<int>::iterator pos2;
	if (pos1 != coll.end()) {
		pos2 = find(++pos1, coll.end(), 4);
	}

	if (pos1 != coll.end() && pos2 != coll.end()) {
		copy(--pos1, ++pos2,
			ostream_iterator<int>(cout, " "));
		cout << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	list<string> lstStr;

	lstStr.push_back("A");
	lstStr.push_back("B");
	lstStr.push_back("C");
	lstStr.push_back("D");
	lstStr.push_back("E");

	list<string>::iterator p;

	p = find(lstStr.begin(), lstStr.end(), "C");
	p = lstStr.erase(p);
	lstStr.erase(remove(lstStr.begin(), lstStr.end(), "D"), lstStr.end());

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int> coll;
	list<int>::iterator pos;

	for (int i = 20; i <= 40; ++i) {
		coll.push_back(i);
	}

	pos = find(coll.begin(), coll.end(), 3);
		reverse(pos, coll.end());

	list<int>::iterator pos25, pos35;
	pos25 = find(coll.begin(), coll.end(), 25);
	pos35 = find(coll.begin(), coll.end(), 35);

	cout << "max: " << *max_element(pos25, pos35) << endl;
	cout << "max: " << *max_element(pos25, ++pos35) << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;

int main(void)
{
	int a[10] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
	std::vector< int > v(a, a + 10); // copy of a
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v contains: ";
	std::copy(v.begin(), v.end(), output); // display output vector

	std::vector< int >::iterator location;
	location = std::find(v.begin(), v.end(), 16);

	if (location != v.end()) // found 16
		cout << "\n\nFound 16 at location " << (location - v.begin());
	else // 16 not found
		cout << "\n\n16 not found";

	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm> // for find
#include <iterator>
using namespace std;


int main(void)
{
	string s("It is him.");

	vector<char> vector1(s.begin(), s.end());
	ostream_iterator<char> out(cout, " ");

	vector<char>::iterator i = find(vector1.begin(), vector1.end(), 'i');
	cout << "chars from the first i to the end: ";
	copy(i, vector1.end(), out); cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <algorithm>  // for find
using namespace std;

int main(void)
{
	char s[] = "C++ is a better C";
	int len = strlen(s);

	// Search for the first occurrence of the letter e:
	const char* where = find(&s[0], &s[len], 'e');

	cout << *where << endl;

	where = find(&s[0], &s[len], 'A');

	cout << *where << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main(void)
{
	int a[10] = { 12, 3, 25, 7, 11, 213, 7, 123, 29, -31 };

	// Find the first element equal to 7 in the array:
	int* ptr = find(&a[0], &a[10], 7);

	assert(*ptr == 7 && *(ptr + 1) == 11);

	cout << *ptr;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main(void)
{
	int a[10] = { 12, 3, 25, 7, 11, 213, 7, 123, 29, -31 };

	list<int> list1(&a[0], &a[10]);

	// Find the first element equal to 7 in list1:
	list<int>::iterator i = find(list1.begin(), list1.end(), 7);

	assert(*i == 7 && *(++i) == 11);

	cout << *i;

	return 0;
}
#endif



#if 0
#include <iostream>        
#include <cassert>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main(void)
{
	cout << "Type some characters, including an 'x' followed\n"
		<< "by at least one nonwhite-space character: " << flush;

	istream_iterator<char> in(cin);
	istream_iterator<char> eos;
	find(in, eos, 'x');

	cout << "The first nonwhite-space character following\n"
		<< "the first 'x' was '" << *(++in) << "'." << endl;

	return 0;
}
#endif




#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std; 

int main(void)
{
	cout << "Type some characters, including an 'x' followed\n"
		<< "by at least one nonwhite-space character: " << flush;

	istream_iterator<char> in(cin);
	istream_iterator<char> eos;
	find(in, eos, 'x');

	cout << "The first nonwhite-space character following\n"
		<< "the first 'x' was '" << *(++in) << "'." << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main(void)
{
	int a[10] = { 12, 3, 25, 7, 11, 213, 7, 123, 29, -31 };

	// Find the first element equal to 7 in the array:
	int* ptr = find(&a[0], &a[10], 7);

	assert(*ptr == 7 && *(ptr + 1) == 11);

	cout << *ptr;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


class Employee {
	string name;
	unsigned number;

public:
	Employee() { name = ""; number = 0; }

	Employee(string n, unsigned num) {
		name = n;
		number = num;
	}
	string get_name() { return name; }
	unsigned get_number() { return number; }
};

void show(vector<Employee> vect) {
	vector<Employee>::iterator itr;

	for (itr = vect.begin(); itr != vect.end(); ++itr)
		cout << itr->get_number() << " " << itr->get_name() << endl;;

}

bool operator==(Employee a, Employee b){
	return a.get_number() == b.get_number();
}

int main(void)
{
	vector<Employee> employeeList;

	employeeList.push_back(Employee("A", 9));
	employeeList.push_back(Employee("B", 8));
	employeeList.push_back(Employee("C", 6));
	employeeList.push_back(Employee("D", 1));

	show(employeeList);

	vector<Employee>::iterator itr;
	itr = find(employeeList.begin(), employeeList.end(), Employee("", 2));
	cout << itr->get_name();

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (void)
{
	vector <int> v;

	v.push_back(50);
	v.push_back(2991);
	v.push_back(23);
	v.push_back(9999);

	vector <int>::iterator i = v.begin();

	while (i != v.end()){
		cout << *i << endl;
		++i;
	}

	i = find(v.begin(), v.end(), 2991);

	if (i != v.end())
	{
		int nPosition = distance(v.begin(), i);
		cout << "Value " << *i;
		cout << " found in the vector at position: " << nPosition << endl;
	}

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int num = 4;

	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);

	vector<int>::iterator it = find(myVector.begin(), myVector.end(), num);
	if (it == myVector.end()) {
		cout << "Could not find " << num << endl;
	}
	else {
		cout << "Found " << *it << endl;
	}


	return (0);
}
#endif



#if 0
#include <functional>
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void findEmptyString(const vector<string>& strings)
{
	vector<string>::const_iterator it = find_if(strings.begin(), strings.end(), mem_fun_ref(&string::empty));

	if (it == strings.end()) {
		cout << "No empty strings!\n";
	}
	else {
		cout << "Empty string at position: " << it - strings.begin() << endl;
	}
}

int main(int argc, char** argv)
{
	vector<string> myVector;

	string one = "blah";
	string two = "";
	myVector.push_back(one);
	myVector.push_back(one);
	myVector.push_back(two);
	myVector.push_back(one);

	findEmptyString(myVector);

	return (0);
}
#endif