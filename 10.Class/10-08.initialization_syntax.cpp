#if 0
#include <iostream>  
using namespace std;  
  
class MyClass {  
	const int numA; // const member 
	const int numB; // const member 
public:  
	MyClass(int x, int y) : numA(x), numB(y) { }  
	int getNumA() { return numA; }  
	int getNumB() { return numB; }  
};  
  
int main(void)  
{  
	MyClass ob1(7, 9), ob2(5, 2);  
	
	cout << "Values in ob1 are " << ob1.getNumB() << 
	      " and " << ob1.getNumA() << endl;  
	
	cout << "Values in ob2 are " << ob2.getNumB() << 
	      " and " << ob2.getNumA() << endl; 
	
	return 0;  
}
#endif


#if 0
#include <iostream>  
using namespace std;  
  
class MyClass {  
	int numA;  
	int numB;  
public:  
	MyClass(int x, int y) {  
	numA = x;  
	numB = y;  
	}   
	int getNumA() { return numA; }  
	int getNumB() { return numB; }  
};  
  
int main(void)  
{  
	MyClass ob1(7, 9), ob2(5, 2);  
	
	cout << "Values in ob1 are " << ob1.getNumB() << 
	      " and " << ob1.getNumA() << endl;  
	
	cout << "Values in ob2 are " << ob2.getNumB() << 
	      " and " << ob2.getNumA() << endl; 
	
	return 0;  
}
#endif



#if 0
#include <iostream.h>

class Pointer
{
private:
       long x,y;
public:
	Pointer(long a=0,long b=0) { 
		x=a;
		y=b;
	}
	
	long GetX(){ 
		return x;
	}
	long GetY(){ 
		return y;
	}
	void Disp(){ 
		cout << "x=" <<x<<"  y="<<y;
	}
};

class Pointer3D : public Pointer
{
    long z;
public:
	Pointer3D(long a=0,long b=0,long c=0):Pointer(a,b){
		z=c;
	}
	long GetZ(){ return z;}
	
	void Disp()
	{
		cout <<"x= "<<GetX()<<"  y="<<GetY();
		cout << "  z="<< z <<endl;
	}
};

int main(void)
{
	Pointer3D p1;
	Pointer3D p2(3,-4);
	p2.Disp();
	p2=p1;
	p2.Disp();
	return 0;
}
#endif

