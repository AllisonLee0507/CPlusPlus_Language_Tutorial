#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::isalnum;
using std::isalpha;
using std::isdigit;
using std::isxdigit;

int main(void)
{
   cout << "According to isdigit:\n"
      << ( isdigit( '8' ) ? "8 is a" : "8 is not a" ) << " digit\n"
      << ( isdigit( '#' ) ? "# is a" : "# is not a" ) << " digit\n";

   return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::isalnum;
using std::isalpha;
using std::isdigit;
using std::isxdigit;

int main(void)
{
   cout << "\nAccording to isalpha:\n"
      << ( isalpha( 'A' ) ? "A is a" : "A is not a" ) << " letter\n"
      << ( isalpha( 'b' ) ? "b is a" : "b is not a" ) << " letter\n"
      << ( isalpha( '&' ) ? "& is a" : "& is not a" ) << " letter\n"
      << ( isalpha( '4' ) ? "4 is a" : "4 is not a" ) << " letter\n";


   return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::isalnum;
using std::isalpha;
using std::isdigit;
using std::isxdigit;

int main(void)
{
   cout << "\nAccording to isalnum:\n"
      << ( isalnum( 'A' ) ? "A is a" : "A is not a" )
      << " digit or a letter\n"
      << ( isalnum( '8' ) ? "8 is a" : "8 is not a" )
      << " digit or a letter\n"
      << ( isalnum( '#' ) ? "# is a" : "# is not a" )
      << " digit or a letter\n";


   return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::isalnum;
using std::isalpha;
using std::isdigit;
using std::isxdigit;

int main(void)
{
   cout << "\nAccording to isxdigit:\n"
      << ( isxdigit( 'F' ) ? "F is a" : "F is not a" )
      << " hexadecimal digit\n"
      << ( isxdigit( 'J' ) ? "J is a" : "J is not a" )
      << " hexadecimal digit\n"
      << ( isxdigit( '7' ) ? "7 is a" : "7 is not a" )
      << " hexadecimal digit\n"
      << ( isxdigit( '$' ) ? "$ is a" : "$ is not a" )
      << " hexadecimal digit\n"
      << ( isxdigit( 'f' ) ? "f is a" : "f is not a" )
      << " hexadecimal digit" << endl;


   return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::isupper;
using std::tolower;
using std::toupper;

int main(void)
{
   cout << "According to islower:\n"
      << ( islower( 'p' ) ? "p is a" : "p is not a" )    
      << " lowercase letter\n"
      << ( islower( 'P' ) ? "P is a" : "P is not a" ) 
      << " lowercase letter\n"
      << ( islower( '5' ) ? "5 is a" : "5 is not a" ) 
      << " lowercase letter\n"
      << ( islower( '!' ) ? "! is a" : "! is not a" ) 
      << " lowercase letter\n";

   return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::isupper;
using std::tolower;
using std::toupper;

int main(void)
{
   cout << "\nAccording to isupper:\n"
      << ( isupper( 'D' ) ? "D is an" : "D is not an" ) 
      << " uppercase letter\n"
      << ( isupper( 'd' ) ? "d is an" : "d is not an" ) 
      << " uppercase letter\n"
      << ( isupper( '8' ) ? "8 is an" : "8 is not an" ) 
      << " uppercase letter\n"
      << ( isupper('$') ? "$ is an" : "$ is not an" ) 
      << " uppercase letter\n";

   return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::isupper;
using std::tolower;
using std::toupper;

int main(void)
{
   cout << "\nu converted to uppercase is " 
      << static_cast< char >( toupper( 'u' ) )
      << "\n7 converted to uppercase is " 
      << static_cast< char >( toupper( '7' ) ) 
      << "\n$ converted to uppercase is " 
      << static_cast< char >( toupper( '$' ) ) 
      << "\nL converted to lowercase is " 
      << static_cast< char >( tolower( 'L' ) ) << endl;

   return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::iscntrl;
using std::isgraph;
using std::isprint;
using std::ispunct;
using std::isspace;

int main(void)
{
   cout << "According to isspace:\nNewline " 
      << ( isspace( '\n' ) ? "is a" : "is not a" )
      << " whitespace character\nHorizontal tab " 
      << ( isspace( '\t' ) ? "is a" : "is not a" )
      << " whitespace character\n"
      << ( isspace( ' is a" : " is not a" )
      << " whitespace character\n";
   return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::iscntrl;
using std::isgraph;
using std::isprint;
using std::ispunct;
using std::isspace;

int main(void)
{
   cout << "\nAccording to iscntrl:\nNewline " 
      << ( iscntrl( '\n' ) ? "is a" : "is not a" )
      << " control character\n"
      << ( iscntrl( '$' ) ? "$ is a" : "$ is not a" )
      << " control character\n";

   return 0;
}
#endif

