#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	string s("Hello there");
	vector<char> vector1(s.begin(), s.end());

	// Fill first 5 positions of vector1 with X's:
	fill(vector1.begin(), vector1.begin() + 5, 'X');

	vector<char>::iterator pos;

	for (pos = vector1.begin(); pos != vector1.end(); ++pos) {
		cout << *pos << ' ';
	}

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm> // algorithm definitions
#include <vector>    // vector class-template definition
#include <iterator>  // ostream_iterator

int main(void)
{
	std::vector< char > chars(10);
	std::ostream_iterator< char > output(cout, " ");
	std::fill(chars.begin(), chars.end(), '5'); // fill chars with 5s

	cout << "Vector chars after filling with 5s:\n";
	std::copy(chars.begin(), chars.end(), output);
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
using namespace std;
template <class T> inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template <class T> inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

int main(void)
{

	fill_n(ostream_iterator<float>(cout, " "), 10, 7.7);
	cout << endl;

	list<string> coll;

	fill_n(back_inserter(coll), 9,"hello");
	fill(coll.begin(), coll.end(), "again");                    
	PRINT_ELEMENTS(coll, "coll: ");

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
using namespace std;
template <class T> inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template <class T> inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

int main(void)
{
	fill_n(ostream_iterator<float>(cout, " "), 10, 7.7);
	cout << endl;

	list<string> coll;

	fill_n(back_inserter(coll), 9,"hello");

	list<string>::iterator pos1, pos2;
	pos1 = coll.begin();
	pos2 = coll.end();
	fill(++pos1, --pos2, "hmmm");
	PRINT_ELEMENTS(coll, "coll: ");

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <iostream>

int main(void)
{
	using namespace std;

	vector <int> v(3);

	// fill all elements in the container with value 9
	fill(v.begin(), v.end(), 9);

	cout << "Contents of the vector are: " << endl;
	for (size_t nIndex = 0; nIndex < v.size(); ++nIndex)
	{
		cout << "Element [" << nIndex << "] = ";
		cout << v[nIndex] << endl;
	}

	return 0;
}
#endif