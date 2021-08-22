#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(void)
{
	string string1("Testing iterators");
	string::const_iterator iterator1 = string1.begin();

	cout << "string1 = " << string1
		<< "\n(Using iterator iterator1) string1 is: ";

	while (iterator1 != string1.end())
	{
		cout << *iterator1;
		iterator1++;
	}

	cout << endl;

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

	// use iterator
	p = str1.begin();
	while (p != str1.end())
		cout << *p++;
	cout << endl;


	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main(void)
{
	string text = "asdf asdf asdf asdf asdf";

	size_t start = text.find_first_not_of("df");

	cout << start;
	cout << string::npos;

	return 0;
}
#endif