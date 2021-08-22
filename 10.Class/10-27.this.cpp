#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  int i; 
public: 
  void setI(int val) { 
    this->i = val; 
  }  
  int getI() { 
    return this->i; 
  }  
} ; 
 
int main() 
{ 
  MyClass o; 
 
  o.setI(100); 
  cout << o.getI(); 
 
  return 0; 
}
#endif


#if 0
#include <iostream>
 
 class Rectangle
 {
 public:
     Rectangle();
     ~Rectangle();
     void SetLength(int length) { this->itsLength = length; }
     int GetLength() const { return this->itsLength; }
     void SetWidth(int width) { itsWidth = width; }
     int GetWidth() const { return itsWidth; }
 
 private:
     int itsLength;
     int itsWidth;
 };
 
 Rectangle::Rectangle()
 {
     itsWidth = 5;
     itsLength = 10;
 }
 
 Rectangle::~Rectangle()
 {}
 
 int main()
 {
     Rectangle theRect;
     std::cout << "theRect is " << theRect.GetLength() 
               << " feet long.\n";
     std::cout << "theRect is " << theRect.GetWidth() 
               << " feet wide.\n";
 
     theRect.SetLength(20);
     theRect.SetWidth(10);
     std::cout << "theRect is " << theRect.GetLength()
               << " feet long.\n";
     std::cout << "theRect is " << theRect.GetWidth()
               << " feet wide.\n";
 
     return 0;
 }
#endif



#if 0
#include <iostream>
 
 class MyType
 {
 public:
     MyType();
     ~MyType(){}
     int getValue()const { 
        return myValue; 
     }
     void setValue(int x) {
        myValue = x; 
     }
     const MyType& operator++ ();      // prefix
     const MyType operator++ (int);    // postfix
 
 private:
     int myValue;
 };
 
 MyType::MyType(): myValue(0) {}
 
 const MyType& MyType::operator++()
 {
     ++myValue;
     return *this;
 }
 
 const MyType MyType::operator++(int)
 {
     MyType temp(*this);
     ++myValue;
     return temp;
 }
 
 int main()
 {
     MyType i;
     std::cout << "The value of i is " << i.getValue() << std::endl;
     i++;
     std::cout << "The value of i is " << i.getValue() << std::endl;
     ++i;
     std::cout << "The value of i is " << i.getValue() << std::endl;
     MyType a = ++i;
     std::cout << "The value of a: " << a.getValue();
     std::cout << " and i: " << i.getValue() << std::endl;
     a = i++;
     std::cout << "The value of a: " << a.getValue();
     std::cout << " and i: " << i.getValue() << std::endl;
     return 0;
 }
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;

class Time 
{
public:
   Time( int = 0, int = 0, int = 0 );

   Time &setTime( int, int, int );
   Time &setHour( int );
   Time &setMinute( int );
   Time &setSecond( int );

   int getHour() const;
   int getMinute() const;
   int getSecond() const;

   void printUniversal() const;
private:
   int hour;
   int minute;
   int second;
};

Time::Time( int hr, int min, int sec ) 
{ 
   setTime( hr, min, sec ); 
}
Time &Time::setTime( int h, int m, int s )
{
   setHour( h );
   setMinute( m );
   setSecond( s ); 
   return *this;
}
Time &Time::setHour( int h )
{
   hour = h;
   return *this; 
}

Time &Time::setMinute( int m )
{
   minute = m;
   return *this;
}

Time &Time::setSecond( int s )
{
   second = s;
   return *this;
}

int Time::getHour() const 
{ 
   return hour; 
}

int Time::getMinute() const 
{ 
   return minute; 
}

int Time::getSecond() const 
{ 
   return second; 
}

void Time::printUniversal() const
{
   cout << hour << ":" << minute << ":" << second;
}

int main(void)
{
	Time t;
	t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );
	
	t.printUniversal();
	
	t.setTime( 20, 20, 20 ).printUniversal();
	cout << endl;
	return 0;
}
#endif
