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
	vector<int> coll;
	vector<int>::iterator pos;

	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMENTS(coll, "coll: ");

	// find first element divisible by 3
	pos = find_if(coll.begin(), coll.end(),
		not1(bind2nd(modulus<int>(), 3)));

	// print its position
	cout << "the "
		<< distance(coll.begin(), pos) + 1
		<< ". element is the first divisible by 3" << endl;

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
	vector<int> coll;
	vector<int>::iterator pos;

	INSERT_ELEMENTS(coll, 1, 9);

	PRINT_ELEMENTS(coll, "coll: ");

	// find first element greater than 3
	pos = find_if(coll.begin(), coll.end(),    // range
		bind2nd(greater<int>(), 3));  // criterion

	// print its position
	cout << "the "
		<< distance(coll.begin(), pos) + 1
		<< ". element is the first greater than 3" << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

template <class K, class V>
class value_equals {
private:
	V value;
public:
	// constructor (initialize value to compare with)
	value_equals(const V& v)
		: value(v) {
	}
	// comparison
	bool operator() (pair<const K, V> elem) {
		return elem.second == value;
	}
};

int main(void)
{
	typedef map<float, float> FloatFloatMap;
	FloatFloatMap coll;
	FloatFloatMap::iterator pos;

	// fill container
	coll[1] = 7;
	coll[2] = 4;
	coll[3] = 2;
	coll[4] = 3;
	coll[5] = 6;
	coll[6] = 1;
	coll[7] = 3;

	// search an element with value 3.0
	pos = find_if(coll.begin(), coll.end(),    // linear complexity
		value_equals<float, float>(3.0));
	if (pos != coll.end()) {
		cout << pos->first << ": "
			<< pos->second << endl;
	}

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

bool greater10(int value);

int main(void)
{
	int a[10] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
	std::vector< int > v(a, a + 10); // copy of a
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v contains: ";
	std::copy(v.begin(), v.end(), output); // display output vector

	// locate first occurrence of 16 in v
	std::vector< int >::iterator location;
	// locate first occurrence of value greater than 10 in v
	location = std::find_if(v.begin(), v.end(), greater10);

	if (location != v.end()) // found value greater than 10
		cout << "\n\nThe first value greater than 10 is " << *location
		<< "\nfound at location " << (location - v.begin());
	else // value greater than 10 not found
		cout << "\n\nNo values greater than 10 were found";

	cout << endl;
	return 0;
}
bool greater10(int value)
{
	return value > 10;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool is_short_str(string str);

int main(void)
{
	vector<string> v;
	vector<string>::iterator itr;

	v.push_back("one");
	v.push_back("two");
	v.push_back("three");
	v.push_back("four");
	v.push_back("five");
	v.push_back("six");

	for (unsigned i = 0; i < v.size(); ++i)
		cout << v[i] << " ";

	itr = find(v.begin(), v.end(), "two");
	if (itr != v.end()) {
		cout << "Replacing with \"TWO\"" << endl;
		*itr = "TWO";
	}
	return 0;
}

bool is_short_str(string str)
{
	if (str.size() <= 3) return true;
	return false;
}
#endif


#if 0
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

bool perfectScore(int num)
{
	return (num >= 100);
}

int main(int argc, char** argv){
	int num;

	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);

	vector<int>::iterator it = find_if(myVector.begin(), myVector.end(), perfectScore);
	if (it == myVector.end()) {
		cout << "No perfect scores\n";
	}
	else {
		cout << "Found a \"perfect\" score of " << *it << endl;
	}
	return (0);
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cctype>

using namespace std;

bool is_sentence_start(char ch);
template<class InIter>
void show_range(const char *msg, InIter start, InIter end);

int main(void)
{
	vector<char> v;
	vector<char>::iterator itr;
	const char *str = "this is a test";

	for (unsigned i = 0; i < strlen(str); i++)
		v.push_back(str[i]);

	show_range("Contents of v: ", v.begin(), v.end());
	cout << endl;

	vector<char>::iterator itr_start, itr_end;

	itr_start = v.begin();
	do {
		itr_start = find_if(itr_start, v.end(), is_sentence_start);

		itr_end = find_if(itr_start, v.end(), is_sentence_start);

		show_range("", itr_start, itr_end);
	} while (itr_end != v.end());

	return 0;
}
#endif
