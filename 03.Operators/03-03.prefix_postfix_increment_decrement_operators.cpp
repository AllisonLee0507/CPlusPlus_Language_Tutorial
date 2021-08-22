#if 0
#include <iostream>
 
int main(void)
{
	int intValue = 39;      // initialize two integers
	int yourAge = 39;
	
	std::cout << intValue << "\n";
	std::cout << yourAge << "\n";
	intValue++;         // postfix increment
	++yourAge;       // prefix increment
	
	std::cout << intValue << "\n";
	std::cout << yourAge << "\n";
	std::cout << intValue++ << "\n";
	std::cout << ++yourAge << "\n";
	std::cout << intValue << "\n";
	std::cout << yourAge << "\n";
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int c;
	
	c = 5; 
	cout << c << endl; 
	cout << c++ << endl;
	cout << c << endl; 
	
	cout << endl; 
	
	c = 5;
	cout << c << endl; 
	cout << ++c << endl;
	cout << c << endl; 
	
	return 0; 
}
#endif

