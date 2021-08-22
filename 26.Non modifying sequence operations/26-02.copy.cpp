#if 0
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int>   coll1;
	vector<int> coll2;

	for (int i = 1; i <= 9; ++i) {
		coll1.push_back(i);
	}

	coll2.resize(coll1.size());
	copy(coll1.begin(), coll1.end(), coll2.begin());

	deque<int> coll3(coll1.size());

	copy(coll1.begin(), coll1.end(),coll3.begin());
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

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);

	copy(coll1.begin(), coll1.end(), back_inserter(coll2));
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));

	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int> coll1;

	for (int i = 1; i <= 9; ++i) {
		coll1.push_back(i);
	}

	vector<int> coll2;
	copy(coll1.begin(), coll1.end(), back_inserter(coll2))

	deque<int> coll3;
	copy(coll1.begin(), coll1.end(), front_inserter(coll3));

	set<int> coll4;
	copy(coll1.begin(), coll1.end(),inserter(coll4, coll4.begin()));

	return 0;
}
#endif



#if 0
#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	deque<string> coll;

	coll.assign(3, string("string"));
	coll.push_back("last string");
	coll.push_front("first string");

	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

void printLists (const list<int>& l1, const list<int>& l2)
{
	cout << "list1: ";
	copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "list2: ";
	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));
	cout << endl << endl;
}

int main(void)
{
	list<int> list1, list2;

	for (int i = 0; i<6; ++i) {
		list1.push_back(i);
		list2.push_front(i);
	}
	printLists(list1, list2);

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <set>

#include <algorithm>
#include <iterator> // ostream_iterator

int main(void)
{
	double a[5] = { 2.1, 4.2, 9.5, 2.1, 3.7 };
	std::set< double, std::less< double > > doubleSet(a, a + 5);;
	std::ostream_iterator< double > output(cout, " ");

	cout << "doubleSet contains: ";
	std::copy(doubleSet.begin(), doubleSet.end(), output);

	cout << endl;
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
	vector<string> sentence;

	sentence.reserve(5);

	sentence.push_back("Hello,");
	sentence.push_back("how");
	sentence.push_back("are");
	sentence.push_back("you");
	sentence.push_back("?");

	copy(sentence.begin(), sentence.end(), ostream_iterator<string>(cout, " "));
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

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);

	copy(coll1.begin(), coll1.end(), back_inserter(coll2));
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
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

int main(void)
{
	vector<int> coll1;
	list<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);

	copy(coll1.begin(), coll1.end(),back_inserter(coll2));
	copy(coll1.rbegin(), coll1.rend(), coll2.begin())
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
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

int main(void)
{
	vector<char> source(10, '.');
	for (int c = 'a'; c <= 'f'; c++) {
		source.push_back(c);
	}
	source.insert(source.end(), 10, '.');
	PRINT_ELEMENTS(source, "source: ");

	vector<char> c1(source.begin(), source.end());
	copy(c1.begin() + 10, c1.begin() + 16, c1.begin() + 7);
	PRINT_ELEMENTS(c1, "c1:     ");

	vector<char> c2(source.begin(), source.end());
	copy_backward(c2.begin() + 10, c2.begin() + 16,	c2.begin() + 19);
	PRINT_ELEMENTS(c2, "c2:     ");

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

int main(void)
{
	copy(istream_iterator<string>(cin),         // beginning of source
		istream_iterator<string>(),            // end of source
		ostream_iterator<string>(cout, "\n"));  // destination

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	string s("abcdefghihklmnopqrstuvwxyz");
	vector<char> vector1(s.begin(), s.end());
	vector<char>::iterator pos;

	copy(vector1.begin() + 4, vector1.end(), vector1.begin());

	for (pos = vector1.begin(); pos != vector1.end(); ++pos) {
		cout << *pos << ' ';
	}


	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	string s("abcdefghihklmnopqrstuvwxyz");

	vector<char> vector1(s.begin(), s.end());
	vector<char> vector2(vector1.size());

	copy(vector1.begin(), vector1.end(), vector2.begin());

	assert(vector1 == vector2);
	vector<char>::iterator pos;

	for (pos = vector1.begin(); pos != vector1.end(); ++pos) {
		cout << *pos << ' ';
	}
	cout << "\n\n\n\n";
	for (pos = vector2.begin(); pos != vector2.end(); ++pos) {
		cout << *pos << ' ';
	}

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int elem)
{
	cout << elem << " ";
}

int main(int argc, char** argv)
{
	vector<int> vectOne, vectTwo;

	vectOne.push_back(1);
	vectOne.push_back(2);
	vectOne.push_back(3);
	vectOne.push_back(4);

	vectTwo.resize(vectOne.size());
	copy(vectOne.begin(), vectOne.end(), vectTwo.begin());
	for_each(vectTwo.begin(), vectTwo.end(), &print);

	return (0);
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
	list <int> l;

	for (int nCount = 0; nCount < 10; ++nCount)
		l.push_back(nCount);

	list <int>::const_iterator li;
	for (li = l.begin(); li != l.end(); ++li)
		cout << *li << ' ';

	vector <int> v(l.size() * 2);

	vector <int>::iterator iLastPos;
	iLastPos = copy(l.begin(), l.end(), v.begin());
	vector <int>::const_iterator vi;

	for (vi = v.begin(); vi != v.end(); ++vi)
		cout << *vi << ' ';

	return 0;
}
#endif