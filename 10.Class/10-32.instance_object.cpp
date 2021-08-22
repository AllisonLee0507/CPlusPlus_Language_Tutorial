#if 0
template<typename T>

struct MyType {
  MyType() : value_(T()) {
  }
  explicit MyType(const T& v) : value_(v) {
  }
private:
  T value_;
};

enum color { black, red, green, blue };

struct point { 
    int x, y; 
};

int main()
{
  MyType<int> i;    
  MyType<color> c;  
  MyType<bool> b;   
  MyType<point> p;  
}
#endif


#if 0
#include <iostream>
using namespace std;

class MyClass {
  int a;
public:
  MyClass(int x) { a = x; }
  int geta() { return a; }
};

int main()
{
  MyClass ob = 4; // automatically converted into MyClass(4)

  cout << ob.geta();

  return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class MyClass {
  int a;
public:
  MyClass(int x) { a = x; }
  int geta() { return a; }
};

int main()
{
  MyClass ob(4);

  cout << ob.geta();

  return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class MyClass {
  int a;
public:
  MyClass(int x) { a = x; }
  int geta() { return a; }
};

int main()
{
  MyClass ob = MyClass(4);

  cout << ob.geta();

  return 0;
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class ThreeDimension {  
public: 
  int X;
  int Y;   
  int Z;       
}; 
  
int main() {  
  ThreeDimension aDimension; 
  ThreeDimension bDimension; 
 
  int range1, range2;  
 
  aDimension.X = 7; 
  aDimension.Y = 16; 
  aDimension.Z = 21; 
  
  bDimension.X = 2; 
  bDimension.Y = 14; 
  bDimension.Z = 12; 

  range1 = aDimension.Y * aDimension.Z; 
  range2 = bDimension.Y * bDimension.Z; 
  
  cout << range1 << "\n";  
 
  cout << range2;  
  
  return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  int a, b; 
public: 
  void setAB(int i, int j) { a = i, b = j; } 
  void display() { 
    cout << "\n a is " << a << '\n'; 
    cout << "\n b is " << b << '\n'; 
  } 
}; 
 
int main() 
{ 
  MyClass ob1, ob2; 
 
  ob1.setAB(10, 20); 
  ob2.setAB(0, 0); 
  cout << "ob1 before assignment:"; 
  ob1.display(); 
  cout << "ob2 before assignment:"; 
  ob2.display(); 
 
  ob2 = ob1; // assign ob1 to ob2 
 
  cout << "ob1 after assignment:"; 
  ob1.display(); 
  cout << "ob2 after assignment:"; 
  ob2.display(); 
 
  ob1.setAB(-1, -1); // change ob1 
 
  cout << "ob1 after changing ob1:"; 
  ob1.display(); 
  cout << "ob2 after changing ob1:"; 
  ob2.display(); 
 
  return 0; 
}
#endif



#if 0
#include <iostream>

class MyClass
{
public:
    MyClass();
    ~MyClass();
private:
    int itsAge;
};

MyClass::MyClass()
{
    std::cout << "Constructor called.\n";
    itsAge = 1;
}

MyClass::~MyClass()
{
    std::cout << "Destructor called.\n";
}

int main()
{
    std::cout << "MyClass ...\n";
    MyClass Frisky;

    std::cout << "MyClass *pRags = new MyClass...\n";
    MyClass * pRags = new MyClass;

    std::cout << "delete pRags...\n";
    delete pRags;

    std::cout << "Exiting, watch go...\n";
    return 0;
}
#endif



#if 0
#include <iostream>
 
 class MyClass
 {
 public:
     MyClass() {
         itsAge = 2; 
     }
     ~MyClass() {}
     int GetAge() const { 
         return itsAge; 
     }
     void SetAge(int age) { 
         itsAge = age; 
     }
 private:
     int itsAge;
 };
 
 int main()
 {
     MyClass * myObject = new MyClass;
     std::cout << "myObject is " << myObject->GetAge() << " years old\n";
 
     myObject->SetAge(5);
     std::cout << "myObject is " << myObject->GetAge() << " years old\n";
 
     delete myObject;
     return 0;
 }
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

class Box {
  public:
    double length;
    double width;
    double height;

    // Constructor
    Box(double lengthValue, double widthValue, double heightValue) {
      cout << "Box constructor called" << endl;
      length = lengthValue;
      width = widthValue;
      height = heightValue;
    }

    double volume() {
      return length * width * height;
    }
};

int main() {
  Box firstBox(80.0, 50.0, 40.0);

  cout << "Size of first Box object is "
       << firstBox.length  << " by "
       << firstBox.width << " by "
       << firstBox.height << "\n "
       << "Volume of first Box object is " << firstBox.volume()
       << endl;

  return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

class Box {
  public:
    double length;
    double width;
    double height;

    double volume() {
      return length * width * height;
    }
};

int main() {
  Box firstBox = { 80.0, 50.0, 40.0 };

  Box secondBox = firstBox;

  secondBox.length *= 1.1;
  secondBox.width *= 1.1;
  secondBox.height *= 1.1;

  cout << secondBox.length
       << secondBox.width
       << secondBox.height
       << endl;
       
  cout << "Volume of second Box object is " << secondBox.volume()
       << endl;


  return 0;
}
#endif

