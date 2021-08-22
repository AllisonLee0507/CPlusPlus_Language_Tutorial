#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v(5);
	bool found;

	for (int i = 0; i < 5; ++i)
		v[i] = i;

	found = binary_search(v.begin(), v.end(), 3);
	cout << found << " ";

	// Try searching for a value that's not present:
	found = binary_search(v.begin(), v.end(), 9);
	cout << found;

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a[10] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
	std::vector< int > v(a, a + 10); // copy of a
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v contains: ";
	std::copy(v.begin(), v.end(), output); // display output vector

	// locate first occurrence of 16 in v
	std::vector< int >::iterator location;
	// use binary_search to locate 13 in v
	if (std::binary_search(v.begin(), v.end(), 13))
		cout << "\n\n13 was found in v";
	else
		cout << "\n\n13 was not found in v";


	cout << endl;
	return 0;
}
#endif



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
	PRINT_ELEMENTS(coll);

	// check existence of element with value 5
	if (binary_search(coll.begin(), coll.end(), 5)) {
		cout << "5 is present" << endl;
	}
	else {
		cout << "5 is not present" << endl;
	}

	// check existence of element with value 42
	if (binary_search(coll.begin(), coll.end(), 42)) {
		cout << "42 is present" << endl;
	}
	else {
		cout << "42 is not present" << endl;
	}
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
typedef vector <string> VECTOR_STRINGS;
int main (void)
{
	VECTOR_STRINGS v;

	v.push_back("A");
	v.push_back("B");
	v.push_back("C");
	v.push_back("D");

	// insert a duplicate into the vector
	v.push_back("D");

	for (size_t nItem = 0; nItem < v.size(); ++nItem){
		cout << "Name [" << nItem << "] = \"";
		cout << v[nItem] << "\"" << endl;
	}

	// sort the names using std::sort
	sort(v.begin(), v.end());
	for (size_t nItem = 0; nItem < v.size(); ++nItem){
		cout << "Name [" << nItem << "] = \"";
		cout << v[nItem] << "\"" << endl;
	}

	bool bElementFound = binary_search(v.begin(), v.end(), "C");

	if (bElementFound)
		cout << "Result: C was found in the vector!" << endl;
	else
		cout << "Element not found " << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool greater10(int value);

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
	vector< int > v(a, a + SIZE);

	vector< int >::iterator location;
	location = find(v.begin(), v.end(), 16);

	sort(v.begin(), v.end());

	if (binary_search(v.begin(), v.end(), 13))
		cout << "\n\n13 was found in v";
	else
		cout << "\n\n13 was not found in v";

	return 0;
}

bool greater10(int value) 
{ 
	return value > 10; 
}
#endif
