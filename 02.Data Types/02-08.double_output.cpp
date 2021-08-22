#if 0
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
	const double x = .39;
	const double y = 27;
	
	cout<< ".39, fixed, 1 decimal place:  " << fixed << setprecision( 1 ) << x << endl
	  << ".39, fixed, 2 decimal places: "  << setprecision( 2 ) << x << endl
	  << ".39, fixed, 3 decimal places: "  << setprecision( 3 ) << x << endl << endl
	  << ".39, scientific, 1 decimal place:  "  << scientific << setprecision( 1 ) << x << endl
	  << ".39, scientific, 2 decimal places: "  << setprecision( 2 ) << x << endl
	  << ".39, scientific, 3 decimal places: "  << setprecision( 3 ) << x << endl << endl

	  // return to default floating-point output format
	  << resetiosflags( ios::fixed | ios::scientific )
	  << setprecision( 6 )
	
	  << ".39 and 27., default: "  << x << "    " << y << endl
	  << ".39 and 27., default, 1 decimal place:  "  << setprecision( 1 ) << x << "    " << y << endl
	  << ".39 and 27., default, 2 decimal places: "  << setprecision( 2 ) << x << "    " << y << endl
	  << ".39 and 27., default, 3 decimal places: "  << setprecision( 3 ) << x << "    " << y << endl << endl
	  << ".39 and 27., default, decimal point: "  << showpoint << x << "   " << y << endl
	  << ".39 and 27., default, decimal point, 1 decimal place:  "  << setprecision( 1 ) << x << "    " << y << endl
	  << ".39 and 27., default, decimal point, 2 decimal places: "  << setprecision( 2 ) << x << "    " << y << endl
	  << ".39 and 27., default, decimal point, 3 decimal places: "  << setprecision( 3 ) << x << "   " << y << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Default format: " << 123.123456789 << endl;
	
	cout << "Use a field width of 20:\n";
	cout << "|" << setw(20) << "Testing" << "|\n\n";
	cout << "Use a field width of 20 with left justification:\n";
	cout << "|" << setw(20) << left << "Testing" << "|\n\n";

  return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	cout << "Default format: " << 123.123456789 << endl;
	
	cout << "Default: " << 10.0 << endl;
	cout << "After setting the showpos and showpoint flags: ";
	cout << showpos << showpoint << 10.0 << "\n\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	cout << "Default format: " << 123.123456789 << endl;
	
	cout << "setw manipulator is useful when repeated field\n"
	   << "widths must be specified. For example:\n";
	cout << setw(8) << "this" << endl <<  setw(8) << "is" << endl
	   << setw(8) << "a" << endl << setw(8) << "column" << endl
	   << setw(8) << "of" << endl << setw(8) << "words";
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	cout << "Default format: " << 123.123456789 << endl;
	
	cout << "Scientific format with precision of 7: ";
	cout << scientific << 123.123456789 << endl;
	
	cout << "Return to default format: ";
	cout << resetiosflags(ios::floatfield) << setprecision(6)
	   << 123.123456789 << "\n\n";
	
	return 0;
}
#endif
