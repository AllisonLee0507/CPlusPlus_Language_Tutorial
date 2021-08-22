#if 0
#include <iostream> 
using namespace std; 
 
int main(void)
{ 
	int i; 
	
	for(i=1; i <= 10; ++i ) 
	cout << i << "/ 2 is: " << (float) i / 2 << '\n'; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using namespace std;

char myfunc(unsigned char);
char myfunc(char);

int main(void)
{ 
	cout << myfunc('c'); // this calls myfunc(char)
	//cout << myfunc(88) << " "; // ambiguous
	
	return 0; 
}

char myfunc(unsigned char ch)
{
  return ch-1;
}

char myfunc(char ch)
{
  return ch+1;
}
#endif


#if 0
#include <iostream>
using namespace std;

float myfunc(float);
double myfunc(double);

int main(void)
{
	cout << myfunc(10.1) << " "; // unambiguous, calls myfunc(double)
	//cout << myfunc(10); // ambiguous
	
	return 0;
}

float myfunc(float i)
{
	return i;
}

double myfunc(double i)
{
	return -i;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void)
{
	unsigned x = 22, *unsignedPtr;
	void *voidPtr = &x;
	char *charPtr = "C++";
	
	// cast from void * to unsigned *
	unsignedPtr = reinterpret_cast< unsigned * >( voidPtr );
	cout << "*unsignedPtr is " << *unsignedPtr << "\ncharPtr is " << charPtr;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;
int main(void)
{
	unsigned x = 22, *unsignedPtr;
	void *voidPtr = &x;
	char *charPtr = "C++";
	
	// use reinterpret_cast to cast a char * pointer to unsigned
	cout << "\nchar * to unsigned results in: " << ( x = reinterpret_cast< unsigned >( charPtr ) );
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	unsigned x = 22, *unsignedPtr;
	void *voidPtr = &x;
	char *charPtr = "C++";
	
	// cast unsigned back to char *
	cout << "\nunsigned to char * results in: " << reinterpret_cast< char * >( x ) << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	const long a = 3;
	const long b = 12;
	
	double c = 234.0;
	long d = 0;        
	long f = 0;         
	long g = 0;        
	
	
	d = static_cast<long>(c);
	f = static_cast<long>((c - d) * a);
	g = static_cast<long>(c * a * b)  b;
	
	cout << c << " \n "
		<< d << " \n "
		<< f << " \n "
		<< g << " \n ";
	
	cout << endl;
	
	return 0;
}
#endif
