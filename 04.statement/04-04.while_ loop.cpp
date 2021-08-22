#if 0
#include <iostream>

int main()
{
	int counter = 0;
	
	while(counter < 5)
	{
		std::cout << "Looping!  ";
		counter++;	
	}
	
	std::cout << "\nCounter: " << counter << ".\n";
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int counter = 1; 
	
	while ( counter <= 10 ) 
	{    
		cout << counter << " ";
		counter++; 
	} 
	
	cout << endl; 
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	unsigned char ch; 
	
	ch = 32; 
	
	while(ch) { 
		cout << ch; 
		ch++; 
	} 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int len; 
	
	cout << "Enter length (1 to 79): "; 
	cin >> len; 
	
	while(len>0 && len<80)  { 
		cout << '.'; 
		len--; 
	} 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
 
int main(void)
{
	unsigned short small = 1;
	unsigned long  large = 123;
	const unsigned short MAXSMALL=65535;
	
	std::cout << "small: " << small << "...";
	
	// for each iteration, test three conditions
	while (small < large && large > 0 && small < MAXSMALL)
	{
		std::cout << ".";
		small++;
		large-=2;
	}
	std::cout << "\nSmall: " << small << " Large: "  << large << std::endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
 
int main()
{
	int counter = 0;
	
	while (1)
	{
		counter ++;
		if (counter > 10)
			break;
	}
	
	std::cout << "counter: " << counter << "\n";
	
	return 0;
}
#endif



#if 0
#include <iostream>
 
int main(void)
{
	int counter = 3;
	
	while (counter > 0)
	{
		std::cout << "Hello!\n";
		counter--;
	}
	
	std::cout << "counter is OutPut: " << counter;
	
	return 0;
}
#endif



#if 0
#include <iostream>   
using namespace std;   
  
int main(void)
{                           
	const unsigned long limit = 4294967295;   
	unsigned long next=0;       
	unsigned long last=1;       
	
	while( next < limit / 2 )   
	{   
		cout << last << "  ";    
		long sum = next + last;  
		next = last;             
		last = sum;              
	}   
	cout << endl;   
	return 0;   
}
#endif
