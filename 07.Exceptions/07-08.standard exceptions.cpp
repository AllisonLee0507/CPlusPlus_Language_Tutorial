#if 0
#include <iostream.h>
#include <exception>
#include <typeinfo>

class A {};

int main(vojd)
{
	try {
		A * a = NULL;
		typeid (*a);
	}
	catch (std::exception& e)
	{
		cout << "Exception: " << e.what();
	}
	
	return 0;
}
#endif

