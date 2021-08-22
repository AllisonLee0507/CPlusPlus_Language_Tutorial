#if 0
Manipulator            Purpose
boolalpha              Turns on boolalpha flag.
endl                   Outputs a newline.
ends                   Outputs a null.
dec                    Turns on dec flag. Turns off the hex and oct flags.
fixed                  Turns on fixed flag. Turns off the scientific flag.
flush                  Flushes the stream.
hex                    Turns on hex flag. Turns off the dec and oct flags.
internal               Turns on internal flag. Turns off the left and right flags.
left                   Turns on left flag. Turns off the right and internal flags.
noboolalpha            Turns off boolalpha flag.
noshowbase             Turns off showbase flag.
noshowpoint            Turns off showpoint flag.
noshowpos              Turns off showpos flag.
nounitbuf              Turns off unitbuf flag.
nouppercase            Turns off uppercase flag.
oct                    Turns on oct flag. Turns off the dec and hex flags.
right                  Turns on right flag. Turns off the left and internal flags.
scientific             Turns on scientific flag. Turns off the fixed flag.
showbase               Turns on showbase flag.
showpoint              Turns on showpoint flag.
showpos                Turns on showpos flag.
unitbuf                Turns on unitbuf flag.
uppercase              Turns on uppercase flag.
#endif


#if 0
#include <iostream>
using namespace std; 
void showflags(void);

int main(void)
{
	showflags();
	cout.setf(ios::right | ios::showpoint | ios::fixed);
	showflags();
}

void showflags(void){
	long flag_set, i;
	int j;
	char flags[15][12] = {
	  "skipws", "left", "right", "internal", "dec",
	  "oct", "hex", "showbase", "showpoint", "uppercase",
	  "showpos", "scientific", "fixed", "unitbuf",
	};
	
	flag_set = cout.flags();
	for (i=1, j=0; i<0x2000; i = i<<1, j++)
	  if (i & flag_set)
	     cout << flags[j] << " is on." << endl;
	  else
	     cout << flags[j] << " is off." << endl;
	cout << endl;
}
#endif


#if 0
/*
Manipulator                   Purpose                             Input/Output
boolalpha                     Turns on boolapha flag.             Input/Output
dec                           Turns on dec flag.                  Input/Output
endl                          Output a newline character and flush the stream.   Output
ends                          Output a null.                      Output
fixed                         Turns on fixed flag.                Output
flush                         Flush a stream.                     Output
hex                           Turns on hex flag.                  Input/Output
internal                      Turns on internal flag.             Output
left                          Turns on left flag.                 Output
nobooalpha                    Turns off boolalpha flag.           Input/Output
noshowbase                    Turns off showbase flag.            Output
noshowpoint                   Turns off showpoint flag.           Output
noshowpos                     Turns off showpos flag.             Output
noskipws                      Turns off skipws flag.              Input
nounitbuf                     Turns off unitbuf flag.             Output
nouppercase                   Turns off uppercase flag.           Output
oct                           Turns on oct flag.                  Input/Output
resetiosflags (fmtflags f)    Turn off the flags specified in f.  Input/Output
right                         Turns on right flag.                Output
scientific                    Turns on scientific flag.           Output
setbase(int base)             Set the number base to base.        Input/Output
setfill(int ch)               Set the fill character to ch.       Output
setiosflags(fmtflags f)       Turn on the flags specified in f.   Input/output
setprecision (int p)          Set the number of digits of precision. Output
setw(int w)                   Set the field width to w.           Output
showbase                      Turns on showbase flag.             Output
showpoint                     Turns on showpoint flag.            Output
showpos                       Turns on showpos flag.              Output
skipws                        Turns on skipws flag.               Input
unitbuf                       Turns on unitbuf flag.              Output
uppercase                     Turns on uppercase flag.            Output
ws                            Skip leading white space.           Input
*/
#endif



#if 0
#include <iostream>
#include <iomanip>
using namespace std;
   
int main(void)
{
	cout << hex << 100 << endl;
	cout << setfill('?') << setw(10) << 2343.0;
	
	return 0;
}
#endif



#if 0
#include <iostream>

int main(void)
{
	std::cout << "Hello World!\n";
	return 0;
}
#endif



#if 0
#include <iostream>
int main(void)
{
    std::cout << "test.\n";
    std::cout << "Here is 5: " << 5 << "\n";
    std::cout << "Here is a very big number:\t" << 70000;
    std::cout << (float) 5/8 << std::endl;
    std::cout << (double) 7000 * 7000 << std::endl;
    std::cout << "a liiiiiiiiiiiiiiiiiiiiiiine\n";
    return 0;
}
#endif



#if 0
#include <iostream> 

int main(void)
{
   std::cout << "Welcome ";
   std::cout << "to C++!\n";

   return 0;
}
#endif



#if 0
#include <iostream>

int main(void)
{
	int x = 5;
	int y = 7;
	
	std::cout << std::endl;
	std::cout << x + y << " " << x * y;
	std::cout << std::endl;
	
	return 0;
}
#endif



#if 0
#include <iostream.h>
int main(void)
{
	cout.setf(ios::showpos);
	cout.setf(ios::scientific);
	cout << 123 << "  "<< 123.456 << endl;
	
	cout.precision(3);
	cout.width(10);
	cout << 123 << "  "<< 123.456 << endl;;
	cout.fill('#');
	cout.width(10);
	cout.unsetf(ios::scientific|ios::showpos);
	cout.precision(5);
	cout << 123 << "  " << 123.456;
	
	return 0;
}
#endif



#if 0
#include <iostream>

int main(void)
{
	std::cout << "Welcome\nto\n\nC++!\n";
	
	return 0;
}
#endif




#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
  char *ptr; 
  ptr = "Pointers add power to C++.\n"; 
 
  cout << ptr; 
 
  return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
int box(int length, int width, int height); // return the volume 

int main(void) 
{ 
	cout << "The volume is " <<  box(10.1, 11.2, 3.3); 
	
	return 0; 
}

int box(int length, int width, int height) 
{ 
	return length * width * height ; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	cout.setf(ios::showpos); 
	cout.setf(ios::scientific); 
	
	cout << 123 << " " << 123.23 << " "; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	ios::fmtflags f; 
	
	f = cout.flags(); 
	
	if(f & ios::showpos) 
	cout << "showpos is set for cout.\n"; 
	else 
	cout << "showpos is cleared for cout.\n"; 
	
	cout << "\nSetting showpos for cout.\n"; 
	cout.setf(ios::showpos); 
	
	f = cout.flags(); 
	
	if(f & ios::showpos) 
	cout << "showpos is set for cout.\n"; 
	else 
	cout << "showpos is cleared for cout.\n"; 
	
	cout << "\nClearing showpos for cout.\n"; 
	cout.unsetf(ios::showpos); 
	
	f = cout.flags(); 
	
	if(f & ios::showpos) 
	cout << "showpos is set for cout.\n"; 
	else 
	cout << "showpos is cleared for cout.\n"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	cout.setf(ios::showpos); 
	cout.setf(ios::scientific); 
	cout << 123 << " " << 123.23 << "\n"; 
	
	cout.precision(2); // two digits after decimal point 
	cout.width(10);    // in a field of 10 characters 
	cout << 123 << " "; 
	cout.width(10);    // set width to 10 
	cout << 123.23 << "\n"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	cout.setf(ios::showpos); 
	cout.setf(ios::scientific); 
	cout << 123 << " " << 123.23 << "\n"; 
	
	cout.precision(2); // two digits after decimal point 
	cout.width(10);    // in a field of 10 characters 
	cout << 123 << " "; 
	cout.width(10);    // set width to 10 
	cout << 123.23 << "\n"; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	cout.setf(ios::showpos); 
	cout.setf(ios::scientific); 
	cout << 123 << " " << 123.23 << "\n"; 
	
	
	cout.fill('#');  // fill using # 
	cout.width(10);  // in a field of 10 characters 
	cout << 123 << " "; 
	cout.width(10);  // set width to 10 
	cout << 123.23; 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
#include <string.h>
using namespace std;
int main(void) 
{
	char One[] = "this is a test";
	
	int fullLength = strlen(One);
	int tooShort = fullLength -4;
	int tooLong = fullLength + 6;
	
	cout.write(One,fullLength) << "\n";
	cout.write(One,tooShort) << "\n";
	cout.write(One,tooLong) << "\n";
	return 0;
}
#endif



#if 0
#include <iostream> 
#include <iomanip> 
using namespace std; 
int main(void) 
{ 
	cout << setprecision(2) << 1000.243 << endl; 
	
	return 0; 
}
#endif




#if 0
#include <iostream> 
#include <iomanip> 
using namespace std; 
int main(void) 
{ 
	cout << setw(20) << "Hello there."; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) 
{ 
	cout << setiosflags(ios::showpos);
	cout << setiosflags(ios::showbase);
	cout << 123 << " " << hex << 123;
	
	return 0;
}
#endif



#if 0
#include <iostream> 
#include <iomanip> 
using namespace std; 
int main(void) 
{ 
	cout << setiosflags(ios::showpos) << setiosflags(ios::scientific) << 123 << 123.23; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
int main(void) 
{ 
	char s[80]; 
	
	cin >> ws >> s; 
	cout << s; 
	
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
	
	cout << "pi = " << scientific
	    << noshowpos
	    << pi << '\n';
	
	cout.flags(flags);
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
	
	cout << "pi = " << fixed            
	    << showpos                     
	    << setprecision(3)
	    << pi << '\n';    
	
	cout.flags(flags);
	return 0; 
}
#endif



#if 0
#include <iostream>
#include <iomanip>
using namespace std;

int main(void) 
{ 
	cout << setiosflags(ios::showpos);
	cout << setiosflags(ios::showbase);
	cout << 123 << " " << hex << 123;
	
	return 0; 
}
#endif



#if 0
#include <iostream>
using namespace std;

void showflags();

int main(void) 
{ 
	showflags();
	
	ios::fmtflags f = ios::showpos | ios::showbase | ios::oct | ios::right;
	cout.flags(f);
	
	showflags();
	
	return 0;
}

void showflags()
{
	ios::fmtflags f;
	long i;
	
	f = cout.flags(); // get flag settings
	
	// check each flag
	for(i=0x4000; i; i = i >> 1)
	if(i & f) cout << "1 ";
	else cout << "0 ";
	
	cout << " \n";
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void) 
{ 
	cout.setf(ios::hex, ios::basefield);
	
	cout << 100; // this displays 64
	
	return 0;
}
#endif




#if 0
#include <iostream>
using namespace std;

void showflags() ;

int main(void) 
{ 
	showflags();
	cout.setf(ios::right | ios::showpoint | ios::fixed);
	showflags();
	
	return 0;
}

void showflags()
{
	ios::fmtflags f;
	long i;
	
	f = cout.flags(); // get flag settings
	
	// check each flag
	for(i=0x4000; i; i = i >> 1)
	if(i & f) cout << "1 ";
	else cout << "0 ";
	
	cout << " \n";
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void) 
{ 
	cout.setf(ios::showpoint | ios::showpos, ios::showpoint);
	
	cout << 100.0;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void) 
{ 
	cout.setf(ios::showpoint);
	cout.setf(ios::showpos);
	
	cout << 100.0; 
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void) 
{ 
	cout.setf(ios::showpoint | ios::showpos);
	
	cout << 100.0; 
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void) 
{ 
	cout.setf(ios::uppercase | ios::scientific);
	
	cout << 100.12;
	
	cout.unsetf(ios::uppercase);
	
	cout << " \n" << 100.12;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::boolalpha;
using std::cout;
using std::endl;

int main(void) 
{ 
	bool a = true;
	bool b = false;
	cout << boolalpha;
	
	cout << "a = " << a << "; b = " << b;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::ios_base;
using std::oct;
using std::scientific;
using std::showbase;

int main(void) 
{ 
	int integerValue = 1000;
	double doubleValue = 0.0947628;
	
	cout << cout.flags() << "\n\n" << integerValue << '\t' << doubleValue << endl << endl;
	
	ios_base::fmtflags originalFormat = cout.flags();
	
	cout << showbase << oct << scientific;
	
	cout << cout.flags() << "\n\n" << integerValue << '\t' << doubleValue << endl << endl;
	
	cout.flags( originalFormat );
	
	cout << cout.flags() << "\n\n" << integerValue << '\t' << doubleValue << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::showpoint;

int main(void) 
{ 
   cout << "Before using showpoint" << endl
      << "9.9900 prints as: " << 9.9900 << endl
      << "9.9000 prints as: " << 9.9000 << endl
      << "9.0000 prints as: " << 9.0000 << endl << endl;

   cout << showpoint  
      << "After using showpoint" << endl
      << "9.9900 prints as: " << 9.9900 << endl
      << "9.9000 prints as: " << 9.9000 << endl
      << "9.0000 prints as: " << 9.0000 << endl;
      
   return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

int main(void)
{
	int x = 12345;
	
	cout << "Default is right justified:" << endl<< setw( 10 ) << x;
	
	cout << "\n\nUse std::left to left justify x:\n"<< left << setw( 10 ) << x;
	
	
	cout << "\n\nUse std::right to right justify x:\n"<< right << setw( 10 ) << x << endl;
	return 0;
}
#endif




#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::internal;
using std::showpos;

#include <iomanip>
using std::setw;

int main(void)
{
	cout << internal << showpos << setw( 10 ) << 123 << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::hex;
using std::oct;
using std::showbase;

int main(void)
{
	int x = 100;
	
	cout << "Printing integers preceded by their base:" << endl << showbase;
	
	cout << x << endl; // print decimal value
	cout << oct << x << endl; // print octal value
	cout << hex << x << endl; // print hexadecimal value
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::hex;
using std::showbase;
using std::uppercase;

int main(void)
{
   cout << uppercase << 4.345e10 << endl << hex << showbase << 123456789  << endl;
   return 0;
}
#endif



#if 0
#include <iostream>
using std::boolalpha;
using std::cout;
using std::endl;
using std::noboolalpha;

int main(void)
{
	bool booleanValue = true;
	
	cout << "booleanValue is " << booleanValue << endl;
	
	cout << "booleanValue (after using boolalpha) is "<< boolalpha << booleanValue << endl << endl;
	
	booleanValue = false; // change booleanValue
	cout << noboolalpha << endl; // use noboolalpha
	
	cout << "booleanValue is " << booleanValue << endl;
	
	cout << "booleanValue (after using boolalpha) is " << boolalpha << booleanValue << endl;
	return 0;
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
