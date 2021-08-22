#if 0
#include <iostream.h>
#include <iomanip.H>

int main(void)
{
	long n = 10000;
	cout << hex << n ;
	return 0;
}
#endif


#if 0
#include <iostream.h>
#include <iomanip.H>

int main(void)
{
	long n = 10000;
	cout << oct << n ;
	return 0;
}
#endif



#if 0
#include <iostream.h>
#include <iomanip.H>

int main(void)
{
	long n = 10000;
	cout << dec << n << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
   
int main(void)
{
	cout.setf(ios::hex, ios::basefield);
	cout << 100; // this displays 64
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int n;
	
	cout << "Enter a decimal number: ";
	cin >> n;
	
	cout << n << " in hexadecimal is: " 
		<< hex << n << '\n'
		<< dec << n << " in octal is: " 
		<< oct << n << '\n'
		<< setbase( 10 ) << n << " in decimal is: " 
		<< n << endl;
	
	return 0;
}
#endif

