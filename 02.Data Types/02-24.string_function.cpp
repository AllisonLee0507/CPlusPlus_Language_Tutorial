#if 0
#include <iostream>
#include <string.h>

int main(void)
{
	char String1[] = "test";
	char String2[80];
	
	strcpy(String2,String1);
	
	std::cout << "String1: " << String1 << std::endl;
	std::cout << "String2: " << String2 << std::endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string.h>

int main(void)
{
	const int MaxLength = 80;
	char String1[] = "test";
	char String2[MaxLength+1];
	
	strncpy(String2,String1,MaxLength);
	
	String2[strlen(String1)] = '\0'; // add a null to the end
	std::cout << "String1: " << String1 << std::endl;
	std::cout << "String2: " << String2 << std::endl;
	
	return 0;
}
#endif


#if 0
#include <iostream> 
#include <cstdio> 
#include <cstring> 
using namespace std; 
 
int main(void)
{
	char s1[80], s2[80]; 
	
	strcpy(s1, "C++"); 
	strcpy(s2, " is power programming."); 
	
	cout << "lengths: " << strlen(s1); 
	cout << ' ' << strlen(s2) << '\n'; 
	
	if(!strcmp(s1, s2))  
		cout << "The strings are equal\n"; 
	else cout << "not equal\n"; 
	
	strcat(s1, s2); 
	cout << s1 << '\n'; 
	
	strcpy(s2, s1); 
	cout << s1 << " and " << s2 << "\n"; 
	
	if(!strcmp(s1, s2)) 
		cout << "s1 and s2 are now the same.\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
#include <cstring> 
#include <cctype>  
using namespace std; 
 
int main(void)
{
	char str[80]; 
	int i; 
	
	strcpy(str, "this is a test"); 
	
	for(i=0; str[i]; i++) str[i] = toupper(str[i]); 
	
	cout << str; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strcat;                                     
using std::strncat;                                     

int main(void)
{
	char s1[ 20 ] = "123456";
	char s2[] = "abcdefghi";
	char s3[ 40 ] = "";
	
	strcat( s1, s2 );
	
	cout << s1 << "\ns2 = " << s2;
	
	strncat( s3, s1, 6 ); // places '\0' after last character
	
	cout << s1 << "\ns3 = " << s3;
	
	strcat( s3, s1 );
	cout << s1 << "\ns3 = " << s3 << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstring>
using std::strcmp;                                     
using std::strncmp;                                     

int main(void)
{
	char *s1 = "abc";
	char *s2 = "abC";
	char *s3 = "Abc";
	
	cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3 
		<< "\n\nstrcmp(s1, s2) = " << strcmp( s1, s2 ) 
		<< "\nstrcmp(s1, s3) = " << strcmp( s1, s3 ) 
		<< "\nstrcmp(s3, s1) = " << strcmp( s3, s1 );
	
	cout << "\n\nstrncmp(s1, s3, 6) = "
		<< strncmp( s1, s3, 2 ) << "\nstrncmp(s1, s3, 7) = " 
		<< strncmp( s1, s3, 2 ) << "\nstrncmp(s3, s1, 7) = " 
		<< strncmp( s3, s1, 5 ) << endl;
		
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strtok;                        

int main(void)
{
	char sentence[] = "a c d e f g e a c d e y gb ";
	char *tokenPtr;
	
	tokenPtr = strtok( sentence, " " );
	
	while ( tokenPtr != NULL ) 
	{
		cout << tokenPtr << '\n';
		tokenPtr = strtok( NULL, " " );
	}
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;                        

int main(void)
{
	char *string1 = "asdfasdfasdfasdf";
	char *string2 = "     f    ";
	char *string3 = "       ";
	
	cout << "The length of \"" << string1 << "\" is " << strlen( string1 )
		<< "\nThe length of \"" << string2 << "\" is " << strlen( string2 )
		<< "\nThe length of \"" << string3 << "\" is " << strlen( string3 ) 
		<< endl;
	
	return 0;
}
#endif

