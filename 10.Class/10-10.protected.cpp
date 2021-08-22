#if 0
#include <iostream> 
using namespace std; 
 
class BaseClass { 
protected: 
	int i, j; // private to BaseClass, but accessible to DerivedClass 
public: 
	void set(int a, int b) { i = a; j = b; } 
	void show() { cout << i << " " << j << "\n"; } 
}; 
 
class DerivedClass : public BaseClass { 
  int k; 
public: 
	// DerivedClass may access BaseClass's i and j 
	void setk() { 
		k = i*j; 
	} 
	
	void showDerivedClass() { 
		cout << k << "\n"; 
	} 
}; 
 
int main(void) 
{ 
	DerivedClass ob; 
	
	ob.set(2, 3); // OK, set() is public in BaseClass 
	ob.show();    // OK, show is public BaseClass 
	
	ob.setk(); 
	ob.showDerivedClass(); 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using namespace std;

class base {
protected:
  int i, j; //protected fields: private to base, but accessible by derived
public:
  void set(int a, int b) { 
     i=a; 
     j=b; 
  }
  void show() { 
     cout << i << " " << j << "\n"; 
  }
};

class derived : public base {
  int k;
public:
	void setk() { 
		k=i*j; 
	}
	
	void showk() { 
		cout << k << "\n"; 
	}
};

int main(void)
{
	derived ob;
	
	ob.set(2, 3);
	ob.show();
	
	ob.setk();
	ob.showk();
	
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
	void setij(int a, int b) { i=a; j=b; }
	void showij() { cout << i << " " << j << "\n"; }
};
   
// Inherit base as protected.
class derived : protected base{
	int k;
public:
	// derived may access base's i and j and setij().
	void setk() { setij(10, 12); k = i*j; }
	
	// may access showij() here
	void showall() { cout << k << " "; showij(); }
};
   
int main(void)
{
	derived ob;
	
	ob.setk(); // OK, public member of derived
	ob.showall(); // OK, public member of derived
	
	return 0;
}
#endif

