#if 0
#include<iostream.h>
#include<string.h>
#include<stdlib.h>

class String
{
  char *p;
  int length;
public:
  String();
  String(char *str,int len);
  char *getstring(){return p;}
  int getlength(){return length;}
};
String::String()
{
  p=new char[255];
  if(!p)
  {
    cout<<"Allocation erroe\n";
       exit(1);
  }
  *p='\0';
  length=255;
}
String::String(char * str,int len)
{
  if(strlen(str)>=len)
  {
    cout<<"Allcation too little memory! \n";
       exit(1);
  }
  p=new char[len];
  if(!p)
  {
    cout<<"Allocation error\n";
       exit(1);
  }
  strcpy(p,str);
  length=len;
}

int main(void)
{
	String ob1;
	String ob2("This is a string.",100);
	cout<<"ob1:"<<ob1.getstring()<<"-Allocation length:";
	cout<<ob1.getlength()<<'\n';
	cout<<"ob2:"<<ob2.getstring()<<"-Allocation length:";
	cout<<ob2.getlength()<<'\n';
	return 0;
}
#endif


#if 0
#include <string>
#include <iostream>
#include <cctype>

/* replace functions of the standard char_traits<char>
 * so that strings behave in a case-insensitive way
 */
struct ignorecase_traits : public std::char_traits<char> {
    // return whether c1 and c2 are equal
    static bool eq(const char& c1, const char& c2) {
        return std::toupper(c1)==std::toupper(c2);
    }
    // return whether c1 is less than c2
    static bool lt(const char& c1, const char& c2) {
        return std::toupper(c1)<std::toupper(c2);
    }
    // compare up to n characters of s1 and s2
    static int compare(const char* s1, const char* s2,
                       std::size_t n) {
        for (std::size_t i=0; i<n; ++i) {
            if (!eq(s1[i],s2[i])) {
                return lt(s1[i],s2[i])?-1:1;
            }
        }
        return 0;
    }
    // search c in s
    static const char* find(const char* s, std::size_t n,
                            const char& c) {
        for (std::size_t i=0; i<n; ++i) {
            if (eq(s[i],c)) {
                return &(s[i]);
            }
        }
        return 0;
    }
};

// define a special type for such strings
typedef std::basic_string<char,ignorecase_traits> icstring;

/* define an output operator
 * because the traits type is different than that for std::ostream
 */
inline
std::ostream& operator << (std::ostream& strm, const icstring& s)
{
    // simply convert the icstring into a normal string
    return strm << std::string(s.data(),s.length());
}

int main(void)
{
	using std::cout;
	using std::endl;
	
	icstring s1("hallo");
	icstring s2("otto");
	icstring s3("hALLo");
	
	cout << std::boolalpha;
	cout << s1 << " == " << s2 << " : " << (s1==s2) << endl;
	cout << s1 << " == " << s3 << " : " << (s1==s3) << endl;
	
	icstring::size_type idx = s1.find("All");
	if (idx != icstring::npos) {
	    cout << "index of \"All\" in \"" << s1 << "\": "
	         << idx << endl;
	}
	
	else {
	    cout << "\"All\" not found in \"" << s1 << endl;
	}
	
	return 0;
}
#endif


#if 0
#include <iostream>  
using namespace std;  
#include <string.h>             

class String                    
{  
private:  
	enum { SZ = 80 };         
	char str[SZ];             
public:  
	String() { str[0] = '\0'; }  
	String( char s[] ) { strcpy(str, s); }    
	void display() const { cout << str; }  
	operator char*() { return str; }        
};  

int main()  
{  
	String s1;                   
	                  
	char xstr[] = "this is a test";  
	
	s1 = xstr;                   
	                    
	s1.display();                
	
	String s2 = "this is another test";  
	                  
	cout << static_cast<char*>(s2);
	cout << endl;                   
	return 0;                     
}
#endif


#if 0
#include <iostream>  
using namespace std;  

int main(){  
	char str1[] = "Defined as an array";  
	char* str2 = "Defined as a pointer";  
	
	cout << str1 << endl; 
	cout << str2 << endl;  
	
	str2++;   
	
	cout << str2 << endl; 
	return 0;  
}
#endif

