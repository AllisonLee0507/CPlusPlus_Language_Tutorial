#if 0
#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main(void)
{
	int i=1, t;
	
	for(t=0; t < 8; t++) {
		show_binary(i);
		
		i = i << 1 ;
	}
	
	return 0;
}
// Display the bits within a byte.
void show_binary(unsigned int u)
{
	int t;
	
	for(t=128; t>0; t=t/2)
		if(u & t) cout << "1 ";
		else cout << "0 ";
	
	cout << "\n";
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
void show_binary(unsigned int u); 
 
int main(void)
{
	int i=1, t; 
	
	
	for(t=0; t < 8; t++) { 
	i = i >> 1; 
	show_binary(i); 
	} 
	
	return 0; 
} 
// Display the bits within a byte. 
void show_binary(unsigned int u) 
{ 
	int t; 
	
	for(t=128; t>0; t=t/2) 
		if(u & t) cout << "1 "; 
		else cout << "0 "; 
	
	cout << "\n"; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
unsigned char lrotate(unsigned char val, int n); 

void show_binary(unsigned int u); 
 
int main(void) 
{ 
	char ch = 'A'; 
	
	cout << "Original value in binary:\n"; 
	
	show_binary(ch); 
	
	cout << "Rotating left 8 times:\n"; 
	
	for(int i=0; i < 8; i++)
	{ 
		ch = lrotate(ch, 1); 
		show_binary(ch); 
	} 
	return 0; 
} 
 
unsigned char lrotate(unsigned char val, int n) 
{ 
	unsigned int t; 
	
	t = val; 
	
	for(int i=0; i < n; i++) { 
	t = t << 1; 
	
	/* If a bit shifts out, it will be in bit 8 
	   of the integer t. If this is the case, 
	   put that bit on the right side. */ 
	if(t & 256) 
	  t = t | 1; // put a 1 on the right end 
	} 
	
	return t; // return the lower 8 bits. 
} 
 
// Display the bits within a byte. 
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
using namespace std; 
 
unsigned char rrotate(unsigned char val, int n); 
void show_binary(unsigned int u); 
 
int main() 
{ 
	char ch = 'T'; 
	
	cout << "Original value in binary:\n"; 
	show_binary(ch); 
	
	cout << "Rotating right 8 times:\n"; 	
	for(int i=0; i < 8; i++)
	{ 
		ch = rrotate(ch, 1); 
		show_binary(ch); 
	} 
	
	return 0; 
} 
 
// Right-rotate a byte n places. 
unsigned char rrotate(unsigned char val, int n) 
{ 
	unsigned int t; 
	
	t = val; 
	
	// First, move the value 8 bits higher. 
	t = t << 8; 
	
	for(int i=0; i < n; i++) { 
	t = t >> 1; 
	
	/* If a bit shifts out, it will be in bit 7 
	   of the integer t. If this is the case, 
	   put that bit on the left side. */ 
	if(t & 128)  
	  t = t | 32768; // put a 1 on left end 
	} 
	
	/* Finally, move the result back to the 
	 lower 8 bits of t. */ 
	t = t >> 8; 
	
	return t; 
} 
 
// Display the bits within a byte. 
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
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

void displayBits(unsigned); // prototype

int main(void)
{
   unsigned number1 = 960;

   cout << "The result of left shifting\n";
   displayBits( number1 );
   cout << "8 bit positions using the left-shift operator is\n";
   displayBits( number1 << 8 );

   return 0;
}

void displayBits( unsigned value ) {
   const int SHIFT = 8 * sizeof( unsigned ) - 1;
   const unsigned MASK = 1 << SHIFT;

   cout << setw( 10 ) << value << " = ";

   for ( unsigned i = 1; i <= SHIFT + 1; i++ ) 
   {
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
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

void displayBits( unsigned ); // prototype

int main()
{
   unsigned number1 = 960;

   cout << "\nThe result of right shifting\n";
   displayBits( number1 );
   cout << "8 bit positions using the right-shift operator is\n";
   displayBits( number1 >> 8 );


   return 0;
}

void displayBits( unsigned value ) {
   const int SHIFT = 8 * sizeof( unsigned ) - 1;
   const unsigned MASK = 1 << SHIFT;

   cout << setw( 10 ) << value << " = ";

   for ( unsigned i = 1; i <= SHIFT + 1; i++ ) 
   {
      cout << ( value & MASK ? '1' : '0' );
      value <<= 1;

      if ( i  8 == 0 )
         cout << ' ';
   }

   cout << endl;
}
#endif

