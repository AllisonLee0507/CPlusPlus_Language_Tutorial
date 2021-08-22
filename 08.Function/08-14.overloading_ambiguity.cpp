#if 0
#include <iostream> 
using namespace std;

float f(float i);
double f(double i);

int main()
{
	// unambiguous, calls f(double) 
	cout << f(10.1) << " ";

	// ambiguous 
	//cout << f(10); // Error! 

	return 0;
}

float f(float i)
{
	return i;
}

double f(double i)
{
	return -i;
}
#endif


#if 0
#include <iostream> 
using namespace std;

char f(unsigned char ch);
char f(char ch);

int main(void)
{
	cout << f('c');  // this calls f(char) 
	//cout << f(88) << " "; // Error, ambiguous! 

	return 0;
}

char f(unsigned char ch)
{
	return ch - 1;
}

char f(char ch)
{
	return ch + 1;
}
#endif




#if 0
#include <iostream>
using std::cout;
using std::endl;

double larger(double a, double b);
long larger(long a, long b);

int main(void)
{
	int a_int = 15, b_int = 25;
	cout << larger(static_cast<long>(a_int), static_cast<long>(b_int)) << endl;

	return 0;
}

double larger(double a, double b) {
	cout << "double larger() called" << endl;
	return a>b ? a : b;
}

long larger(long a, long b) {
	cout << "long larger() called" << endl;
	return a>b ? a : b;
}
#endif




#if 0

#endif
