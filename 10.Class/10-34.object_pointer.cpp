#if 0
#include "iostream.h"

class MyClass
{
private:
  int Price;
  int Count;
  long Total;
public:
  void Input(int P,int C)
  {
   Price=P;
   Count=C;
  }
  void MyClass::Compute()
  {
    Total=(long) Price*Count;
  }
  void MyClass::Print(){
    cout<<"Price="<<Price<<"  Count="<<Count <<"   Total="<<Total<<"\n";
  }
};

int main()
{
       MyClass  *ob;
       
       ob=new MyClass[6];
       ob[0].Input(5,0);
       ob[1].Input(3,5);
       ob[2].Input(1,0);
       ob[3].Input(5,20);
       ob[4].Input(4,0);
       ob[5].Input(8,5);
       
       for(int i=0;i<6;i++)
       ob[i].Compute();
       for(int i=0;i<6;i++)
          ob[i].Print();
       
       delete ob;
}
#endif


#if 0
#include <iostream>
 
 class MyClass
 {
 public:
     MyClass();
     MyClass(MyClass&);
     ~MyClass();
 
     int GetAge() const { return itsAge; }
     void SetAge(int age) { itsAge = age; }
 
 private:
     int itsAge;
 };
 
 MyClass::MyClass()
 {
     std::cout << "Constructor...\n";
     itsAge = 1;
 }
 
 MyClass::MyClass(MyClass&)
 {
     std::cout << "Copy Constructor...\n";
 }
 
 MyClass::~MyClass()
 {
     std::cout << "Destructor...\n";
 }
 
 const MyClass * const 
 FunctionTwo (const MyClass * const obj);
 
 int main()
 {
     MyClass myObject;
     std::cout << "myObject is ";
     std::cout << myObject.GetAge() << " years old\n";
     int age = 5;
     myObject.SetAge(age);
     std::cout << "myObject is ";
     std::cout << myObject.GetAge() << " years old\n";
     std::cout << "Calling FunctionTwo...\n";
     FunctionTwo(&myObject);
     std::cout << "myObject is ";
     std::cout << myObject.GetAge() << " years old\n";
     return 0;
 }
 
 const MyClass * const FunctionTwo (const MyClass * const obj)
 {
     std::cout << "Function Two. Returning...\n";
     std::cout << "myObject is now " << obj->GetAge();
     std::cout << " years old \n";
     return obj;
 }

#endif



#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  int x; 
public: 
  void setX(int val) { x = val; } 
  void display(){ cout << x << "\n"; } 
}; 
  
int main() 
{ 
  MyClass ob[2], *p; 
 
  ob[0].setX(10);  // access objects directly 
  ob[1].setX(20); 
 
  p = &ob[0];      // obtain pointer to first element 
  p->display();    // show value of ob[0] using pointer 
 
  p++;             // advance to next object 
  p->display();    // show value of ob[1] using pointer 
 
  p--;             // retreat to previous object 
  p->display();    // again show value of ob[0] 
 
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
     int GetAge() const { return *itsAge; }
     void SetAge(int age) { *itsAge = age; }
 
     int GetWeight() const { return *itsWeight; }
     void setWeight (int weight) { *itsWeight = weight; }
 
 private:
     int * itsAge;
     int * itsWeight;
 };
 
 MyClass::MyClass()
 {
     itsAge = new int(2);
     itsWeight = new int(5);
 }
 
 MyClass::~MyClass()
 {
     delete itsAge;
     delete itsWeight;
 }
 
 int main()
 {
     MyClass *objectPointer = new MyClass;
     std::cout << "objectPointer is " << objectPointer->GetAge() << " years old\n";
 
     objectPointer->SetAge(5);
     std::cout << "objectPointer is " << objectPointer->GetAge() << " years old\n";
 
     delete objectPointer;
     return 0;
 }

#endif



#if 0
#include <iostream>
using namespace std;
   
class MyClass {
public:
  MyClass(int i) { val=i; }
  int val;
  int double_val() { return val+val; }
};
   
int main()
{
  int MyClass::*data; // data member pointer
  int (MyClass::*func)(); // function member pointer
  MyClass ob1(1), ob2(2); // create objects
   
  data = &MyClass::val; // get offset of val
  func = &MyClass::double_val; // get offset of double_val()
   
  cout << "Here are values: ";
  cout << ob1.*data << " " << ob2.*data << "\n";
   
  cout << "Here they are doubled: ";
  cout << (ob1.*func)() << " ";
  cout << (ob2.*func)() << "\n";
   
  return 0;
}

#endif



#if 0
#include <iostream>
using namespace std;
   
class MyClass {
public:
  MyClass(int i) { val=i; }
  int val;
  int double_val() { return val+val; }
};
   
int main()
{
  int MyClass::*data; // data member pointer
  int (MyClass::*func)(); // function member pointer
  MyClass ob1(1), ob2(2); // create objects
  MyClass *p1, *p2;
   
  p1 = &ob1; // access objects through a pointer
  p2 = &ob2;
   
  data = &MyClass::val; // get offset of val
  func = &MyClass::double_val; // get offset of double_val()
   
  cout << "Here are values: ";
  cout << p1->*data << " " << p2->*data << "\n";
   
  cout << "Here they are doubled: ";
  cout << (p1->*func)() << " ";
  cout << (p2->*func)() << "\n";
   
  return 0;
}

#endif



#if 0
#include<iostream.h>
#include<string.h>

class phone
{
   char name[50];
   char tell[15];
public:
   void store(char *n,char *num);
   void print();
};

void phone::store(char *n,char *num)
{
  strcpy(name,n);
  strcpy(tell,num);
}

void phone::print()
{
  cout<<name<<":"<<tell;
  cout<<"\n";
}

int main(void)
{
   phone *p;
   p=new phone;

   if(!p)
   {
     cout<<"Alloction error.";
        return 1;
   }
   p->store("AA","9999999999");
   p->print();
   delete p;
   return 0;
}

#endif



#if 0
#include <iostream>
using namespace std;
   
class MyClass {
  int id;
public:
  int i;
  MyClass(int i);
  ~MyClass();
  void neg(MyClass &o) { o.i = -o.i; } // no temporary created
};
   
MyClass::MyClass(int num)
{
  cout << "Constructing " << num << "\n";
  id = num;
}
   
MyClass::~MyClass()
{
  cout << "Destructing " << id << "\n";
}
   
int main()
{
	MyClass o(1);
	
	o.i = 10;
	o.neg(o);
	
	cout << o.i << "\n";
	
	return 0;
}
#endif



#if 0
#include <iostream>  
using namespace std;  

class Base{  
public:  
	void show(){ cout << "Base\n"; }  
};  

class Derv1 : public Base{  
public:  
	void show(){ cout << "Derv1\n"; }  
};  

class Derv2 : public Base{  
public:  
	void show(){ cout << "Derv2\n"; }  
};  

int main(){  
	Derv1 dv1;           
	Derv2 dv2;           
	Base* ptr;           
	
	ptr = &dv1;          
	ptr->show();         
	
	ptr = &dv2;          
	ptr->show();         
	return 0;  
}

#endif
