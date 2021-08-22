#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

char nextLetter();

int main(void)
{
	std::vector< char > chars(10);
	std::ostream_iterator< char > output(cout, " ");

	// generate values for all elements of chars with nextLetter
	std::generate(chars.begin(), chars.end(), nextLetter);

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
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
class calc_square {
	T i;
public:
	calc_square() : i(0) {}
	T operator()() { ++i; return i * i; }
};

int main(void)
{
	vector<int> vector1(10);

	generate(vector1.begin(), vector1.end(), calc_square<int>());

	for (int j = 0; j < 10; ++j)
		cout << vector1[j] << " ";

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

char nextLetter(void);

int main(void)
{
	std::vector< char > chars(10);
	std::ostream_iterator< char > output(cout, " ");

	// generate values for all elements of chars with nextLetter
	std::generate(chars.begin(), chars.end(), nextLetter);

	cout << "\n\nVector chars after generating letters A-J:\n";
	std::copy(chars.begin(), chars.end(), output);

	cout << endl;
	return 0;
}

// generator function returns next letter (starts with A)
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

template <class T>inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
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
	IntSequence(int initialValue) : value(initialValue) {
	}

	// ''function call''
	int operator() () {
		return value++;
	}
};

int main(void)
{
	list<int> coll;
	generate_n(back_inserter(coll), 9, IntSequence(1));

	PRINT_ELEMENTS(coll);

	// replace second to last element but one with values starting at 42
	generate(++coll.begin(), --coll.end(), IntSequence(42));

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

	// insert five random numbers
	generate_n(back_inserter(coll),	5, rand);

	// overwrite with five new random numbers
	generate(coll.begin(), coll.end(), rand);
	PRINT_ELEMENTS(coll);

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

int main(void)
{
	using namespace std;

	vector <int> v(10);
	generate(v.begin(), v.end(), rand);

	cout << "Elements in the vector of size " << v.size();
	for (size_t nCount = 0; nCount < v.size(); ++nCount)
		cout << v[nCount] << " ";

	return 0;
}
#endif
