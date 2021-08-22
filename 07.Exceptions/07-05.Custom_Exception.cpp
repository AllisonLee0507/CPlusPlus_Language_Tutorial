#if 0
#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

class DivideByZeroException : public runtime_error
{
public:
   DivideByZeroException::DivideByZeroException(): runtime_error( "attempted to divide by zero" ) {}
};

double quotient( int numerator, int denominator )
{
	throw DivideByZeroException(); // terminate function
	
	return 0;
}

int main(void)
{
	try
	{
		double result = quotient( 1, 1 );
		cout << "The quotient is: " << result << endl;
	}
	catch ( DivideByZeroException &divideByZeroException )
	{
		cout << "Exception occurred: " << divideByZeroException.what() << endl;	
	}	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>

using namespace std;

class Exception {

public:
   Exception(const string& msg) : msg_(msg) {}
  ~Exception() {}
   string getMessage() const {return(msg_);}
private:
   string msg_;
};

void f()
{	
	throw(Exception("Mr. Sulu"));
}

int main(void)
{
	try {
		f();
	}
	catch(Exception& e) {
		cout << "You threw an exception: " << e.getMessage( ) << endl;
	}
}
#endif



#if 0
#include <iostream>

using std::cout;
using std::endl;

class Trouble {
public:
	Trouble(const char* pStr = "There's a problem") : pMessage(pStr) {}
	const char* what() const {return pMessage;}

private:
	const char* pMessage;
};

int main(void)
{
	for(int i = 0 ; i < 2 ; i++) {
	try     {
		if(i == 0)
			throw Trouble();
		else
			throw Trouble("Nobody knows the trouble I've seen...");
		}
		catch(const Trouble& t) {
			cout << endl << "Exception: " << t.what();
		}
	}
	return 0;
}
#endif
