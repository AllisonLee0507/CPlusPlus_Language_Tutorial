#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	cout << "Enter a number: "; 
	int a; // declare one variable 
	cin >> a; 
	
	cout << "Enter a second number: "; 
	int b; // declare another variable 
	cin >> b; 
	
	cout << "Product: " << a*b << '\n'; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using namespace std;
int main(void)
{
	int myInt;
	long myLong;
	double myDouble;
	float myFloat;
	unsigned int myUnsigned;
	
	cout << "int: ";
	cin >> myInt;
	cout << "Long: ";
	cin >> myLong;
	cout << "Double: ";
	cin >> myDouble;
	cout << "Float: ";
	cin >> myFloat;
	cout << "Unsigned: ";
	cin >> myUnsigned;
	
	cout << "\n\nInt:\t" << myInt << endl;
	cout << "Long:\t" << myLong << endl;
	cout << "Double:\t" << myDouble << endl;
	cout << "Float:\t" << myFloat << endl;
	cout << "Unsigned:\t" << myUnsigned << endl;
   return 0;
}
#endif



#if 0
#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main(void) 
{ 
	char str[80]; 
	
	cout << "Enter your name: "; 
	cin.get(str, 79); 
	
	cout << str << '\n'; 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
using namespace std;

#define INUMCHARS 45
#define INULL_CHARACTER 1

int main(void)
{
	char pname[INUMCHARS + INULL_CHARACTER];
	
	cout << "Please enter your first and last name: ";
	cin.get(pname,INUMCHARS);
	cout << "\n\nThank you, " << pname;
	
	return 0;
}
#endif



#if 0
#include <iostream.h>

int main(void)
{
	char mybuffer [100];
	
	cout << "What's your name? ";	
	cin.getline (mybuffer,100);
	
	cout << "Hello " << mybuffer << ".\n";	
	cout << "Which is your favourite team? ";
	
	
	cin.getline (mybuffer,100);	
	cout << mybuffer;
	
	return 0;
}
#endif



#if 0
#include <iostream.h>
#include <stdlib.h>

int main(void)
{
	char mybuffer [100];
	float price;
	int quantity;
	
	cout << "Enter price: ";
	cin.getline (mybuffer,100);
	
	price = atof (mybuffer);
	
	cout << "Enter quantity: ";
	cin.getline (mybuffer,100);
	
	quantity = atoi (mybuffer);
	cout << "Total price: " << price*quantity;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	char ch;
	cout << "enter a phrase: ";
	
	while ( cin.get(ch) )
	{
		if (ch == '!')
			cin.putback('$');
		else
			cout << ch;
			
		while (cin.peek() == '#')
			cin.ignore(1,'#');
	}
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	cout.put('H').put('e').put('l').put('l').put('o').put('\n');
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
	int integerValue;
	
	// display results of cin functions
	cout << "Before a bad input operation:"
		<< "\ncin.rdstate(): " << cin.rdstate()
		<< "\n    cin.eof(): " << cin.eof()
		<< "\n   cin.fail(): " << cin.fail()
		<< "\n    cin.bad(): " << cin.bad()
		<< "\n   cin.good(): " << cin.good();
	
	cin >> integerValue;
	cout << endl;
	
	cout << "After a bad input operation:"
		<< "\ncin.rdstate(): " << cin.rdstate()
		<< "\n    cin.eof(): " << cin.eof()
		<< "\n   cin.fail(): " << cin.fail()
		<< "\n    cin.bad(): " << cin.bad()
		<< "\n   cin.good(): " << cin.good() << endl << endl;
	
	cin.clear();
	
	cout << "After cin.clear()" << "\ncin.fail(): " << cin.fail()
		<< "\ncin.good(): " << cin.good() << endl;
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
	const int SIZE = 80;
	char buffer[ SIZE ];
	
	cout << "Enter a sentence:" << endl;
	cin.read( buffer, 20 );
	
	cout.write( buffer, cin.gcount() );
	cout << endl;
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
	const int SIZE = 80;
	char buffer1[ SIZE ];
	char buffer2[ SIZE ];
	
	cout << "Enter a sentence:" << endl;
	cin >> buffer1;
	
	cout << buffer1 << endl << endl;
	
	cout << "Enter a sentence:" << endl;
	cin.get( buffer2, SIZE );
	
	cout << buffer2 << endl;
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
	int widthValue = 4;
	char sentence[ 10 ];
	
	cout << "Enter a sentence:" << endl;
	cin.width( 5 );
	
	cin >> sentence;
	cout << sentence << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <string.h>

using std::cout;       
using std::cin;

int main(void)
{
	char firststring[40],secondstring[40],thirdstring[40];
	int size;
	
	cout << "Please enter a word \n";
	cin.getline(firststring,40); 
	
	cout << "Please enter another word  \n";
	cin.getline(secondstring,40);
	size = strlen(firststring);
	
	
	strcat(firststring,secondstring);
	
	cout << "The length of the first string you entered is" << size << "\n";
	cout << "Both strings you entered are " << thirdstring<< "\n";
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void)
{
    char c;

    // while it is possible to read a character
    while (cin.get(c)) {
        // print it
        cout.put(c);
    }
    
	return 0;
}
#endif



#if 0
include <iostream>

int main(void)
{
    // copy all standard input to standard output
    std::cout << std::cin.rdbuf();
    
	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#include <limits>

template <class charT, class traits>
inline
std::basic_istream<charT,traits>&
ignoreLine (std::basic_istream<charT,traits>& strm)
{
    // skip until end-of-line
    strm.ignore(std::numeric_limits<int>::max(),strm.widen('\n'));

    // return stream for concatenation
    return strm;
}


int main(void)
{
    int i;
    std::cout << "read int and ignore rest of the line" << std::endl;
    std::cin >> i;

    // ignore the rest of the line
    std::cin >> ignoreLine;

    std::cout << "int: " << i << std::endl;

    std::cout << "read int and ignore two lines" << std::endl;
    std::cin >> i;

    // ignore two lines
    std::cin >> ignoreLine >> ignoreLine;

    std::cout << "int: " << i << std::endl;
    
	return 0;
}
#endif



#if 0
#include <iostream>  
#include <iomanip>             
using namespace std;  

int main(void)
{
	const int MAX = 20; 
	char str[MAX];      
	
	cout << "\nEnter a string: ";  
	cin >> setw(MAX) >> str;
	cout << "You entered: " << str << endl;
	 
	return 0;  
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	char c;
	
	cout << "Before input, cin.eof() is " << cin.eof()
	    << "\nEnter a sentence followed by end-of-file:\n";
	
	while ( ( c = cin.get() ) != EOF )
	  cout.put( c );
	
	cout << "\nEOF in this system is: " << c;
	cout << "\nAfter input, cin.eof() is " << cin.eof() << endl;
	return 0;  
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	const int SIZE = 80;
	char buffer1[ SIZE ], buffer2[ SIZE ];
	
	cout << "Enter a sentence:\n";
	cin >> buffer1;
	cout << "\nThe string read with cin was:\n"
	    << buffer1 << "\n\n";
	
	cin.get( buffer2, SIZE );
	cout << "The string read with cin.get was:\n" 
	    << buffer2 << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;
int main(void)
{
	const int SIZE = 80;
	char buffer[ SIZE ];
	
	cout << "Enter a sentence:\n";
	cin.read( buffer, 20 );
	cout << "\nThe sentence entered was:\n";
	cout.write( buffer, cin.gcount() );
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
   const int SIZE = 80;
   char buffer[ SIZE ];

   cout << "Enter a sentence:\n";
   cin.getline( buffer, SIZE );

   cout << "\nThe sentence entered is:\n" << buffer << endl;
   return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	double area;
	cout << "Please enter the area of a square: ";
	cin >> area;
	
	if (cin.fail())
	{
	  cout << "Error: Bad input\n";
	  return 1;
	}
	
	if (area < 0)
	{
	  cout << "Error: Negative area.\n";
	  return 1;
	}
	
	cout << "The side length is " << sqrt(area) << "\n";
	
	return 0;
}
#endif
