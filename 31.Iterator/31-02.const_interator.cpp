#if 0
#include <iostream>
#include <set>

int main(void)
{
	// type of the collection
	typedef std::set<int> IntSet;

	IntSet coll;        // set container for int values

	/* insert elements from 1 to 6 in arbitrary order
	* - value 1 gets inserted twice
	*/
	coll.insert(3);
	coll.insert(1);
	coll.insert(5);
	coll.insert(4);
	coll.insert(1);
	coll.insert(6);
	coll.insert(2);

	/* print all elements
	* - iterate over all elements
	*/
	IntSet::const_iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

template < typename T > void printVector(const vector< T > &integers2);

int main(void)
{
	int array[6] = { 1, 2, 3, 4, 5, 6 }; // initialize array
	vector< int > integers; // create vector of ints

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	printVector(integers);

	cout << endl;
	return 0;
}

template < typename T > void printVector(const vector< T > &integers2){
	typename vector< T >::const_iterator constIterator;

	for (constIterator = integers2.begin();
		constIterator != integers2.end(); ++constIterator)
		cout << *constIterator << ' ';
}
#endif



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
