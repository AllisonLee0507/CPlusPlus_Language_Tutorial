#if 0
#include <iostream.h>
#include <string>
using std::string;

int main(void)
{
	string s1 = "abcdefghijk", s2 = "1234567890", s3, s4, s5;

	s3 = s1 + s2;
	cout << s3 << endl;

	s4 = s3;
	if (s4 == s3)
		cout << " s4==s3 is true\n";

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
	cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2
		<< "\"; s3 is \"" << s3 << '\"'
		<< "\n\nThe results of comparing s2 and s1:"
		<< "\ns2 == s1 yields " << (s2 == s1 ? "true" : "false")
		<< "\ns2 != s1 yields " << (s2 != s1 ? "true" : "false")
		<< "\ns2 >  s1 yields " << (s2 > s1 ? "true" : "false")
		<< "\ns2 <  s1 yields " << (s2 < s1 ? "true" : "false")
		<< "\ns2 >= s1 yields " << (s2 >= s1 ? "true" : "false")
		<< "\ns2 <= s1 yields " << (s2 <= s1 ? "true" : "false");

	return 0;
}
#endif



#if 0
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cwctype>

using namespace std;

inline bool caseInsCharCompareN(char a, char b) {
	return(toupper(a) == toupper(b));
}


bool caseInsCompare(const string& s1, const string& s2) {
	return((s1.size() == s2.size()) &&
		equal(s1.begin(), s1.end(), s2.begin(), caseInsCharCompareN));
}

int main(void)
{
	string s1 = "In the BEGINNING...";
	string s2 = "In the beginning...";

	if (caseInsCompare(s1, s2))
		cout << "Equal!\n";


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
	string string1("AAAAAAAAAAAAAA");
	string string2("BBBBBBBBBBBBBB");
	string string3("CCCCCCCCCCCCCC");
	string string4(string2);

	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << "\nstring4: " << string4 << "\n\n";

	// comparing string2 and string4
	int result = string4.compare(0, string2.length(), string2);

	if (result == 0)
		cout << "string4.compare( 0, string2.length(), " << "string2 ) == 0" << endl;
	else {
		if (result > 0)
			cout << "string4.compare( 0, string2.length(), " << "string2 ) > 0" << endl;
		else
			cout << "string4.compare( 0, string2.length(), "
			<< "string2 ) < 0" << endl;
	}

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
	string string1("AAAAAAAAAAAAAA");
	string string2("BBBBBBBBBBBBBB");
	string string3("CCCCCCCCCCCCCC");
	string string4(string2);

	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << "\nstring4: " << string4 << "\n\n";

	// comparing string1 and string4
	if (string1 == string4)
		cout << "string1 == string4\n";
	else{
		if (string1 > string4)
			cout << "string1 > string4\n";
		else // string1 < string4
			cout << "string1 < string4\n";
	}

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
	string string1("AAAAAAAAAAAAAA");
	string string2("BBBBBBBBBBBBBB");
	string string3("CCCCCCCCCCCCCC");
	string string4(string2);

	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << "\nstring4: " << string4 << "\n\n";


	// comparing string1 and string2
	int result = string1.compare(string2);

	if (result == 0)
		cout << "string1.compare( string2 ) == 0\n";
	else {
		if (result > 0)
			cout << "string1.compare( string2 ) > 0\n";
		else
			cout << "string1.compare( string2 ) < 0\n";
	}

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
	string string1("AAAAAAAAAAAAAA");
	string string2("BBBBBBBBBBBBBB");
	string string3("CCCCCCCCCCCCCC");
	string string4(string2);

	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << "\nstring4: " << string4 << "\n\n";

	// comparing string1 (elements 2-5) and string3 (elements 0-5)
	int result = string1.compare(2, 5, string3, 0, 5);

	if (result == 0)
		cout << "string1.compare( 2, 5, string3, 0, 5 ) == 0\n";
	else {
		if (result > 0)
			cout << "string1.compare( 2, 5, string3, 0, 5 ) > 0\n";
		else
			cout << "string1.compare( 2, 5, string3, 0, 5 ) < 0\n";
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <set>
#include <string>
#include <functional>
#include <cassert>

using namespace std;

struct strPtrLess {
	bool operator( )(const string* p1, const string* p2) {
		return(*p1 < *p2);
	}
};

int main(void)
{
	set<string*, strPtrLess> setStrPtr;  // less-than functor
	string s1 = "T";
	string s2 = "D";
	string s3 = "H";

	setStrPtr.insert(&s1);
	setStrPtr.insert(&s2);
	setStrPtr.insert(&s3);

	for (set<string*, strPtrLess>::const_iterator p = setStrPtr.begin(); p != setStrPtr.end(); ++p)
		cout << **p << endl;


	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	string saying1("this is a test");
	string saying2("this is another test");

	// equivalent of strncmp()
	int result = saying1.compare(0, 6, saying2, 0, 6);
	if (result < 0)
		cout << "\"" << saying1.substr(0, 6) << "\" is less than \"" << saying2.substr(0, 6) << "\"";

	else if (result > 0)
		cout << "\"" << saying1.substr(0, 6) << "\" is greater than \"" << saying2.substr(0, 6) << "\"";
	else
		cout << "\"" << saying1.substr(0, 6) << "\" is equal to \"" << saying2.substr(0, 6) << "\"";


	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	string saying1("this is a test");
	string saying2("this is another test");

	// generalization of strncmp()
	cout << "\n\nCOMPARE SUBSTRINGS OF DIFFERENT LENGTHS AND INDEXES\n";
	if (saying1.substr(2, 11) < saying2.substr(14, 17))
		cout << "\"" << saying1.substr(2, 11) << "\" is less than \""
		<< saying2.substr(14, 17) << "\"";
	else if (saying1.substr(2, 11) > saying2.substr(14, 17))
		cout << "\"" << saying1.substr(2, 11)
		<< "\" is greater than \"" << saying2.substr(14, 17) << "\"";
	else
		cout << "\"" << saying1.substr(2, 11) << "\" is equal to \""
		<< saying2.substr(14, 17) << "\"";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string saying1( "this is a test" );
	string saying2("this is another test");

	// equivalent of strcmp()
	int result = saying1.compare(saying2);
	if (result < 0)
		cout << "\"" << saying1 << "\"\nis less than\n\"" << saying2 << "\"";
	else if (result > 0)
		cout << "\"" << saying1 << "\"\nis greater than\n\"" << saying2 << "\"";
	else
		cout << "\"" << saying1 << "\"\nis equal to \n\"" << saying2 << "\"";

	// equivalent of strcmp()
	if (saying1 < saying2)
		cout << "\"" << saying1 << "\"\nis less than\n\"" << saying2 << "\"";
	else if (saying1 > saying2)
		cout << "\"" << saying1 << "\"\nis greater than\n\"" << saying2 << "\"";
	else
		cout << "\"" << saying1 << "\"\nis equal to\n\"" << saying2 << "\"";

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	char c1[10] = "HELLO";
	char c2[10] = "BYE BYE";

	// perform lexicographical comparison of c1 and c2
	bool result = std::lexicographical_compare(c1, c1 + 10, c2, c2 + 10);
	cout << c1 << (result ? " is less than " :
		" is greater than or equal to ") << c2 << endl;

	return 0;
}
#endif