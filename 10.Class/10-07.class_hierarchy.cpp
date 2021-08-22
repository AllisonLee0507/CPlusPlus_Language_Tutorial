#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
public: 
  double width; 
  double height; 
 
  void display() { 
  	cout << "Width and height are " <<  width << " and " << height << "\n"; 
  } 
}; 
 
// Triangle is derived from Shape. 
class Triangle : public Shape { 
public: 
	char style[20]; 
	
	double area() { 
		return width * height / 2; 
	} 
	
	void showStyle() { 
		cout << "Triangle is " << style << "\n"; 
	} 
}; 
 
int main(void)
{ 
	Triangle t1; 
	Triangle t2; 
	
	t1.width = 4.0; 
	t1.height = 4.0; 
	strcpy(t1.style, "isosceles"); 
	
	t2.width = 8.0; 
	t2.height = 12.0; 
	strcpy(t2.style, "right"); 
	
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
	char style[20];
public: 

	/* This automatically invokes the default constructor of Shape. */ 
	Triangle(void)
	{ 
		strcpy(style, "unknown"); 
	} 	
	Triangle(char *str, double w, double h) : Shape(w, h) 
	{ 
		strcpy(style, str); 
	} 	
	Triangle(double x) : Shape(x) 
	{	 
		strcpy(style, "isosceles");  
	} 
	double area(void) 
	{ 
		return getWidth() * getHeight() / 2; 
	} 	
	void showStyle(void) 
	{ 
		cout << "Triangle is " << style << "\n"; 
	} 
}; 
 
class NameTriangle : public Triangle { 
	char name[20]; 
public: 
	NameTriangle(char *clr, char *style, double w, double h) : Triangle(style, w,h) 
	{ 
		strcpy(name, clr); 
	} 	
	void displayName(void) 
	{ 
		cout << "Name is " << name << "\n"; 
	} 
}; 
 
int main(void)
{ 
	NameTriangle t1("A", "right", 8.0, 12.0); 
	NameTriangle t2("B", "isosceles", 2.0, 2.0); 
	
	t1.showStyle(); 
	t1.display(); 
	t1.displayName(); 
	cout << "Area is " << t1.area() << "\n"; 
	
	t2.showStyle(); 
	t2.display(); 
	t2.displayName(); 
	cout << "Area is " << t2.area() << "\n"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
 
enum COLOR { Red, Green, Blue, Yellow, White, Black, Brown } ;

class Animal        // common base to both horse and bird
{
public:
	Animal(int);
	virtual ~Animal() { 
		std::cout << "Animal destructor...\n"; 
	}
	virtual int GetAge() const { 
		return itsAge; 
	}
	virtual void SetAge(int age) { 
		itsAge = age; 
	}
	virtual void Sleep() const = 0;
	virtual void Eat() const = 0;
	virtual void Reproduce() const = 0;
	virtual void Move() const = 0;
	virtual void Speak() const = 0;
private:
	int itsAge;
};

Animal::Animal(int age):itsAge(age)
{
	std::cout << "Animal constructor...\n";
}

class Mammal : public Animal
{
public:
	Mammal(int age):Animal(age) { 
		std::cout << "Mammal constructor...\n";
	}
	virtual ~Mammal() { 
		std::cout << "Mammal destructor...\n";
	}
	virtual void Reproduce() const { 
		std::cout << "Mammal reproduction depicted...\n"; 
	}
};

class Fish : public Animal
{
public:
	Fish(int age):Animal(age) { std::cout << "Fish constructor...\n";	}
	virtual ~Fish() { 	std::cout << "Fish destructor...\n";  	}
	virtual void Sleep() const { 	std::cout << "fish snoring...\n"; 	}
	virtual void Eat() const { 	std::cout << "fish feeding...\n"; 	}
	virtual void Reproduce() const { 	std::cout << "fish laying eggs...\n"; 	}
	virtual void Move() const { 	std::cout << "fish swimming...\n";   	}
	virtual void Speak() const { }
};

class Horse : public Mammal
{
public:
	Horse(int age, COLOR color ): Mammal(age), itsColor(color) { 
	std::cout << "Horse constructor...\n"; 
	}
	virtual ~Horse() { 	std::cout << "Horse destructor...\n"; 	}
	virtual void Speak()const { 	std::cout << "Whinny!... \n"; 	}
	virtual COLOR GetItsColor() const 	{ return itsColor; }	
	virtual void Sleep() const 	{ std::cout << "Horse snoring...\n"; }
	virtual void Eat() const 	{ std::cout << "Horse feeding...\n"; }
	virtual void Move() const 	{ std::cout << "Horse running...\n";}

protected:
COLOR itsColor;
};

class Dog : public Mammal
{
public:
	Dog(int age, COLOR color ):
	Mammal(age), itsColor(color) 
	{ std::cout << "Dog constructor...\n"; }
	virtual ~Dog() 
	{ std::cout << "Dog destructor...\n"; }
	virtual void Speak()const 
	{ std::cout << "Whoof!... \n"; }
	virtual void Sleep() const 
	{ std::cout << "Dog snoring...\n"; }
	virtual void Eat() const 
	{ std::cout << "Dog eating...\n"; }
	virtual void Move() const  
	{ std::cout << "Dog running...\n"; }
	virtual void Reproduce() const 
	{ std::cout << "Dogs reproducing...\n"; }

protected:
	COLOR itsColor;
};

int main(void)
{
	Animal *pAnimal=0;
	pAnimal = new Dog(5,Brown);
	pAnimal->Speak();
	pAnimal->Eat();
	pAnimal->Reproduce();
	pAnimal->Move();
	pAnimal->Sleep();
	delete pAnimal;
	
	pAnimal = new Horse(4,Black);
	pAnimal->Speak();
	pAnimal->Eat();
	pAnimal->Reproduce();
	pAnimal->Move();
	pAnimal->Sleep();
	delete pAnimal;
	
	pAnimal = new Fish (5);
	pAnimal->Speak();
	pAnimal->Eat();
	pAnimal->Reproduce();
	pAnimal->Move();
	pAnimal->Sleep();
	
	delete pAnimal;
	
	return 0;
}

#endif



#if 0
#include <iostream>
#include <typeinfo>

using namespace std;

class Base {};
class Derived : public Base {};

int main(void)
{
	Base b, bb;
	Derived d;
	
	if (typeid(b) == typeid(d)) { // No
		cout << "b and d are of the same type.\n";
	}
	if (typeid(b) == typeid(bb)) { // Yes
		cout << "b and bb are of the same type.\n";
	}
	if (typeid(d) == typeid(Derived)) { // Yes
		cout << "d is of type Derived.\n";
	}

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class base1 {
public:
  base1() { 
     cout << "Constructing base1\n"; 
  }
  ~base1() { 
     cout << "Destructing base1\n"; 
  }
};

class base2 {
public:
  base2() { 
     cout << "Constructing base2\n"; 
  }
  ~base2() { 
     cout << "Destructing base2\n"; 
  }
};

class derived: public base1, public base2 {
public:
  derived() { 
     cout << "Constructing derived\n"; 
  }
  ~derived() { 
     cout << "Destructing derived\n"; 
  }
};

int main()
{
	derived ob;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class base {
public:
  base() { 
     cout << "Constructing base\n"; 
  }
  ~base() { 
     cout << "Destructing base\n"; 
  }
};

class derived1 : public base {
public:
  derived1() { 
     cout << "Constructing derived1\n"; 
  }
  ~derived1() { 
     cout << "Destructing derived1\n"; 
  }
};

class derived2: public derived1 {
public:
  derived2() { 
     cout << "Constructing derived2\n"; 
  }
  ~derived2() { 
     cout << "Destructing derived2\n"; 
  }
};

int main()
{
	derived2 ob;
	return 0;
}
#endif



#if 0
class Base {
    public:
       int f(int i) { return (i*2); }
       float f(float f) { return (f*2);}
};
class Derived: public Base {
    public:
       int f(int i, int j) { return (i +j); }
};

int main(void)
{
	Derived var;
	float f;
	int i;
	
	i = var.f(3, 5);   // Works
	//f = var.f(3.0);          // Fails
	return (0);
}
#endif


#if 0
#include <iostream>
#include <stdlib.h>
using namespace std;

class BaseClass {

public:
       void f(float);
};

void BaseClass::f(float price)
{
  cout << "the base class!\n";
  cout << price * .075f;

}

class DerivedClass1:public BaseClass
{
public:
       void f(float);

};
void DerivedClass1::f(float price)
{
  cout << "the child class 1\n";
  cout << price * .010f << endl;
}

class DerivedClass2:public BaseClass
{
public:
  void f(float);
};

void DerivedClass2::f(float price)
{
	cout << "the child class 2\n";
	cout << price * .005f << endl;
}

int main(void)
{
	DerivedClass1 myclass;
	DerivedClass2 anotherclass;
	
	myclass.f(100);
	anotherclass.f(100);
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

class ClassA {

public:
    void functionA();
};

void ClassA::functionA()
{
  cout << "This is a function in ClassA \n";

}

class ClassB {

public:
    void functionB();
};

void ClassB::functionB() {
  ClassA myclass;
  myclass.functionA();
}

int main(void)
{
	ClassB myclass;
	ClassA anotherclass;
	
	myclass.functionB();
	anotherclass.functionA();
	
	return 0;
}
#endif


