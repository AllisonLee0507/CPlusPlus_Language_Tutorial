#if 0
#include <iostream>
#include <set>
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
	const int num_grades = 11;
	const int grade[num_grades] = { 2, 5, 3, 8, 9, 9, 6, 3, 5, 9, 10 };

	set<int> unique(grade, grade + num_grades);
	multiset<int> all(grade, grade + num_grades);
	print(unique);
	print(all);

	const int drop_grade = 5;
	multiset<int>::iterator spot = all.find(drop_grade);
	if (spot != all.end()) {
		all.erase(spot);
		if (all.count(drop_grade) == 0)
			unique.erase(drop_grade);
	}
	else
		cout << "Couldn't find a grade of " << drop_grade << endl;

	print(unique);
	print(all);

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

int main(void)
{
	string s("There is no distinctly native American criminal class");
	string s2("American criminal class");

	list<char> list1(s.begin(), s.end());
	list<char> list2(s2.begin(), s2.end());

	list<char> found, not_found;
	list<char>::iterator k;

	multiset<char> multiset1;
	copy(list1.begin(), list1.end(), inserter(multiset1, multiset1.end()));

	for (k = list2.begin(); k != list2.end(); ++k)
	if (multiset1.find(*k) != multiset1.end())
		found.push_back(*k);
	else
		not_found.push_back(*k);

	for (k = found.begin(); k != found.end(); ++k)
		cout << *k;

	for (k = not_found.begin(); k != not_found.end(); ++k)
		cout << *k;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
	typedef multiset< int, less< int > > ims;
	ims intMultiset;    // ims for "integer multiset"

	ims::const_iterator  result = intMultiset.find(15);  // find returns iterator

	if (result != intMultiset.end()) // if iterator not at end
		cout << "Found value 15\n";     // found search value 15

	result = intMultiset.find(20);

	if (result == intMultiset.end())    // will be true hence
		cout << "Did not find value 20\n"; // did not find 20

	return 0;
}
#endif



#if 0
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
	typedef multiset< int, less< int > > ims;
	ims intMultiset;    // ims for "integer multiset"

	pair< ims::const_iterator, ims::const_iterator > p;

	p = intMultiset.equal_range(22);
	cout << "\nUsing equal_range of 22"
		<< "\n   Lower bound: " << *(p.first)
		<< "\n   Upper bound: " << *(p.second);
	cout << endl;
	return 0;
}
#endif
