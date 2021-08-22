#if 0
#include <iostream>
#include <iomanip>
using namespace std;

ostream &sethex(ostream &stream)
{
	stream.setf(ios::showbase);
	stream.setf(ios::hex, ios::basefield);
	
	return stream;
}

int main(void) 
{ 
	cout << 256 << " " << sethex << 256;
	
	return 0;
}
#endif


#if 0
#include <iostream> 
#include <iomanip> 
using namespace std; 
 
ostream &mySetting(ostream &stream) 
{ 
	stream.setf(ios::left); 
	stream << setw(10) << setfill('$'); 
	return stream; 
} 
 
int main(void) 
{ 
	cout << 10 << " " << mySetting << 10; 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
#include <iomanip>
using namespace std;

ostream &ra(ostream &stream)
{
	stream << "-------------- ";
	return stream;
}

// Left Arrow
ostream &la(ostream &stream)
{
	stream << "*************";
	return stream;
}

int main(void) 
{ 
	cout << ra << 1233.23 << "\n";
	cout << ra << 567.66 << la;
	
	return 0;
}
#endif



#if 0
#include <iostream>
using std::ostream;
using std::cout;
using std::flush;

ostream& endLine( ostream& output )
{
	return output << '\n' << flush; // issue endl-like end of line
}

int main(void) 
{ 
   cout << "-----" << endLine;
   return 0;
}
#endif



#if 0
#include <iostream>
using std::ostream;
using std::cout;
using std::flush;

ostream& bell( ostream& output )
{
	return output << '\a';  // issue system beep
} 

int main(void) 
{ 
   cout << bell; // use bell manipulator
   return 0;
}
#endif



#if 0
#include <iostream>
using std::ostream;
using std::cout;
using std::flush;


ostream& carriageReturn( ostream& output )
{
   return output << '\r';  // issue carriage return
}

int main(void) 
{ 
   cout << carriageReturn << "-----" ;
   return 0;
}
#endif



#if 0
#include <iostream>
using std::ostream;
using std::cout;
using std::flush;

ostream& tab( ostream& output )
{
	return output << '\t';  // issue tab
}

int main(void) 
{ 
   cout << tab << 'b' << tab << 'c' ;

   return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void) 
{ 
	cout << "Welcome to ";
	cout << "C++!";
	cout << endl;   // end line stream manipulator
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <iomanip>
using namespace std; 
ostream &sethex(ostream &stream){
	stream.setf(ios::showbase);
	stream.setf(ios::hex);
	return stream;
}

int main(void) 
{ 
	cout << 256 << "   " << sethex << 256;
	return 0;
}
#endif

	



