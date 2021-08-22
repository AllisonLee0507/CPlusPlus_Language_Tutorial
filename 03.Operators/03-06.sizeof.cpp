#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	char ch; 
	int i; 
	
	cout << sizeof ch << ' '; // size of char 
	cout << sizeof i << ' ';  // size of int 
	cout << sizeof (float) << ' '; // size of float 
	cout << sizeof (double) << ' '; // size of double 
	
	return 0; 
}
#endif


#if 0
#include<iostream.h>

union u_tag{
	int i;
	double d;
}u={88};

struct s_tag{
	int i;
	double d;
}s={66,1.234};

int main(void) 
{ 
	int size;
	size=sizeof(union u_tag);
	
	cout<<"sizeof(union u_tag)="<<size<<endl;
	u.i=100;
	
	cout<<"u.i="<<u.i<<endl;
	u.d=1.2345;
	
	cout<<"u.d="<<u.d<<endl;
	size=sizeof(u.d);
	
	cout<<"sizeof(u.d)="<<size<<endl;
	cout<<"s.i="<<s.i<<endl;
	cout<<"s.d="<<s.d<<endl;
	
	size=sizeof(struct s_tag);
	cout<<"sizeof(struct s_tag)="<<size<<endl;
 
	return 0; 
}
#endif



#if 0
#include <iostream>

class EmptyClass {
};

int main(void) 
{ 
    std::cout << "sizeof(EmptyClass): " << sizeof(EmptyClass) << '\n';
 
	return 0; 
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

class Box {
  public:
    Box() :length(1.0), width(1.0), height(1.0), pMaterial("new") {}
    
    int totalSize() {
      return sizeof(length) + sizeof(width) + sizeof(height) + sizeof(pMaterial
);
    }
  private:
    char* pMaterial;
    double length;
    double width;
    double height;
};

int main(void)
{
	Box box;
	Box boxes[10];
	
	cout << endl            << "The data members of a Box object occupy "
	   << box.totalSize() << " bytes.";
	
	cout << endl           << "A single Box object occupies "
	   << sizeof (Box) << " bytes.";
	
	cout << endl           << "An array of 10 Box objects occupies "
	   << sizeof(boxes)  << " bytes."
	   << endl;
	   
	return 0;
}
#endif



#if 0
#include <iostream>
#include <ostream>
using namespace std;
class base {};
class derived : public base {};

int main(void)
{

	cout << sizeof(base)  << '\n';      
	cout << sizeof(derived)  << '\n';   
	base b[3];
	
	cout << sizeof(b) << '\n';          
	derived d[5];
	cout << sizeof(d) << '\n';          
	   
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	double array[ 20 ];
	cout << "The number of bytes in the array is " << sizeof( array );
	
	return 0;
}
#endif
