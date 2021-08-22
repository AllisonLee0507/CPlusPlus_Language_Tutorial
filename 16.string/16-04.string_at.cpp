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

	// demonstrating member function at
	for (int i = 0; i < string3.length(); i++)
		cout << string3.at(i);

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1( "cat" ), s2, s3;

	s2 = s1;
	s3.assign(s1);
	cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: "
		<< s3 << "\n\n";

	// demonstrating member function at()
	int len = s3.length();
	for (int x = 0; x < len; ++x)
		cout << s3.at(x);

	return 0;
}
#endif