#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  static int count; 
public: 
 
  MyClass() { 
    count++; 
    cout << "Constructing object " << 
             count << endl; 
  } 
 
  ~MyClass() { 
     cout << "Destroying object " <<  
             count << endl; 
     count--; 
  } 
  
  static int numObjects() { return count; } 
}; 
 
int MyClass::count; 
 
int main(void)
{
	MyClass a, b, c; 
	
	cout << "There are now " << MyClass::numObjects() << " in existence.\n\n"; 
	MyClass *p = new MyClass(); 
	cout << "there are now " << MyClass::numObjects() << " in existence.\n\n"; 	
	delete p; 	
	cout << " there are now " << a.numObjects() << " in existence.\n\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using namespace std;
class MyClass {
    static int a;
    int b;
  public:
    void set(int i, int j){
      a=i;
      b=j;
    }
    static void show();
};

int MyClass::a;

void MyClass::show(){
  cout << "This is static a: " << a << endl;
}

int main(void)
{
	MyClass x, y;
	
	x.set(1,1);
	y.set(2,2);
	MyClass::show();
	y.show();
	x.show();
}
#endif



#if 0
#include <iostream>

int C;

class C {
  private:
    int i[2];
  public:
    static int f() {
        return sizeof(C);
    }
};

int f()
{
    return sizeof(C);
}

int main(void)
{
	std::cout << "C::f() = " << C::f() << ","
	         << " ::f() = " << ::f() << std::endl;
}
#endif

