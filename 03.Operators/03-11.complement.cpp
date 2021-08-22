#if 0
#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main(void)
{
	unsigned u = 123;
	
	
	cout << "Here's the number in binary: ";
	show_binary(u);
	
	cout << "Here's the complement of the number: ";
	show_binary(~u);
	
	return 0;
}

void show_binary(unsigned int u)
{
	int t;
	
	for(t=128; t>0; t = t/2)
		if(u & t) cout << "1 ";
		else cout << "0 ";
	
	cout << "\n";
}
#endif


#if 0
#include <iostream>
using std::cout;

#include <iomanip>
using std::endl;
using std::setw;

void displayBits( unsigned );

int main(void)
{
	unsigned number1;
	unsigned number2;
	unsigned mask;
	unsigned setBits;
	
	number1 = 21845;
	cout << "\nThe one's complement of\n";
	displayBits( number1 );
	cout << "is" << endl;
	displayBits( ~number1 );
	
	
	return 0;
}

void displayBits( unsigned value ) {
	const int SHIFT = 8 * sizeof( unsigned ) - 1;
	const unsigned MASK = 1 << SHIFT;
	
	cout << setw( 10 ) << value << " = ";
	
	for ( unsigned i = 1; i <= SHIFT + 1; i++ ) {
	  cout << ( value & MASK ? '1' : '0' );
	  value <<= 1;
	
	  if ( i  8 == 0 )
	     cout << ' ';
	}
	
	cout << endl;
}
#endif

