#if 0
#include <iostream>
using namespace std;

class base {
private:
	int i;
public:
	int j, k;
	void seti(int x) { i = x; }
	int geti() { return i; }
};

class derived: private base {
public:
	base::j;
	base::seti;
	base::geti;
	
	int a;
};

int main(void)
{
	derived ob;
	
	ob.j = 20; // legal because j is made public in derived
	//ob.k = 30; // illegal because k is private in derived
	
	ob.a = 40; // legal because a is public in derived
	ob.seti(10);
	
	cout << ob.geti() << " " << ob.j << " " << ob.a;
	
	return 0;
}
#endif


#if 0
#include <iostream>   
using namespace std;

class B_class {   
public:   
	int i, j;   	
};   

class D_class : private B_class {   
public:   
	// access declaration   
	B_class::i;  // i from B_class is now public again   
	
	int k;   
};   

int main(void)   
{   
	D_class d;   
	
	d.i = 10;  // legal because i is made public in D_class   
	d.k = 20;   
	
	cout << d.i * d.k;   
	
	return 0;   
}
#endif



#if 0
#include <iostream>
using namespace std;
   
class base {
  int i; // private to base
public:
  int j, k;
  void seti(int x) { i = x; }
  int geti() { return i; }
};
   
// Inherit base as private.
class derived: private base {
public:	
	base::j; // make j public again - but not k
	base::seti; // make seti() public
	base::geti; // make geti() public
	
	int a; // public
};
   
int main(void)
{
	derived ob;
	
	ob.j = 20; // legal because j is made public in derived
	
	ob.a = 40; // legal because a is public in derived
	ob.seti(10);
	
	cout << ob.geti() << " " << ob.j << " " << ob.a;
	
	return 0;
}
#endif

