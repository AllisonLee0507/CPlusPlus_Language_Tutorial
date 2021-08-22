#if 0
#include <iostream>
#include <string>      // include for C++ standard string class
using namespace std;
int main(void)
{
	string stringA = "C++";
	string stringB = "Is Cool";

	cout << "Length of stringA = " << stringA.length() << endl;
	cout << "Length of stringB = " << stringB.length() << endl;

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

	// Display the size of str1.
	cout << "str1 contains " << str1.size() << " characters.\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string str1("Strings handling is easy in C++");
	string::iterator p;
	unsigned int i;

	// use size()
	for (i = 0; i<str1.size(); i++)
		cout << str1[i];
	cout << endl;


	return 0;
}
#endif



#if 0
#include <string>
#include <iostream>

using namespace std;

int main(void)
{

	string s = "";
	string sr = "";

	sr.reserve(9);

	cout << "s.length    = " << s.length() << '\n';
	cout << "s.capacity  = " << s.capacity() << '\n';
	cout << "s.max_size  = " << s.max_size() << '\n';

	cout << "sr.length   = " << sr.length() << '\n';
	cout << "sr.capacity = " << sr.capacity() << '\n';
	cout << "sr.max_size = " << sr.max_size() << '\n';

	for (int i = 0; i < 20; ++i) {
		if (s.length() == s.capacity()) {
			cout << "s reached capacity of " << s.length()
				<< ", growing...\n";
		}
		if (sr.length() == sr.capacity()) {
			cout << "sr reached capacity of " << sr.length()
				<< ", growing...\n";
		}
		s += 'x';
		sr += 'x';
	}
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

	// Display the maximum string length.
	cout << "The maximum string length is: " << str1.max_size()
		<< "\n\n";

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

	// Display the capacity of str1.
	cout << "Capacity of str1: " << str1.capacity() << "\n\n";

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

	// Set the capacity of str4 to 128.
	cout << "Setting the capacity of str4 to 128\n";
	str4.reserve(128);
	cout << "Capacity of str4 is now: " << str4.capacity() << "\n\n";

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::boolalpha;

#include <string>
using std::string;

void display(const string &);

int main(void)
{
	string string1;

	cout << "Statistics before input:\n" << boolalpha;
	display(string1);

	cout << "\n\nEnter a string: ";
	cin >> string1; // delimited by whitespace
	cout << "The string entered was: " << string1;

	cout << "\nStatistics after input:\n";
	display(string1);


	return 0;
}

void display(const string &stringRef)
{
	cout << "capacity: " << stringRef.capacity() << "\nmax size: "
		<< stringRef.max_size() << "\nsize: " << stringRef.size()
		<< "\nlength: " << stringRef.length()
		<< "\nempty: " << stringRef.empty();
}
#endif



#if 0
#include <iostream>
#include <string>
using namespace std;

void printStats(const string &);

int main(void)
{
	string s;

	cout << "Stats before input:\n";
	printStats(s);

	cout << "\n\nEnter a string: ";
	cin >> s;  // delimited by whitespace
	cout << "The string entered was: " << s;

	cout << "\nStats after input:\n";
	printStats(s);

	s.resize(s.length() + 10);
	cout << "\n\nStats after resizing by (length + 10):\n";
	printStats(s);

	cout << endl;
	return 0;
}

void printStats(const string &str){
	cout << "capacity: " << str.capacity()
		<< "\nmax size: " << str.max_size()
		<< "\nsize: " << str.size()
		<< "\nlength: " << str.length()
		<< "\nempty: " << (str.empty() ? "true" : "false");
}
#endif