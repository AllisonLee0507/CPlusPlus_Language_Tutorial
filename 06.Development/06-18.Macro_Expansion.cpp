#if 0
#include <iostream>
using namespace std;

#define getmax(a,b) ((a)>(b)?(a):(b))

int main(void)
{
	int x=5, y;
	y= getmax(x,2);
	cout << y << endl;
	cout << getmax(7,x) << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void)
{
	cout << "This is the line number " << __LINE__;
	cout << " of file " << __FILE__ << ".\n";
	cout << "Its compilation began " << __DATE__;
	cout << " at " << __TIME__ << ".\n";
	cout << "The compiler gives a __cplusplus value of " << __cplusplus;
	return 0;
}
#endif



#if 0
#include <iostream>
 
#define CUBE(a) ( (a) * (a) * (a) )
#define THREE(a) a * a * a

int main(void)
{
	long x = 5;
	long y = CUBE(x);
	long z = THREE(x);
	
	std::cout << "y: " << y << std::endl;
	std::cout << "z: " << z << std::endl;
	
	long a = 5, b = 7;
	y = CUBE(a+b);
	z = THREE(a+b);
	
	std::cout << "y: " << y << std::endl;
	std::cout << "z: " << z << std::endl;
	
	return 0;
}
#endif

