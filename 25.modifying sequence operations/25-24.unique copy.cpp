#if 0
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	const string hello("Hello, how are you?");

	string s(hello.begin(), hello.end());

	// iterate through all of the characters
	string::iterator pos;
	for (pos = s.begin(); pos != s.end(); ++pos) {
		cout << *pos;
	}
	cout << endl;

	s.erase(unique(s.begin(), s.end()), s.end());
	cout << "no duplicates: " << s << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <locale>
using namespace std;

class bothWhiteSpaces {
private:
	const locale& loc;    // locale
public:

	bothWhiteSpaces(const locale& l) : loc(l) {
	}
	bool operator() (char elem1, char elem2) {
		return isspace(elem1, loc) && isspace(elem2, loc);
	}
};

int main()
{
	string contents;

	cin.unsetf(ios::skipws);

	unique_copy(istream_iterator<char>(cin),    // beginning of source
		istream_iterator<char>(),       // end of source
		back_inserter(contents),        // destination
		bothWhiteSpaces(cin.getloc())); // criterion for removing

	cout << contents;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string arrStr[5] = { "A", "B", "A", "D", "E" };

	list<string> lstStrDest;
	unique_copy(&arrStr[0], &arrStr[5], back_inserter(lstStrDest));

	for (list<string>::iterator p = lstStrDest.begin();
		p != lstStrDest.end(); ++p) {
		cout << *p << endl;
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

int main(void)
{
	const int SIZE = 10;
	int a1[SIZE] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
	std::vector< int > v1(a1, a1 + SIZE); // copy of a
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v1 contains: ";
	std::copy(v1.begin(), v1.end(), output);

	std::vector< int > results1;

	std::unique_copy(v1.begin(), v1.end(), std::back_inserter(results1));
	cout << "\nAfter unique_copy results1 contains: ";
	std::copy(results1.begin(), results1.end(), output);

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

bool differenceOne(int elem1, int elem2)
{
	return elem1 + 1 == elem2 || elem1 - 1 == elem2;
}

int main()
{
	int source[] = { 1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4 };
	int sourceNum = sizeof(source) / sizeof(source[0]);

	list<int> coll;
	copy(source, source + sourceNum,      // source
		back_inserter(coll));          // destination
	PRINT_ELEMENTS(coll);

	unique_copy(coll.begin(), coll.end(),          // source
		ostream_iterator<int>(cout, " "));  // destination
	cout << endl;

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

bool differenceOne(int elem1, int elem2)
{
	return elem1 + 1 == elem2 || elem1 - 1 == elem2;
}

int main(void)
{
	int source[] = { 1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4 };
	int sourceNum = sizeof(source) / sizeof(source[0]);

	list<int> coll;
	copy(source, source + sourceNum, back_inserter(coll));
	PRINT_ELEMENTS(coll);

	unique_copy(coll.begin(), coll.end(),ostream_iterator<int>(cout, " "), differenceOne);
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

bool bothSpaces(char elem1, char elem2)
{
	return elem1 == ' ' && elem2 == ' ';
}

int main(void)
{
	cin.unsetf(ios::skipws);

	unique_copy(istream_iterator<char>(cin), istream_iterator<char>(),ostream_iterator<char>(cout),	bothSpaces);
}
#endif
