#if 0
#include <iostream>
using std::cout;
using std::endl;

union Number           
{                      
	int integer1;       
	double double1;     
};

int main(void)
{
	Number value;
	
	value.integer1 = 100;	
	cout << value.integer1 << "\ndouble: " << value.double1  << endl;
	
	value.double1 = 100.0;	
	cout << value.integer1 << "\ndouble: " << value.double1 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std; 

int main(void){
	union 
	{
		int my_data;
		float his_data;
	};
	
	my_data = 3;
	
	cout << "Value of my_data is " << my_data;
	
	his_data = 1.2345;
	
	cout << "\nValue of his_data is " << his_data;
	
	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
union u_type { 
	u_type(short int a) { i = a; };  
	u_type(char x, char y) { ch[0] = x; ch[1] = y; } 
	
	void showchars(){ 
		cout << ch[0] << " "; 
		cout << ch[1] << "\n"; 
	} 
	
	short int i; 
	char ch[2]; 
}; 
 
int main(void) 
{ 
	u_type u(1000); 
	u_type u2('X', 'Y'); 
	
	cout << "u as integer: "; 
	cout << u.i << "\n"; 
	cout << "u as chars: "; 
	u.showchars(); 
	
	cout << "u2 as integer: "; 
	cout << u2.i << "\n"; 
	cout << "u2 as chars: "; 
	u2.showchars(); 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
int main(void) 
{ 
	// define anonymous union 
	union { 
		long l; 
		double d; 
		char s[4]; 
	} ; 
	
	// now, reference union elements directly 
	l = 100000; 
	cout << l << " "; 
	d = 123.2342; 
	cout << d << " "; 
	strcpy(s, "hi"); 
	cout << s; 
	
	return 0; 
}
#endif


#if 0
#include <iostream.h>

union unmany_types {
	char c;
	int ivalue;
	double fvalue;
	double dvalue;
} unmy_union;
  
int main(void)
{
	unmy_union.c='b';
	cout << unmy_union.c << "\n";
	
	unmy_union.ivalue=1990;
	cout << unmy_union.ivalue << "\n";
	
	unmy_union.fvalue=19.90;
	cout << unmy_union.fvalue << "\n";
	
	unmy_union.dvalue=987654.32E+13;
	cout << unmy_union.dvalue << "\n";
	
	// invalid I/O
	
	cout << unmy_union.c << "\n";
	cout << unmy_union.ivalue << "\n";
	cout << unmy_union.fvalue << "\n";
	cout << unmy_union.dvalue << "\n";
	
	// union size
	cout << "The size of this union is: " << sizeof(unmany_types) << " bytes." << "\n";
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	union                                                        
	{                                                            
		int integer1;                                             
		double double1;                                           
		char *charPtr;                                            
	};
	integer1 = 2;
	cout << integer1 << endl;
	
	double1 = 4.4;
	cout << double1 << endl;
	
	charPtr = "union";
	cout << charPtr << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
   
union swap_byte {
	void swap();
	void set_byte(unsigned short i);
	void show_word();
	
	unsigned short u;
	unsigned char c[2];
};
   
void swap_byte::swap()
{
	unsigned char t;
	
	t = c[0];
	c[0] = c[1];
	c[1] = t;
}
   
void swap_byte::show_word()
{
	cout << u;
}
   
void swap_byte::set_byte(unsigned short i)
{
	u = i;
}
   
int main()
{
	swap_byte b;
	
	b.set_byte(49034);
	b.swap();
	b.show_word();
	
	return 0;
}
#endif
