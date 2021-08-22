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

	// demonstrate replace 
	cout << "Replace 8 characters in str1 with str2:\n";
	str1.replace(7, 8, str2);
	cout << str1 << endl;

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
	string string1("abc edfgh ijk lmno pqr stu vw xyz");

	cout << "Original string:\n" << string1 << endl << endl;

	int position = string1.find("."); // find first period

	while (position != string::npos)
	{
		string1.replace(position, 2, "12345;;123", 5, 2);
		position = string1.find(".", position + 1);
	}

	cout << string1 << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string credit_card("4578 9906 512 6661");
	cout << "Credit card number: " << credit_card;

	// equivalent of strset()
	credit_card.assign(credit_card.length(), '*');
	cout << "\nMore secure display of credit card number: " << credit_card;
}
#endif



#if 0
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string credit_card("4578 9906 512 6661");
	cout << "Credit card number: " << credit_card;

	// equivalent of strnset()
	credit_card.replace(0, credit_card.length() - 4, credit_card.length() - 4, '*');
	cout << "\nSecure display of credit card number: " << credit_card;

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

	// Create an iterator to a string.
	string::iterator itr;

	// Now, replace 'bigger' with 'larger'.
	cout << "Replace bigger with larger.\n";
	itr = find(strA.begin(), strA.end(), 'b');
	strA.replace(itr, itr + 6, "larger");
	cout << strA << "\n\n";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>

using namespace std;

bool search_and_replace(string &str, const string &oldsubstr,const string &newsubstr);

int main(void)
{
	string str = "This is a test. So is this.";

	while (search_and_replace(str, "is", "was"))
		cout << str << endl;

	cout << endl;

	string oldstr("So");
	string newstr("So too");
	cout << "Replace 'So' with 'So too'" << endl;
	search_and_replace(str, oldstr, newstr);
	cout << str << endl;

	return 0;
}

bool search_and_replace(string &str, const string &oldsubstr, const string &newsubstr) {
	string::size_type startidx;

	startidx = str.find(oldsubstr);
	if (startidx != string::npos) {
		str.replace(startidx, oldsubstr.size(), newsubstr);
		return true;
	}

	return false;
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
	string string1("abc edfgh ijk lmno pqr stu vw xyz");

	cout << "Original string:\n" << string1 << endl << endl;

	int position = string1.find(" "); // find first space

	// 
	while (position != string::npos)
	{
		string1.replace(position, 1, ".");
		position = string1.find(" ", position + 1);
	}
	cout << string1 << "\n\nAfter second replacement:\n";

	return 0;
}
#endif