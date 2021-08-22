#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
public: 
	int x; 
	
	MyClass(int i);  // constructor 
	~MyClass();      // destructor 
};   
 
// Implement a parameterized constructor. 
MyClass::MyClass(int i) { 
	x = i; 
}   
 
// Implement MyClass destructor. 
MyClass::~MyClass() { 
	cout << "Destructing object whose x value is " << x  <<" \n"; 
} 
   
int main(void)
{   
  MyClass t1(5); 
  MyClass t2(19); 
 
  cout << t1.x << " " << t2.x << "\n"; 
 
  return 0; 
}
#endif


#if 0
#include <iostream>
using namespace std;

class MyClass {
public:
	int x;
	
	MyClass(int i);  // constructor
	~MyClass();      // destructor
};

MyClass::MyClass(int i) {
	x = i;
}

MyClass::~MyClass() {
	cout << "Destructing object whose x value is " << x  <<" \n";
}

int main() {
	MyClass ob(5) ;
	
	cout << ob.x << "\n";
	
	return 0;
}
#endif



#if 0
#include<iostream.h>

class box
{
   double line,width,heigth;
   double volume;
public:
   box(double a,double b,double c);
   void vol();
};

box::box(double a,double b,double c)
{
   line=a;
   width=b;
   heigth=c;
   volume=line*heigth;
}
void box::vol()
{
   cout<<"Volume is:"<<volume<<"\n";
}

int main(void)
{
   box x(3.4,4.5,8.5),y(2.0,4.0,6.0);
   
   x.vol();
   y.vol();
   
   return 0;
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
public: 
	int x; 
	int y; 
	
	// Overload the default constructor. 
	MyClass() { x = y = 0; } 
	
	// Constructor with one parameter. 
	MyClass(int i) { x = y = i; } 
	
	// Constructor with two parameters. 
	MyClass(int i, int j) { x = i; y = j; } 
};   
 
int main(void)
{   
	MyClass t;         // invoke default constructor 
	MyClass t1(5);     // use MyClass(int) 
	MyClass t2(9, 10); // use MyClass(int, int) 
	
	cout << "t.x: " << t.x << ", t.y: " << t.y << "\n"; 
	cout << "t1.x: " << t1.x << ", t1.y: " << t1.y << "\n"; 
	cout << "t2.x: " << t2.x << ", t2.y: " << t2.y << "\n"; 
 
  return 0; 
}
#endif



#if 0
#include <iostream>
 
 class MyClass
 {
 public:
     MyClass();                          // default constructor
     MyClass (const MyClass &);          // copy constructor
     ~MyClass();                         // destructor
     int GetAge() const { return *itsAge; }
     int GetWeight() const { return *itsWeight; }
     void SetAge(int age) { *itsAge = age; }
 
 private:
     int *itsAge;
     int *itsWeight;
 };
 
 MyClass::MyClass()
 {
     itsAge = new int;
     itsWeight = new int;
     *itsAge = 5;
     *itsWeight = 9;
 }
 
 MyClass::MyClass(const MyClass & rhs)
 {
     itsAge = new int;
     itsWeight = new int;
     *itsAge = rhs.GetAge();
     *itsWeight = rhs.GetWeight();
 }
 
 MyClass::~MyClass()
 {
     delete itsAge;
     itsAge = 0;
     delete itsWeight;
     itsWeight = 0;
 }
 
int main()
{
	MyClass myObject;
	
	std::cout << "myObject's age: " << myObject.GetAge() << "\n";
	std::cout << "Setting myObject to 6...\n";
	
	myObject.SetAge(6);
	std::cout << "Creating secondObject from myObject\n";
	
	MyClass secondObject(myObject);
	std::cout << "myObject's age: " << myObject.GetAge() << "\n";
	std::cout << "secondObject' age: " << secondObject.GetAge() << "\n";
	std::cout << "setting myObject to 7...\n";
	
	myObject.SetAge(7);
	
	std::cout << "myObject's age: " << myObject.GetAge() << "\n";
	std::cout << "boot's age: " << secondObject.GetAge() << "\n";
	return 0;
}
#endif



#if 0
#include <iostream>
 
class MyType
{
public:
	MyType();
	MyType(int val);
	~MyType(){}
	int getValue()const { return myValue; }
	void setValue(int x) {myValue = x; }
private:
	myValue;
};

MyType::MyType(): myValue(0) {}
MyType::MyType(int val): myValue(val) {}

int main(void)
{
	int theShort = 5;
	MyType theCtr = theShort;
	std::cout << "theCtr: " << theCtr.getValue() << std::endl;
	return 0;
}
#endif



#if 0
#include <iostream>
 
 class Animal
 {
 public:
     Animal():itsAge(1) { std::cout << "Animal constructor...\n"; }
     virtual ~Animal() { std::cout << "Animal destructor...\n"; }
     Animal (const Animal & rhs);
     virtual void Speak() const { std::cout << "Animal speak!\n"; }
     virtual Animal* Clone() { return new Animal(*this); } 
     int GetAge()const { return itsAge; }
 
 protected:
     int itsAge;
 };
 
 Animal::Animal (const Animal & rhs):itsAge(rhs.GetAge())
 {
     std::cout << "Animal Copy Constructor...\n";
 }
 
 class Dog : public Animal
 {
 public:
     Dog() { 
        std::cout << "Dog constructor...\n"; 
     }
     virtual ~Dog() { 
        std::cout << "Dog destructor...\n"; 
     }
     Dog (const Dog & rhs);
     void Speak()const { 
        std::cout << "Woof!\n"; 
     }
     virtual Animal* Clone() { return new Dog(*this); }
 };
 
 Dog::Dog(const Dog & rhs): Animal(rhs)
 {
     std::cout << "Dog copy constructor...\n";
 }
 
 class Cat : public Animal {
 public:
     Cat() { 
        std::cout << "Cat constructor...\n"; 
     }
     virtual ~Cat() { 
        std::cout << "Cat destructor...\n"; 
     }
     Cat (const Cat &);
     void Speak()const { 
        std::cout << "Meow!\n"; 
     }
     virtual Animal* Clone() { 
        return new Cat(*this); 
     }
 };
 
 Cat::Cat(const Cat & rhs): Animal(rhs)
 {
     std::cout << "Cat copy constructor...\n";
 }
 
int main()
{
	Animal *theArray[3];
	Animal* ptr;
	int choice,i;
	
	theArray[0] = new Dog;
	theArray[1] = new Cat;
	theArray[2] = new Animal;
	
	
	Animal *OtherArray[3];
	
	for (i=0;i<3;i++)
	{
		theArray[i]->Speak();
		OtherArray[i] = theArray[i]->Clone();
	}
	
	for (i=0;i<3;i++)
		OtherArray[i]->Speak();
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <cstdio>
using namespace std;

class date {
  int day, month, year;
public:
    date(char *d)
    {
      sscanf(d, "*c*cd", &month, &day, &year);
    }
    
    date(int m, int d, int y)
    {
      day = d;
      month = m;
      year = y;
    }
    
    void show_date()
    {
      cout << month << "/" << day;
      cout << "/" << year << "\n";
    }
};


int main(void)
{
	date ob1(12, 4, 2003), ob2("10/22/2003");
	
	ob1.show_date();
	ob2.show_date();
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <new>
using namespace std;

class powers {
  int x;
public:
  powers() {
     x = 0;
     cout << "\nno initializer\n\n";
  }
  powers(int n) {

     x = n;
     cout << "\n\ninitializer:" << x;
  }

  int getx() { return x; }
  void setx(int i) { x = i; }
};

int main(void)
{
	powers ofTwo[] = {1, 2, 4, 8, 16}; // initialized
	powers ofThree[5];                 // uninitialized
}
#endif
