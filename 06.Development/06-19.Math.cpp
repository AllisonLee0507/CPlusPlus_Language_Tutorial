#if 0
#include <iostream> 
#include <cstdlib>  
using namespace std; 
 
int main(void) 
{ 
	int result; 
	
	result = abs(-10); 
	
	cout << result; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
#include <cstdlib>  
using namespace std; 
 
int main(void) 
{ 
	int magic;  
	int guess;  
	
	magic = rand(); // get a random number 
	
	cout << "Enter your guess: "; 
	cin >> guess; 
	
	if(guess == magic) 
		cout << "Right"; 
	
	return 0; 
}
#endif



#if 0
#include <cmath>
#include <iostream>
using namespace std;

int main(void) 
{ 
	double number, dsqrt,dpow,dlog;
	
	cout << "Please enter a number \n";
	cin >> number;
	
	dsqrt =sqrt(number);
	dpow =pow(number,5);
	dlog =log(number);
	
	cout << " Math Example\n";
	cout << " Square Root is " << dsqrt << "\n";
	cout << " Raised to the fifth power is " << dpow << "\n";
	cout << " Log is " << dlog << "\n";
	
	return 0;
}
#endif



#if 0
#include <cmath>
#include <iostream>
using namespace std;

int main(void) 
{ 
	double angle, dsine,dcos,dtan;
	
	cout << "Please enter an angle in radians \n";
	cin >> angle;
	
	dcos =cos(angle);
	dsine =sin(angle);
	dtan =tan(angle);
	
	cout << " Your angles trigonometric functions are \n";
	cout << " Sine is " << dsine << "\n";
	cout << " Cosine is " << dcos << "\n";
	cout << " Tangent is " << dtan << "\n";
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void) 
{ 
	int base;  
	int exponent; 
	int i; 
	int power; 
	
	i = 1; 
	power = 1;
	
	cout << "Enter base as an integer: ";  
	cin >> base;
	
	cout << "Enter exponent as an integer: "; 
	cin >> exponent;
	
	while ( i <= exponent ) 
	{
		power *= base;
		i++;
	} 
	
	cout << power << endl; 
	return 0; 
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <cmath>
using namespace std; 

int main(void) 
{ 
	cout << fixed << setprecision( 1 ); 
	
	cout << "\nlog10(" << 1.0 << ") = " << log10( 1.0 )<< "\nlog10(" << 10.0 <<) = " << log10( 10.0 ) 
		<< "\nlog10(" << 100.0 << ") = " << log10( 100.0 ) ;
	cout << "\nfabs(" << 13.5 << ") = " << fabs( 13.5 )<< "\nfabs(" << 0.0 << ") = " << fabs( 0.0 )
		<< "\nfabs(" << -13.5 << ") = " << fabs( -13.5 );
	cout << "\nceil(" << 9.2 << ") = " << ceil( 9.2 )<< "\nceil(" << -9.8 << ")= " << ceil( -9.8 );
	cout << "\nfloor(" << 9.2 << ") = " << floor( 9.2 )<< "\nfloor(" << -9.8 <<) = " << floor( -9.8 );
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <cmath>
using namespace std; 

int main(void)
{
	cout << fixed << setprecision( 1 ); 
	
	cout << "\npow(" << 2.0 << ", " << 7.0 << ") = " << pow( 2.0, 7.0 ) << "\npow(" << 9.0 << ", " 
	  << 0.5 << ") = " << pow( 9.0, 0.5 );
	cout << setprecision(3) << "\nfmod("<< 13.675 << ", " << 2.333 << ") = "           << fmod( 13.675, 2.333 ) << setprecision( 1 ); 
	cout << "\nsin(" << 0.0 << ") = " << sin( 0.0 ); 
	cout << "\ncos(" << 0.0 << ") = " << cos( 0.0 );
	cout << "\ntan(" << 0.0 << ") = " << tan( 0.0 ) << endl;
	return 0;
}
#endif
