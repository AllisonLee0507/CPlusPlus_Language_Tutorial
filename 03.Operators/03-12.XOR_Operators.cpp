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
	
	number1 = 139;
	number2 = 199;
	cout << "\nThe result of combining the following\n";
	displayBits( number1 );
	displayBits( number2 );
	cout << "using the bitwise exclusive OR operator  is\n";
	displayBits( number1 ^ number2 );
	
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


#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	char msg[] = "This is a test"; 
	char key = 123; 
	
	cout << "Original message: " << msg << "\n"; 
	
	for(int i = 0 ; i < strlen(msg); i++)  
	msg[i] = msg[i] ^ key; 
	
	cout << "Encoded message: " << msg << "\n"; 
	
	for(int i = 0 ; i < strlen(msg); i++)  
	msg[i] = msg[i] ^ key; 
	
	cout << "Decoded message: " << msg << "\n"; 
	
	return 0; 
}
#endif

