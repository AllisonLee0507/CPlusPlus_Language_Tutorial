#if 0
#include <iostream.h>

int main(void)
{
       int n1 = 100,n2;
       short int s1 = 2,s2;
       char c1 = 'A',c2;
       unsigned char u1 = 'U',u2;
       n2 = s1;
       s2 = n1 + c1;
       c2 = u1;
       u2 = n1;
       cout << n1 << " " << n2 ;
       cout << s1 << " " << s2 ;
       cout << c1 << " " << c2 ;
       cout << (int)c1 << " " << int(c2);
       cout << u1 << " " ;
       cout << (int)u1 << " " << (int)u2;

    return 0;
}
#endif


#if 0
#include <iostream>   
using namespace std;   
  
int main(void)
{
  
   long dividend, divisor;   
   char ch;   
  
   do{
      cout << "Enter dividend: "; cin >> dividend;   
      cout << "Enter divisor: ";  cin >> divisor;   
      cout << "Quotient is " << dividend / divisor;   
      cout << ", remainder is " << dividend % divisor;   
  
      cout << "\nDo another? (y/n): ";  //do it again?   
      cin >> ch;   
   }while( ch != 'n' );
   return 0;   
}
#endif


#if 0
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
  char letter = 'S';                      

  if(letter >= 'A') {                   
    if(letter <= 'Z') {                 
      cout << "You entered an uppercase letter."
           << endl;
      return 0;
    }
  }

  if(letter >= 'a')                     
    if(letter <= 'z') {                 
      cout << "You entered a lowercase letter."
           << endl ;
      return 0;
    }
  return 0;
}
#endif
