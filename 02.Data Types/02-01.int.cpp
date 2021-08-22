#if 0
#include <iostream> 
using namespace std; 
int main(void) 
{ 
	int length; // this declares a variable 
	
	length = 7; // this assigns 7 to length 
	
	cout << "The length is "; 
	cout << length; // This displays 7 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
int main(void)
{
	int a=0, b=0, x=0, y=35;
	std::cout << "a: " << a << " b: " << b;
	std::cout << " x: " << x << " y: " << y << std::endl;
	
	a = 9;
	b = 7;
	y = x = a+b;
	
	std::cout << "a: " << a << " b: " << b;
	std::cout << " x: " << x << " y: " << y << std::endl;

	return 0;
}
#endif


#if 0
#include <iostream>  
using namespace std;  
  
int main(void)  
{  
	int length; 
	int width;  
	int area;   
	
	length = 7; 
	width = 5;  
	
	area = length * width; // compute area 
	
	cout << "The area is ";  
	cout << area;
	
	return 0;  
}
#endif


#if 0
#include <iostream>  
using namespace std;  
  
int main(void)  
{  
	int length; 
	int width;  
	
	length = 7; 
	width = 5;  
	
	cout << "The area is ";  
	cout << length * width; 
	
	return 0;  
}
#endif


#if 0
#include <iostream>
using namespace std;

int main()
{
	int gallons, liters;
	
	cout << "Enter number of gallons: ";
	cin >> gallons;       // this inputs from the user
	
	liters = gallons * 4; // convert to liters
	
	cout << "Liters: " << liters; 
	
	return 0;
}
#endif



#if 0
#include <iostream> 

using std::cout; 
using std::cin; 
using std::endl;

int main(void)
{
	int x; 
	int y; 
	int z; 
	int result; 
	
	cout << "Enter three integers: "; 
	cin >> x >> y >> z; // read three integers from user
	result = x * y * z; 
	cout << "The product is " << result << endl; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 

using std::cout; 
using std::cin;  
using std::endl; 

int main(void)
{
   int number1; 
   int number2; 

   cout << "Enter two integers to compare: "; 
   cin >> number1 >> number2;

   if ( number1 == number2 )
      cout << number1 << " == " << number2 << endl;

   if ( number1 != number2 )
      cout << number1 << " != " << number2 << endl;

   if ( number1 < number2 )
      cout << number1 << " < " << number2 << endl;

   if ( number1 > number2 )
      cout << number1 << " > " << number2 << endl;

   if ( number1 <= number2 )
      cout << number1 << " <= " << number2 << endl;

   if ( number1 >= number2 )
      cout << number1 << " >= " << number2 << endl;

   return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2,iand,ior,ixor;
	
	num1 = 1;
	
	num2 = 2;
	
	iand = num1 & num2;
	ior = num1 | num2;
	ixor = num1 ^ num2;
	
	cout << num1 << " AND " << num2 << " is " << iand << endl;
	cout << num1 << " OR "  << num2 << " is " << ior  << endl;
	cout << num1 << " XOR " << num2 << " is " << ixor << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>   
using namespace std;   
  
int main(void)
{   
   int j; 
  
   for(j=0; j<15; j++)   
      cout << j * j << "  ";   
   cout << endl;   

   return 0;   
}
#endif
