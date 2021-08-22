#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
  // private 
  double width; 
  double height; 
public: 
  Shape(double w, double h) { 
    width = w; 
    height = h; 
  } 
 
  void display() { 
    cout << "Width and height are " << width << " and " << height << "\n"; 
  } 
 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
}; 
 
class Triangle : public Shape { 
  char style[20]; // now private 
public: 
  Triangle(char *str, double w, double h) : Shape(w, h) { 
    strcpy(style, str); 
  } 
   
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
int main(void)
{
  Triangle t1("isosceles", 4.0, 4.0); 
  Triangle t2("right", 8.0, 12.0); 
 
  cout << "Info for t1:\n"; 
  t1.showStyle(); 
  t1.display(); 
  cout << "Area is " << t1.area() << "\n"; 
 
  t2.showStyle(); 
  t2.display(); 
  cout << "Area is " << t2.area() << "\n"; 
 
  return
#endif


#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
  // private 
  double width; 
  double height; 
public: 
 
  Shape() { 
    width = height = 0.0; 
  } 
 
  Shape(double w, double h) { 
    width = w; 
    height = h; 
  } 
 
  Shape(double x) { 
    width = height = x; 
  } 
 
  void display() { 
    cout << "Width and height are " << width << " and " << height << "\n"; 
  } 
 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
}; 
 
class Triangle : public Shape { 
  char style[20]; // now private 
public: 
 
  /* A default constructor. This automatically invokes 
     the default constructor of Shape. */ 
  Triangle() { 
    strcpy(style, "unknown"); 
  } 
 
  Triangle(char *str, double w, double h) : Shape(w, h) { 
    strcpy(style, str); 
  } 
   
  Triangle(double x) : Shape(x) { 
    strcpy(style, "isosceles");  
  } 
 
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
int main(void)
{
  Triangle t1; 
  Triangle t2("right", 8.0, 12.0); 
  Triangle t3(4.0); 
 
  t1 = t2; 
 
  cout << "Info for t1: \n"; 
  t1.showStyle(); 
  t1.display(); 
  cout << "Area is " << t1.area() << "\n"; 
 
  t2.showStyle(); 
  t2.display(); 
  cout << "Area is " << t2.area() << "\n"; 
 
  t3.showStyle(); 
  t3.display(); 
  cout << "Area is " << t3.area() << "\n"; 
 
  return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
  // private 
  double width; 
  double height; 
public: 
 
  Shape() { 
    width = height = 0.0; 
  } 
 
  Shape(double w, double h) { 
    width = w; 
    height = h; 
  } 
 
  Shape(double x) { 
    width = height = x; 
  } 
 
  void display() { 
    cout << "Width and height are " << width << " and " << height << "\n"; 
  } 
 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
}; 
 
class Triangle : public Shape { 
  char style[20]; // now private 
public: 
 
  /* A default constructor. This automatically invokes 
     the default constructor of Shape. */ 
  Triangle() { 
    strcpy(style, "unknown"); 
  } 
 
  Triangle(char *str, double w, double h) : Shape(w, h) { 
    strcpy(style, str); 
  } 
   
  Triangle(double x) : Shape(x) { 
    strcpy(style, "isosceles");  
  } 
 
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
int main(void)
{
  Triangle t1; 
  Triangle t2("right", 8.0, 12.0); 
  Triangle t3(4.0); 
 
  t1 = t2; 
 
  cout << "Info for t1: \n"; 
  t1.showStyle(); 
  t1.display(); 
  cout << "Area is " << t1.area() << "\n"; 
 
  t2.showStyle(); 
  t2.display(); 
  cout << "Area is " << t2.area() << "\n"; 
 
  t3.showStyle(); 
  t3.display(); 
  cout << "Area is " << t3.area() << "\n"; 
 
  return 0; 
}
#endif



#if 0
#include <iostream>

using namespace std;

class Base {
public:
   virtual void foo( ) {cout << "Base::foo( )" << endl;}
};

class Derived : public Base {
public:
   virtual void foo( ) {cout << "Derived::foo( )" << endl;}
};

int main(void)
{
   Derived* p = new Derived( );

   p->foo( );       // Calls the derived version
   p->Base::foo( ); // Calls the base version
}
#endif



#if 0
#include <iostream>
using namespace std;

class base {
public:
  int i;
};

class derived1 : virtual public base {
public:
  int j;
};

class derived2 : virtual public base {
public:
  int k;
};

/* derived3 inherits both derived1 and derived2.
   This time, there is only one copy of base class. */
class derived3 : public derived1, public derived2 {
public:
  int sum;
};

int main(void)
{
  derived3 ob;

  ob.i = 10; // now unambiguous
  return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class base1 {
protected:
  int i;
public:
  base1(int x) { 
     i=x; 
     cout << "Constructing base1\n"; 
  }
  ~base1() { 
     cout << "Destructing base1\n"; 
  }
};

class base2 {
protected:
  int k;
public:
  base2(int x) { 
     k=x; 
     cout << "Constructing base2\n"; 
  }
  ~base2() { 
     cout << "Destructing base2\n"; 
  }
};

class derived: public base1, public base2 {
  int j;
public:
  derived(int x, int y, int z): base1(y), base2(z){ 
     j=x; 
     cout << "Constructing derived\n"; 
  }

  ~derived() { 
     cout << "Destructing derived\n"; 
  }
  void show() { 
     cout << i << " " << j << " " << k << "\n"; 
  }
};

int main(void)
{
  derived ob(3, 4, 5);
  ob.show();
  return 0;
}
#endif
