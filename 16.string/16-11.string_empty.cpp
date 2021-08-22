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

	if (phrase.empty())
		cout << "\nThe phrase is no more.\n";

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
	cout << "\n\nTesting s3.empty():" << endl;

	if (s3.empty())
	{
		cout << "s3 is empty; assigning s1 to s3;" << endl;
		s3 = s1;
		cout << "s3 is \"" << s3 << "\"";
	}

	return 0;
}
#endif