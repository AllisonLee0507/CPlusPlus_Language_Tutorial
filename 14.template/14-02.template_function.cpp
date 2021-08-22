#if 0
#include <iostream.h>

template <class T>

T GetMax (T a, T b) {
	T result;
	result = (a>b) ? a : b;

	return (result);
}

int main(void)
{
	int i = 5, j = 6, k;
	long l = 10, m = 5, n;

	k = GetMax< int >(i, j);
	n = GetMax< long >(l, m);

	cout << k << endl;
	cout << n << endl;

	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std;

// This is a function template. 
template <class X> void swapargs(X &a, X &b)
{
	X temp;

	temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int i = 1, j = 2;
	float x = 1.1, y = 2.3;
	char a = 'x', b = 'z';

	cout << "Original i, j: " << i << ' ' << j << '\n';
	swapargs(i, j); // swap integers 
	cout << "Swapped i, j: " << i << ' ' << j << '\n';


	cout << "Original x, y: " << x << ' ' << y << '\n';
	swapargs(x, y); // swap floats 
	cout << "Swapped x, y: " << x << ' ' << y << '\n';

	cout << "Original a, b: " << a << ' ' << b << '\n';
	swapargs(a, b); // swap chars 
	cout << "Swapped a, b: " << a << ' ' << b << '\n';

	return 0;
}
#endif



#if 0
#include <iostream> 
using namespace std;

template <class Type1, class Type2>
void myfunc(Type1 x, Type2 y)
{ 
	cout << x << ' ' << y << '\n'; 
}

int main(void)
{
	myfunc(10, "hi");

	myfunc(0.23, 10L);

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

const int TABWIDTH = 8;

template<class X> void f(X data, int tab)
{
	cout << 'tab=' << tab;

	cout << data << "\n";
}

int main(void)
{
	f("This is a test", 0);
	f(100, 1);
	f('X', 2);
	f(10 / 3, 3);

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

template <class X> void f(X a)
{
	cout << "Inside f(X a)\n";
}

template <class X, class Y> void f(X a, Y b)
{
	cout << "Inside f(X a, Y b)\n";
}

int main(void)
{
	f(10);     // calls f(X)
	f(10, 20); // calls f(X, Y)

	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

template <class type1, class type2>
void f(type1 x, type2 y)
{
	cout << x << ' ' << y << '\n';
}

int main(void)
{
	f(10, "AAAAA");

	f(98.6, 19L);

	f('C', 'V');

	f('C', 0);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <limits>

using namespace std;

template<typename T>
void showMinMax( ) {
	cout << "min: " << numeric_limits<T>::min() << endl;
	cout << "max: " << numeric_limits<T>::max() << endl << endl;
}

int main(void)
{
	cout << "short:" << endl;
	showMinMax<short>();
	cout << "int:" << endl;
	showMinMax<int>();
	cout << "long:" << endl;
	showMinMax<long>();
	cout << "float:" << endl;
	showMinMax<float>();
	cout << "double:" << endl;
	showMinMax<double>();
	cout << "long double:" << endl;
	showMinMax<long double>();
	cout << "unsigned short:" << endl;
	showMinMax<unsigned short>();
	cout << "unsigned int:" << endl;
	showMinMax<unsigned int>();
	cout << "unsigned long:" << endl;
	showMinMax<unsigned long>();
	return 0;
}
#endif



#if 0
#include <string>
#include <iostream>

template<typename T>
std::string f(T)
{ 
	return "Template"; 
}

std::string f(int&)
{
	return "Nontemplate";
}

int main(void)
{
	int x = 7;
	std::cout << f(x) << std::endl;
	return 0;
}
#endif



#if 0
template <typename T>
inline T const& max(T const& a, T const& b)
{
	return  a < b ? b : a;
}

int main(void)
{
	max<double>(1.0, -3.0);  // explicitly specify template argument
	max(1.0, -3.0);          // template argument is implicitly deduced
	// to be double
	max<int>(1.0, 3.0);      // the explicit <int> inhibits the deduction;
	// hence the result has type int
	return 0;
}
#endif



#if 0
#include <iostream>

namespace X {
	template<typename T> void f(T);
}

namespace N {
	using namespace X;
	enum E { e1 };
	void f(E) {
		std::cout << "N::f(N::E) called\n";
	}
}

void f(int)
{
	std::cout << "::f(int) called\n";
}

int main(void)
{
	::f(N::e1);  // qualified function name: no ADL
	f(N::e1);    // ordinary lookup finds ::f() and ADL finds N::f(),
	return 0;
}
#endif



#if 0
#include <typeinfo>
#include <iostream>

template <typename T>
void ref (T const& x)
{
	std::cout << "x in ref(T const&): "
		<< typeid(x).name() << '\n';
}

template <typename T>
void nonref(T x)
{
	std::cout << "x in nonref(T):     "
		<< typeid(x).name() << '\n';
}

int main(void)
{
	ref("hello");
	nonref("hello");
	return 0;
}
#endif


#if 0
#include <iostream>

// print elements of an STL container
template <typename T>
void printcoll(T const& coll)
{
	typename T::const_iterator pos;  // iterator to iterate over coll
	typename T::const_iterator end(coll.end());  // end position

	for (pos = coll.begin(); pos != end; ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}


#include <vector>


int main(void)
{
	std::vector<int> v;

	v.push_back(42);
	v.push_back(13);
	v.push_back(7);
	printcoll(v);
	return 0;
}
#endif



#if 0
#include <iostream>
#include <cstring>
#include <string>

// maximum of two values of any type (call-by-reference)
template <typename T>
inline T const& max (T const& a, T const& b)
{
	return  a < b ? b : a;
}

// maximum of two C-strings (call-by-value)
inline char const* max(char const* a, char const* b)
{
	return  std::strcmp(a, b) < 0 ? b : a;
}

// maximum of three values of any type (call-by-reference)
template <typename T>
inline T const& max(T const& a, T const& b, T const& c)
{
	return max(max(a, b), c);  // error, if max(a,b) uses call-by-value
}

int main(void)
{
	std::cout << ::max(7, 42, 68);     // OK

	const char* s1 = "frederic";
	const char* s2 = "anica";
	const char* s3 = "lucas";
	//::max(s1, s2, s3);    // ERROR
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

inline int const& max(int const& a, int const& b)
{
	return  a < b ? b : a;
}

// maximum of two values of any type
template <typename T>
inline T const& max(T const& a, T const& b)
{
	return  a < b ? b : a;
}

// maximum of three values of any type
template <typename T>
inline T const& max(T const& a, T const& b, T const& c)
{
	return ::max(::max(a, b), c);
}

int main(void)
{
	cout << "\n\n" << ::max(7, 42, 68);     // calls the template for three arguments
	cout << "\n\n" << ::max(7.0, 42.0);     // calls max<double> (by argument deduction)
	cout << "\n\n" << ::max('a', 'b');      // calls max<char> (by argument deduction)
	cout << "\n\n" << ::max(7, 42);         // calls the nontemplate for two ints
	cout << "\n\n" << ::max<>(7, 42);       // calls max<int> (by argument deduction)
	cout << "\n\n" << ::max<double>(7, 42); // calls max<double> (no argument deduction)
	cout << "\n\n" << ::max('a', 42.7);     // calls the nontemplate for two ints
	
	return 0;
}
#endif