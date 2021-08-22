#if 0
#include <iostream>


template <typename T>
inline
T accum (T const* beg, T const* end)
{
	T total = T();  // assume T() actually creates a zero value
	while (beg != end) {
		total += *beg;
		++beg;
	}
	return total;
}


int main(void)
{
	// create array of 5 integer values
	int num[] = { 1, 2, 3, 4, 5 };

	// print average value
	std::cout << "the average value of the integer values is "
		<< accum(&num[0], &num[5]) / 5
		<< '\n';

	// create array of character values
	char name[] = "templates";
	int length = sizeof(name)-1;

	// (try to) print average character value
	std::cout << "the average value of the characters in \""
		<< name << "\" is "
		<< accum(&name[0], &name[length]) / length
		<< '\n';

	return 0;
}

#endif


#if 0
#include <string>

// note: reference parameters
template <typename T>
inline T const& max(T const& a, T const& b)
{
	return  a < b  ?  b : a;
}

int main(void)
{
	std::string s;

	::max("apple", "peach");   // OK: same type
	//::max("apple","tomato");  // ERROR: different types
	//::max("apple",s);         // ERROR: different types

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cstring>
#include <string>

// maximum of two values of any type
template <typename T>
inline T const& max(T const& a, T const& b)
{
	return  a < b ? b : a;
}

// maximum of two pointers
template <typename T>
inline T* const& max(T* const& a, T* const& b)
{
	return  *a < *b ? b : a;
}

// maximum of two C-strings
inline char const* const& max(char const* const& a,
	char const* const& b)
{
	return  std::strcmp(a, b) < 0 ? b : a;
}

int main(void)
{
	int a = 7;
	int b = 42;
	std::cout << "\n\n" << ::max(a, b);      // max() for two values of type int

	std::string s = "hey";
	std::string t = "you";
	std::cout << "\n\n" << ::max(s, t);      // max() for two values of type std::string

	int* p1 = &b;
	int* p2 = &a;
	std::cout << "\n\n" << ::max(p1, p2);    // max() for two pointers

	char const* s1 = "David";
	char const* s2 = "Nico";
	std::cout << "\n\n" << ::max(s1, s2);    // max() for two C-strings

	return 0;
}
#endif
