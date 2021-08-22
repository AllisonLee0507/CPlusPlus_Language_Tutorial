#if 0
#include <iostream>
#include <complex>
using namespace std;

int main(void)
{
	complex<double> cmpx1(1, 0);
	complex<double> cmpx2(1, 1);
	
	cout << cmpx1 << " " << cmpx2 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <complex>
using namespace std;

int main(void)
{
	complex<double> cmpx1(1, 0);
	complex<double> cmpx2(1, 1);
	
	cout << cmpx1 << " " << cmpx2 << endl;
	
	complex<double> cmpx3 = cmpx1 + cmpx2;
	cout << cmpx3 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <complex>
using namespace std;

int main(void)
{
	complex<double> cmpx1(1, 0);
	complex<double> cmpx2(1, 1);
	
	cout << cmpx1 << " " << cmpx2 << endl;
	
	cmpx1 += 10;
	cmpx2 += 10;
	cout << cmpx1 << " " << cmpx2 << endl;
	
	return 0;
}
#endif


#if 0
#include <complex>
#include <iostream>

using namespace std;

int main(void)
{
	double rho = 3.0; // magnitude
	double theta = 3.141592 / 2; // angle
	complex<double> coord = polar(rho, theta);
	
	cout << "rho = " << abs(coord) << ", theta = " << arg(coord) << endl;
	coord += polar(4.0, 0.0);
	cout << "rho = " << abs(coord) << ", theta = " << arg(coord) << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <complex>
using namespace std;

int main(void)
{
    complex<double> c1(4.0,3.0);

    cout << "c1: " << c1 << endl;

    complex<float> c2(polar(5.0,0.75));

    cout << "c1: magnitude: " << abs(c1)
         << " (squared magnitude: " << norm(c1) << ") "
         <<    " phase angle: " << arg(c1) << endl;
    cout << "c2: magnitude: " << abs(c2)
         << " (squared magnitude: " << norm(c2) << ") "
         <<    " phase angle: " << arg(c2) << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <complex>
using namespace std;

int main(void)
{
    complex<double> c1(4.0,3.0);

    cout << "c1: " << c1 << endl;

    complex<float> c2(polar(5.0,0.75));

    cout << "c1 conjugated:  " << conj(c1) << endl;
    cout << "c2 conjugated:  " << conj(c2) << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <complex>
using namespace std;

int main(void)
{
    complex<double> c1(4.0,3.0);

    cout << "c1: " << c1 << endl;

    complex<float> c2(polar(5.0,0.75));

    cout << "4.4 + c1 * 1.8: " << 4.4 + c1 * 1.8 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <complex>
using namespace std;

int main(void)
{
    complex<double> c1(4.0,3.0);

    cout << "c1: " << c1 << endl;

    complex<float> c2(polar(5.0,0.75));

    cout << "c1 + c2:        "
         << c1 + complex<double>(c2.real(),c2.imag()) << endl;
         
	return 0;
}
#endif
