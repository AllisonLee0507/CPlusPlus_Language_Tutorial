#if 0
#include <iostream>
using namespace std;

int main(void)
{
	int answer, divisor, dividend;
	
	try
	{
		divisor = 1;
		
		dividend = 0;
		
		if(dividend ==0)
			throw 0;
		
		answer = divisor/dividend;
		cout << answer;
		
		return 0;
	}
	catch(int i)
	{
		cout << "You cannot divide by zero";
	}
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
void f(void) 
{ 
	try { 
		throw "hello"; // throw a char * 
	} 
	catch(char *) { // catch a char * 
		cout << "Caught char * inside f\n"; 
		throw ; // rethrow char * out of function 
	} 
} 
 
int main(void) 
{ 
	cout << "start\n"; 
	
	try{ 
		f(); 
	} 
	catch(char *) { 
		cout << "Caught char * inside main\n"; 
	} 
	
	cout << "end"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
using namespace std;

// function prototypes.
float divide_number(float , float);

int main(void)
{
	float dividend,divisor,answer;
	try
	{
		dividend = 0;
		
		divisor = 0;
		
		answer = divide_number(dividend,divisor);
	}
	catch(...)
	{
		cout << "oops, there is an error!";
	}
	
	return 1;
}
float divide_number(float num1, float num2)
{
	try
	{
		float answer;
		answer = num1/num2;
		return answer;
	}
	catch(...)
	{
		throw;
	}
}
#endif
