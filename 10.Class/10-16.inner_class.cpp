#if 0
#include <iostream>
#include <stdlib.h>
using namespace std;

class OuterClass
{

public:
    void outerFunction();

       class InnerClass
       {
       public:
               void innerFunction();

       };
};

void OuterClass::outerFunction()
{
  cout << "This is a function in the base class\n";
  InnerClass myclass;
  myclass.innerFunction();
}

void OuterClass::InnerClass::innerFunction()
{
   cout << "This is a function in the InnerClass class \n";
}

int main()
{
	OuterClass myclass;
	myclass.outerFunction();
	return 0;
}
#endif
