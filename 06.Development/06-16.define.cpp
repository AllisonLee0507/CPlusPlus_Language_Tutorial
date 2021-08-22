#if 0
#define DEBUG
#include <iostream>

#ifndef DEBUG
	#define ASSERT(x)
#else
	#define ASSERT(x) \
    if (! (x)) \
    { \
        std::cout << "ERROR!! Assert " << #x << " failed\n"; \
        std::cout << " on line " << __LINE__  << "\n"; \
        std::cout << " in file " << __FILE__ << "\n";  \
    }
#endif
 
int main(void)
{
	int x = 5;
	std::cout << "First assert: \n";
	ASSERT(x==5);
	std::cout << "\nSecond assert: \n";
	ASSERT(x != 5);
	std::cout << "\nDone.\n";
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

#define getmax(a,b) ((a)>(b)?(a):(b))

int main(void)
{
	int x=5, y;
	y= getmax(x,2);
	cout << y << endl;
	cout << getmax(7,x) << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
#define CUBE(a) ( (a) * (a) * (a) )
#define THREE(a) a * a * a

int main(void)
{
	long x = 5;
	long y = CUBE(x);
	long z = THREE(x);
	
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
	
	long a = 5, b = 7;
	y = CUBE(a+b);
	z = THREE(a+b);
	
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
inline unsigned long Square(unsigned long a) { return a * a; }
inline unsigned long Cube(unsigned long a) { return a * a * a; }

int main(void)
{
	unsigned long x=1 ;
	for (;;)
	{
	  cout << "Enter a number (0 to quit): ";
	  cin >> x;
	  if (x == 0)
	     break;
	  cout << "You entered: " << x;
	  cout << ".  Square(" << x << "): ";
	  cout  << Square(x);
	  cout<< ". Cube(" << x << "): ";
	  cout << Cube(x) << "." << endl;
	}
	return 0;
}
#endif



#if 0
#define DEBUG
#include <iostream>
using namespace std;
#ifndef DEBUG
   #define ASSERT(x)
#else
   #define ASSERT(x) \
            if (! (x)) \
            { \
               cout << "ERROR!! Assert " << #x << " failed\n"; \
               cout << " on line " << __LINE__  << "\n"; \
               cout << " in file " << __FILE__ << "\n";  \
            }
#endif


int main(void)
{
	int x = 5;
	cout << "First assert: \n";
	ASSERT(x==5);
	cout << "\nSecond assert: \n";
	ASSERT(x != 5);
	cout << "\nDone.\n";
	return 0;
}
#endif



#if 0
#include <iostream>
#define DEBUG

#ifndef DEBUG
#define PRINT(x)
#else
#define PRINT(x) std::cout << #x << ":\t" << x << std::endl;
#endif

int main()
{
	int x = 5;
	long y = 78l;
	PRINT(x);
	
	for (int i = 0; i < x; i++)
	{
		PRINT(i);
	}
	
	PRINT (y);
	PRINT("Hi.");
	int *px = &x;
	PRINT(px);
	PRINT (*px);
	
	return 0;
}
#endif
