#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(void)
{
	string string1("STRINGS");

	const char *ptr1 = 0;
	ptr1 = string1.data();

	for (int i = 0; i < string1.length(); i++)
		cout << *(ptr1 + i); // use pointer arithmetic

	return 0;
}
#endif