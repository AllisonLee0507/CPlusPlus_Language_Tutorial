#if 0
#include <iostream>
#include <new>
#include <cstdlib>
using std::cerr;
using std::cout;
using std::set_new_handler;
using std::abort;

void f(void)
{
	cerr << "called";
	abort();
}

int main(void)
{
	double *ptr[ 50 ];
	
	set_new_handler( f );
	
	for ( int i = 0; i < 50; i++ )
	{
		ptr[ i ] = new double[ 50000000 ];
		cout << "Allocated 50000000 doubles in ptr[ " << i << " ]\n";
	}
	
	return 0;
}
#endif

