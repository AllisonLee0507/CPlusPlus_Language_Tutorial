#if 0
#include <iostream>
using namespace std;

int main(void)
{
	cout << "Start\n";
	
	try {
		cout << "Inside try block\n";
		throw 1;                          // throw an error
		cout << "This will not execute";
	}
	catch (int i) {                       // catch an error
		cout << "Caught an exception -- value is: ";
		cout << i << "\n";
	}
	cout << "End";
	
	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
void f(int test) 
{ 
	cout << "Inside f, test is: " << test << "\n"; 
	
	if(test) 
		throw test; 
} 
 
int main(void) 
{ 
	cout << "start\n"; 
	
	try { // start a try block 
		cout << "Inside try block\n"; 
		f(0); 
		f(1); 
		f(2); 
	} 
	catch (int i) { // catch an error 
		cout << "Caught an exception -- value is: "; 
		cout << i << "\n"; 
	} 
	
	cout << "end"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
void f(int test) 
{ 
	try{ 
		if(test) throw test; 
	} 
	catch(int i) { 
		cout << "Caught One!  Ex. #: " << i << '\n'; 
	} 
} 
 
int main(void) 
{ 
	cout << "start\n"; 
	
	f(1); 
	f(2); 
	f(0); 
	f(3); 
	
	cout << "end"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
void f(int test) 
{ 
	try{ 
		if(test) 
			throw test;            // throw int 
		else 
			throw "Value is zero"; // throw char * 
	} 
	catch(int i) { 
		cout << "Caught One!  Ex. #: " << i << '\n'; 
	} 
	catch(char *str) { 
		cout << "Caught a string: "; 
		cout << str << '\n'; 
	} 
} 
 
int main(void) 
{ 
	cout << "start\n"; 
	
	f(1); 
	f(2); 
	f(0); 
	f(3); 
	
	cout << "end"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
void f(int test) 
{ 
	try{ 
		if(test==0) throw test; // throw int 
		if(test==1) throw 'a'; // throw char 
		if(test==2) throw 123.23; // throw double 
	} 
	catch(...) { // catch all exceptions 
		cout << "Caught One!\n"; 
	} 
} 
 
int main(void) 
{ 
	f(0); 
	f(1); 
	f(2); 
	
	return 0; 
}
#endif



#if 0
#include <iostream.h>

int main(void)
{
	try
	{
		char * mystring;
		mystring = new char [10];
		
		if (mystring == NULL) 
		throw "Allocation failure";
	
		for (int n=0; n<=100; n++)
		{
			if (n>9) throw n;
		
			mystring[n]='a';			
		}
	}
	catch (int i)
	{
		cout << "index " << i << " is out of range" << endl;
	}
	catch (char * str)
	{
		cout << "Exception: " << str << endl;
	}
	
	return 0;
}
#endif



#if 0
#include <iostream>

int main(void)
{
	try	
	{
		throw "Out of range";
	}
	catch (const char * str)
	{
		std::cout << "Exception: " << str << std::endl;
	}
	
	return 0;

}
#endif



#if 0
#include <iostream>
using namespace std;

void f(int val)
{
	try{
	if(val==0) 
		throw val;

	if(val==1) 
	throw 'a';

	if(val==2) 
		throw 123.23;
	}
	catch(int i) {                      // catch an int exception
		cout << "Caught an integer\n";
	}
	catch(...) {                        // catch all other exceptions
		cout << "Caught One!\n";
	}
}

int main(void)
{
	f(0);
	f(1);
	f(2);
	
	return 0;
}
#endif



#if 0
#endif

