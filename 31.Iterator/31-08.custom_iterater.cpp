#if 0
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
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

template <class Container>
class asso_insert_iterator
	: public std::iterator <std::output_iterator_tag,
	void, void, void, void>
{
protected:
	Container& container;    // container in which elements are inserted

public:
	// constructor
	explicit asso_insert_iterator(Container& c) : container(c) {
	}

	asso_insert_iterator<Container>&
		operator= (const typename Container::value_type& value) {
			container.insert(value);
			return *this;
		}

	asso_insert_iterator<Container>& operator* () {
		return *this;
	}

	asso_insert_iterator<Container>& operator++ () {
		return *this;
	}
	asso_insert_iterator<Container>& operator++ (int) {
		return *this;
	}
};

template <class Container>
inline asso_insert_iterator<Container> asso_inserter(Container& c)
{
	return asso_insert_iterator<Container>(c);
}


int main(void)
{
	set<int> coll;

	asso_insert_iterator<set<int> > iter(coll);

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	PRINT_ELEMENTS(coll);

	asso_inserter(coll) = 44;
	asso_inserter(coll) = 55;

	PRINT_ELEMENTS(coll);

	int vals[] = { 33, 67, -4, 13, 5, 2 };
	copy(vals, vals + (sizeof(vals) / sizeof(vals[0])),  // source
		asso_inserter(coll));                       // destination

	PRINT_ELEMENTS(coll);
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>

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

using namespace std;

int main(void)
{
	vector<int> coll;

	back_insert_iterator<vector<int> > iter(coll);

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;
	PRINT_ELEMENTS(coll);

	back_inserter(coll) = 44;
	back_inserter(coll) = 55;
	PRINT_ELEMENTS(coll);

	coll.reserve(2 * coll.size());
	copy(coll.begin(), coll.end(),    // source
		back_inserter(coll));        // destination
	PRINT_ELEMENTS(coll);

	return 0;
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

int main()
{
	list<int> coll;

	front_insert_iterator<list<int> > iter(coll);

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	PRINT_ELEMENTS(coll);

	front_inserter(coll) = 44;
	front_inserter(coll) = 55;

	PRINT_ELEMENTS(coll);

	copy(coll.begin(), coll.end(),    // source
		front_inserter(coll));       // destination

	PRINT_ELEMENTS(coll);

	return 0;
}

#endif



#if 0
#include <iostream>
#include <set>
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

int main(void)
{
	set<int> coll;

	insert_iterator<set<int> > iter(coll, coll.begin());

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	PRINT_ELEMENTS(coll, "set:  ");

	inserter(coll, coll.end()) = 44;
	inserter(coll, coll.end()) = 55;

	PRINT_ELEMENTS(coll, "set:  ");

	list<int> coll2;
	copy(coll.begin(), coll.end(),           // source
		inserter(coll2, coll2.begin()));     // destination

	PRINT_ELEMENTS(coll2, "list: ");

	copy(coll.begin(), coll.end(),           // source
	inserter(coll2, ++coll2.begin()));   // destination

	PRINT_ELEMENTS(coll2, "list: ");

	return 0;
}

#endif
