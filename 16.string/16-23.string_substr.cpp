#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(void)
{ 
	string s1("AA1234567890asdfasdf");
	string s2(" AAB");
	string s3;

	// test string member function substr
	cout << "The substring of s1 starting at location 0 for\n"
		<< "14 characters, s1.substr(0, 14), is:\n"
		<< s1.substr(0, 14) << "\n\n";

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
	string s1("AA1234567890asdfasdf");
	string s2(" AAB");
	string s3;

	// test substr "to-end-of-string" option
	cout << "The substring of s1 starting at\n"
		<< "location 5, s1.substr(5), is:\n"
		<< s1.substr(5) << endl;

	return 0;
}
#endif



#if 0
#include <string>
#include <iostream>

int main(void)
{ 
	using namespace std;

	string strSample("Good day String!");
	size_t nOffset = strSample.find("day", 0);

	size_t nSubstringOffset = strSample.find("day", 0);

	while (nSubstringOffset != string::npos)
	{
		cout << "\"day\" found at offset " << nSubstringOffset << endl;
		// Make the 'find' function search the next character onwards
		size_t nSearchOffset = nSubstringOffset + 1;

		nSubstringOffset = strSample.find("day", nSearchOffset);
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string filename, basename, extname, tmpname;
	const string suffix("tmp");

	/* for each command-line argument
	* (which is an ordinary C-string)
	*/
	for (int i = 1; i<argc; ++i) {
		// process argument as file name
		filename = argv[i];

		// search period in file name
		string::size_type idx = filename.find('.');
		if (idx == string::npos) {
			// file name does not contain any period
			tmpname = filename + '.' + suffix;
		}
		else {
			/* split file name into base name and extension
			* - base name contains all characters before the period
			* - extension contains all characters after the period
			*/
			basename = filename.substr(0, idx);
			extname = filename.substr(idx + 1);
			if (extname.empty()) {
				// contains period but no extension: append tmp
				tmpname = filename;
				tmpname += suffix;
			}
			else if (extname == suffix) {
				// replace extension tmp with xxx
				tmpname = filename;
				tmpname.replace(idx + 1, extname.size(), "xxx");
			}
			else {
				// replace any extension with tmp
				tmpname = filename;
				tmpname.replace(idx + 1, string::npos, suffix);
			}
		}

		// print file name and temporary name
		cout << filename << " => " << tmpname << endl;
	}
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

	n = s1.find("test");
	cout << n << endl;

	return 0;
}
#endif
