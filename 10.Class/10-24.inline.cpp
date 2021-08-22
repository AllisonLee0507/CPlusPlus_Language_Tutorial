#if 0
#include <iostream>

inline int f(int);

int main(void)
{
	int target;
	
	std::cout << "Enter a number to work with: ";
	std::cin >> target;
	std::cout << "\n";
	
	target = f(target);
	std::cout << "Target: " << target << std::endl;
	
	target = f(target);
	std::cout << "Target: " << target << std::endl;
	
	target = f(target);
	std::cout << "Target: " << target << std::endl;
	return 0;
}

int f(int target)
{
	return 2*target;
}
#endif


#if 0
#include <iostream>

class Cat
{
public:
    Cat (int initialAge);
    ~Cat();
    int GetAge() { return itsAge;}             // inline!
    void SetAge (int age) { itsAge = age;}     // inline!
    void Meow() { std::cout << "Meow.\n";}     // inline!
private:
    int itsAge;
};
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  int i; // private by default 
public: 
  int getInt(); 
  void setInt(int j); 
} ; 
 
inline int MyClass::getInt() 
{ 
  return i; 
} 
 
inline void MyClass::setInt(int j) 
{ 
  i = j; 
} 
 
int main() 
{ 
  MyClass s; 
 
  s.setInt(10); 
  cout << s.getInt(); 
 
  return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  int i; // private by default 
public: 
   
  int getInt() { return i; } 
  void setInt(int j) { i = j; } 
} ; 
 
int main() 
{ 
	MyClass s; 
	
	s.setInt(10); 
	cout << s.getInt(); 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class MyClass {  
  // These are now private. 
  int a; 
  int b;    
  int c;        
public: 
  // This is a constructor for MyClass. 
  MyClass(int p, int f, int m) { 
    a = p; 
    b = f; 
    c = m; 
  } 
 
  // Compute and return the range. 
  int range() { 
     return c * b; 
  } 
 
  // Accessor functions. 
  int getA() { return a; } 
  int getB() { return b; } 
  int getC() { return c; } 
}; 
 
int main() {  
	// Pass values to MyClass constructor. 
	MyClass myObject1(7, 16, 21);  
	MyClass myObject2(2, 14, 12); 
	
	int range1, range2;  
	
	range1 = myObject1.range(); 
	range2 = myObject2.range(); 
	
	cout << range1 << "\n";  
	
	cout << range2 << "\n";  
	
	return 0; 
}
#endif



#if 0
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

inline double cube( const double s ) { return s * s * s; }

int main()
{
	double side;
	
	for ( int k = 1; k < 4; k++ ) {
	  cout << "Volume of cube with side " << k << " is " << cube( k ) << endl;
	}
	
	return 0;
}
#endif

