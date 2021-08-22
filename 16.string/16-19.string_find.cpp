#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int i;
	string s1 = "this is a test.";
	string s2;

	i = s1.find("is");
	if (i != string::npos) {
		cout << "Match found at " << i << endl;
		cout << "Remaining string is:\n";
		s2.assign(s1, i, s1.size());
		cout << s2;
	}
	cout << "\n\n";


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
	string string1("This is a test string!");
	int location;

	cout << "Original string:\n" << string1
		<< "\n\n(find) \"is\" was found at: " << string1.find("is");


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
	string string1("This is a test string!");
	int location;

	cout << "Original string:\n" << string1
		<< "\n\n(find) \"is\" was found at: " << string1.rfind("is");


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
	string string1("This is a test string!");
	int location;

	location = string1.find_first_of("is");
	cout << "\n\n(find_first_of) found '" << string1[location]
		<< "at: " << location;

	return 0;
}
#endif



#if 0
#include <iostream>  
#include <string>  
using namespace std;

int main(void)
{ 
	string s1 = "this is a test";  
	int n;

	n = s1.find_first_of("is");
	cout << n << endl;

	return 0;
}
#endif


#if 0
#include <iostream>  
#include <string>  
using namespace std;

int main(void)
{
	string s1 = "this is a test";  
	int n;  

	n = s1.find_first_not_of("aeiouAEIOU");
	cout << "First consonant at " << n << endl;
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
	string string1("This is a test string!");
	int location;

	location = string1.find_last_of("is");
	cout << "\n\n(find_last_of) found '" << string1[location]
		<< " at: " << location;


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
	string string1("This is a test string!");
	int location;

	location = string1.find_first_not_of("is");
	cout << "\n\n(find_first_not_of) '" << string1[location]
		<< " " << location;

	return 0;
}
#endif



#if 0
#include <string>
#include <iostream>

int main(void)
{
	std::string s = "Search from the beginning";

	std::cout << s.find_last_not_of("from")     // Find the first that's not in this set, starting from the end
		<< '\n';
}
#endif