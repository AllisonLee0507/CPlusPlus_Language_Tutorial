#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

char nextLetter(void);

int main(void)
{
	std::vector< char > chars(10);
	std::ostream_iterator< char > output(cout, " ");

	// generate values for first five elements of chars with nextLetter
	std::generate_n(chars.begin(), 5, nextLetter);

	cout << "\n\nVector chars after generating letters A-J:\n";
	std::copy(chars.begin(), chars.end(), output);

	cout << endl;
	return 0;
}

// generator function returns next letter (starts with A)
char nextLetter() {
	static char letter = 'A';
	return letter++;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

char nextLetter(void);

int main(void)
{
	std::vector< char > chars(10);
	std::ostream_iterator< char > output(cout, " ");

	std::generate_n(chars.begin(), 5, nextLetter);

	cout << "\n\nVector chars after generating letters A-J:\n";
	std::copy(chars.begin(), chars.end(), output);

	cout << endl;
	return 0;
}

char nextLetter(void) {
	static char letter = 'A';
	return letter++;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

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


class IntSequence {
private:
	int value;
public:
	// constructor
	IntSequence(int initialValue)
		: value(initialValue) {
	}

	// ''function call''
	int operator() () {
		return value++;
	}
};

int main(void)
{
	list<int> coll;
	IntSequence seq(1);

	generate_n<back_insert_iterator<list<int> >, int, IntSequence&>(back_inserter(coll),	4, seq);
	PRINT_ELEMENTS(coll);

	generate_n(back_inserter(coll),	4,IntSequence(42));
	PRINT_ELEMENTS(coll);

	generate_n(back_inserter(coll), 4,seq);
	PRINT_ELEMENTS(coll);

	generate_n(back_inserter(coll),	4, seq);
	PRINT_ELEMENTS(coll);

	return 0;
}
#endif



#if 0
#include <cstdlib>

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

template <class T>inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template <class T>inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

int main(void)
{
	list<int> coll;
	generate_n(back_inserter(coll),	5,rand);
	PRINT_ELEMENTS(coll);

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main(void)
{
	list <int> l(10);
	generate_n(l.begin(), 5, rand);

	cout << "Elements in the list of size: " << l.size();
	list <int>::const_iterator li;

	for (li = l.begin(); li != l.end(); ++li)
		cout << *li << ' ';

	return 0;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

char nextLetter(void);

int main(void)
{
	vector< char > chars(10);

	fill(chars.begin(), chars.end(), '5');

	fill_n(chars.begin(), 5, 'A');

	generate(chars.begin(), chars.end(), nextLetter);

	generate_n(chars.begin(), 5, nextLetter);

	cout << endl;
	return 0;
}

char nextLetter(void)
{
	static char letter = 'A';
	return letter++;
}
#endif
