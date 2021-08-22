#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(void)
{
	string s1("AA");
	string s2(" AAB");
	string s3;

	// 
	cout << "\n\ns1 += s2 yields s1 = ";
	s1 += s2; // test overloaded concatenation
	cout << s1;

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

	// Concatenate two strings.
	str4 = str1 + str3;
	cout << "str4 after begin assigned st1+str3: " << str4 << "\n\n";

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
	string s1("AA");
	string s2(" AAB");
	string s3;

	// 
	cout << "\n\ns1 += \" to you\" yields" << endl;
	s1 += " to you";
	cout << "s1 = " << s1 << "\n\n";

	return 0;
}
#endif
