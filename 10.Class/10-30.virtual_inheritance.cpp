#if 0
#include <iostream>
using std::cout;
using std::endl;

class Base
{
public:
   virtual void print() const = 0; // pure virtual
};
class Derived1 : virtual public Base
{
public:
   void print() const
   {
      cout << "Derived1\n";
   }
};

class Derived2 : virtual public Base
{
public:
   void print() const
   {
      cout << "Derived2\n";
   }
};

class Multiple : public Derived1, public Derived2
{
public:
   void print() const
   {
      Derived2::print();
   }
};

int main(void)
{
	Multiple both;
	Derived1 one;
	Derived2 two;
	
	Base *array[ 3 ];
	array[ 0 ] = &both;
	array[ 1 ] = &one;
	array[ 2 ] = &two;
	
	for ( int i = 0; i < 3; i++ )
	  array[ i ]->print();
	
	return 0;
}

#endif


