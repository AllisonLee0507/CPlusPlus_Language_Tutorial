#if 0
#include <iostream>

using namespace std;

int main(void)
{  
	cout << "How many pennies do you have? ";
	int count;
	cin >> count;
	double total = count * 0.01;
	
	cout << "How many nickels do you have? ";
	cin >> count;
	total = count * 0.05 + total;
	
	cout << "How many dimes do you have? ";
	cin >> count;
	total = count * 0.10 + total;
	
	cout << "How many quarters do you have? ";
	cin >> count;
	total = count * 0.25 + total;
	
	cout << "Total value = " << total << "\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>   
using namespace std;   
  
int main(){   
	int numb;   
	
	cout << "Enter a number: ";   
	cin >> numb;   
	cout << "numb<10  is " << (numb < 10)  << endl;   
	cout << "numb>10  is " << (numb > 10)  << endl;   
	cout << "numb==10 is " << (numb == 10) << endl;   
	
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
	
	cout << "Enter the length: "; 
	cin >> length; // input the length 
	
	cout << "Enter the width: "; 
	cin >> width;  // input the width  
	
	cout << "The area is ";  
	cout << length * width;
	
	return 0;  
}
#endif


#if 0
#include <iostream>  
#include <stdio.h>  
using namespace std;
int main(void)  
{  
	int i;  
	char str[80];  
	 
	cout << "I like Turbo C++.\n";  
	 
	printf("You can use printf(), but most C++ programs don't.\n");  
	 
	cout << "enter a number: ";  
	cin >> i;  
	 
	cout << "your number is " << i << "\n";  
	 
	cout << "enter a string: ";  
	cin >> str;  
	cout << str;  
	 
	return 0;  
}
#endif
