#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
	int a, b; 
public: 
	MyClass(int i, int j) { a=i; b=j; } 
	friend int friendFunction(MyClass x); // a friend function 
}; 
 
// friendFunction() is a not a member function of any class. 
int friendFunction(MyClass x) 
{ 
	/* Because friendFunction() is a friend of MyClass, it can 
	 directly access a and b. */ 
	int max = x.a < x.b ? x.a : x.b; 
	
	return max; 
} 
 
int main(void) 
{ 
	MyClass n(18, 111); 
	
	cout << "friendFunction(n) is " << friendFunction(n) << "\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
class Cylinder; // a forward declaration 
enum colors { red, green, yellow }; 
class Cube { 
	colors color; 
public: 
	Cube(colors c) { color = c; } 
	friend bool sameColor(Cube x, Cylinder y); 
}; 
 
class Cylinder { 
	colors color; 
public: 
	Cylinder(colors c) { color= c; } 
	friend bool sameColor(Cube x, Cylinder y); 
}; 
 
bool sameColor(Cube x, Cylinder y) 
{ 
	if(x.color == y.color) 
		return true; 
	else 
		return false; 
} 
 
int main() 
{ 
	Cube cube1(red); 
	Cube cube2(green); 
	Cylinder cyl(green); 
	
	
	if(sameColor(cube1, cyl)) 
	cout << "cube1 and cyl are the same color.\n"; 
	else 
	cout << "cube1 and cyl are different colors.\n"; 
	
	if(sameColor(cube2, cyl)) 
	cout << "cube2 and cyl are the same color.\n"; 
	else 
	cout << "cube2 and cyl are different colors.\n"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class Cylinder; // a forward declaration 
 
enum colors { red, green, yellow }; 
 
class Cube { 
	colors color; 
public: 
	Cube(colors c) { color= c; } 
	bool sameColor(Cylinder y); 
}; 
 
class Cylinder { 
	colors color; 
public: 
	Cylinder(colors c) { color = c; } 
	friend bool Cube::sameColor(Cylinder y); 
}; 
 
bool Cube::sameColor(Cylinder y) { 
	if(color == y.color) 
		return true; 
	else 
		return false; 
} 
 
int main(void) 
{ 
	Cube cube1(red); 
	Cube cube2(green); 
	Cylinder cyl(green); 
	
	if(cube1.sameColor(cyl)) 
		cout << "cube1 and cyl are the same color.\n"; 
	else 
		cout << "cube1 and cyl are different colors.\n"; 
	
	if(cube2.sameColor(cyl)) 
		cout << "cube2 and cyl are the same color.\n"; 
	else 
		cout << "cube2 and cyl are different colors.\n"; 

  return 0; 
}
#endif



#if 0
#include<iostream.h>
class MyClassB;

class MyClassA
{
	char *name;
public:
	MyClassA(char *s){name=s;}
	friend void print(MyClassA &,MyClassB &);
};

class MyClassB
{
	char *name;
public:
	MyClassB(char *s){name=s;}
	friend void print(MyClassA &,MyClassB &);
};

void print(MyClassA &a,MyClassB &b)
{
  cout<<"the MyClassA is"<<a.name<<endl;
  cout<<"the MyClassB is"<<b.name<<endl;
}

int main(void)
{
	MyClassA s("Li Hu");
	MyClassB t("Wan Ping");
	print(s,t);'
       
    return 0;
}
#endif



#if 0
#include <iostream>  
using namespace std;  
class Distance{  
private:  
	int feet;  
	float inches;  
public:  
	Distance() : feet(0), inches(0.0){  }  
	                             
	Distance(int ft, float in) : feet(ft), inches(in){  }  
	void showdist(){ 
		cout << feet << "\'-" << inches << '\"'; 
	}  
	friend float square(Distance);    
};
  
float square(Distance d){
	float fltfeet = d.feet + d.inches/12;  
	float feetsqrd = fltfeet * fltfeet;    
	return feetsqrd;               
}  

int main(void){  
	Distance dist(3, 6.0);
	float sqft;  
	
	sqft = square(dist);  
	dist.showdist();  
	cout << sqft;
	return 0;  
}
#endif



#if 0
#include <iostream>
#include <string>

using namespace std;
class MyClass
{
    friend void Peek(const MyClass& aMyClass);
    friend ostream& operator<<(ostream& os, const MyClass& aMyClass);

public:
    MyClass(const string& name = "");

private:
    string m_Name;
};

MyClass::MyClass(const string& name):m_Name(name){}

void Peek(const MyClass& aMyClass);
ostream& operator<<(ostream& os, const MyClass& aMyClass);

int main(void)
{
    MyClass myObject("A");

    Peek(myObject);

    cout << myObject;

    return 0;
}

void Peek(const MyClass& aMyClass)
{
	cout << aMyClass.m_Name << endl;
}

ostream& operator<<(ostream& os, const MyClass& aMyClass)   
{
	os << "MyClass Object - ";
	os << "m_Name: " << aMyClass.m_Name;
	return os;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

class MyClass 
{
   friend void setX( MyClass &, int ); // friend declaration
public:
   MyClass() : x( 0 )
   { 
   }
   void print() const       
   { 
      cout << x << endl; 
   }
private:
   int x;
};
void setX( MyClass &c, int val )
{
   c.x = val;
} 

int main()
{
	MyClass counter;
	counter.print();
	
	setX( counter, 8 );
	counter.print();
	
	return 0;
}
#endif
