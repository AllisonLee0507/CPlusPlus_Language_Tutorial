#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
  // private 
  double width; 
  double height; 
public: 
  void display() { 
    cout << "Width and height are " << width << " and " << height << "\n"; 
  } 
 
  // accessor functons 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
}; 
 
// Triangle is derived from Shape. 
class Triangle : public Shape { 
  char style[20]; // now private 
public: 
  // Constructor for Triangle. 
  Triangle(char *str, double w, double h) { 
    setWidth(w); 
    setHeight(h); 

    strcpy(style, str); 
  } 
   
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
int main() { 
  Triangle t1("isosceles", 4.0, 4.0); 
  Triangle t2("right", 8.0, 12.0); 
 
  t1.showStyle(); 
  t1.display(); 
  cout << "Area is " << t1.area() << "\n"; 
 
  t2.showStyle(); 
  t2.display(); 
  cout << "Area is " << t2.area() << "\n"; 
 
  return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
class BaseClass { 
public: 
  BaseClass() { cout << "Constructing base portion\n"; } 
  ~BaseClass() { cout << "Destructing base portion\n"; } 
}; 
 
class DerivedClass: public BaseClass { 
public: 
  DerivedClass() { cout << "Constructing derived portion\n"; } 
  ~DerivedClass() { cout << "Destructing derived portion\n"; } 
}; 
 
int main() 
{ 
  DerivedClass ob; 
 
  // do nothing but construct and destruct ob 
 
  return 0; 
}
#endif



#if 0
#include <iostream>
using namespace std;

class base {
  int i, j;
public:
  void set(int a, int b) { 
    i=a; 
    j=b; 
  }
  void show() { 
     cout << i << " " << j << "\n"; 
  }
};

class derived : public base {
  int k;
public:
  derived(int x) { 
     k=x; 
  }
  void showk() { 
     cout << k << "\n"; 
  }
};

int main()
{
  derived ob(3);

  ob.set(1, 2);
  ob.show();

  ob.showk();  

  return 0;
}
#endif



#if 0
#include <iostream>
 
 class BaseClass
 {
 public:
     // constructors
     BaseClass() { std::cout << "BaseClass constructor...\n"; }
     ~BaseClass() { std::cout << "BaseClass destructor...\n"; }
 
     //Other methods
     void Talk()const { std::cout << "BaseClass sound!\n"; }
     void Sleep()const { std::cout << "I'm sleeping.\n"; }
 
 protected:
     int itsAge;
     int itsWeight;
 };
 
 class DerivedClass : public BaseClass
 {
 public:
     // Constructors
     DerivedClass(){ std::cout << "DerivedClass constructor...\n"; }
     ~DerivedClass(){ std::cout << "DerivedClass destructor...\n"; }
 
     // Other methods
     void Walk() { std::cout << "walk...\n"; }
     void Eat() { std::cout << "eat...\n"; }
     void Talk()const { std::cout << "talk!\n"; }
 
 };
 
 int main()
 {
     BaseClass baseObject;
     DerivedClass derivedObject;
     baseObject.Talk();
     derivedObject.Talk();
     return 0;
 }
#endif



#if 0
#include <iostream>
 
 class BaseClass
 {
 public:
     void Move() const { std::cout << "BaseClass move one step\n"; }
     void Move(int distance) const { 
        std::cout << "BaseClass move " << distance <<" steps.\n"; 
     }
 protected:
     int itsAge;
     int itsWeight;
 };
 
 class DerivedClass : public BaseClass {
 public:
     void Move() const { 
        std::cout << "DerivedClass move 5 steps.\n"; 
     }
 };
 
 int main()
 {
     BaseClass baseObject;
     DerivedClass derivedObject;
     baseObject.Move();
     baseObject.Move(2);
     derivedObject.Move();
     return 0;
 }
#endif



#if 0
#include <iostream>
 
 class BaseClass
 {
 public:
     void Move() const { 
        std::cout << "BaseClass move one step\n"; 
     }
     void Move(int distance) const { 
        std::cout << "BaseClass move " << distance << " steps.\n"; 
     }
 protected:
     int itsAge;
     int itsWeight;
 };
 
 class DerivedClass : public BaseClass
 {
 public:
     void Move()const;
 };
 
 void DerivedClass::Move() const
 {
     std::cout << "In dog move...\n";
     BaseClass::Move(3);
 }
 
 int main()
 {
     BaseClass baseObject;
     DerivedClass derivedObject;
     baseObject.Move(2);
     derivedObject.BaseClass::Move(6);
     return 0;
 }
#endif



#if 0
#include <iostream>
 
 class Animal
 {
 public:
     Animal():itsAge(1) { std::cout << "Animal constructor...\n"; }
     ~Animal() { std::cout << "Animal destructor...\n"; }
     void Move() const { std::cout << "Animal move one step\n"; }
     virtual void Speak() const { std::cout << "Animal speak!\n"; }
 
 protected:
     int itsAge;
 };
 
 class Dog : public Animal
 {
 public:
     Dog() { std::cout << "Dog constructor...\n"; }
     ~Dog() { std::cout << "Dog destructor...\n"; }
     void WagTail() { std::cout << "Wagging Tail...\n"; }
     void Speak()const { std::cout << "Woof!\n"; }
     void Move()const { std::cout << "Dog moves 5 steps...\n"; }
 };
 
 int main()
 {
     Animal *pDog = new Dog;
     pDog->Move();
     pDog->Speak();
     return 0;
 }
#endif



#if 0
#include <iostream>
using namespace std;

class base {
public:
  int i;
};

class derived1 :  public base {
public:
  int j;
};

class derived2 : public base {
public:
  int k;
};

class derived3 : public derived1, public derived2 {
public:
  int sum;
};

int main()
{
  derived3 ob;

  ob.derived1::i = 10; // scope resolved, use derived1's i

  return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class Base {
public:
  virtual void f() {
     cout << "Inside Base\n";
  }
};

class Derived : public Base {
public:
  void f() {
     cout << "Inside Derived\n";
  }
};

int main()
{
	Base *bp, b_ob;
	Derived *dp, d_ob;
	
	bp = dynamic_cast<Base *> (&d_ob);
	if(bp) {
		cout << "Cast from Derived * to Base * OK.\n";
		bp->f();
	} else
		cout << "Error\n";
	
	
	cout << endl;
	
	return 0;
}
#endif
