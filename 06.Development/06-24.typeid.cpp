#if 0
#include <iostream> 
#include <typeinfo> 
using namespace std; 
 
class MyClass { 

}; 
 
int main(void) 
{ 
	int i, j; 
	float f; 
	MyClass ob; 
	
	cout << "The type of i is: " << typeid(i).name() << endl; 
	cout << "The type of f is: " << typeid(f).name() << endl; 
	cout << "The type of ob is: " << typeid(ob).name() << "\n\n"; 
	
	if(typeid(i) == typeid(j)) 
		cout << "The types of i and j are the same\n"; 
	
	if(typeid(i) != typeid(f)) 
		cout << "The types of i and f are not the same\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
#include <typeinfo> 
using namespace std; 
 
class Base { 
}; 
 
class Derived1: public Base { 
}; 
 
class Derived2: public Base { 
}; 
 
int main(void) 
{ 
	Base *p, baseob; 
	Derived1 ob1; 
	Derived2 ob2; 
	
	p = &baseob; 
	cout << typeid(*p).name() << endl; 
	
	p = &ob1; 
	cout << typeid(*p).name() << endl; 
	
	p = &ob2; 
	cout << typeid(*p).name() << endl; 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
using namespace std;

template <class T> class MyClass {
  T a;
public:
  MyClass(T i) { a = i; }
};

int main(void)
{
	MyClass<int> o1(10), o2(9);
	MyClass<double> o3(7.2);
	
	if(typeid(o1) == typeid(o2))
		cout << "o1 and o2 are the same type\n";
	
	if(typeid(o1) == typeid(o3))
		cout << "Error\n";
	else
		cout << "o1 and o3 are different types\n";
	
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
  virtual bool lays_eggs() { return false; } // Base is polymorphic
};

class Derived1: public Base {
public:
};

class Derived2: public Base {
public:
  bool lays_eggs() { return true; }

};

void WhatBase(Base &ob)
{
	cout << "ob is referencing an object of type ";
	cout << typeid(ob).name() << endl;
}

int main(void)
{
	Base AnyBase;
	Derived1 Derived1;
	Derived2 Derived2;
	
	WhatBase(AnyBase);
	WhatBase(Derived1);
	WhatBase(Derived2);
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class Base {
public:
  virtual bool method() { return false; } // Base is polymorphic
};

class Derived1: public Base {
public:
};

class Derived2: public Base {
public:
  bool method() { return true; }
};

class Derived3: public Base {
public:
};

Base *factory()
{
  switch(rand()  3 ) {
    case 0: return new Derived3;
    case 1: return new Derived1;
    case 2: return new Derived2;
  }
  return 0;
}

int main(void)
{
	Base *ptr;
	for(int i=0; i<10; i++)
	{
	ptr = factory(); // generate an object
	
	cout << "Object is " << typeid(*ptr).name();
	cout << endl;
	
	if(typeid(*ptr) == typeid(Derived3))
		cout << " Derived3";
	if(typeid(*ptr) == typeid(Derived1))
		cout << " Derived1";
	if(typeid(*ptr) == typeid(Derived2))
		cout << " Derived2";
	}
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

template <class T> class MyClass {
  T a;
public:
  MyClass(T i) { a = i; }
};

int main(void)
{
	MyClass<int> o1(10), o2(9);
	MyClass<double> o3(7.2);
	
	cout << "Type of o1 is ";
	cout << typeid(o1).name() << endl;
	
	cout << "Type of o2 is ";
	cout << typeid(o2).name() << endl;
	
	cout << "Type of o3 is ";
	cout << typeid(o3).name() << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>  
#include <typeinfo>             
using namespace std;  

class Base  
{  
	virtual void virtFunc(){  }  
};  
class Derv1 : public Base{ };  
class Derv2 : public Base{ };  

void displayName(Base* pB)  
{  
	cout << "pointer to an object of ";  //display name of class  
	cout << typeid(*pB).name() << endl;  //pointed to by pB  
}  

int main(void)
{ 
	Base* pBase = new Derv1;  
	displayName(pBase);   //"pointer to an object of class Derv1"  
	
	pBase = new Derv2;  
	displayName(pBase);   //"pointer to an object of class Derv2"  
	
	return 0;  
}
#endif



#if 0
#include <iostream>
#include <typeinfo>
using namespace std;

int main(void)
{
	int *a, b;
	a=0; b=0;
	
	if (typeid(a) != typeid(b))
	{
		cout << "a and b are of different types:\n";
		cout << "a is: " << typeid(a).name() << '\n';
		cout << "b is: " << typeid(b).name() << '\n';
	}
	return 0;
}
#endif



#if 0
#include <iostream>
#include <typeinfo>
using namespace std;
class Base {
public:
  Base():hide(0){}
  void mutate(int i){ hide = i;}
  void print()const {cout << "hide in Base = "
                   << hide << endl;}
private:
  int hide;
};


class One: public Base {
public:
  One():Base(),data(0) {}
  void mutate(int i){ data = i;}
  void print()const {cout << "data in One = "
                           << data << endl;}
private:
  int data;
};

int main(void)
{
	Base* bptr; One* Derived;
	cout << typeid(bptr).name() << endl;
	cout << typeid(Derived).name() << endl;
	
	if (typeid(bptr) == typeid(Derived))
		cout << "type bprt & Derived same" << endl;
		
	return 0;
}
#endif



#if 0
#include <iostream>
#include <ostream>
#include <typeinfo>

enum color{ red, black };

int main(void)
{
	std::cout << typeid(red).name() << '\n';
	std::cout << typeid(color).name() << '\n';
	
	return 0;
}
#endif



#if 0
#endif

