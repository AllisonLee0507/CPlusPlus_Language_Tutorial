#if 0
#include <iostream>

int main(void)
{
	char buffer[80];
	
	std::cout << "Enter the string: ";
	std::cin >> buffer;
	std::cout << "Here's the buffer:  " << buffer << std::endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>  
using namespace std;  

int main(void)
{
	char str[] = "this is a test";  
	cout << str << endl;  
	
	return 0;  
}
#endif


#if 0
#include <iostream>  
using namespace std;  

int main(void)
{
	char str[] = "this is a test";  

	cout << str << endl;  

	return 0;
}

#endif


#if 0
#include <iostream>
#include <string>

using namespace std;

const int kBufferSize = 1024;

int main(int argc, char** argv)
{
	char buffer[kBufferSize + 1];
	cin.getline(buffer, kBufferSize);
	
	cout << buffer << endl;
	
	string myString;
	std::getline(cin, myString);
	
	cout << myString << endl;
	
	return 0;
}

#endif


#if 0
#include <iostream>
int main(void)
{
	char buffer[80];
	std::cout << "Enter the string: ";
	std::cin.get(buffer, 79);       // get up to 79 or newline
	std::cout << "Here's the buffer:  " << buffer << std::endl;
	
	return 0;
}

#endif



#if 0
#include <iostream> 
#include <cctype> 
using namespace std; 
 
int main(void)
{
	int i; 
	char str[80] = "This Is A Test"; 
	
	cout << "Original string: " << str << "\n"; 
	
	for(i = 0; str[i]; i++) { 
		if(isupper(str[i])) 
			str[i] = tolower(str[i]); 
		else if(islower(str[i])) 
			str[i] = toupper(str[i]); 
	} 
	
	cout << "Inverted-case string: " << str; 
	
	return 0;
}

#endif



#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
int main(void)
{
	char str[] = "this is a test"; 
	char *start, *end; 
	int len; 
	char t; 
	
	cout << "Original: " << str << "\n"; 
	
	len = strlen(str); 
	
	start = str; 
	end = &str[len-1]; 
	
	while(start < end)
	{ 
		// swap chars 
		t = *start; 
		*start = *end; 
		*end = t; 
		
		// advance pointers 
		start++; 
		end--; 
	} 
	
	cout << "Reversed: " << str << "\n"; 
	
	return 0;
}

#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

void copy1( char *, const char * );

int main(void)
{
	char string1[10];
	char *string2 = "Hello";
	
	copy1( string1, string2 );
	cout << "string1 = " << string1 << endl;
	
	return 0;
}


void copy1( char * s1, const char * s2 )
{
   for ( int i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; i++ )
      ;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

void copy( char *, const char * );

int main(void)
{
	char string1[ 10 ];
	char string2[] = "Good Bye";
	
	copy( string1, string2 );
	cout << "string1 = " << string2 << endl;
	
	return 0;
}

void copy( char *s1, const char *s2 )
{
   for ( ; ( *s1 = *s2 ) != '\0'; s1++, s2++ )
      ;
}
#endif

