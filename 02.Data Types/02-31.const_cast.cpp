#if 0
#include <iostream>
using namespace std;

void sqrval(const int *val)
{
	int *p;
	
	// cast away const-ness.
	p = const_cast<int *> (val);
	
	*p = *val * *val; // now, modify object through v
}

int main(void)
{
	int x = 10;
	
	cout << "x before call: " << x << endl;
	sqrval(&x);
	cout << "x after call: " << x << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
#include <cctype>

const char *maximum( const char *first, const char *second )
{
	return ( strcmp( first, second ) >= 0 ? first : second );
}

int main(void)
{
   char s1[] = "h";
   char s2[] = "g";

   char *maxPtr = const_cast< char * >( maximum( s1, s2 ) );

   cout << "The larger string is: " << maxPtr << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

void sqrval(const int &val)
{
  const_cast<int &> (val) = val * val;
}

int main(void)
{
	int x = 10;
	
	cout << "x before call: " << x << endl;
	sqrval(x);
	cout << "x after call: " << x << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

void print (char * str)
{
	cout << str << endl;
}

int main(void)
{
	const char * c = "sample text";
	print ( const_cast<char *> (c) );
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

void g(char* str)
{
}

void f(const char* str)
{
  g(const_cast<char*>(str));

}

int main(int argc, char** argv)
{
  char str[100];
  f(str);

  return (0);
}
#endif
