#if 0
#include <iostream>
using std::boolalpha;
using std::cout;
using std::endl;

int main(void)
{
	bool a = true;
	bool b = false;
	int c = 2;
	int d = 3;
	
	cout << boolalpha;
	
	cout << "a = " << a << "; b = " << b
	  << "; c = " << c << "; d = " << d;
	
	cout << "\n\nBitwise operator keywords:";
	cout << "\nc bitand d: " << ( c bitand d );
	cout << "\nc bit_or d: " << ( c bitor d );
	cout << "\n   c xor d: " << ( c xor d );
	cout << "\n   compl c: " << ( compl c );
	cout << "\nc and_eq d: " << ( c and_eq d );
	cout << "\n c or_eq d: " << ( c or_eq d );
	cout << "\nc xor_eq d: " << ( c xor_eq d ) << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
#include <iso646.h>
using namespace std;

int main(void)
{
	int a = 8, b = 22;
	
	cout << boolalpha 
		<<   "   a and b: " << ( a and b )
		<< "\n    a or b: " << ( a or b )
		<< "\n     not a: " << ( not a )
		<< "\na not_eq b: " << ( a not_eq b )
		<< "\na bitand b: " << ( a bitand b )
		<< "\na bit_or b: " << ( a bitor b )
		<< "\n   a xor b: " << ( a xor b )
		<< "\n   compl a: " << ( compl a )
		<< "\na and_eq b: " << ( a and_eq b )
		<< "\n a or_eq b: " << ( a or_eq b )
		<< "\na xor_eq b: " << ( a xor_eq b ) << endl;
	
	return 0;
}
#endif
