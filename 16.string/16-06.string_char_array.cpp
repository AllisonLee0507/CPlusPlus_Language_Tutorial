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

	// Use push_back() to add characters to str4.
	for (char ch = 'A'; ch <= 'Z'; ++ch)
		str4.push_back(ch);
	cout << "str4 after calls to push_back(): " << str4 << endl;
	cout << "Size and capacity of str4 is now " << str4.size() << " " << str4.capacity() << "\n\n";

	return 0;
}
#endif


#if 0
#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	string strSample("Good day String!");
	// Find substring "day" in it...
	size_t nOffset = strSample.find("day", 0);

	cout << "Locating all instances of character 'a'" << endl;
	const char chCharToSearch = 'a';
	size_t nCharacterOffset = strSample.find(chCharToSearch, 0);

	while (nCharacterOffset != string::npos)
	{
		cout << "'" << chCharToSearch << "' found";
		cout << " at position: " << nCharacterOffset << endl;

		// Make the 'find' function search forward from the next character onwards
		size_t nCharSearchOffset = nCharacterOffset + 1;

		nCharacterOffset = strSample.find(chCharToSearch, nCharSearchOffset);
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string sentence, words[10];
	int pos = 0, old_pos = 0, nwords, i = 0;

	sentence = "Eskimos have 23 ways to ";
	sentence += "describe snow";

	while (pos < sentence.size()) {
		pos = sentence.find(' ', old_pos);
		words[i++].assign(sentence, old_pos, pos - old_pos);
		cout << words[i - 1] << endl; //print words
		old_pos = pos + 1;
	}
	nwords = i;
	sentence = "C++ programmers ";
	for (i = 1; i < nwords - 1; ++i)
		sentence += words[i] + ' ';
	sentence += "windows";
	cout << sentence << endl;
}
#endif



#if 0
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main(void)
{
	string strSample ("Hello String!");

	// Find a character 'S' in the string using STL find algorithm
	string::iterator iCharS = find(strSample.begin(), strSample.end(), 'S');

	// If character found, 'erase' to deletes a character
	cout << "Erasing character 'S' from the sample string:" << endl;
	if (iCharS != strSample.end())
		strSample.erase(iCharS);

	cout << strSample;

	return 0;
}
#endif



#if 0
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main(void)
{
	string strSample("Hello String! Wake up to a beautiful day!");

	strSample.erase(13, 28);
	cout << strSample;

	return 0;
}
#endif


#if 0
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	string str1;

	str1.insert(str1.end(), 'h');
	str1.insert(str1.end(), 'e');
	str1.insert(str1.end(), 'l');
	str1.insert(str1.end(), 'l');
	str1.insert(str1.end(), 'o');

	for (string::const_iterator it = str1.begin(); it != str1.end(); ++it) {
		cout << *it;
	}
	cout << endl;

	return (0);
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
	string string1("STRINGS");

	cout << "string string1 is " << string1
		<< "\nstring1 converted to a C-Style string is "
		<< string1.c_str() << "\n";


	return 0;
}
#endif