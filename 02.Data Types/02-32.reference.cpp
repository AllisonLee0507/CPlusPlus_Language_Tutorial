#if 0
#include <iostream>

int main(void)
{
	int intValue;
	int &intReference = intValue;
	
	intValue = 5;
	std::cout << "intValue: " << intValue << std::endl;
	std::cout << "intReference: " << intReference << std::endl;
	
	intReference = 7;
	std::cout << "intValue: " << intValue << std::endl;
	std::cout << "intReference: " << intReference << std::endl;
	
	return 0;
}
#endif


#if 01
#include <iostream>

int main(void)
{
	int intValue;
	int &intReference = intValue;
	
	intValue = 5;
	
	std::cout << "intValue: " << intValue << std::endl;
	std::cout << "intReference: " << intReference << std::endl;
	
	std::cout << "&intValue: "  << &intValue << std::endl;
	std::cout << "&intReference: " << &intReference << std::endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int x = 321;
	int &y = x;
	
	cout << "x = " << x << "    y = " << y << endl;
	y = 123;
	cout << "x = " << x << "    y = " << y << endl;
	
	return 0; 
}
#endif


#if 0
#include <iostream.h>
int main(void)
{
	int a[] = {1,3,5,7,9};
	int i=2 ;
	int &r = a[i];          
	cout <<r<<endl;
	r=99;           
	cout <<a[i]<<endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std; 
int main(void)
{
	int  intValue;
	int &intReference = intValue;
	
	intValue = 5;
	cout << "intValue:\t" << intValue << endl;
	cout << "intReference:\t" << intReference << endl;
	cout << "&intValue:\t"  << &intValue << endl;
	cout << "&intReference:\t" << &intReference << endl;
	
	int intTwo = 8;
	intReference = intTwo;  // not what you think!
	cout << "\nintValue:\t" << intValue << endl;
	cout << "intTwo:\t" << intTwo << endl;
	cout << "intReference:\t" << intReference << endl;
	cout << "&intValue:\t"  << &intValue << endl;
	cout << "&intTwo:\t"  << &intTwo << endl;
	cout << "&intReference:\t" << &intReference << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
double& f(void); 
double val = 100.0; 
 
int main(void) 
{ 
	double x; 
	
	cout << f() << '\n'; 
	
	x = f();           // assign value of val to x 
	cout << x << '\n'; 
	
	return 0; 
} 
 
double& f(void) 
{ 
	return val; // return reference to val 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
double& f(void); 
double val = 100.0; 
 
int main(void) 
{ 
	double x; 
	
	f() = 99.1;
	cout << f() << '\n';
	
	return 0; 
} 
 
double& f(void) 
{ 
	return val; // return reference to val 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
double& f(int); // return a reference 
double vals[] = { 1.1, 2.2, 3.3, 4.4, 5.5 }; 
 
int main(void) 
{ 
	int i; 
	
	cout << "Here are the original values: "; 
	for(i=0; i < 5; i++) 
	cout << vals[i] << ' '; 
	
	f(1) = 8.23;   // change 2nd element 
	f(3) = -8.8;   // change 4th element 
	
	cout << "\nHere are the changed values: \n"; 
	for(i=0; i < 5; i++) 
		cout << vals[i] << ' '; 
	
	return 0; 
} 
 
double& f(int i) 
{ 
	return vals[i]; // return a reference to the ith element 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int j, k; 
	int &i = j;   // independent reference 
	
	j = 10; 
	
	cout << j << " " << i; // outputs 10 10 
	
	k = 121; 
	i = k;      // copies k's value into j, not k's address 
	
	cout << "\n" << j;  // outputs 121 
	
	return 0; 
}
#endif
