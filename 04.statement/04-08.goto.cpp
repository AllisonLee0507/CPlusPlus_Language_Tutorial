#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::left;
using std::setw;

int main(void)
{
   int count = 1;

   start:
      if ( count > 5 )
         goto end;

      cout << count << "\n\n";
      ++count;

      goto start;             

   end:
      cout << endl;

   return 0;
}
#endif


#if 0
#include <iostream.h>
int main(void)
{
	int n=10;
	loop:
	
	cout << n << ", ";
	
	n--;
	
	if (n>0) 
		goto loop;
	
	cout << "Done!";
	
	return 0;
}
#endif

