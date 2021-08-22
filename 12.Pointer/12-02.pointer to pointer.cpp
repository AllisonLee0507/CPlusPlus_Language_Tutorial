#if 0
#include <iostream> 
using namespace std;

int main(void)
{
	int x, *p, **q;

	x = 10;

	p = &x;

	q = &p;

	cout << **q; // prints the value of x 

	return 0;
}
#endif
