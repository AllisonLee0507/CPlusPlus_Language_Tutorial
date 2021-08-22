#if 0
#include <iostream>
#include <string>
using namespace std;
using std::cout;
using std::cin;

int main(void)
{
	string s = "www.java2s.com \n";
	cout << s;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1("Alpha");
	string str2("Beta");
	string str3("Omega");
	string str4;

	// assign a string
	str4 = str1;
	cout << str1 << "\n" << str3 << "\n";

	// concatenate two strings
	str4 = str1 + str2;
	cout << str4 << "\n";

	// concatenate a string with a C-string
	str4 = str1 + " to " + str3;
	cout << str4 << "\n";

	// compare strings
	if (str3 > str1) cout << "str3 > str1\n";
	if (str3 == str1 + str2)
		cout << "str3 == str1+str2\n";

	/* A string object can also be
	assigned a normal string. */
	str1 = "This is a null-terminated string.\n";
	cout << str1;

	// create a string object using another string object
	string str5(str1);
	cout << str5;

	// input a string
	cout << "Enter a string: ";
	cin >> str5;
	cout << str5;

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(void)
{
	string s1("AA1234567890asdfasdf");
	string s2(" AAB");
	string s3;

	// test copy constructor
	string *s4Ptr = new string(s1);
	cout << "\n*s4Ptr = " << *s4Ptr << "\n\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1("A");
	string str2("B");
	string str3("G");
	string str4;

	cout << "  str1: " << str1 << endl;
	cout << "  str2: " << str2 << endl;
	cout << "  str3: " << str3 << "\n\n";

	// Create a string object using another string object.
	cout << "Initialize str5 with the contents of str1.\n";
	string str5(str1);
	cout << "str5: " << str5 << "\n\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	string strA("This is a test.");

	// Create a string from a vector<char>.
	vector<char> vec;
	for (int i = 0; i < 10; ++i)
		vec.push_back('A' + i);

	string strC(vec.begin(), vec.end());
	cout << "Here is strC, which is constructed from a vector:\n";
	cout << strC << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string arrStr[5] = { "A", "B", "C", "D", "E" };

	for (string* p = &arrStr[0]; p != &arrStr[5]; ++p) {
		cout << *p << endl;
	}

}
#endif



#if 0
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	ostringstream outputString;
	string s1("Output of several data types "),
		s2("to an ostringstream object:"),
		s3("\n        double: "),
		s4("\n           int: "),
		s5("\naddress of int: ");
	double d = 123.4567;
	int i = 22;

	outputString << s1 << s2 << s3 << d << s4 << i << s5 << &i;
	cout << "outputString contains:\n" << outputString.str();

	outputString << "\nmore characters added";
	cout << "\n\nafter additional stream insertions,\n"
		<< "outputString contains:\n" << outputString.str()
		<< endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	string input("Input test 123 4.7 A");
	istringstream inputString(input);
	string string1, string2;
	int i;
	double d;
	char c;

	inputString >> string1 >> string2 >> i >> d >> c;

	cout << "The following items were extracted\n"
		<< "from the istringstream object:"
		<< "\nstring: " << string1
		<< "\nstring: " << string2
		<< "\n   int: " << i
		<< "\ndouble: " << d
		<< "\n  char: " << c;

	// attempt to read from empty stream
	long l;

	if (inputString >> l)
		cout << "\n\nlong value is: " << l << endl;
	else
		cout << "\n\ninputString is empty" << endl;

	return 0;
}
#endif