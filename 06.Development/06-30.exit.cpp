#if 0
#include <iostream>
#include <stdlib.h>
using namespace std;
void print( void );

int main(void)
{
	atexit( print );       // register function print 
	cout << "Enter 1 to terminate program with function exit" 
	    << "\nEnter 2 to terminate program normally\n";
	
	int answer;
	cin >> answer;
	
	if ( answer == 1 ) {
	  cout << "\nTerminating program with function exit\n";
	  exit( EXIT_SUCCESS );
	}
	
	cout << "\nTerminating program by reaching the of main"
	    << endl;
	
	return 0;
}

void print(void)
{
	cout << "Executing function print at program termination\n"
		<< "Program terminated" << endl;
}
#endif
