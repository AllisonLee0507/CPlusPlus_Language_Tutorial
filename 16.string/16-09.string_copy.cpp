#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(void)
{
	string string1("STRINGS");

	int length = string1.length();
	char *ptr2 = new char[length + 1];

	string1.copy(ptr2, length, 0);
	ptr2[length] = '\0';

	cout << "\nptr2 is " << ptr2 << endl;
	delete[] ptr2;

	return 0;
}
#endif