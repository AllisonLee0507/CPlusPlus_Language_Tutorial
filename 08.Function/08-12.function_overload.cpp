#if 0
#include <iostream> 
using namespace std;

void f(int i);
void f(int i, int j);
void f(double k);

int main()
{
	f(10);     // call f(int) 

	f(10, 20); // call f(int, int) 

	f(12.23);  // call f(double) 

	return 0;
}

void f(int i)
{
	cout << "In f(int), i is " << i << '\n';
}

void f(int i, int j)
{
	cout << "In f(int, int), i is " << i;
	cout << ", j is " << j << '\n';
}

void f(double k)
{
	cout << "In f(double), k is " << k << '\n';
}
#endif


#if 0
#include <iostream>  
using namespace std;

int neg(int n);       // neg() for int. 
double neg(double n); // neg() for double. 
long neg(long n);     // neg() for long. 

int main(void)
{
	cout << "neg(-10): " << neg(-10) << "\n";
	cout << "neg(9L): " << neg(9L) << "\n";
	cout << "neg(11.23): " << neg(11.23) << "\n";

	return 0;
}

// neg()for int. 
int neg(int n)
{
	return -n;
}

// neg()for double. 
double neg(double n)
{
	return -n;
}

// neg()for long. 
long neg(long n)
{
	return -n;
}
#endif




#if 0
#include <iostream>  
using namespace std;

int min(int a, int b);     // min() for ints 
char min(char a, char b);  // min() for chars 
int* min(int *a, int *b); // min() for int pointers 

int main(void)
{
	int i = 10, j = 22;

	cout << "min('X', 'a'): " << min('X', 'a') << "\n";
	cout << "min(9, 3): " << min(9, 3) << "\n";
	cout << "*min(&i, &j): " << *min(&i, &i) << "\n";

	return 0;
}

int min(int a, int b)
{
	if (a < b) return a;
	else return b;
}

char min(char a, char b)
{
	if (tolower(a) < tolower(b)) return a;
	else return b;
}

int * min(int *a, int *b)
{
	if (*a < *b) return a;
	else return b;
}
#endif




#if 0
#include <iostream>
using namespace std;

int myfunc(int i); // 
int myfunc(int i, int j);

int main(void)
{
	cout << myfunc(10) << " "; // calls myfunc(int i)
	cout << myfunc(4, 5); // calls myfunc(int i, int j)

	return 0;
}

int myfunc(int i)
{
	return i;
}

int myfunc(int i, int j)
{
	return i*j;
}
#endif




#if 0
#include <iostream> 
using namespace std;

void println(bool b);
void println(int i);
void println(long i);
void println(char ch);
void println(char *str);
void println(double d);

void print(bool b);
void print(int i);
void print(long i);
void print(char ch);
void print(char *str);
void print(double d);

int main()
{
	println(true);
	println(1);
	println("test");
	println('x');
	println(9L);
	println(1.23);

	print("string");
	print(false);
	print(' ');
	print(8);
	print(' ');
	print(100L);
	print(' ');
	print(1.01);

	println(" Done!");

	return 0;
}

void println(bool b)
{
	if (b)
		cout << "true\n";
	else
		cout << "false\n";
}

void println(int i)
{
	cout << i << "\n";
}

void println(long i)
{
	cout << i << "\n";
}

void println(char ch)
{
	cout << ch << "\n";
}

void println(char *str)
{
	cout << str << "\n";
}

void println(double d)
{
	cout << d << "\n";
}

void print(bool b)
{
	if (b)
		cout << "true";
	else
		cout << "false";
}

void print(int i)
{
	cout << i;
}

void print(long i)
{
	cout << i;
}

void print(char ch)
{
	cout << ch;
}

void print(char *str)
{
	cout << str;
}

void print(double d)
{
	cout << d;
}
#endif




#if 0
#include<iostream.h>
#include<iomanip.h>

int findmax(int intArray[]);
float findmax(float floatArray[]);
double findmax(double doubleArray[]);
int findmin(int intArray[]);
float findmin(float floatArray[]);
double findmin(double doubleArray[]);

main()
{
	int intArray[10] = { 1, 8, 4, 2, 3, 0, 9, 3, 5, 7 };
	float floatArray[10] = { 145.15, 312.3, 3163.2, 119.13, 710.1, 315.4, 511.2, 513.7, 319.4, 519.2 };
	double doubleArray[10] = { 15.12354323, 2.41237763, 63.29123876, 19.67123863,
		78.34123541, 35.44123009, 51.21230392, 53.40123967, 39.80612304, 59.11111232 };
	cout << "largest value in the intArray is " << (findmax(intArray)) << "\n";
	cout << "largest value in the floatArray is " << (findmax(floatArray)) << "\n";
	cout << "largest value in the doubleArray is " << (findmax(doubleArray)) << "\n";
	cout << "smallest value in the intArray is " << (findmin(intArray)) << "\n";
	cout << "smallest value in the floatArray is " << (findmin(floatArray)) << "\n";
	cout << "smallest value in the doubleArray is " << (findmin(doubleArray)) << "\n";

	return 0;
}
int findmax(int intArray[])
{
	int max = 0;
	for (int i = 0; i<10; i++)
	{
		if (intArray[i]>max)
		{
			max = intArray[i];
		}
	}
	return max;
}
float findmax(float floatArray[])
{
	float max = 0;
	for (int i = 0; i<10; i++)
	{
		if (floatArray[i]>max)
		{
			max = floatArray[i];
		}
	}
	return max;
}
double findmax(double doubleArray[])
{
	double max = 0;
	for (int i = 0; i<10; i++)
	{
		if (doubleArray[i]>max)
		{
			max = doubleArray[i];
		}
	}
	return max;
}
int findmin(int intArray[])
{
	int min = 999;
	for (int i = 0; i<10; i++)
	{
		if (intArray[i]<min)
		{
			min = intArray[i];
		}
	}
	return min;
}
float findmin(float floatArray[])
{
	float min = 9999.9;
	for (int i = 0; i<10; i++)
	{
		if (floatArray[i]<min)
		{
			min = floatArray[i];
		}
	}
	return min;
}
double findmin(double doubleArray[])
{
	double min = 9999.9;
	for (int i = 0; i<10; i++)
	{
		if (doubleArray[i]<min)
		{
			min = doubleArray[i];
		}
	}
	return min;
}
#endif




#if 0
#include <iostream>
#include <iomanip>
using namespace std;

double larger(double a, double b);
long& larger(long& a, long& b);


int main()
{
	cout << larger(1.5, 2.5) << endl;

	cout << larger(static_cast<long>(12), static_cast<long>(13))
		<< endl;

	return 0;
}

double larger(double a, double b)
{
	cout << " double version. ";
	return a>b ? a : b;
}

long& larger(long& a, long& b)
{
	cout << " long ref version. ";
	return a>b ? a : b;
}
#endif




#if 0
#include <iostream>
#include <cstring>
using namespace std;

void mystrcat(char *s1, char *s2, int len = -1);

int main()
{
	char str1[80] = "This is a test";
	char str2[80] = "0123456789";

	mystrcat(str1, str2, 5); // concatenate 5 chars
	cout << str1 << '\n';

	strcpy(str1, "This is a test"); // reset str1

	mystrcat(str1, str2); // concatenate entire string
	cout << str1 << '\n';

	return 0;
}

// A custom version of strcat().
void mystrcat(char *s1, char *s2, int len)
{
	// find end of s1
	while (*s1) s1++;

	if (len == -1) len = strlen(s2);

	while (*s2 && len) {
		*s1 = *s2; // copy chars
		s1++;
		s2++;
		len--;
	}

	*s1 = '\0'; // null terminate s1
}
#endif




#if 0
#include <iostream>
using namespace std;

int myfunc(int a);
int myfunc(int a, int b);

int main(void)
{
	int(*fp)(int a); // pointer to int f(int)

	fp = myfunc; // points to myfunc(int)

	cout << fp(5);

	return 0;
}

int myfunc(int a)
{
	return a;
}

int myfunc(int a, int b)
{
	return a*b;
}
#endif
