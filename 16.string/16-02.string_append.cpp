#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(void)
{
	string string1("cat");
	string string3;

	string3.assign(string1);

	cout << "string1: " << string1
		<< "\nstring3: " << string3 << "\n\n";


	string3 += "pet";
	string3.append(string1, 1, string1.length() - 1);

	cout << "string1: " << string1
		<< "\nstring3: " << string3 << "\n\n";

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


	// Assign one string to another.
	str4 = str1;
	cout << "str4 after being assigned str1: " << str4 << "\n\n";

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
	string string1("cat");
	string string2;
	string string3;

	string2 = string1;
	string3.assign(string1);

	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << "\n\n";

	// overloaded +=
	string3 += "pet";
	string1.append("acomb");

	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << "\n\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1("cat"), s5;

	s5 = "this is a test";
	s5.append(s1, 4, s1.size());

	return 0;
}
#endif