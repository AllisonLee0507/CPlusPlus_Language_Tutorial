#if 0
#include <iostream> 
using namespace std; 
 
void f(void); // f's protoype 
 
int main(void) 
{ 
	cout << "In main()\n"; 
	
	f(); // call f() 
	
	cout << "Back in main()\n"; 
	
	return 0; 
} 
 
// This if the function's definition. 
void f(void) 
{ 
	cout << "Inside f()\n"; 
}
#endif


#if 0
#include <iostream>
 
int Add(int x, int y)
{
	std::cout << "In Add(), received " << x << " and " << y << "\n";
	return (x+y);
}

int main(void)
{
	std::cout << "The value returned is: " << Add(3,4);

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int f(int);

int main(void)
{
	int a = 10; 
	
	cout << a << " fd: " << f( a ) << endl;
	
	return 0;
} 

int f(int x)
{
	return x * x;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

void f1(); 
void f2(void); 

int main(void)
{
	f1(); 
	f2(); 
	return 0; 
} 

void f1(void)
{
	cout << "f1 takes no arguments" << endl;
}
void f2(void)
{
	cout << "f2 also takes no arguments" << endl;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

int byValue(int); 
void byReference(int&); 
                                                   
int main(void)
{
	int x = 2; 
	int z = 4; 
	
	cout << byValue( x ) << endl;  
	cout << "x = " << x << endl;
	
	byReference( z );
	cout << "z = " << z << endl;
	return 0;
} 

int byValue( int number )
{
	return number *= number;
}
void byReference( int &numberRef )
{
	numberRef *= numberRef; 
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

int f(int length = 1, int width = 1, int height = 1 );

int main(void)
{
	cout << f();
	
	cout << f( 10 );
	    
	cout << f( 10, 5 );
	
	cout << f( 10, 5, 2 ) << endl;
	return 0;
} 

int f( int length, int width, int height )
{ 
	return length * width * height;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


template < class T >  
T maximum( T value1, T value2, T value3 )
{
	T maximumValue = value1; 
	
	if ( value2 > maximumValue )
		maximumValue = value2;
	
	if ( value3 > maximumValue )
		maximumValue = value3;
	
	return maximumValue;
}

int main(void)
{
	int int1, int2, int3;
	
	int1 = 1;
	int2 = 2;
	int3 = 3;
	
	cout << "\nThe maximum integer value is: " << maximum( int1, int2, int3 );
	  
	
	double double1, double2, double3;
	
	double1 = 1.1;
	double2 = 2.2;
	double3 = 3.3;
	
	cout << "\nThe maximum double value is: "<< maximum( double1, double2, double3 );
	
	char char1, char2, char3;
	
	char1 = 'a';
	char2 = 'b';
	char3 = 'c';
	
	cout << "\nThe maximum character value is: "<< maximum( char1, char2, char3) << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <ostream>
using namespace std;
int x = 1;

int f(void)
{
	x = 2;
	std::cout << "f()";
	return x;
}

int g(void)
{
	std::cout << "g()";
	return x;
}

int main(void)
{
	std::cout << f() / g() << '\n';
	
	return 0;
}
#endif
