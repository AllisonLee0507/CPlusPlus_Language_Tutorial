#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <vector>    // vector class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator iterator
#include <stdexcept> // out_of_range exception

int main(void)
{
	int array[6] = { 1, 2, 3, 4, 5, 6 };
	std::vector< int > integers(array, array + 6);
	std::ostream_iterator< int > output(cout, " ");

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	cout << "Vector integers contains: ";
	std::copy(integers.begin(), integers.end(), output);

	// insert 22 as 2nd element
	integers.insert(integers.begin() + 1, 22);

	cout << "\n\nVector integers contains: ";
	std::copy(integers.begin(), integers.end(), output);

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<char> v(10);
	vector<char> v2;
	char str[] = "<Vector>";
	unsigned int i;

	for (i = 0; i<10; i++)
		v[i] = i + 'a';

	for (i = 0; str[i]; i++)
		v2.push_back(str[i]);

	cout << "Original contents of v:\n";
	for (i = 0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << "\n\n";

	vector<char>::iterator p = v.begin();
	p += 2; // point to 3rd element

	v.insert(p, 10, 'X');

	// display contents after insertion
	cout << "Size after inserting X's = " << v.size() << endl;
	cout << "Contents after insert:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << "\n\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<char> v(10);
	vector<char> v2;
	char str[] = "<Vector>";
	unsigned int i;

	for (i = 0; i<10; i++)
		v[i] = i + 'a';

	for (i = 0; str[i]; i++)
		v2.push_back(str[i]);

	cout << "Original contents of v:\n";
	for (i = 0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << "\n\n";

	vector<char>::iterator p = v.begin();
	p += 2; // point to 3rd element

	v.insert(p, 10, 'X');

	// display contents after insertion
	cout << "Size after inserting X's = " << v.size() << endl;
	cout << "Contents after insert:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << "\n\n";


	// Insert v2 into v
	v.insert(p, v2.begin(), v2.end());
	cout << "Size after v2's insertion = ";
	cout << v.size() << endl;
	cout << "Contents after insert:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <vector>    // vector class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator iterator
#include <stdexcept> // out_of_range exception

int main(void)
{
	int array[6] = { 1, 2, 3, 4, 5, 6 };
	std::vector< int > integers(array, array + 6);
	std::ostream_iterator< int > output(cout, " ");

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	cout << "Vector integers contains: ";
	std::copy(integers.begin(), integers.end(), output);

	// insert elements from array
	integers.insert(integers.begin(), array, array + 6);
	cout << "\n\nContents of vector integers before clear: ";
	std::copy(integers.begin(), integers.end(), output);


	return 0;
}
#endif



#if 0
#include <vector>
#include <iostream>
using namespace std;
int main(void)
{
	// Instantiate a vector with 4 elements, each initialized to 90
	vector <int> v(4, 90);

	// Insert 25 at the beginning
	v.insert(v.begin(), 25);

	vector <int>::iterator i;
	for (i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << ' ';
	}

	return 0;
}
#endif


#if 0
#include <vector>
#include <iostream>
using namespace std;
int main(void)
{
	// Instantiate a vector with 4 elements, each initialized to 90
	vector <int> v (4, 90);

	vector <int>::iterator i;
	for (i = v.begin(); i != v.end(); ++i){
		cout << *i << ' ';
	}
	// Insert 2 numbers of value 45 at the end
	v.insert(v.end(), 2, 45);

	cout << "The vector after inserting two elements at the end: ";
	for (i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << ' ';
	}

	return 0;
}
#endif



#if 0
#include <vector>
#include <iostream>
using namespace std;
int main(void)
{
	// Instantiate a vector with 4 elements, each initialized to 90
	vector <int> v (4, 90);

	vector <int>::iterator i;
	for (i = v.begin(); i != v.end(); ++i){
		cout << *i << ' ';
	}
	vector <int> vecAnother(2, 30);

	v.insert(v.begin() + 1, vecAnother.begin(), vecAnother.end());

	for (i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << ' ';
	}

	return 0;
}
#endif



#if 0
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int arr[10]; // normal C++ array
	vector<int> vec; // STL vector
	int i;

	// Initialize each element of the array to the value of its index.
	for (i = 0; i < 10; i++) {
		arr[i] = i;
	}

	// Insert the contents of the array into the end of the vector.
	vec.insert(vec.end(), arr, arr + 10);

	// print the contents of the vector
	for (i = 0; i < 10; i++) {
		cout << vec[i] << " ";
	}

	return (0);
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
	vector<string> vec;


	vec.insert(vec.end(), "AAA");
	vec.insert(vec.end(), "BBBB");
	vec.insert(vec.end(), "CCCCC");


	vector<string>::iterator pos;


	for (pos = vec.begin(); pos != vec.end(); ++pos) {
		cout << *pos << ' ';
	}

	return 0;
}
#endif