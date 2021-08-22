#if 0
#include<iostream.h>
#include<string.h>
template<class T>
T min(T a, T b)
{
	cout << "generic";
	return (a<b ? a : b);
}

char *min(char *a, char *b)
{
	cout << "not generic";
	return (strcmp(a, b)<0 ? a : b);
}

int main(void)
{
	double a = 3.56, b = 8.23;
	char s1[] = "Hello", s2[] = "Good";
	cout << min(a, b) << endl;
	cout << min(s1, s2) << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

template<class T> T larger(T a, T b);
long* larger(long* a, long* b);
template <class T> T larger (const T array[], int count); // Overloaded templat
e prototype

int main(void)
{
	cout << "Larger of 1.5 and 2.5 is " << larger(1.5, 2.5) << endl;
	cout << "Larger of 3.5 and 4.5 is " << larger(3.5, 4.5) << endl;

	int a_int = 35;
	int b_int = 45;
	cout << larger(a_int, b_int) << endl;


	long a_long = 9;
	long b_long = 8;
	cout << larger(a_long, b_long) << endl;

	cout << *larger(&a_long, &b_long) << endl;

	double x[] = { 10.5, 12.5, 2.5, 13.5, 5.5 };

	cout << larger(x, sizeof x / sizeof x[0]) << endl;

	return 0;
}

template <class T> T larger(T a, T b) {
	cout << "standard version " << endl;
	return a>b ? a : b;
}

long* larger(long* a, long* b) {
	cout << "overloaded version for long* " << endl;
	return *a>*b ? a : b;
}

template <class T> T larger(const T array[], int count) {
	cout << "template overload version for arrays " << endl;
	T result = array[0];
	for (int i = 1; i < count; i++)
	if (array[i] > result)
		result = array[i];
	return result;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

template<class T> T larger(T a, T b);             // Function template prototype
template<> long* larger<long*>(long* a, long* b); // Specialization

int main(void)
{
	cout << "Larger of 1.5 and 2.5 is " << larger(1.5, 2.5) << endl;
	cout << "Larger of 3.5 and 4.5 is " << larger(3.5, 4.5) << endl;

	int a_int = 35;
	int b_int = 45;
	cout << larger(a_int, b_int) << endl;


	long a_long = 9;
	long b_long = 8;
	cout << larger(a_long, b_long) << endl;

	cout << *larger(&a_long, &b_long) << endl;

	return 0;
}

template <class T> T larger(T a, T b) {
	cout << "standard version " << endl;
	return a>b ? a : b;
}

template <> long* larger<long*>(long* a, long* b) {
	cout << "specialized version " << endl;
	return *a>*b ? a : b;
}
#endif