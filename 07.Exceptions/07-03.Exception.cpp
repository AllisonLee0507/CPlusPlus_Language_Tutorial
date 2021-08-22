#if 0
#include <string>
#include <typeinfo>

class base {
public:
  virtual void f() throw();
  virtual void g(); // can throw anything
  virtual void h() throw(std::string);
};

class derived : public base {
public:
  virtual void f() throw();    // OK: same as base
  virtual void g() throw(int); // OK: subset of base
  //virtual void h() throw(int); // Error: int not in base
};

class more : public derived {
public:
  //virtual void f();            // Error: can throw anything
  virtual void g() throw();    // OK
};
#endif


#if 0
#include <iostream>
using namespace std;
   
class B {
};
   
class D: public B {
};
   
int main()
{
  D derived;
   
  try {
    throw derived;
  }
  catch(B b) {
    cout << "Caught a base class.\n";
  }
  catch(D d) {
    cout << "This won't execute.\n";
  }
   
  return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <stdexcept>
using std::runtime_error;

void f3(void) throw ( runtime_error )
{
	cout << "In f 3" << endl;
	throw runtime_error( "runtime_error in f3" ); 
}

void f2(void) throw ( runtime_error )
{
	cout << "f3 is called inside f2" << endl;
	f3(); 
}

void f1(void) throw ( runtime_error )
{
	cout << "f2 is called inside f1" << endl;
	f2();
}

int main(void)
{
	try 
	{
		cout << "f1 is called inside main" << endl;
		f1();
	}
	catch ( runtime_error &error )
	{
		cout << "Exception occurred: " << error.what() << endl;
		cout << "Exception handled in main" << endl;
	}
	
	return 0;
}
#endif

