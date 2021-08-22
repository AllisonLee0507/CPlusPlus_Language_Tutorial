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


#if 0
#include <iostream>
using namespace std;
int main(void)
{
	unsigned short small = 1;
	unsigned long  large = 10;
	unsigned long  skip = 2;
	unsigned long target = 8;
	const unsigned short MAXSMALL=65535;
	
	
	while (small < large && large > 0 && small < 65535)
	{
		small++;
		
		if (small  skip == 0)// skip the decrement?
		{
			cout << "skipping on " << small << endl;
			continue;
		}
		
		if (large == target)  // exact match for the target?
		{
			cout << "Target reached!";
			break;
		}
		
		large-=2;
	}
	
	cout << "\nSmall: " << small << " Large: " << large << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void)
{
	int count = 0;
	while (true)
	{
	    count += 1;
	
	    //end loop if count is greater than 10
	    if (count > 10)
	         break;
	
	    //skip the number 5
	    if (count == 5)
	         continue;
	
	    cout << count << endl;
	}
	return 0;
}
#endif
