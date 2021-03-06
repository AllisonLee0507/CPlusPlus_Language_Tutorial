#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::setiosflags;
using std::fixed;

#include <cstdarg>
using std::va_list;

double f( int, ... );

int main()
{
   double double1 = 3.5;
   double double2 = 2.5;
   double double3 = 1.7;
   double double4 = 1.2;

   cout << f( 2, double1, double2 ) << endl
        << f( 3, double1, double2, double3 ) << endl
        << f( 4, double1, double2, double3, double4 ) << endl
        << endl;
   return 0;
}

double f( int count, ... )
{
	double total = 0;
	va_list list;  // for storing information needed by va_start
	
	va_start( list, count );
	
	for ( int i = 1; i <= count; i++ )
		total += va_arg( list, double );
	
	va_end( list );
	
	return total;
}
#endif

