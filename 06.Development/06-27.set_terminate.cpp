#if 0
#include <iostream>
#include <cstdlib>
#include <exception>
using namespace std;

void my_Thandler()
{
	cout << "Inside new terminate handler\n";
	abort();
}

int main(void)
{
	set_terminate(my_Thandler);
	
	throw 100; // throw an error
	
	return 0;
}
#endif

