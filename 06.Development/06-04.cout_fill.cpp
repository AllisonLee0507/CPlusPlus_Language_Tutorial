#if 0
#include <iostream.h>

int main(void)
{
	float a=100100.0, b=0.08;
	
	cout.setf(ios::right|ios::scientific|ios::showpoint);
	cout.width(20);   
	cout<<(a/b)<<endl;
	cout.fill('$');  
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	cout.setf(ios::hex, ios::basefield);
	cout << 100 << "\n";  // 100 in hex
	
	cout.fill('?');
	cout.width(10);
	cout << 2343.0;
	
	return 0;
}
#endif
