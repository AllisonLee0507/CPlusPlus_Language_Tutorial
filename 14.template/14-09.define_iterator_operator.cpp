#if 0
#include <algorithm>
#include <functional>
#include <iostream>
#include <cstddef>
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


template<class T, std::size_t thesize>
class carray {
private:
	T v[thesize];    // fixed-size array of elements of type T

public:
	// type definitions
	typedef T        value_type;
	typedef T*       iterator;
	typedef const T* const_iterator;
	typedef T&       reference;
	typedef const T& const_reference;
	typedef std::size_t    size_type;
	typedef std::ptrdiff_t difference_type;

	// iterator support
	iterator begin() { return v; }
	const_iterator begin() const { return v; }
	iterator end() { return v + thesize; }
	const_iterator end() const { return v + thesize; }

	// direct element access
	reference operator[](std::size_t i) { return v[i]; }
	const_reference operator[](std::size_t i) const { return v[i]; }

	// size is constant
	size_type size() const { return thesize; }
	size_type max_size() const { return thesize; }

	// conversion to ordinary array
	T* as_array() { return v; }
};

int main(void)
{
	carray<int, 10> a;

	for (unsigned i = 0; i<a.size(); ++i) {
		a[i] = i + 1;
	}
	PRINT_ELEMENTS(a);

	reverse(a.begin(), a.end());
	PRINT_ELEMENTS(a);

	transform(a.begin(), a.end(),    // source
		a.begin(),            // destination
		negate<int>());       // operation
	PRINT_ELEMENTS(a);

	return 0;
}
#endif