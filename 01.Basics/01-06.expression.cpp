#if 0
#include <iostream>  
using namespace std;  

double box(double length, double width, double height); // use double data  

int main(void)  
{  
	double sum;  
	
	sum = box(10.1, 11.2, 3.3) + box(5.5, 6.6, 7.7) + box(4.0, 5.0, 8.0);  
	
	cout << "The sum of the volumes is " <<  sum << "\n";  
	cout << "The average volume is " << sum / 3.0 << "\n";  
	
	return 0;  
}  

// This version of box uses double data.  
double box(double length, double width, double height)  
{  
	return length * width * height ;  
}
#endif

