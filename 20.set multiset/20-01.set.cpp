#if 0
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void)
{
	set<string> setStr;
	string s = "B";

	setStr.insert(s);
	s = "S";
	setStr.insert(s);
	s = "R";
	setStr.insert(s);
	s = "H";
	setStr.insert(s);

	for (set<string>::const_iterator p = setStr.begin(); p != setStr.end(); ++p)
		cout << *p << endl;

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
#include <string>
#include <algorithm>
#include <iterator>
#include <set>
using namespace std;

int main(void)
{
	set<string> coll((istream_iterator<string>(cin)),
		istream_iterator<string>());

	// print all elements
	copy(coll.begin(), coll.end(),
		ostream_iterator<string>(cout, "\n"));

	return 0;
}
#endif



#if 0
#include <set>
#include <iostream>
#include <string>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}


int main(void)
{
	set<string> first;

	first.insert("A");
	first.insert("B");
	first.insert("C");

	cout << first.size() << endl;
	set<string> second(first);   // Copy constructor

	second.insert("I");
	second.insert("S");
	second.insert("C");

	set<string> third = first;

	print(first);
	print(second);
	print(third);
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <set>
using namespace std;

int main(void)
{
	string s("There is no distinctly native American criminal class");


	list<char> list1(s.begin(), s.end());

	// Put the characters in list1 into set1:
	set<char> set1;
	list<char>::iterator i;

	for (i = list1.begin(); i != list1.end(); ++i)
		set1.insert(*i);

	set<char>::iterator j;

	for (j = set1.begin(); j != set1.end(); ++j)
		cout << *j;


	return 0;
}
#endif
