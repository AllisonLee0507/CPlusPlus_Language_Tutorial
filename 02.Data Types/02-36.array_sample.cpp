#if 0
#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;


#include <iomanip>
using std::setw;

#include <cstdlib>
using std::exit;

class Array
{
   friend ostream &operator<<( ostream &, const Array & );
   friend istream &operator>>( istream &, Array & );
public:
   Array( int = 10 );
   Array( const Array & );
   ~Array();
   int getSize() const;

   const Array &operator=( const Array & );
   bool operator==( const Array & ) const;

   bool operator!=( const Array &right ) const
   {
      return ! ( *this == right );
   }
   int &operator[]( int );

   int operator[]( int ) const;
private:
   int size;
   int *ptr;
};

Array::Array( int arraySize )
{
   size = arraySize;
   ptr = new int[ size ];

   for ( int i = 0; i < size; i++ )
      ptr[ i ] = 0;
}

Array::Array( const Array &arrayToCopy ) : size( arrayToCopy.size )
{
   ptr = new int[ size ];

   for ( int i = 0; i < size; i++ )
      ptr[ i ] = arrayToCopy.ptr[ i ];
}

Array::~Array()
{
   delete [] ptr;
}
int Array::getSize() const
{
   return size;
}

const Array &Array::operator=( const Array &right )
{
      delete [] ptr;
      size = right.size;
      ptr = new int[ size ];

      for ( int i = 0; i < size; i++ )
         ptr[ i ] = right.ptr[ i ];
   return *this;
}

bool Array::operator==( const Array &right ) const
{
   if ( size != right.size )
      return false;

   for ( int i = 0; i < size; i++ )
      if ( ptr[ i ] != right.ptr[ i ] )
         return false;

   return true;
}
int &Array::operator[]( int subscript )
{
   return ptr[ subscript ];
}
int Array::operator[]( int subscript ) const
{
   return ptr[ subscript ];
}
istream &operator>>( istream &input, Array &a )
{
   for ( int i = 0; i < a.size; i++ )
      input >> a.ptr[ i ];

   return input;
}
ostream &operator<<( ostream &output, const Array &a )
{
   int i;

   for ( i = 0; i < a.size; i++ ) {
      output << a.ptr[ i ];

   }
   return output;
}

int main(void)
{
	Array integers1( 7 );
	Array integers2;
	
	cout << integers1.getSize() << integers1;
	cout << integers2.getSize() << integers2;
	
	cout << "\nEnter 17 integers:" << endl;
	cin >> integers1 >> integers2;	
	cout << "integers1:\n" << integers1  << "integers2:\n" << integers2;
	
	if ( integers1 != integers2 )
		cout << "integers1 and integers2 are not equal" << endl;
	
	Array integers3( integers1 );	
	cout << integers3.getSize() << integers3;
	
	integers1 = integers2;
	
	cout << integers1;
	cout << integers2;
	
	if ( integers1 == integers2 )
		cout << "integers1 and integers2 are equal" << endl;
	
	cout << integers1[ 5 ];
	
	integers1[ 5 ] = 1000;
	cout << integers1;
	
	return 0; 
}

#endif


#if 0
#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

class array {
  int *p;
  int size;
public:
  array(int sz) {
    try {
      p = new int[sz];
    } catch (bad_alloc xa) {
      cout << "Allocation Failure\n";
      exit(EXIT_FAILURE);
    }
    size = sz;
  }
  ~array() { delete [] p; }

    // Copy Constructor
    array(const array &a) {
      int i;

      try {
        p = new int[a.size];
      } catch (bad_alloc xa) {
        cout << "Allocation Failure\n";
        exit(EXIT_FAILURE);
      }
      for(i=0; i<a.size; i++) p[i] = a.p[i];
    }


  void put(int i, int j) {
    if(i>=0 && i<size) p[i] = j;
  }
  int get(int i) {
    return p[i];
  }
};


int main(void)
{
	array num(10);
	
	for(int i=0; i<10; i++)
		num.put(i, i);
	
	for(int i=9; i>=0; i--)
		cout << num.get(i);
	cout << "\n";
	
	array x(num); // invokes copy constructor
	for(int i=0; i<10; i++)
		cout << x.get(i);
	
	return 0;
}
#endif

