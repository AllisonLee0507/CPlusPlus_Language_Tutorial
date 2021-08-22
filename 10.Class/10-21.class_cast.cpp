#if 0
#include <iostream>
#include <typeinfo>

using namespace std;

class Base {
public:
	virtual ~Base( ) {} // Make this a polymorphic class
};

class Derived : public Base {
public:
	virtual ~Derived( ) {}
};

int main(void)
{
   Derived d;

   // Query the type relationship
   if (dynamic_cast<Base*>(&d)) {
      cout << "Derived is a subclass of Base" << endl;
   }
   else {
      cout << "Derived is NOT a subclass of Base" << endl;
   }
   
   return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;
class BaseClass {
public:
   void f( void ) const { cout << "BASE\n"; }
};

class DerivedClass: public BaseClass {
public:
   void f( void ) const { cout << "DERIVED\n"; }
};

void test( BaseClass * );

int main(void)
{
	// use static_cast for a conversion
	double d = 8.22;
	int x = static_cast< int >( d );
	
	cout << "d is " << d << "\nx is " << x << endl;
	
	BaseClass base;  // instantiate base object
	test( &base );   // call test
	
	return 0;
}
 
void test( BaseClass *basePtr )
{
	DerivedClass *derivedPtr;
	
	// cast base class pointer into derived class pointer    
	derivedPtr = static_cast< DerivedClass * >( basePtr );
	derivedPtr->f();   // invoke DerivedClass function f
}
#endif



#if 0
#include <iostream>
using namespace std;
class ConstCastTest {
public:
   void setNumber( int );
   int getNumber() const;
   void printNumber() const;
private:
   int number;
};

void ConstCastTest::setNumber( int num ) { number = num; }
int ConstCastTest::getNumber() const { return number; }
void ConstCastTest::printNumber() const
{
	const_cast< ConstCastTest * >( this )->number--;
	cout << number << endl;
}

int main(void)
{
	ConstCastTest x;
	x.setNumber( 8 );
	
	cout << "Initial value of number: " << x.getNumber();
	
	x.printNumber();
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
const double PI = 3.14159;

class Shape {
   public:
      virtual double area() const { return 0.0; }
};

class Circle: public Shape {
public:
   Circle( int r = 1 ) { radius = r; }

   virtual double area() const 
   { 
      return PI * radius * radius; 
   };
protected:
   int radius;
};

class Cylinder: public Circle {
public:
   Cylinder( int h = 1 ) { height = h; }

   virtual double area() const 
   {     
      return 2 * PI * radius * height + 
             2 * Circle::area();
   }
private:
   int height;
};

void outputShapeArea( const Shape * );

int main()
{
   Circle circle;
   Cylinder cylinder;
   Shape *ptr = 0;

   outputShapeArea( &circle );    
   outputShapeArea( &cylinder );  
   outputShapeArea( ptr );        
   return 0;
}

void outputShapeArea( const Shape *shapePtr )
{
	const Circle *circlePtr;
	const Cylinder *cylinderPtr;
	
	cylinderPtr = dynamic_cast< const Cylinder * >( shapePtr );
	
	if ( cylinderPtr != 0 ) 
		cout << "Cylinder's area: " << cylinderPtr->area();  
	else {  
		circlePtr = dynamic_cast< const Circle * >( shapePtr );
	
	if ( circlePtr != 0 )
		cout << "Circle's area: " << circlePtr->area(); 
	else
		cout << "Neither a Circle nor a Cylinder.";
	}
	
	cout << endl;
}
#endif
