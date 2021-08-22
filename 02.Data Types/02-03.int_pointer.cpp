#if 0
#include <iostream>
using std::cout; // this file uses std::cout

int main(void)
{
	int intValue;         // a variable
	int * intPointer = 0;    // a pointer
	
	intValue = 5;
	intPointer = &intValue;     // assign address of intValue to intPointer
	cout << "intValue: " << intValue << "\n";
	cout << "*intPointer: " << *intPointer << "\n\n";
	
	cout << "*intPointer = 7\n";
	*intPointer = 7;         // sets intValue to 7
	cout << "*intPointer: " << *intPointer << "\n";
	cout << "intValue: " << intValue << "\n\n";
	
	cout << "intValue = 9\n";
	intValue = 9;
	cout << "intValue: " << intValue << "\n";
	cout << "*intPointer: " << *intPointer << "\n";
	
	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int total; 
	int *ptr; 
	int val; 
	
	total = 3200; // assign 3,200 to total 
	
	ptr = &total; // get address of total 
	
	val = *ptr;   // get value at that addres  
	
	cout << "Total is: " << val << '\n'; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int *p, num; 
	
	p = &num; 
	
	*p = 100; 
	cout << num << ' '; 
	(*p)++; 
	cout << num << ' '; 
	(*p)--; 
	cout << num << '\n'; 
	
	return 0; 
}
#endif

