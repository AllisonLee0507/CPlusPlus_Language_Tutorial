#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::scientific;

int main(void)
{
	double x = 0.001234567;
	double y = 1.946e9;
	
	cout << "Displayed in default format:" << endl << x << '\t' << y << endl;
	
	cout << "\nDisplayed in scientific format:" << endl << scientific << x << '\t' << y << endl;
	
	cout << "\nDisplayed in fixed format:" << endl << fixed << x << '\t' << y << endl;
	return 0;
}
#endif


#if 0
#include <iostream.h>

int main(void)
{
	float a=100100.0, b=0.08;
	cout.setf(ios::right|ios::scientific|ios::showpoint);
	cout.width(20);   
	cout <<(-a*b);
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <iomanip>
#include <limits>
using std::cout;
using std::endl;
using std::setprecision;
using std::numeric_limits;

int main(void)
{
	const double pi = 3.14;
	cout << endl;
	
	for(double radius = .2 ; radius <= 3.0 ; radius += .2)
		cout << "radius = "
			<< setprecision(numeric_limits<double>::digits10 + 1)
			<< std::scientific << radius<< "  area = "
			<< std::setw(10) << setprecision(6)<< std::fixed << pi * radius * radius << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
	ios_base::fmtflags flags = cout.flags( );
	double pi = 3.14285714;
	
	cout << "pi = " << setprecision(5) << pi << '\n';
	
	cout.flags(flags);
}
#endif



#if 0
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(void)
{
	double root2 = sqrt( 2.0 );
	int places;
	
	cout << setiosflags( ios::fixed)
		<< "Square root of 2 with precisions 0-9.\n"
		<< "Precision set by the "
		<< "precision member function:" << endl;
	
	for ( places = 0; places <= 9; places++ ) {
		cout.precision( places );
		cout << root2 << '\n';
	}
	
	cout << "\nPrecision set by the "
		<< "setprecision manipulator:\n";
	
	for ( places = 0; places <= 9; places++ )
		cout << setprecision( places ) << root2 << '\n';
	
	return 0;
}
#endif
