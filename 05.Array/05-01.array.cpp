#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main(void)
{
	int n[ 10 ];
	
	for ( int i = 0; i < 10; i++ )        
		n[ i ] = 0;
	
	for ( int j = 0; j < 10; j++ )        
		cout << n[ j ] << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main(void)
{
	int n[ 10 ] = { 2, 7, 4, 8, 5, 4, 9, 7, 6, 3 };
	
	for ( int i = 0; i < 10; i++ )
		cout << n[ i ] << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

void staticArrayInit(void);
void automaticArrayInit(void);

int main()
{
	staticArrayInit();
	automaticArrayInit();
	
	staticArrayInit();
	automaticArrayInit();
	return 0;
}

void staticArrayInit( void )
{
	static int array1[ 3 ];
	
	for ( int i = 0; i < 3; i++ )
		cout << "array1[" << i << "] = " << array1[ i ] << "  ";
	
	for ( int j = 0; j < 3; j++ )
		array1[ j ] = 0;
		
	return;
}

void automaticArrayInit( void )
{
	int array2[ 3 ] = { 1, 2, 3 };
	
	for ( int i = 0; i < 3; i++ )
		cout << "array2[" << i << "] = " << array2[ i ] << "  ";
	
	for ( int j = 0; j < 3; j++ )
		array2[ j ] = 0;
	
	return;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modifyArray( int [], int ); // appears strange
void modifyElement( int );

int main(void)
{
	const int arraySize = 5; // size of array a
	int a[ arraySize ] = { 0, 1, 2, 3, 4 }; // initialize array a
	
	modifyArray( a, arraySize );  
	
	for ( int i = 0; i < arraySize; i++ )
		cout << setw( 3 ) << a[ i ];
	
	modifyElement( a[ 3 ] );
		cout << a[ 3 ] << endl;
	
	return 0;
}

void modifyArray( int b[], int sizeOfArray )
{
	for ( int i = 0; i < sizeOfArray; i++ )
		b[ i ] = 200;
}

void modifyElement( int e )
{
	e = 200 ;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int linearSearch( const int [], int, int ); // prototype

int main(void)
{
	const int arraySize = 100;
	int a[ arraySize ];
	int searchKey = 28;
	
	for ( int i = 0; i < arraySize; i++ ) 
		a[ i ] = 2 * i;
	
	int element = linearSearch( a, searchKey, arraySize );
	
	cout << element << endl;
	return 0;
}

int linearSearch( const int array[], int key, int sizeOfArray )
{
	for ( int j = 0; j < sizeOfArray; j++ ){
		if ( array[ j ] == key ){
			return j;
		}
	}
	return -1;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int b[] = { 10, 20, 30, 40 };
   int *bPtr = b;

   for ( int i = 0; i < 4; i++ )
      cout << *( b + i ) << '\n';

   for ( int j = 0; j < 4; j++ )
      cout << bPtr[ j ] << '\n';

   for ( int i = 0; i < 4; i++ )
      cout << *( bPtr + i ) << '\n';

   return 0;
}
#endif



#if 0
#include <iostream>  
using namespace std;  

int main(void)
{  
	const int DAYS = 7;           
	const int MAX = 10;           
	char star[DAYS][MAX] = { "Sunday", "Monday", "Tuesday",  
	                      "Wednesday", "Thursday",  
	                      "Friday", "Saturday"  };  
	for(int j=0; j<DAYS; j++) 
	cout << star[j] << endl;  
	return 0;  
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int values[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	
	cout << endl
		<< "There are "
		<< sizeof values/sizeof values[0]
		<< " elements in the array."
		<< endl;
	
	return 0;
}
#endif
