#if 0
#include <iostream>

class Point     // holds x,y coordinates
{
    // no constructor, use default
public:
    void SetX(int x) { itsX = x; }
    void SetY(int y) { itsY = y; }
    int GetX()const { return itsX;}
    int GetY()const { return itsY;}
private:
    int itsX;
    int itsY;
};// end of Point class declaration


class  Rectangle
{
public:
    Rectangle (int top, int left, int bottom, int right);
    ~Rectangle () {}

    int GetTop() const { return itsTop; }
    int GetLeft() const { return itsLeft; }
    int GetBottom() const { return itsBottom; }
    int GetRight() const { return itsRight; }

    Point  GetUpperLeft() const { return itsUpperLeft; }
    Point  GetLowerLeft() const { return itsLowerLeft; }
    Point  GetUpperRight() const { return itsUpperRight; }
    Point  GetLowerRight() const { return itsLowerRight; }

    void SetUpperLeft(Point Location);
    void SetLowerLeft(Point Location);
    void SetUpperRight(Point Location);
    void SetLowerRight(Point Location);

    void SetTop(int top);
    void SetLeft (int left);
    void SetBottom (int bottom);
    void SetRight (int right);

    int GetArea() const;

private:
    Point  itsUpperLeft;
    Point  itsUpperRight;
    Point  itsLowerLeft;
    Point  itsLowerRight;
    int    itsTop;
    int    itsLeft;
    int    itsBottom;
    int    itsRight;
};


Rectangle::Rectangle(int top, int left, int bottom, int right)
{
    itsTop = top;
    itsLeft = left;
    itsBottom = bottom;
    itsRight = right;

    itsUpperLeft.SetX(left);
    itsUpperLeft.SetY(top);

    itsUpperRight.SetX(right);
    itsUpperRight.SetY(top);

    itsLowerLeft.SetX(left);
    itsLowerLeft.SetY(bottom);

    itsLowerRight.SetX(right);
    itsLowerRight.SetY(bottom);
}

void Rectangle::SetUpperLeft(Point Location)
{
    itsUpperLeft = Location; 
    itsUpperRight.SetY(Location.GetY());
    itsLowerLeft.SetX(Location.GetX());
    itsTop = Location.GetY();
    itsLeft = Location.GetX();
}

void Rectangle::SetLowerLeft(Point Location)
{
    itsLowerLeft = Location; 
    itsLowerRight.SetY(Location.GetY());
    itsUpperLeft.SetX(Location.GetX());
    itsBottom = Location.GetY();
    itsLeft = Location.GetX();
}

void Rectangle::SetLowerRight(Point Location)
{
    itsLowerRight = Location; 
    itsLowerLeft.SetY(Location.GetY());
    itsUpperRight.SetX(Location.GetX());
    itsBottom = Location.GetY();
    itsRight = Location.GetX();
}

void Rectangle::SetUpperRight(Point Location)
{
    itsUpperRight = Location; 
    itsUpperLeft.SetY(Location.GetY());
    itsLowerRight.SetX(Location.GetX());
    itsTop = Location.GetY();
    itsRight = Location.GetX();
}

void Rectangle::SetTop(int top)
{
    itsTop = top;
    itsUpperLeft.SetY(top);
    itsUpperRight.SetY(top);
}

void Rectangle::SetLeft(int left)
{
    itsLeft = left;
    itsUpperLeft.SetX(left);
    itsLowerLeft.SetX(left);
}

void Rectangle::SetBottom(int bottom)
{
    itsBottom = bottom;
    itsLowerLeft.SetY(bottom);
    itsLowerRight.SetY(bottom);
}

void Rectangle::SetRight(int right)
{
    itsRight = right;
    itsUpperRight.SetX(right);
    itsLowerRight.SetX(right);
}

int Rectangle::GetArea() const
{
    int Width = itsRight-itsLeft;
    int Height = itsTop - itsBottom;
    return (Width * Height);
}

int main()
{
    Rectangle MyRectangle (100, 20, 50, 80 );

    int Area = MyRectangle.GetArea();

    std::cout << "Area: " << Area << "\n";
    std::cout << MyRectangle.GetUpperLeft().GetX();
    return 0;
}
#endif


#if 0
#include <iostream>  
using namespace std;  
  
class IntPair {  
public:  
  int a;  
  int b;  
  
  IntPair(int i, int j) : a(i), b(j) { }  
};  
  
class MyClass {  
  IntPair nums;
public:  
   
  MyClass(int x, int y) : nums(x,y) { }  
  
  int getNumA() { return nums.a; }  
  int getNumB() { return nums.b; }  
};  
  
int main()  
{  
  MyClass ob1(7, 9), ob2(5, 2);  
  
  cout << "Values in ob1 are " << ob1.getNumB() << 
          " and " << ob1.getNumA() << endl;  
  
  cout << "Values in ob2 are " << ob2.getNumB() << 
          " and " << ob2.getNumA() << endl; 
   
  return 0;  
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> 
using std::strlen;
using std::strncpy;



class Date 
{
public:
   Date( int = 1, int = 1, int = 1900 );
   void print() const; 
   ~Date(); 
private:
   int month; 
   int day; 
   int year;
};

Date::Date( int mn, int dy, int yr )
{
   month = mn;
   year = yr;
   day = dy );
}
void Date::print() const
{
   cout << month << '/' << day << '/' << year; 
}
Date::~Date()
{ 
   cout << "Date object destructor for date ";
   cout << endl;
}

class Employee
{
public:
   Employee( const char * const, const char * const, 
      const Date &, const Date & );
   void print() const;
   ~Employee();
private:
   char firstName[ 25 ];
   char lastName[ 25 ];
   const Date birthDate; 
   const Date hireDate; 
};
Employee::Employee( const char * const first, const char * const last,const Date &dateOfBirth, const Date &dateOfHire )
   : birthDate( dateOfBirth ), hireDate( dateOfHire ) 
{
   strcpy( firstName, first);
   strcpy( lastName, last);
}
void Employee::print() const
{
   cout << lastName << ", " << firstName << "  Hired: ";
   hireDate.print();
   cout << "  Birthday: ";
   birthDate.print();
   cout << endl;
}
Employee::~Employee()
{ 
   cout << "Employee destructor: " << lastName << ", " << firstName << endl;
}

int main(void)
{
   Date birth( 7, 24, 1949 );
   Date hire( 3, 12, 1989 );
   Employee manager( "A", "B", birth, hire );

   cout << endl;
   manager.print();

   return 0;
}
#endif
