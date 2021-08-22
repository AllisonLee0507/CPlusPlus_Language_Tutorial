#if 0
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	/* type of the collection:
	* - duplicates allowed
	* - elements are integral values
	* - descending order
	*/
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

	// print all elements of the copy
	copy(coll2.begin(), coll2.end(),
		ostream_iterator<int>(cout, " "));
	cout << endl;

}
#endif



#if 0
#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <utility>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(vodi)
{
	const int num_cars = 6;
	const int year[num_cars] = { 1998, 1970, 1966, 2004, 1998, 1930 };
	const char* name[num_cars] = { "A", "B", "C", "D", "E", "F" };

	set<int> unique_years(year, year + num_cars);
	multiset<int> all_years(year, year + num_cars);
	print(unique_years);
	print(all_years);

	typedef map<string, int> Car_map;
	Car_map unique_cars;
	transform(name, name + num_cars, year, inserter(unique_cars, unique_cars.end()), make_pair<string, int>);

	Car_map::const_iterator unique_cars_end = unique_cars.end();
	for (Car_map::const_iterator i = unique_cars.begin(); i != unique_cars_end; ++i)
		cout << i->second << " " << i->first << endl;

	typedef multimap<string, int> Car_multimap;
	Car_multimap all_cars;
	transform(name, name + num_cars, year, inserter(all_cars, all_cars.end()), make_pair<string, int>);

	Car_multimap::const_iterator all_cars_end = all_cars.end();
	for (Car_multimap::const_iterator i = all_cars.begin(); i != all_cars_end; ++i)
		cout << i->second << " " << i->first << endl;

	return 0;
}
#endif



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

	const int wrong_grade = 9;
	const int right_grade = 10;

	if (unique.erase(wrong_grade) == 1){
		if (unique.insert(right_grade).second)
			cout << "Added new, unique grade of " << right_grade << endl;
		else
			cout << "Already have unique grade of " << right_grade << endl;
	}
	else
		cout << "No unique grade of " << wrong_grade << endl;

	multiset<int>::size_type num_wrong = all.erase(wrong_grade);
	if (num_wrong > 0) {
		vector<int> right(num_wrong, right_grade);
		all.insert(right.begin(), right.end());
		unique.erase(wrong_grade);
		unique.insert(right_grade);
	}
	else
		cout << "No wrong grades of " << wrong_grade << endl;

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
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <set> // multiset class-template definition

#include <algorithm> // copy algorithm
#include <iterator> // ostream_iterator

int main(void)
{
	int a[10] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
	std::multiset< int, std::less< int > > intMultiset;
	std::ostream_iterator< int > output(cout, " ");

	// insert elements of array a into intMultiset
	intMultiset.insert(a, a + 10);
	cout << "\nAfter insert, intMultiset contains:\n";
	std::copy(intMultiset.begin(), intMultiset.end(), output);


	cout << endl;
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

	cout << "There are currently " << intMultiset.count(15)
		<< " values of 15 in the multiset\n";
	return 0;
}
#endif
