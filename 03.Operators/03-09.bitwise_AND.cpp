#if 0
#include <iostream>
using std::cout;

#include <iomanip>
using std::endl;
using std::setw;

void displayBits(unsigned);

int main(void)
{
   unsigned number1;
   unsigned number2;
   unsigned mask;
   unsigned setBits;

   
   
   number1 = 15;
   setBits = 241;
   cout << "\nThe result of combining the following\n";
   displayBits( number1 );
   displayBits( setBits );
   cout << "using the bitwise inclusive OR operator | is\n";
   displayBits( number1 | setBits );

   return 0;
}

void displayBits( unsigned value ) {
   const int SHIFT = 8 * sizeof( unsigned ) - 1;
   const unsigned MASK = 1 << SHIFT;

   cout << setw( 10 ) << value << " = ";

   for ( unsigned i = 1; i <= SHIFT + 1; i++ ) {
      cout << ( value & MASK ? '1' : '0' );
      value <<= 1;

      if ( i % 8 == 0 )
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
	char ch;
	
	for(int i = 0 ; i < 10; i++)  {
		ch = 'a' + i;
		cout << ch << " " ;
		ch = ch & 223;
		cout << ch << "\n";
	}
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int multiple(int);

int main(void)
{
	int y;
	
	cout << "Enter an integer between 1 and 32000: ";
	cin >> y;
	
	if ( multiple( y ) )
	  cout << y << " is a multiple of X" << endl;
	else
	  cout << y << " is not a multiple of X" << endl;
	
	return 0;
}

int multiple( int num )
{
	int mask = 1, mult = 1;
	
	for ( int i = 0; i < 10; i++, mask <<= 1 )
		if ( ( num & mask ) != 0 ) 
		{
			mult = 0;
			break;
		}
	
	return mult;
}
#endif
