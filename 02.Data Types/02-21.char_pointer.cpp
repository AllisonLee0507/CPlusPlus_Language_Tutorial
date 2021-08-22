#if 0
#include <iostream> 
#include <cctype> 
using namespace std; 
 
int main(void) 
{ 
	char *p; 
	char str[80] = "This Is A Test"; 
	
	cout << "Original string: " << str << "\n"; 
	
	p = str; // assign p the address of the start of the array 
	
	
	while(*p) { 
		if(isupper(*p)) 
		  *p = tolower(*p); 
		else if(islower(*p)) 
		  *p = toupper(*p); 
		  
		p++; 
	} 
	
	cout << "Inverted-case string: " << str; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void) 
{ 
   char *word = "again";
  
   cout << "Value of word is: " << word << endl
        << "Value of static_cast< void * >( word ) is: " 
        << static_cast< void * >( word ) << endl;
        
	return 0; 
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>
using std::islower;
using std::toupper;

void f( char * );

int main(void) 
{ 
   char phrase[] = "characters";

   f( phrase );
   
   cout << phrase << endl;
   
   return 0;
}


void f( char *sPtr )
{
   while ( *sPtr != '\0' )
   {   
      *sPtr = toupper( *sPtr ); 

      sPtr++; 
   }
   return;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

void f(const char*);

int main(void) 
{ 
   const char phrase[] = "a string";

   f( phrase );
   
   return 0;
}

void f(const char *sPtr)
{
   for ( ; *sPtr != '\0'; sPtr++ )
      cout << *sPtr;
    
	return;
}
#endif
