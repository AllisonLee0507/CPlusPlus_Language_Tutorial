#if 0
#include <iostream> 
#include <sstream> 
using namespace std;

int main(void)
{
	stringstream s("This is initial string.");

	// get string 
	string str = s.str();
	cout << str << endl;

	// output to string stream  
	s << "Numbers: " << 10 << " " << 123.2;

	int i;
	double d;
	s >> str >> i >> d;
	cout << str << " " << i << " " << d;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

double parse(const string& str) {
	stringstream ss(str);
	double d = 0;
	ss >> d;
	if (ss.fail()) {
		throw (str + " is not a number");
	}
	return (d);
}

int main(void)
{
	try {
		cout << parse("1.234e5") << endl;
		cout << parse("6.02e-2") << endl;
		cout << parse("asdf") << endl;
	}
	catch (string& e) {
		cerr << e << endl;
	}
}
#endif



#if 0
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
	stringstream ss;
	ss << "string " << 9 << 1.2;

	cout << ss.str() << endl;
	ss.str("");                  // Empty the string
	cout << ss.str() << endl;
}
#endif



#if 0
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
	stringstream ss;
	ss << "string " << 9 << 1.2;

	cout << ss.str() << endl;   // stringstream::str( ) returns a string
}
#endif