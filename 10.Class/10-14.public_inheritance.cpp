#if 0
#include <iostream> 
using namespace std; 
 
class BaseClass { 
  int i, j; 
public: 
  void set(int a, int b) { 
     i = a; j = b; 
  } 
  void show() { 
     cout << i << " " << j << "\n"; 
  } 
}; 
 
class DerivedClass : public BaseClass { 
  int k; 
public: 
  DerivedClass(int x) { 
     k = x; 
  } 
  void showDerivedClass() { 
     cout << k << "\n"; 
  } 
 
  // i = 10; // Error! i is private to BaseClass and access is not allowed. 
}; 
 
int main(void)
{ 
	DerivedClass ob(3); 
	
	ob.set(1, 2); // access member of base class 
	ob.show();    // access member of base class 
	
	ob.showDerivedClass();   // uses member of derived class 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using namespace std;

class base {
protected:
  int i, j;
public:
  void set(int a, int b) { 
     i=a; 
     j=b; 
  }
  void show() { 
     cout << i << " " << j << "\n"; 
  }
};

class derived1 : public base {
  int k;
public:
  void setk() { 
     k = i*j; 
  }
  void showk() { 
     cout << k << "\n"; 
  }
};

class derived2 : public derived1 {
  int m;
public:
  void setm() { 
     m = i-j; 
  }
  void showm() { 
     cout << m << "\n"; 
  }
};

int main(void)
{
	derived1 ob1;
	derived2 ob2;
	
	ob1.set(2, 3);
	ob1.show();
	ob1.setk();
	ob1.showk();
	
	ob2.set(3, 4);
	ob2.show();
	ob2.setk();
	ob2.setm();
	ob2.showk();
	ob2.showm();
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
   
class base {
protected:
  int i, j; // private to base, but accessible by derived
public:
  void set(int a, int b) { i=a; j=b; }
  void show() { cout << i << " " << j << "\n"; }
};
   
class derived : public base {
  int k;
public:
  // derived may access base's i and j
  void setk() { k=i*j; }
   
  void showk() { cout << k << "\n"; }
};
   
int main(void)
{
	derived ob;
	
	ob.set(2, 3); // OK, known to derived
	ob.show(); // OK, known to derived
	
	ob.setk();
	ob.showk();
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
   
class base {
  int i, j;
public:
  void set(int a, int b) { i=a; j=b; }
  void show() { cout << i << " " << j << "\n"; }
};
   
class derived : public base {
  int k;
public:
  derived(int x) { k=x; }
  void showk() { cout << k << "\n"; }
};
   
int main(void)
{
	derived ob(3);
	
	ob.set(1, 2); // access member of base
	ob.show(); // access member of base
	
	ob.showk(); // uses member of derived class
	
	return 0;
}
#endif
