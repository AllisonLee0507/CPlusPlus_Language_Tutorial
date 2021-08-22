#if 0
#include <iostream>
#include <cstring>

using namespace std;

int main() {

	const char *url = "server.com";
	const char *url2 = "Apache.org";
	const char *emailaddr = "Herb@server.com";

	const char *tld[] = { ".com", ".net", ".org" };

	const char *p;

	// determine if url and url2 contain .com, .net, or .org.
	for (int i = 0; i < 3; i++) {
		p = strstr(url, tld[i]);
		if (p) cout << url << " has top-level domain " << tld[i] << endl;

		p = strstr(url2, tld[i]);
		if (p) cout << url2 << " has top-level domain " << tld[i] << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cstring>

using namespace std;

int main() {

	const char *url = "server.com";
	const char *url2 = "Apache.org";
	const char *emailaddr = "Herb@server.com";

	const char *tld[] = { ".com", ".net", ".org" };

	const char *p;

	// Search for a specific character.
	p = strchr(emailaddr, '@');
	if (p) cout << "Site name of e-mail address is: " << p + 1 << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cstring>

using namespace std;

int main() {

	const char *url = "server.com";
	const char *url2 = "Apache.org";
	const char *emailaddr = "Herb@server.com";

	const char *tld[] = { ".com", ".net", ".org" };

	const char *p;

	// Search for any of a set of characters. In this case, find the first @ or period.
	p = strpbrk(emailaddr, "@.");

	if (p) cout << "Found " << *p << endl;

	return 0;
}
#endif



#if 0
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool nocase_compare(char c1, char c2)
{
	return toupper(c1) == toupper(c2);
}

int main()
{
	string s1("This is a string");
	string s2("STRING");

	// compare case insensitive
	if (s1.size() == s2.size() &&        // ensure same sizes
		equal(s1.begin(), s1.end(),      // first source string
		s2.begin(),               // second source string
		nocase_compare)) {        // comparison criterion
		cout << "the strings are equal" << endl;
	}
	else {
		cout << "the strings are not equal" << endl;
	}

	// search case insensitive
	string::iterator pos;
	pos = search(s1.begin(), s1.end(),   // source string in which to search
		s2.begin(), s2.end(),   // substring to search
		nocase_compare);       // comparison criterion
	if (pos == s1.end()) {
		cout << "s2 is not a substring of s1" << endl;
	}
	else {
		cout << '"' << s2 << "\" is a substring of \""
			<< s1 << "\" (at index " << pos - s1.begin() << ")"
			<< endl;
	}
}
#endif

