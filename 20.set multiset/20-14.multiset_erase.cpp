#if 0
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	typedef multiset<int, greater<int> > IntSet;

	IntSet coll1;        // empty multiset container

	// insert elements in random order
	coll1.insert(4);
	coll1.insert(3);
	coll1.insert(5);
	coll1.insert(1);
	coll1.insert(6);
	coll1.insert(2);
	coll1.insert(5);

	// iterate over all elements and print them
	IntSet::iterator pos;
	for (pos = coll1.begin(); pos != coll1.end(); ++pos) {
		cout << *pos << ' ';
	}
	cout << endl;

	// assign elements to another multiset with ascending order
	multiset<int> coll2(coll1.begin(),
		coll1.end());

	// remove all elements up to element with value 3
	coll2.erase(coll2.begin(), coll2.find(3));

	// print all elements of the copy
	copy(coll2.begin(), coll2.end(),
		ostream_iterator<int>(cout, " "));
	cout << endl;

}
#endif


#if 0
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	typedef multiset<int, greater<int> > IntSet;

	IntSet coll1;        // empty multiset container

	// insert elements in random order
	coll1.insert(4);
	coll1.insert(3);
	coll1.insert(5);
	coll1.insert(1);
	coll1.insert(6);
	coll1.insert(2);
	coll1.insert(5);

	// iterate over all elements and print them
	IntSet::iterator pos;
	for (pos = coll1.begin(); pos != coll1.end(); ++pos) {
		cout << *pos << ' ';
	}
	cout << endl;

	// assign elements to another multiset with ascending order
	multiset<int> coll2(coll1.begin(),
		coll1.end());

	// remove all elements with value 5
	int num;
	num = coll2.erase(5);
	cout << num << " element(s) removed" << endl;

	// print all elements of the copy
	copy(coll2.begin(), coll2.end(),
		ostream_iterator<int>(cout, " "));
	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <set>
using namespace std;
#include <functional>

int main(void)
{
	string s("There is no distinctly native American criminal class");

	list<char> list1(s.begin(), s.end());

	// Put the characters in list1 into multiset1:
	multiset<char> multiset1;
	copy(list1.begin(), list1.end(), inserter(multiset1, multiset1.end()));
	multiset1.erase('a');

	multiset<char>::iterator i = multiset1.find('e');
	multiset<char>::iterator j = multiset1.find('v');

	multiset1.erase(i, j);


	multiset<char>::iterator k;
	for (k = multiset1.begin(); k != multiset1.end(); ++k)
		cout << *k;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <set>
using namespace std;
#include <functional>

int main(void)
{
	string s("There is no distinctly native American criminal class");

	list<char> list1(s.begin(), s.end());

	// Put the characters in list1 into multiset1:
	multiset<char> multiset1;
	copy(list1.begin(), list1.end(), inserter(multiset1, multiset1.end()));
	multiset1.erase('a');

	multiset<char>::iterator i = multiset1.find('e');

	multiset1.erase(i);


	multiset<char>::iterator k;
	for (k = multiset1.begin(); k != multiset1.end(); ++k)
		cout << *k;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const int num_years = 5;
	const char* d[num_years] = { "A", "B", "C", "D", "E" };
	const char* d2[num_years] = { "a", "b", "c", "d", "e" };
	const char* d3[num_years] = { "1", "2", "3", "4", "5" };

	multiset<string> s1(d, d + num_years);
	multiset<string> s2(d2, d2 + num_years);
	multiset<string> s3(d3, d3 + num_years);

	print(s1);
	print(s2);
	print(s3);

	vector<string> winner;
	merge(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(winner));
	vector<string> all_winner;
	merge(winner.begin(), winner.end(), s3.begin(), s3.end(), back_inserter(all_winner));

	all_winner.erase(unique(all_winner.begin(), all_winner.end()), all_winner.end());
	cout << endl << all_winner.size() << " UNIQUE WINNERS\n";
	for (vector<string>::size_type i = 0; i < all_winner.size(); ++i)
	{
		cout << all_winner[i] << "  ";
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <set>
using namespace std; 
#include <functional>

int main(void)
{
	string s("There is no distinctly native American criminal class");

	list<char> list1(s.begin(), s.end());

	// Put the characters in list1 into multiset1:
	multiset<char> multiset1;
	copy(list1.begin(), list1.end(), inserter(multiset1, multiset1.end()));
	multiset1.erase('a');

	multiset<char>::iterator k;
	for (k = multiset1.begin(); k != multiset1.end(); ++k)
		cout << *k;

	return 0;
}
#endif