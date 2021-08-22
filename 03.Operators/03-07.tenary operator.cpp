#if 0
#include <iostream>
using namespace std;

int div_zero(void);

int main(void)
{
	int i = 1, j = 0, result;
	
	
	// This statement prevents a divide by zero error.
	result = j  ?  i : j;
	
	cout << "Result: " << result;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int mice = 1;
	cout << "You have "
	   << mice
	   << (mice == 1 ? " mouse " : " mice ")
	   << "in total."
	   << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void)
{
	int x, y, z;
	cout << "Enter two numbers.\n";
	cout << "First: ";
	cin >> x;
	cout << "\nSecond: ";
	cin >> y;
	cout << "\n";
	
	if (x > y)
	  z = x;
	else
	  z = y;
	
	cout << "After if test, z: " << z;
	cout << "\n";
	
	z =  (x > y) ? x : y;
	
	cout << "After conditional test, z: " << z;
	cout << "\n";
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	int x, y;
	
	cout << "Enter two integers: ";
	cin >> x >> y;
	cout << x << ( x == y ? " is" : " is not" ) 
	    << " equal to " << y << endl;
	
	return 0;
}
#endif
