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

	// demonstrate erase()
	cout << "Remove 9 characters from str1:\n";
	str1.erase(6, 9);
	cout << str1 << "\n\n";

	return 0;
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

	cout << "Remove ' larger'.\n";
	itr = find(strA.begin(), strA.end(), 'l');
	strA.erase(itr, itr + 7);
	cout << strA << "\n\n";

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
	string string1("abcedfghijklmnopqrstuvwxyz");

	cout << "Original string:\n" << string1 << endl << endl;

	string1.erase(6);

	cout << "Original string after erase:\n" << string1
		<< "\n\nAfter first replacement:\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string word1 = "Game";
	string word2("Over");
	string word3(3, '!');

	string phrase = word1 + " " + word2 + word3;
	cout << phrase << endl;

	phrase.erase(4, 5);
	cout << "The phrase is now: " << phrase << endl;
	phrase.erase(4);
	cout << "The phrase is now: " << phrase << endl;
	phrase.erase();
	cout << "The phrase is now: " << phrase << endl;

	return 0;
}
#endif