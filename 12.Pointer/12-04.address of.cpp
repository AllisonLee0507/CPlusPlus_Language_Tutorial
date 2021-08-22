#if 0
#include <iostream>

int main(void)
{
	unsigned short shortVar=5;
	unsigned long  longVar= 5;
	long sVar = -5;

	std::cout << "shortVar:\t" << shortVar;
	std::cout << "\tAddress of shortVar:\t" << &shortVar << "\n";
	std::cout << "longVar:\t" << longVar;
	std::cout << "\tAddress of longVar:\t" << &longVar << "\n";
	std::cout << "sVar:\t\t" << sVar;
	std::cout << "\tAddress of sVar:\t" << &sVar << "\n";

	return 0;
}
#endif


#if 0
#include <iostream>

int main(void)
{
	using namespace std;
	unsigned short shortVar=5;
	unsigned long  longVar=65535;
	long sVar = -65535;

	cout << shortVar;
	cout << "Address of shortVar:" << endl;
	cout << &shortVar << endl;

	cout << longVar;
	cout << "Address of longVar:" << endl;
	cout << &longVar << endl;

	cout << sVar;
	cout << "Address of sVar:" << endl;
	cout << &sVar << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	char *string = "test";

	cout << "Value of string is: " << string
		<< "\nValue of static_cast< void *>( string ) is: "
		<< static_cast< void *>(string) << endl;
	return 0;
}
#endif