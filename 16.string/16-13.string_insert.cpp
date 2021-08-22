#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1("String handling C++ style.");
	string str2("STL Power");

	cout << "Initial strings:\n";
	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << "\n\n";

	// demonstrate insert()
	cout << "Insert str2 into str1:\n";
	str1.insert(6, str2);
	cout << str1 << "\n\n";

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
	string string1("AAAAAAA end");
	string string2("CCCCCCC ");
	string string3("12345678");
	string string4("xx");

	cout << "Initial strings:\nstring1: " << string1
		<< "\nstring2: " << string2 << "\nstring3: " << string3
		<< "\nstring4: " << string4 << "\n\n";

	// insert string2 at location 10 in string1
	string1.insert(10, string2);

	cout << "Strings after insert:\nstring1: " << string1
		<< "\nstring2: " << string2 << "\nstring3: " << string3
		<< "\nstring4: " << string4 << endl;
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
	string string1("beginning end");
	string string2("middle ");
	string string3("12345678");
	string string4("xx");

	cout << "Initial strings:\nstring1: " << string1
		<< "\nstring2: " << string2 << "\nstring3: " << string3
		<< "\nstring4: " << string4 << "\n\n";

	// insert string4 at location 3 in string3
	string3.insert(3, string4, 0, string::npos);

	cout << "Strings after insert:\nstring1: " << string1
		<< "\nstring2: " << string2 << "\nstring3: " << string3
		<< "\nstring4: " << string4 << endl;
	return 0;
}
#endif



#if 0
#include <iostream>  
#include <string>  
using namespace std;

int main(void)
{
	string s1("this is a test");  
	string s2("is");  
	string s3("test");

	s1.erase(0, 7);
	s1.replace(9, 5, s2);
	s1.replace(0, 1, "s");
	s1.insert(0, s3);
	s1.erase(s1.size() - 1, 1);
	s1.append(3, '!');

	int x = s1.find(' ');
	while (x < s1.size()){
		s1.replace(x, 1, "/");
		x = s1.find(' ');
	}
	cout << "s1: " << s1 << endl;

	return 0;
}
#endif