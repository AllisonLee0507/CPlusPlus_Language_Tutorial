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

	first.insert("r");
	first.insert("T");
	first.insert("s");

	cout << first.size() << endl;

	set<string> second(first);   // Copy constructor

	second.insert("r");
	second.insert("K");
	second.insert("S");
	second.insert("b");

	cout << second.size() << endl;

	// Are the sets the same?
	if (first == second)
		cout << "Sets have same elements\n";
	else
		cout << "Not same elements\n";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <set>

using namespace std;

/* PRINT_ELEMENTS()
* - prints optional C-string optcstr followed by
* - all elements of the collection coll
* - separated by spaces
*/
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


// type for sorting criterion
template <class T>
class RuntimeCmp {
public:
	enum cmp_mode { normal, reverse };
private:
	cmp_mode mode;
public:
	// constructor for sorting criterion
	// - default criterion uses value normal
	RuntimeCmp(cmp_mode m = normal) : mode(m) {
	}
	// comparison of elements
	bool operator() (const T& t1, const T& t2) const {
		return mode == normal ? t1 < t2 : t2 < t1;
	}
	// comparison of sorting criteria
	bool operator== (const RuntimeCmp& rc) {
		return mode == rc.mode;
	}
};

// type of a set that uses this sorting criterion
typedef set<int, RuntimeCmp<int> > IntSet;

// forward declaration
void fill(IntSet& set);

int main(void)
{
	// create, fill, and print set with normal element order
	// - uses default sorting criterion
	IntSet coll1;
	fill(coll1);
	PRINT_ELEMENTS(coll1, "coll1: ");

	// create sorting criterion with reverse element order
	RuntimeCmp<int> reverse_order(RuntimeCmp<int>::reverse);

	// create, fill, and print set with reverse element order
	IntSet coll2(reverse_order);
	fill(coll2);
	PRINT_ELEMENTS(coll2, "coll2: ");

	// assign elements AND sorting criterion
	coll1 = coll2;
	coll1.insert(3);
	PRINT_ELEMENTS(coll1, "coll1: ");

	// just to make sure...
	if (coll1.value_comp() == coll2.value_comp()) {
		cout << "coll1 and coll2 have same sorting criterion"
			<< endl;
	}
	else {
		cout << "coll1 and coll2 have different sorting criterion"
			<< endl;
	}

	return 0;
}

void fill(IntSet& set)
{
	// fill insert elements in random order
	set.insert(4);
	set.insert(7);
	set.insert(5);
	set.insert(1);
	set.insert(6);
	set.insert(2);
	set.insert(5);
}
#endif