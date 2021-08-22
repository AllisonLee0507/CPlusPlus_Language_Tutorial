#if 0
#include <iostream>  
using namespace std;  
  
int main(void)
{   
	double f; // holds the length in feet  
	double m; // holds the conversion to meters  
	
	cout << "Enter the length in feet: "; 
	cin >> f; // read the number of feet   
	
	m = f / 3.28; // convert to meters 
	cout << f << " feet is " << m << " meters.";  
	
	return 0; 
}
#endif


#if 0
#include <iostream>  
using namespace std; 
 
int main(void)
{  
	int ivar;    
	double dvar; 
	
	ivar = 100; 
	
	dvar = 100.0; 
	
	cout << "Original value of ivar: " << ivar << "\n"; 
	cout << "Original value of dvar: " << dvar << "\n"; 
	
	cout << "\n"; 
	
	ivar = ivar / 3;  
	dvar = dvar / 3.0; 
	
	cout << "ivar after division: " << ivar << "\n"; 
	cout << "dvar after division: " << dvar << "\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
#include <cmath> 
using namespace std; 
  
int main(void)
{    
	double x, y, z; 
	
	x = 5; 
	y = 4; 
	
	z = sqrt(x*x + y*y); 
	
	cout << "Hypotenuse is " << z; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main(void)
{    
	double distance; 
	double lightspeed; 
	double delay; 
	double delay_in_min; 
	
	distance = 34000000.0; // 34,000,000 miles 
	lightspeed = 186000.0; // 186,000 per second 
	
	delay = distance / lightspeed;     
	
	cout <<  "Time delay when talking to Mars: " << 
	       delay << " seconds.\n"; 
	 
	delay_in_min = delay / 60.0; 
	
	cout <<  "This is " << delay_in_min << " minutes."; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
#include <cmath> 
using namespace std; 
 
int main(void)
{    
	double Principal = 11.11;    
	double IntRate = 0.075;
	double PayPerYear = 12.0;   
	double NumYears = 25;
	double Payment;      
	double numer, denom; 
	double b, e;         
	
	numer = IntRate * Principal / PayPerYear; 
	
	e = -(PayPerYear * NumYears); 
	b =  (IntRate / PayPerYear) + 1; 
	
	denom = 1 - pow(b, e); 
	 
	Payment = numer / denom; 
	
	cout <<  "Payment is " << Payment; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cmath> 
using namespace std; 
 
int main(void) 
{ 
	int num; 
	double sq_root; 
	
	for(num=1; num < 100; num++) { 
		sq_root = sqrt((double) num); 
		cout << num << " " << sq_root << '\n'; 
	} 
	
	return 0; 
}
#endif


#if 0
#include <iostream>

using namespace std;

int main(void)
{
	double height = 2.2, width = 3.3, length = 4.4;
	double perimeter = 0.0;                        
	
	double rollwidth = 21.0;                 
	double rolllength = 12.0*33.0;           
	
	int strips_per_roll = 0;                       
	int strips_reqd = 0;                           
	int nrolls = 0;                                
	
	
	strips_per_roll = rolllength / height;      
	perimeter = 2.0*(length + width);           
	strips_reqd = perimeter / rollwidth;        
	nrolls = strips_reqd / strips_per_roll;     
	
	cout << nrolls;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <cmath>

using namespace std;

double future_value(double p)
{  
   double b = 1000 * pow(1 + p / 100, 10);
   return b;
}

int main(void)
{  
	cout << "Please enter the interest rate in percent: ";
	double rate;
	cin >> rate;
	
	double balance = future_value(rate);
	cout << "After 10 years, the balance is " 
	  << balance << "\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{

	double dbl = 1.452;
	double dbl2 = 5;
	
	cout << "This should be 5: " << setw(2) << noshowpoint << dbl2 << endl;
	cout << "This should be @@1.452: " << setw(7) << setfill('@') << dbl << endl;
	
	return 0;
}
#endif

