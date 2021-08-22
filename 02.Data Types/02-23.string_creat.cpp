#if 0
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    const string hello("Hello, how are you?");

    string s(hello.begin(),hello.end());

    // iterate through all of the characters
    string::iterator pos;
    for (pos = s.begin(); pos != s.end(); ++pos) {
        cout << *pos;
    }
    cout << endl;
	  
	return 0;  
}  
#endif


#if 0
#include <iostream>  
using namespace std;  

int main(void)
{
	void dispstr(char*);
	char str[] = "Idle people have the least leisure.";  
	
	dispstr(str);    
	  
	return 0;  
}  

void dispstr(char* ps)  
{  
	while( *ps )       
		cout << *ps++;  
		
	cout << endl;  
}
#endif


#if 0
#include <iostream>  
using namespace std;  

void copystr(char*, const char*);  

int main(void)
{ 

	char* str1 = "this is a test";  
	char str2[80];               
	
	copystr(str2, str1);         
	cout << str2 << endl;        

	return 0;  
}  

void copystr(char* dest, const char* src){  
	while( *src )                
		*dest++ = *src++;         
	
	*dest = '\0';	
	return;
}
	
#endif

