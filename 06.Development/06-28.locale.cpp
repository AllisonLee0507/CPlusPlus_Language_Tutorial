#if 0
#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main(void)
{
	locale loc(""); // Create a copy of the user's locale
	cout << "Locale name = " << loc.name( ) << endl;
	
	cout.imbue(loc); // Tell cout to use the formatting of
	                // the user's locale
	
	cout << "pi in locale " << cout.getloc( ).name( ) << " is " << 3.14 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <locale>

using namespace std;

int main(void)
{
	// Create a locale for US English.
	locale usloc("English_US");
	
	// Set the locale of cout to US English.
	cout.imbue(usloc);
	
	// Get a moneypunct facet for cout.
	const moneypunct<char> &us_monpunct = use_facet<moneypunct<char> >(cout.getloc());
	
	cout << "  Currency symbol: " << us_monpunct.curr_symbol() << endl;
	cout << " Decimal point: " << us_monpunct.decimal_point() << endl;
	cout << " Thousands separator: " << us_monpunct.thousands_sep() << endl;
	cout << " Fraction digits: " << us_monpunct.frac_digits() << endl;
	
	cout << " Number of grouping rules: " << us_monpunct.grouping().size() << endl;
	
	for(unsigned i=0; i < us_monpunct.grouping().size(); ++i)
	cout << " Size of group " << i << ": "
	     << (int)us_monpunct.grouping()[0] << endl;
	
	cout << endl;
	
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <locale>

using namespace std;

int main(void)
{
	double balance = 1234.56;
	
	locale usloc("English_US");
	locale gloc("German_Germany");
	
	cout << showbase;
	
	cout.imbue(usloc);
	const money_put<char> &us_mon = use_facet<money_put<char> >(cout.getloc());
	
	us_mon.put(cout, false, cout, ' ', "123456");
	us_mon.put(cout, true, cout, ' ', -299);
	us_mon.put(cout, false, cout, ' ', balance * 100);
	return 0;
}
#endif



#if 0
include <iostream>
#include <locale>

using namespace std;

int main(void)
{
	double balance = 5467.87;
	
	locale usloc("English_US");
	locale gloc("German_Germany");
	
	cout << showbase;
	
	cout.imbue(usloc);
	const money_put<char> &us_mon = use_facet<money_put<char> >(cout.getloc());
	
	cout << "Now show money in international German format:\n";
	cout.imbue(gloc);
	const money_put<char> &g_mon = use_facet<money_put<char> >(cout.getloc());
	
	g_mon.put(cout, true, cout, ' ', 123456);
	cout << endl;
	g_mon.put(cout, true, cout, ' ', -299);
	cout << endl;
	g_mon.put(cout, true, cout, ' ', balance * 100);
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <locale>
using namespace std;

int main(void)
{
	// use classic C locale to read data from standard input
	cin.imbue(locale::classic());
	
	// use a German locale to write data to standard ouput
	cout.imbue(locale("de_DE"));
	
	// read and output floating-point values in a loop
	double value;
	while (cin >> value) {
		cout << value << endl;
	}
}
#endif



#if 0
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(void)
{
	// Use a fixed format with 2 decimal places.
	cout << fixed << setprecision(2);
	
	cout << "Default format: " << 12345678.12 << "\n\n";
	
	// Set the locale to English.
	locale eloc("English");
	cout.imbue(eloc);
	
	cout << "English format: " << 12345678.12 << "\n\n";
	
	locale gloc("German");
	cout.imbue(gloc);
	
	cout << "German format: " << 12345678.12 << "\n\n";
	
	return 0;
}
#endif



#if 0
#include <locale>
#include <iostream>
#include <cstdlib>
#include <iterator>

int main(void)
{
	// create copy of current global locale
	std::locale loc;
	
	// iterator to read from standard input
	typedef std::istreambuf_iterator<char> InIt;
	InIt beg = InIt(std::cin);
	InIt end = InIt();
	
	// stream which defines input format
	std::ios_base& fmt = std::cin;
	
	// declare output arguments
	std::ios_base::iostate err;
	float value;
	
	// get numeric input facet of the locale loc
	std::num_get<char, InIt> const& ng
	  = std::use_facet<std::num_get<char, InIt> >(loc);
	
	// read value with numeric input facet
	ng.get(beg, end, fmt, err, value);
	
	// print value or error message
	if (err == std::ios_base::goodbit) {
	    std::cout << "value: " << value << '\n';
	}
	else if (err == std::ios_base::eofbit) {
	    std::cout << "value: " << value << " (EOF encountered)\n";
	}
	else if (err & std::ios_base::badbit) {
	    std::cerr << "fatal error while reading numeric value\n";
	    return EXIT_FAILURE;
	}
	else if (err & std::ios_base::failbit) {
	    std::cerr << "format error while reading numeric value\n";
	    return EXIT_FAILURE;
	}
	return 0;
}
#endif



#if 0
#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

class Separator_facet: public numpunct<char>
{
public:
	explicit Separator_facet( size_t refs = 0): numpunct<char>( refs ){}

protected:
	virtual string do_grouping() const{ return "\3"; }
};

int main(void)
{
	const int million = 1000000;
	const double number = 1234.56789;
	cout << million << fixed << setprecision( 5 ) << number;
	
	locale separator_locale( cout.getloc(), new Separator_facet );
	cout.imbue( separator_locale );
	cout << million << " " << number << endl;
	
	return 0;
}
#endif

