#if 0#include <iostream>
using namespace std;

void f(int test)
{
	try{
		if(test) throw test;
	}
	catch(int i) {
		cout << "Caught Exception #: " << i << '\n';
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

void f(int test)
{
  cout << "Inside f, test is: " << test << "\n";
  if(test) throw test;
}

int main(void)
{
	cout << "Start\n";
	
	try { // start a try block
		cout << "Inside try block\n";
		f(0);
		f(1);
		f(2);
	}
	catch (int i) { // catch an error
		cout << "Caught an exception -- value is: ";
		cout << i << "\n";
	}
	
	cout << "End";
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

void f(int val) throw();
int main(void)
{
	try{
		f(0); // also, try passing 1 and 2 to f()
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
	return 0;
}

// This function can throw NO exceptions!
void f(int val) throw()
{
	cout << "f";
}
#endif



#if 0
#include <iostream>
using namespace std;

// only throw ints, chars, and doubles
void f(int val) throw(int, char, double)
{
	if(val==0) 
		throw val;
	
	if(val==1) 
		throw 'a';
	
	if(val==2) 
		throw 123.23;
}

int main(void)
{
	try{
		f(0); // also, try passing 1 and 2 to f()
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
	
	return 0;
}
#endif
