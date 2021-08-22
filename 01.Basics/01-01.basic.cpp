#if 0
#include <iostream> 
using namespace std; 

int main(void) 
{ 
  cout << "abcdefg"; 
 
  return 0; 
}
#endif


#if 0
#include <iostream>                       
using std::cout;
using std::endl;

int main() {  
	cout << 1 + 2 << endl;  
	cout << 1 - 5 << endl;  
	cout << 1 - 2 << endl;  
	
	cout << 1 * 2 << endl;  
	cout << 1/3   << endl;  
	
	cout << 1 + 2/1 - 5    << endl;  
	cout << (1+2)/(1-5)    << endl;  
	cout << 1+2/(1-5)      << endl;  
	cout << (1+2)/1-5      << endl;  

	return 0;                               
}
#endif


#if 0
#include <iostream>            
using std::cout;
using std::endl;

int main() {  
	int a = 10;             
	int b = 3;            
	
	cout << a/b;
	
	cout << a%b;
	
	return 0;                    
}
#endif


#if 0
#include <iostream>              
using std::cout;
using std::endl;

int main() {
  int a = 10;
  int b = 6;
  int c = 3;
  int d = 4;

  int f = (a + b)/(c + d);

  cout << f ;

  return 0;
}
#endif


#if 0
#include <iostream>

void DemonstrationFunction()
{
	std::cout << "In Demonstration Function\n";
}

int main(void)
{
	std::cout << "In main\n" ;
	DemonstrationFunction();
	std::cout << "Back in main\n";
	
	return 0;
}
#endif
