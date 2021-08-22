#if 0
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int length; // this declares a variable 
 
  length = 7; // this assigns 7 to length 
 
  cout << "The length is "; 
  cout << length; // This displays 7 
 
  return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
  
int main() { 
  double radius = 4.0, height = 5.0; 
 
  // dynamically initializ volume 
  double volume = 3.1416 * radius * radius * height; 
 
  cout << "Volume is " << volume; 
 
  return 0; 
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

void useLocal( void ); 
void useStaticLocal( void ); 
void useGlobal( void ); 

int x = 1;

int main()
{
   int x = 5;

   cout << x << endl;
   {
      int x = 7;
      cout << "local x in main's inner scope is " << x << endl;
   }

   cout << x << endl;

   useLocal(); 
   useStaticLocal(); 
   useGlobal(); 
   useLocal(); 
   useStaticLocal(); 
   useGlobal(); 

   cout << x << endl;
   return 0;
} 

void useLocal( void )
{
   int x = 25;

   cout << "local x is " << x << " on entering useLocal" << endl;
   x = x + 20;
   cout << "local x is " << x << " on exiting useLocal" << endl;
} 

void useStaticLocal( void )
{
   static int x = 50;

   cout << "local static x is " << x << " on entering useStaticLocal" << endl;
   x = x + 20;
   cout << "local static x is " << x << " on exiting useStaticLocal" << endl;
} 

void useGlobal( void )
{
   cout << "global x is " << x << " on entering useGlobal" << endl;
   x = x + 20;
   cout << "global x is " << x << " on exiting useGlobal" << endl;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int n = 7; 

int main()
{
   double n = 10.5;

   cout << "Local double value of n = " << n
      << "\nGlobal int value of n = " << ::n << endl;
   return 0;
}
#endif


#if 0
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  char first = 10;
  char second = 20;

  cout << "The value of the expression first < second is: "
       << (first < second)
       << endl
       << "The value of the expression first == second is: "
       << (first == second)
       << endl;

  return 0;
}
#endif
