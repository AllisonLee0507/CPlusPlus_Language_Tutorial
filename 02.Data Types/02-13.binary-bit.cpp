#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

int main(void)
{
	unsigned value = 123;
	const int SHIFT = 8 * sizeof( unsigned ) - 1;
	const unsigned MASK = 1 << SHIFT;
	
	for ( int i = 1; i <= SHIFT + 1; i++ ) 
	{
		cout << ( value & MASK ? '1' : '0' );
		value <<= 1;
	
		if ( i % 8 == 0 )
			cout << ' ';
	}
	
	cout << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
void show_binary(unsigned int u);
 
int main(void)
{ 
	show_binary(89);
	
	return 0;
}

void show_binary(unsigned int u) 
{ 
	int t; 
	
	for(t=128; t>0; t = t/2) 
	if(u & t) cout << "1 "; 
	else cout << "0 "; 
	
	cout << "\n"; 
	
	return;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

int main(void)
{
	unsigned long red = 0XFF0000UL;      // Color red
	unsigned long white = 0XFFFFFFUL;    // Color white - RGB all maximum
	
	cout << std::hex;                    // Set hexadecimal output format
	cout << setfill('0');                // Set fill character for output
	
	cout << "\nTry out bitwise AND and OR operators.";
	cout << "\nInitial value  red         = " << setw(8) << red;
	cout << "\nComplement    ~red         = " << setw(8) << ~red;
	
	cout << "\nInitial value  white       = " << setw(8) << white;
	cout << "\nComplement    ~white       = " << setw(8) << ~white;
	
	cout << "\n Bitwise AND   red & white = " << setw(8) << (red & white);
	cout << "\n Bitwise OR    red | white = " << setw(8) << (red | white);
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

int main(void)
{
	unsigned long red = 0XFF0000UL;      // Color red
	unsigned long white = 0XFFFFFFUL;    // Color white - RGB all maximum
	
	cout << std::hex;                    // Set hexadecimal output format
	cout << setfill('0');                // Set fill character for output
	
	unsigned long mask = red ^ white;
	
	cout << "\n        mask = red  white = " << setw(8) << mask;
	cout << "\n                mask  red = " << setw(8) << (mask ^ red);
	cout << "\n              mask  white = " << setw(8) << (mask ^ white);
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

int main(void)
{
	unsigned long flags = 0xFF;          // Flags variable
	unsigned long bit1mask = 0x1;        // Selects bit 1
	unsigned long bit6mask = 0x20;       // Selects bit 6
	unsigned long bit20mask = 0x80000;   // Selects bit 20
	
	cout << "\nSelect bit 1 from flags    : " << setw(8) << (flags & bit1mask);
	cout << "\nSelect bit 6 from flags    : " << setw(8) << (flags & bit6mask);
	cout << "\nSwitch off bit 6 in flags  : " << setw(8) << (flags &= ~bit6mask);
	
	cout << "\nSwitch on bit 20 in flags  : " << setw(8) << (flags |= bit20mask);
	
	cout << endl;
	
	return 0;
}
#endif
