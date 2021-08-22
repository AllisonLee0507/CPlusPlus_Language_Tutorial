#if 0
#include <iostream> 
using namespace std; 
 
struct MyClass { 
	int getI() { return i; } // these are public by default 
	void setI(int j) { i = j; } 
private: 
	int i;    
}; 
 
int main(void) 
{ 
	MyClass s; 
	
	s.setI(10); 
	cout << s.getI(); 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
	int i;   // private by default 
public: 
	int getI() { return i; } 
	void setI(int j) { i = j; } 
}; 
 
int main() 
{ 
	MyClass s; 
	
	s.setI(10); 
	cout << s.getI(); 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

class MyClass 
{
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

void cannotSetX( MyClass &c, int val )
{
	//c.x = val; // ERROR: cannot access private member in MyClass
}

int main(void)
{
	MyClass counter;
	
	cannotSetX( counter, 3 );
	return 0;
}
#endif



#if 0
#include <iostream>

#include <iostream>
using std::cout;
using std::endl;

class Box {
public:
	Box(double lvalue, double wvalue, double hvalue) :length(lvalue), width(wvalue), height(hvalue) {
		cout << "Box constructor called" << endl;
	}
	Box() {
		cout << "Default constructor called" << endl;
		length = width = height = 1.0;          // Default dimensions
	}
	double volume() {
		return length * width * height;
	}
private:
	double length;
	double width;
	double height;
};

int main(void)
{
	cout << endl;
	
	Box firstBox(2.2, 1.1, 0.5);
	Box secondBox;
	
	Box* pthirdBox = new Box(15.0, 20.0, 8.0);
	
	cout << firstBox.volume()<< endl;
	
	cout << secondBox.volume()<< endl;
	
	cout << pthirdBox->volume()<< endl;
	
	delete pthirdBox;
	return 0;
}
#endif

