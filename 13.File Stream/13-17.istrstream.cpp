#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::istringstream;

int main()
{
	string input("");
	istringstream inputString(input);

	// attempt to read from empty stream
	long value;
	inputString >> value;

	if (inputString.good())
		cout << "\n\nlong value is: " << value << endl;
	else
		cout << "\n\ninputString is empty" << endl;


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
using std::istringstream;

int main(void)
{
	string input("Input test 123 4.7 A");
	istringstream inputString(input);

	string string1;
	string string2;

	int integer;
	double double1;
	char character;

	inputString >> string1 >> string2 >> integer >> double1 >> character;

	cout << "\nstring1: " << string1
		<< "\nstring2: " << string2 << "\n   int: " << integer
		<< "\ndouble: " << double1 << "\n  char: " << character;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <strstream>
using namespace std;

int main(void)
{
	char s[] = "10 Hello 0x75 42.73 OK";

	istrstream ins(s);

	int i;
	char str[80];
	float f;

	// reading: 10 Hello
	ins >> i;
	ins >> str;
	cout << i << " " << str << endl;

	// reading 0x75 42.73 OK
	ins >> hex >> i;
	ins >> f;
	ins >> str;

	cout << hex << i << " " << f << " " << str;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <strstream>
using namespace std;

int main(void)
{
	char s[] = "1.3 this is a test <<>><<?!\n";

	istrstream ins(s);

	char ch;

	ins.unsetf(ios::skipws); // don't skip spaces
	while (ins) { // false when end of array is reached
		ins >> ch;
		cout << ch;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <strstream>
using namespace std;

int main(void)
{
	char *p = "this is a test\1\2\3\4\5\6\7";

	istrstream ins(p);

	char ch;


	while (!ins.eof()) {
		ins.get(ch);
		cout << hex << (int)ch << ' ';

	}
	return 0;
}
#endif