#if 0
#include <iostream>
using namespace std;

class MyClass{
	int a;
public:
	MyClass(int j) {a = j;}
	int geta(void) {return a;}
};

int main(void)
{
	MyClass ob = 99;              
	cout << ob.geta();
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

class MyClass
{
public: 
	MyClass::MyClass(void);
	void show_MyClass(void);
private:
	int a;
	int b;
	int c;
};

MyClass::MyClass(void) : a(1), b(2), c(3) { };

void MyClass::show_MyClass(void)
{
	cout << "a contains: " << a << endl;
	cout << "b contains: " << b << endl;
	cout << "c contains: " << c << endl;
}

int main(void)
{
	MyClass numbers;
	
	numbers.show_MyClass();
	
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
	void set(int i, int j) {
		a = i;
		b = j;
	}
	void show();
};

int MyClass::a;

void MyClass::show(){
	cout << "This is static a: " << a << endl;
	cout << "This is non-static b: " << b << endl;
}

int main(void){
	MyClass x, y;
	
	x.set(1,1);
	x.show();
	y.set(2,2);
	y.show();
	x.show();

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class MyClass
{
public:
	int who;
	MyClass(int id);
} global_obj1(1), global_obj2(2);

MyClass::MyClass(int id)
{
	cout << "Initializing " << id << "\n";
	who = id;
}

int main(void)
{
	MyClass local_obj(3);
	cout << "This is NOT the first line displayed.\n";
	MyClass local_obj2(4);
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
class MyClass{
	int a;
public:
	MyClass(int j) {a = j;}
	int geta(void) {return a;}
};

int main(void)
{
	MyClass ob = 99;              
	
	cout << ob.geta();
}
#endif



#if 0
#include <iostream>  
using namespace std;  

class Counter  
{  
private:  
	unsigned int count;              
public:  
	Counter() : count(0){  }  
	unsigned int get_count(){ return count; }  
	void operator ++ (){  ++count;  }  
};  
  
int main(){  
	Counter c1, c2;                     
	
	cout << "\nc1=" << c1.get_count();  
	cout << "\nc2=" << c2.get_count();  
	
	++c1;
	++c2;
	++c2;
	
	cout << "\nc1=" << c1.get_count();  
	cout << "\nc2=" << c2.get_count() << endl;  
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
	MyClass( int c = 0, int i = 1 );	
	void add(){	count += increment; }	
	void print() const; 
private:
	int count;
	const int increment; 
};

MyClass::MyClass( int c, int i ): count( c ),increment( i ){ }

void MyClass::print() const
{
	cout << "count = " << count << ", increment = " << increment << endl;
}

int main()
{
	MyClass value( 10, 5 );
	
	value.print();
	
	for ( int j = 1; j <= 3; j++ ) 
	{
		value.add();
		value.print();
	}
	
	return 0;
}
#endif

