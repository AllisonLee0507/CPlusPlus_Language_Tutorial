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

	return 0;
}
#endif