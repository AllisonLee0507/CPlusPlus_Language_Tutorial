#if 0
#include <iostream>
using namespace std; 

int main(void)
{
	int i;
	float value = 1.2345;
	
	for (i = 0; i < 4; i++){
		cout.precision(i);
		cout << value << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>

using namespace std;

int main(void)
{
	int x = 100;
	double f = 98.6;
	double f2 = 123456.0;
	double f3 = 1234567.0;
	
	// Set the showpoint flag.
	cout << "Setting showpoint flag.\n";
	cout.setf(ios::showpoint);
	cout << "f2 with showpoint set: " << f2 << "\n\n";
	
	cout << "Clearing the showpoint flag.\n\n";
	cout.unsetf(ios::showpoint);

	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::ios;

int main(void)
{ 
   cout << "Before setting the ios::showpoint flag\n"
        << "9.9900 prints as: " << 9.9900 
        << "\n9.9000 prints as: " << 9.9000
        << "\n9.0000 prints as: " << 9.0000
        << "\n\nAfter setting the ios::showpoint flag\n";
   cout.setf( ios::showpoint );
   cout << "9.9900 prints as: " << 9.9900 
        << "\n9.9000 prints as: " << 9.9000
        << "\n9.0000 prints as: " << 9.0000 << endl;
        
   return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;
int main(void)
{
	int myInt;
	long myLong;
	double myDouble;
	float myFloat;
	unsigned int myUnsigned;
	char myWord[50];
	
	cout << "int: ";
	cin >> myInt;
	cout << "Long: ";
	cin >> myLong;
	cout << "Double: ";
	cin >> myDouble;
	cout << "Float: ";
	cin >> myFloat;
	cout << "Word: ";
	cin >> myWord;
	cout << "Unsigned: ";
	cin >> myUnsigned;
	
	cout << "\n\nInt:\t" << myInt << endl;
	cout << "Long:\t" << myLong << endl;
	cout << "Double:\t" << myDouble << endl;
	cout << "Float:\t" << myFloat << endl;
	cout << "Word: \t" << myWord << endl;
	cout << "Unsigned:\t" << myUnsigned << endl;
	
	cout << "\n\nInt, Long, Double, Float, Word, Unsigned: ";
	cin >> myInt >> myLong >> myDouble;
	cin >> myFloat >> myWord >> myUnsigned;
	cout << "\n\nInt:\t" << myInt << endl;
	cout << "Long:\t" << myLong << endl;
	cout << "Double:\t" << myDouble << endl;
	cout << "Float:\t" << myFloat << endl;
	cout << "Word: \t" << myWord << endl;
	cout << "Unsigned:\t" << myUnsigned << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>

using namespace std;

int main(void)
{
	cout << "Hello" << endl;
	
	cout.width(12);
	cout.fill(' ');
	cout.setf(ios::showpos | ios::internal);
	cout << 765.34 << endl;
	
	return 0;
}
#endif
