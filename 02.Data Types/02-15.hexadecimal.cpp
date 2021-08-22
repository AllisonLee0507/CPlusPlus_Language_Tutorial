#if 0
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
	stringstream ss;
	
	ss << showbase << hex << 16; // Show the base in hexadecimal
	
	cout << ss.str( ) << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

long hex2int(const string& hexStr);

int main(void)
{
	string str1 = "0x12AB";
	string str2 = "12AB";
	
	cout << hex2int(str1) << endl;
	cout << hex2int(str2) << endl;
	
	return 0;
}


long hex2int(const string& hexStr) {
	char *offset;
	
	if (hexStr.length() > 2)
	{
		if (hexStr[0] == '0' && hexStr[1] == 'x')
		{
			return strtol(hexStr.c_str( ), &offset, 0);
		}else
		{
			cout << "hex must start with 0x";
			return 0;
		}
	}
	
	return;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using namespace std; 

int main(void)
{
	cout << hex << 100 << endl;
	cout << setfill('?') << setw(10) << 2343.10 << endl;
	
	return 0;
}
#endif

