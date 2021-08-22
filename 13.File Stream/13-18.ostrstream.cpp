#if 0
#include <strstream>
#include <iostream>
using namespace std;

int main(void)
{
	char str[80];

	ostrstream outs(str, sizeof(str));

	outs << "abcdefg ";
	outs << 27 << " " << 890.23;
	outs << ends;  // null terminate

	cout << outs.pcount(); // display how many chars in outs

	cout << " " << str;

	return 0;
}
#endif


#if 0
#include <strstream>
#include <iostream>
using namespace std;

int main(void)
{
	char str[80];

	ostrstream outs(str, sizeof(str));

	outs << "AAAAAAAAAAAAAAAA. ";
	outs << 1024 << hex << " ";
	outs.setf(ios::showbase);
	outs << 100 << ' ' << 99.789 << ends;

	cout << str;  // display string on console

	return 0;
}
#endif



#if 0
#include <strstream>
#include <iostream>
using namespace std;

int main(void)
{
	char *p;

	ostrstream outs;

	outs << "AAAAAAAAAAAAAAAAAAAA";
	outs << -10 << hex << " ";
	outs.setf(ios::showbase);
	outs << 100 << ends;

	p = outs.str();

	cout << p;

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::ostringstream;

int main(void)
{
	ostringstream outputString;

	string string1("string ");
	double double1 = 123.4567;
	int integer = 22;

	outputString << string1 << double1 << integer << &integer;

	// call str to obtain string contents of the ostringstream
	cout << "outputString contains:\n" << outputString.str();

	return 0;
}
#endif



#if 0
#include <strstream>    
#include <iostream>   
using namespace std;
int main(void)
{  
	char str[80];   

	ostrstream outs(str, sizeof(str));

	outs << "Hello ";
	outs << 34 << " " << 1234.23;
	outs << ends;

	cout << outs.pcount(); // display how many chars in outs   

	cout << " " << str;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <sstream>
#include <bitset>
using namespace std;

int main(void)
{
	ostringstream os;

	// decimal and hexadecimal value
	os << "dec: " << 15 << hex << " hex: " << 15 << endl;
	cout << os.str() << endl;

	// append floating value and bitset
	bitset<15> b(5789);
	os << "float: " << 4.67 << " bitset: " << b << endl;

	// overwrite with octal value
	os.seekp(0);
	os << "oct: " << oct << 15;
	cout << os.str() << endl;
}
#endif



#if 0
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
	cout << "Enter tokens. Control-D (Unix) or Control-Z (Windows) to end." << endl;

	ostringstream outStream;

	while (cin) {
		string nextToken;

		cout << "Next token: ";
		cin >> nextToken;

		if (nextToken == "done") break;

		outStream << nextToken << "\t";
	}

	cout << "The end result is: " << outStream.str();
}
#endif
