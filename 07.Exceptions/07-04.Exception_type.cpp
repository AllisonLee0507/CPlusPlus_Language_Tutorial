#if 0
#include <iostream>
using namespace std;

void f(int test)
{
	try{
		if(test) 
			throw test;
		else 
			throw "Value is zero";
	}
	catch(int i) {
		cout << "Caught Exception #: " << i << '\n';
	}
	catch(const char *str) {
		cout << "Caught a string: ";
		cout << str << '\n';
	}
}

int main(void)
{
	cout << "Start\n";
	
	f(1);
	f(2);
	f(0);
	f(3);
	
	cout << "End";
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;
   
void Xhandler(int test) throw(int, char, double){
	if(test==0) throw test; 
	if(test==1) throw 'a'; 
	if(test==2) throw 123.23; 
}
   
int main(void)
{
	cout << "start\n";
	
	try{
		Xhandler(0); 
	}
	catch(int i) {
		cout << "Caught an integer\n";
	}
	catch(char c) {
		cout << "Caught char\n";
	}
	catch(double d) {
		cout << "Caught double\n";
	}
	
	cout << "end";
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	try {
		cout << "Inside try block." << endl;
		throw 100;
		cout << "This will not execute.";
	}catch(double d) {
		cout << "Caught a double exception -- value is: ";
		cout << d << endl;
	}
}
#endif



#if 0
#include <iostream>
#include <cstring>
using namespace std;
   
class MyException {
public:
  char str_what[80];
  int what;
   
  MyException() { *str_what = 0; what = 0; }
   
  MyException(char *s, int e) {
    strcpy(str_what, s);
    what = e;
  }
};
   
int main(void){
	int i;
	
	try {
		cout << "Enter a positive number: ";
		cin >> i;
		if(i<0)
			throw MyException("Not Positive", i);
	}
	catch (MyException e) { // catch an error
		cout << e.str_what << ": ";
		cout << e.what << "\n";
	}
	
	return 0;
}
#endif

