#if 0
#include <iostream> 
using namespace std; 
  
class MyClass { 
  int x; 
public: 
  void setX(int i) { x = i; } 
  int getX() { return x; } 
}; 
 
int main() 
{ 
  MyClass obs[4]; 
  int i; 
 
  for(i=0; i < 4; i++) 
    obs[i].setX(i); 
 
  for(i=0; i < 4; i++) 
    cout << "obs[" << i << "].getX(): " << obs[i].getX() << "\n"; 
 
  return 0; 
}

#endif


#if 0
#include <iostream>
 
 class MyClass
 {
 public:
     MyClass() { 
        itsAge = 1; 
        itsWeight=5; 
     } 
     ~MyClass() {}                          
     int GetAge() const { 
         return itsAge; 
     }
     int GetWeight() const { 
        return itsWeight; 
     }
     void SetAge(int age) { 
        itsAge = age;
     }
 
 private:
     int itsAge;
     int itsWeight;
 };
 
 int main()
 {
     MyClass myObject[5];
     int i;
     for (i = 0; i < 5; i++)
         myObject[i].SetAge(2*i +1);
 
     for (i = 0; i < 5; i++)
         std::cout << " #" << i+1<< ": " << myObject[i].GetAge() << std::endl;

     return 0;
 }
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  int x; 
public: 
  MyClass(int i) { x = i; } 
  int getX() { return x; } 
}; 
 
int main() 
{ 
  MyClass obs[4] = { -1, -2, -3, -4 }; 
  int i; 
 
  for(i=0; i < 4; i++) 
    cout << "obs[" << i << "].getX(): " << obs[i].getX() << "\n"; 
 
  return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  int x; 
public: 
  MyClass(int i) { x = i; } 
  int getX() { return x; } 
}; 
 
int main() 
{ 
  MyClass obs[4] = { MyClass(-1), MyClass (-2), 
                   MyClass (-3), MyClass (-4) };
  int i; 
 
  for(i=0; i < 4; i++) 
    cout << "obs[" << i << "].getX(): " << obs[i].getX() << "\n"; 
 
  return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
  double width; 
  double height; 
 
  char name[20]; 
public: 
  Shape() { 
    width = height = 0.0; 
    strcpy(name, "unknown"); 
  } 
 
  Shape(double w, double h, char *n) { 
    width = w; 
    height = h; 
    strcpy(name, n); 
  } 
 
  Shape(double x, char *n) { 
    width = height = x; 
    strcpy(name, n); 
  } 
 
  void display() { 
    cout << "Width and height are " << width << " and " << height << "\n"; 
  } 
 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
  char *getName() { return name; } 
 
  virtual double area() {   
    cout << "Error: area() must be overridden.\n";  
    return 0.0;  
  }   
 
}; 
 
class Triangle : public Shape { 
  char style[20];
public: 
 
  Triangle() { 
    strcpy(style, "unknown"); 
  } 
 
  Triangle(char *str, double w, double h) : Shape(w, h, "triangle") { 
    strcpy(style, str); 
  } 
   
  Triangle(double x) : Shape(x, "triangle") { 
    strcpy(style, "isosceles");  
  } 
 
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
class Rectangle : public Shape { 
public: 
 
  Rectangle(double w, double h) : Shape(w, h, "rectangle") { }  
  
  Rectangle(double x) : Shape(x, "rectangle") { }  
 
  bool isSquare() { 
    if(getWidth() == getHeight()) 
       return true; 
    return false; 
  } 
 
  double area() { 
    return getWidth() * getHeight(); 
  } 
}; 
 
int main() { 
  Shape *shapes[5]; 
  
  shapes[0] = &Triangle("right", 8.0, 12.0);  
  shapes[1] = &Rectangle(10);  
  shapes[2] = &Rectangle(10, 4);  
  shapes[3] = &Triangle(7.0);  
  shapes[4] = &Shape(10, 20, "generic"); 
  
  for(int i=0; i < 5; i++) {  
    cout << "object is " << shapes[i]->getName() << "\n";  
    cout << "Area is " << shapes[i]->area() << "\n\n";  
  }  
 
  return 0; 
}
#endif



#if 0
#include <iostream> 
#include <new> 
using namespace std; 
 
class Rectangle { 
  int width; 
  int height; 
public: 
  Rectangle() {  
    width = height = 0; 
    cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
  } 
 
  Rectangle(int w, int h) { 
    width = w; 
    height = h; 
    cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
  } 
 
  ~Rectangle() {  
     cout << "Destructing " << width << " by " << height << " rectangle.\n"; 
  }  
 
  void set(int w, int h) { 
    width = w; 
    height = h; 
  } 
 
  int area() { 
    return width * height; 
  } 
}; 
 
int main() 
{ 
  Rectangle *p; 
 
  try { 
    p = new Rectangle [3]; 
  } catch (bad_alloc xa) { 
    cout << "Allocation Failure\n"; 
    return 1; 
  } 
 
  cout << "\n"; 
 
  p[0].set(3, 4); 
  p[1].set(10, 8); 
  p[2].set(5, 6); 
 
  for(int i=0; i < 3; i++) 
    cout << "Area is " << p[i].area() << endl; 
 
  delete [] p; 
 
  return 0; 
}
#endif



#if 0
#include <iostream>
 
 class MyClass
 {
 public:
     MyClass() { 
        itsAge = 1; 
        itsWeight=5; 
     } 
     ~MyClass() {}                          
     int GetAge() const { return itsAge; }
     int GetWeight() const { return itsWeight; }
     void SetAge(int age) { itsAge = age; }
 
 private:
     int itsAge;
     int itsWeight;
 };
 
 int main()
 {
     MyClass * myObject[50];
     int i;
     MyClass * objectPointer;
     for (i = 0; i < 50; i++)
     {
         objectPointer = new MyClass;
         objectPointer->SetAge(2*i +1);
         myObject[i] = objectPointer;
     }
 
     for (i = 0; i < 50; i++)
         std::cout << "#" << i+1 << ": " << myObject[i]->GetAge() << std::endl;

 
     for (i = 0; i < 50; i++)
     {
         delete myObject[i];
         myObject[i] = NULL;
     }
 
     return 0;
 }
#endif



#if 0
#include <iostream>
 
 class MyClass
 {
 public:
     MyClass() { 
        itsAge = 1; 
        itsWeight=5; 
     }
     ~MyClass();                                
     int GetAge() const { return itsAge; }
     int GetWeight() const { return itsWeight; }
     void SetAge(int age) { itsAge = age; }
 
 private:
     int itsAge;
     int itsWeight;
 };
 
 MyClass :: ~MyClass()
 {
   std::cout << "Destructor called!\n";
 }
 
 int main()
 {
     MyClass * objectArrayPointer = new MyClass[50];
     int i;
     MyClass * currentPointer;
     for (i = 0; i < 50; i++)
     {
         currentPointer = new MyClass;
         currentPointer->SetAge(2*i +1);
         objectArrayPointer[i] = *currentPointer;
         delete currentPointer;
     }
 
     for (i = 0; i < 50; i++)
         std::cout << "#" << i+1 << ": " << objectArrayPointer[i].GetAge() << s
td::endl;
 
     delete [] objectArrayPointer;
 
     return 0;
 }
#endif



#if 0
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class Point {
  int x, y;
public:
  Point() {x = y = 0;}
  Point(int px, int py) {
    x = px;
    y = py;
  }

  void show() {
    cout << x << " ";
    cout << y << "\n";
  }

  void *operator new(size_t size);
  void operator delete(void *p);

  void *operator new[](size_t size);
  void operator delete[](void *p);
};

// new overloaded relative to Point.
void *Point::operator new(size_t size)
{
void *p;

  cout << "In overloaded new.\n";
  p =  malloc(size);
  if(!p) {
    bad_alloc ba;
    throw ba;
  }
  return p;
}

// delete overloaded relative to Point.
void Point::operator delete(void *p)
{
  cout << "In overloaded delete.\n";
  free(p);
}

// new overloaded for Point arrays.
void *Point::operator new[](size_t size)
{
  void *p;

  cout << "Using overload new[].\n";
  p =  malloc(size);
  if(!p) {
    bad_alloc ba;
    throw ba;
  }
  return p;
}

// delete overloaded for Point arrays.
void Point::operator delete[](void *p)
{
  cout << "Freeing array using overloaded delete[]\n";
  free(p);
}

int main()
{
  Point *p1, *p2;
  int i;

  try {
    p1 = new Point (10, 20); // allocate an object
  } catch (bad_alloc xa) {
    cout << "Allocation error for p1.\n";
    return 1;;
  }

  try {
    p2 = new Point [10]; // allocate an array
  } catch (bad_alloc xa) {
    cout << "Allocation error for p2.\n";
    return 1;;
  }

  p1->show();

  for(i=0; i<10; i++)
    p2[i].show();

  delete p1; // free an object
  delete [] p2; // free an array

  return 0;
}
#endif
