#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::atof;

int main(void)
{
	double d = atof( "99.0" );
	
	cout << d / 2.0 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::atoi;

int main(void)
{
	int i = atoi( "2593" );
	
	cout << i - 593 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::atol;

int main(void)
{
	long x = atol( "1000000" );
	
	cout << x / 2 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::strtod;

int main(void)
{
	double d;
	const char *string1 = "51.2 are admitted";
	char *stringPtr;
	
	d = strtod( string1, &stringPtr );
	
	cout << d << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::strtol;

int main(void)
{
	long x;
	const char *string1 = "-1234567abc";
	char *remainderPtr;
	
	x = strtol( string1, &remainderPtr, 0 );
	
	cout << x << " " << remainderPtr << " " << x + 567 << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib> // strtoul prototype
using std::strtoul;

int main(void)
{
	unsigned long x;
	const char *string1 = "1234567abc";
	char *remainderPtr;
	
	x = strtoul( string1, &remainderPtr, 0 );
	
	cout << x << "  "<< x - 567 << endl;
	
	return 0;
}
#endif
