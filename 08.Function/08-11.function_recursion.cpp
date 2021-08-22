#if 0
#include <iostream> 
using namespace std;

int f(int n);

int main(void)
{
	// use recursive version 
	cout << "4 factorial is " << f(4);

	return 0;
}

int f(int n)
{
	int answer;

	if (n == 1)
		return(1);

	answer = f(n - 1)*n;

	return(answer);
}
#endif


#if 0
#include <iostream> 
using namespace std;

void f(char*);

int main(void)
{
	char str[] = "this is a test";

	f(str);

	return 0;
}

void f(char *s)
{
	if (*s)
		f(s + 1);
	else
		return;
	cout << *s;
}
#endif




#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

unsigned long factorial(unsigned long); // function prototype

int main(void)
{
	for (int counter = 0; counter <= 50; counter++)
		cout << setw(2) << counter << "! = " << factorial(counter) << endl;

	return 0;
}
unsigned long factorial(unsigned long number)
{
	if (number <= 1)
		return 1;
	else
		return number * factorial(number - 1);
}
#endif




#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

unsigned long fibonacci(unsigned long);

int main()
{
	cout << "fibonacci( 20 ) = " << fibonacci(20) << endl;
	cout << "fibonacci( 30 ) = " << fibonacci(30) << endl;
	cout << "fibonacci( 35 ) = " << fibonacci(35) << endl;
	return 0;
}

unsigned long fibonacci(unsigned long number)
{
	if ((number == 0) || (number == 1))
		return number;
	else
		return fibonacci(number - 1) + fibonacci(number - 2);
}
#endif




#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

unsigned long factorial(unsigned long);

int main()
{
	for (int counter = 0; counter <= 20; counter++)
		cout << setw(2) << counter << "! = " << factorial(counter) << endl;

	return 0;
}
unsigned long factorial(unsigned long number)
{
	unsigned long result = 1;

	for (unsigned long i = number; i >= 1; i--)
		result *= i;

	return result;
}
#endif
