#if 0
#include <iostream> 
using namespace std; 
 
 
class ThreeDimension {  
public: 
	int X;   
	int Y;     
	int Z;         
}; 
  
int main(void)
{  
	ThreeDimension myDimension;  
	int range;  
	
	// Assign values to fields in myDimension. 
	myDimension.X = 7; 
	myDimension.Y = 16; 
	myDimension.Z = 21; 
	
	// Compute the range assuming a full tank of gas. 
	range = myDimension.Y * myDimension.Z; 
	
	cout << range;  
	
	return 0; 
}
#endif


#if 0
#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle {
	int x, y;
public:
	void set_values (int,int);
	int area (void) {return (x*y);}
};

void Rectangle::set_values (int a, int b) {
	x = a;
	y = b;
}

int main(void)
{
	Rectangle rect;
	rect.set_values (3,4);
	cout << "area: " << rect.area();
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

class MyClass
{
public:
   void displayMessage()
   {
      cout << "Welcome!" << endl;
   } 
};

int main(void)
{
	MyClass obj; 
	obj.displayMessage(); 
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout; 
using std::cin;
using std::endl;

#include <string> 
using std::string;
using std::getline;

class MyClass
{
public:
   void displayMessage( string n )
   {
      cout << "Welcome \n" << n << "!" 
         << endl;
   } 
};

int main(void)
{
	string name; 
	MyClass obj;
	
	cout << "Please enter the name:" << endl;
	getline( cin, name );
	cout << endl;
	
	obj.displayMessage( name );
	return 0; 
}
#endif



#if 0
#include <iostream>
using std::cout; 
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class MyClass
{
public:
   void setName( string name )
   {      
      name = name; 
   }
   
   string getName() 
   {
      return name; 
   } 

   void displayMessage()
   {
      cout << "Welcome to the grade book for\n" << getName() << "!" << endl;
   } 
private:
   string name; 
};

int main(void)
{
	string n; 
	MyClass obj;
	
	cout << "Initial name is: " << obj.getName() << endl;
	
	cout << "\nPlease enter the name:" << endl;
	getline( cin, n );
	obj.setName( n );
	
	cout << endl;
	obj.displayMessage();
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout; 
using std::endl;

#include <string>
using std::string;

class MyClass
{
public:
   MyClass( string name )
   {
      setName( name ); 
   } 

   void setName( string n )
   {
      name = n;
   } 

   string getName()
   {
      return name; 
   } 

   void displayMessage()
   {
      cout << "Welcome " << getName()  << "!" << endl;
   }
private:
   string name;
};

int main(void)
{
	MyClass obj1( "A" );
	MyClass obj2( "B" );
	
	cout << obj1.getName()<< "\n" << obj2.getName() << endl;
	return 0;
}
#endif



#if 0
#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;

using std::setfill;
using std::setw;

class Time 
{
public:
   Time(); 
   void setTime( int, int, int );
   void printUniversal();
   void printStandard();
private:
   int hour;
   int minute;
   int second;
};

Time::Time() 
{ 
   hour = minute = second = 0; 
}
void Time::setTime( int h, int m, int s )
{
   hour = h ;
   minute = m;
   second = s ;
}
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":" << setw( 2 ) << minute << ":" << setw( 2 ) << second;
}

void Time::printStandard()
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour " 
      << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
      << second << ( hour < 12 ? " AM" : " PM" );
}

int main(void)
{
	Time t; 
	
	t.printUniversal();
	t.printStandard(); 
	
	t.setTime( 1, 2, 6 ); 
	
	t.printUniversal();
	t.printStandard(); 
	
	t.setTime( 99, 99, 99 ); 
	
	t.printUniversal();
	t.printStandard();
	return 0; 
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

class Date 
{
public:
   Date( int = 1, int = 1, int = 2007 );
   void print();
private:
   int month;
   int day;
   int year;
};

Date::Date( int m, int d, int y )
{
   month = m;
   day = d;
   year = y;
}
void Date::print() 
{ 
   cout << month << '/' << day << '/' << year; 
}

int main(void)
{
	Date date1( 8, 8, 2008 );
	Date date2;
	
	cout << "date1 = ";
	date1.print();
	cout << "\ndate2 = ";
	date2.print();
	
	date2 = date1;
	
	cout << "\n\nAfter default memberwise assignment, date2 = ";
	date2.print();
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class myclass{
	int i;
public:
	void put_i(int n) { i=n; }
	int get_i() { return i; }
} ob;
   
void f(void);
   
int main(void)
{
  f();
  
  return 0;
}
   
void f(void)
{
	ob.put_i(10);
	cout << ob.get_i();
}
#endif
