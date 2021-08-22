#if 0
#include <iostream> 
using namespace std; 
 
int main(int argc, char *argv[]) 
{ 
	for(int i = 0; i < argc; i++) { 
		cout << argv[i] << "\n"; 
	} 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <fstream>
using std::ifstream;
using std::ofstream;

int main(int argc, char *argv[]) 
{ 
   // check number of command-line arguments
   if ( argc != 3 )
      cout << "Usage: copyFile infile_name outfile_name" << endl;
   else
   {
      ifstream inFile( argv[ 1 ], ios::in );
      if ( !inFile )
      {
         cout << argv[ 1 ] << " could not be opened" << endl;
         return -1;
      }

      ofstream outFile( argv[ 2 ], ios::out );
      if ( !outFile )
      {
         cout << argv[ 2 ] << " could not be opened" << endl;
         inFile.close();
         return -2;
      }

      char c = inFile.get();

      while ( inFile )
      {
         outFile.put( c );  
         c = inFile.get();
      }
   }
   return 0;
}
#endif



#if 0
#include <iostream> 
#include <cstdlib> 
using namespace std; 
 
int main(int argc, char *argv[]) 
{ 
	double a, b; 
	
	if(argc!=3) { 
		cout << "Usage: main num num\n"; 
		return 1; 
	} 
	
	a = atof(argv[1]); // convert first command-line arg 
	b = atof(argv[2]); // convert second comnand-line arg 
	
	cout << a + b; 
	
	return 0; 
}
#endif
