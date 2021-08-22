#if 0
namespace MyNameSpace { 
	int start; 
	int end; 
	
	class counter { 
		int count; 
		public: 
		counter(int n) {  
			count = n; 
		} 
	
		void reset(int n) { 
			count = n; 
		} 
	}; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
namespace MyNameSpace { 
	int start; 
	int end; 
	
	class counter { 
		int count; 
		public: 
		counter(int n) {  
			if(n <= start) count = n; 
			else count = start; 
		} 
		
		void reset(int n) { 
			if(n <= start) count = n; 
		} 
		
		int run(void) { 
			if(count > end) return count--; 
			else return end; 
		} 
	}; 
} 
 
int main() 
{ 
	MyNameSpace::start = 100; 
	MyNameSpace::end = 0; 
	
	MyNameSpace::counter ob1(10); 
	int i; 
	
	do { 
		i = ob1.run(); 
		cout << i << " "; 
	} while(i > MyNameSpace::end); 
	cout << endl; 
	
	MyNameSpace::counter ob2(20); 
	
	do { 
		i = ob2.run(); 
		cout << i << " "; 
	} while(i > MyNameSpace::end); 
	cout << endl; 
	
	ob2.reset(100); 
	MyNameSpace::end = 90; 
	do { 
		i = ob2.run(); 
		cout << i << " "; 
	} while(i > MyNameSpace::end); 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using namespace std;

namespace MyNamespace1 
{
	int i;
	namespace MyNamespace2 
	{ // a nested namespace
		int j;
	}
}

int main()
{
	MyNamespace1::i = 19;
	
	MyNamespace1::MyNamespace2::j = 10; // this is right
	
	cout << MyNamespace1::i << " "<<  MyNamespace1::MyNamespace2::j << "\n";
	
	// use MyNamespace1
	using namespace MyNamespace1;
	
	cout << i * MyNamespace2::j;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

namespace MyNamespace {
  int i;
}

namespace MyNamespace {
  int j;
}

int main(void)
{
	MyNamespace::i = MyNamespace::j = 10;
	
	// refer to MyNamespace specifically
	cout << MyNamespace::i * MyNamespace::j << "\n";
	
	// use MyNamespace namespace
	using namespace MyNamespace;
	
	cout << i * j;
	
	return 0;
}
#endif


#if 0
#include <iostream.h>

namespace first
{
	int var = 5;
}

namespace second
{
	double var = 3.1416;
}

int main () {
	cout << first::var << endl;
	cout << second::var << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int integer1 = 98;

namespace
{
   double doubleInUnnamed = 88.22;
}

namespace Example
{
   const double PI = 3.14159;
   void printValues();
   int integer1 = 100;
   namespace Inner
   {
      int integer1 = 99;
   }
}

int main()
{
   cout << "doubleInUnnamed = " << doubleInUnnamed;

   cout << "\n(global) integer1 = " << integer1;

   cout << Example::integer1 << "\nIinteger1 = "
      << Example::Inner::integer1 << endl;


   return 0;
}
#endif


#if 0
#include <ios>
#include <iostream>
#include <ostream>

void f(int i)
{
	std::cout << "int: " << i << '\n';
}

namespace MyNamespace {
	void f(double d)
	{
		std::cout << "double: " << std::showpoint << d << '\n';
	}
	
	void call_f()
	{
		// finds MyNamespace::f(double) first.
		f(3);
	}
}

int main(void)
{
	MyNamespace::call_f();
	using MyNamespace::f;
	using ::f;
	f(4);
}
#endif


#if 0
#include <iostream>
using namespace std;

int integer1 = 98;

namespace Example
{
	const double PI = 3.14159;
	void printValues();
	
	namespace Inner
	{
		enum Years { FISCAL1 = 1990, FISCAL2, a };
	}
}

namespace
{
	double doubleInUnnamed = 88.22;
}

int main(void)
{
	Example::printValues();
	return 0;
}
void Example::printValues()
{
	cout << integer1 << "\n(global) integer1 = " << ::integer1
	  << "\nIinteger1 = " << Inner::a << endl;
}
#endif
