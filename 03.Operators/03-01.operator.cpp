#if 0
#include <iostream>
using std::cout;
using std::endl;

class MyClass
{
public:
   void myFunction()
   {
      cout << "In myFunction function\n";
   }
   int value;
};

void f(MyClass*);
void f2(MyClass*);

int main(void)
{
   MyClass myFunction;
   myFunction.value = 8;
   f(&myFunction );
   f2(&myFunction );
   
   return 0;
}

void f(MyClass *myFunctionPtr )
{
	void ( MyClass::*memPtr )() = &MyClass::myFunction;
	( myFunctionPtr->*memPtr )();
	return;
}

void f2(MyClass *myFunctionPtr2 )
{
	int MyClass::*vPtr = &MyClass::value;
	cout << ( *myFunctionPtr2 ).*vPtr << endl;
	return;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int n = 7; 

int main(void)
{
   double n = 10.5;

   cout << "Local double value of n = " << n
      << "\nGlobal int value of n = " << ::n << endl;
      
   return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void)
{
      cout << "7 + 3 = " << 7 + 3 << endl;
      cout << "7 - 3 = " << 7 - 3 << endl;
      cout << "7 * 3 = " << 7 * 3 << endl;

      cout << "7 / 3 = " << 7 / 3 << endl;
      cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;

      cout << "7 % 3 = " << 7 % 3 << endl;

      cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl;
      cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << endl;

      return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int a;
	int *aPtr; 
	
	a = 7; 
	aPtr = &a;
	
	cout << "The address of a is " << &a << "\nThe value of aPtr is " << aPtr;
	cout << "\n\nThe value of a is " << a << "\nThe value of *aPtr is " << *aPtr;
	cout << "\n\nShowing that * and & are inverses of " << "each other.\n&*aPtr = " << &*aPtr
		<< "\n*&aPtr = " << *&aPtr << endl;
	return 0;
}
#endif
