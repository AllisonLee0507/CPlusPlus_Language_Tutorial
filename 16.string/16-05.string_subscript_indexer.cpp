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

	string2[0] = string3[2] = 'r';

	cout << "string1: " << string1 << "\nstring2: " << string2 << "\nstring3: ";


	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	string text = "asdffdsaasdf";


	int vowels = 0;
	int consonants = 0;
	for (int i = 0; i < text.length(); i++)
	if (std::isalpha(text[i]))
		switch (std::tolower(text[i])) {
		case 'a': case 'e': case 'i':
		case 'o': case 'u':
			vowels++;
			break;
		default:
			consonants++;
	}

	cout << "Your input contained "
		<< vowels << " vowels and "
		<< consonants << " consonants."
		<< endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	string text = "asdffdsaasdf";


	int vowels = 0;
	int consonants = 0;
	for (int i = 0; i < text.length(); i++)
	if (std::isalpha(text[i]))
		switch (std::tolower(text[i])) {
		case 'a': case 'e': case 'i':
		case 'o': case 'u':
			vowels++;
			break;
		default:
			consonants++;
	}

	cout << "Your input contained "
		<< vowels << " vowels and "
		<< consonants << " consonants."
		<< endl;

	return 0;
}
#endif



#if 0
#include <iostream>  
#include <string>  
using namespace std;

int main(void)
{
	char charray[80];  
	string word;  

	cout << "Enter a word: ";
	cin >> word;
	int wlen = word.length();

	cout << "One character at a time: ";
	for (int j = 0; j<wlen; j++)
		cout << word.at(j);

	word.copy(charray, wlen, 0);
	charray[wlen] = 0;
	cout << "\nArray contains: " << charray << endl;
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


	if (phrase.find("eggplant") == string::npos)
		cout << "'eggplant' is not in the phrase.\n\n";

	return 0;
}
#endif
