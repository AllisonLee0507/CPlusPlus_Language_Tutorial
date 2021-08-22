#if 0
#define DemoVersion
#define DOS_VERSION 5
#include <iostream>
using namespace std;

int main()
{

#ifdef DemoVersion
   cout << "DemoVersion defined.\n";
#else
   cout << "DemoVersion not defined.\n";
#endif

#ifndef DOS_VERSION
   cout << "DOS_VERSION not defined!\n";
#else
   cout << "DOS_VERSION defined as: " << DOS_VERSION << endl;
#endif

#ifdef WINDOWS_VERSION
   cout << "WINDOWS_VERSION defined!\n";
#else
   cout << "WINDOWS_VERSION was not defined.\n";
#endif

#undef DOS_VERSION

#ifdef DemoVersion
   cout << "DemoVersion defined.\n";
#else
   cout << "DemoVersion not defined.\n";
#endif

#ifndef DOS_VERSION
   cout << "DOS_VERSION not defined!\n";
#else
   cout << "DOS_VERSION defined as: " << DOS_VERSION << endl;
#endif

#ifndef WINDOWS_VERSION
   cout << "WINDOWS_VERSION defined!\n";
#else
   cout << "WINDOWS_VERSION was not defined.\n";
#endif

 cout << "Done.\n";
 return 0;

}
#endif


#if 0
#define DemoVersion
#define PC 5

#include <iostream>

int main(void)
{
	std::cout << "Checking on the definitions of DemoVersion,PC and MAC...\n";
	
	
#ifdef DemoVersion
	std::cout << "DemoVersion defined.\n";
#else // DemoVersion
	std::cout << "DemoVersion not defined.\n";
#endif // DemoVersion
	
#ifndef PC
	std::cout << "PC not defined!\n";
#else // PC
	std::cout << "PC defined as: " << PC << std::endl;
#endif // PC
	
#ifdef MAC
	std::cout << "MAC defined!\n";
#else // MAC
	std::cout << "MAC was not defined.\n";
#endif // MAC
	
	std::cout << "Done.\n";
	return 0;
}
#endif

