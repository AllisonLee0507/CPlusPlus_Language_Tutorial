#if 0
#include <iostream>
using namespace std;

int main(void)
{
	int i;
	
	for(i=0; i<10; i++)
		cout << static_cast<double> (i) / 3 << " ";
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <ostream>

class base {};
class derived : public base {};
class other : public base {};

int main(void)
{
	base* b = new derived;
	static_cast<derived&>(*b); 
	static_cast<other*>(b);    
	
	derived* d = new derived;
	b = d;
	b = static_cast<base*>(d); 
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <ostream>

enum color   { red, black };

int main(void)
{
	color c = static_cast<color>(red);
	
	return 0;
}
#endif

