#if 0
#include <iostream.h>

int main() {
	try
	{
		char * mystring;
		mystring = new char[10];
		if (mystring == NULL)
			throw "Allocation failure";

		for (int n = 0; n <= 100; n++)
		{
			if (n>9)
				throw n;
			mystring[n] = 'a';

		}
	}
	catch (int i)
	{
		cout << "index " << i << " is out of range" << endl;
	}
	catch (char * str)
	{
		cout << "Exception: " << str << endl;
	}
	return 0;
}
#endif
