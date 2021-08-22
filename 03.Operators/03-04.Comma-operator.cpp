#if 0
#include <iostream> 
using namespace std; 

int main(void) 
{ 
	int i, j; 
	
	j = 10; 
	
	i = (j++, j+100, 999+j); 
	
	cout << i; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main(void) 
{
	int count = 10;
	
	for(long n = 1, sum = 0, factorial = 1;sum += n, factorial *= n, n <= count ; n++)
	cout << setw(4) << n   << "    "
	     << setw(7) << sum << " "
	     << setw(15) << factorial
	     << endl;
	return 0;
}
#endif


#if 0
#include <iostream>

using namespace std;

int main(void)
{
   long num1 = 0, num2 = 0, num3 = 0, num4 = 0;

   num4 = (num1 = 10, num2 = 20, num3 = 30);
   cout << num4;
   cout << endl;

   return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>
using std::cout;
using std::endl;
using std::setw;

int main() {
	cout << endl
	   << setw(13) << "Character  "
	   << setw(13) << "Hexadecimal "
	   << setw(13) << "Decimal   "
	   << endl;
	
	cout << std::uppercase;                      
	
	unsigned char ch = 0;                        
	
	do {
	if(!std::isprint(ch))                      
	  continue;                                
	
	cout << setw(7)  << ch
	     << std::hex                           
	     << setw(13) << static_cast<int>(ch)
	     << std::dec                           
	     << setw(13) << static_cast<int>(ch)
	     << endl;
	} while(ch++ < std::numeric_limits<unsigned char>::max());
	
	return 0;
}
#endif
