#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
  int count1 = 10;
  int count3 = 50;

  cout << endl << "Value of outer count1 = " << count1;

  {
    int count1 = 20;
    int count2 = 30;
    cout << endl << "Value of inner count1 = " << count1;
    count1 += 3;
    count3 += count2;
  }

  cout << endl
       << "Value of outer count1 = " << count1
       << endl
       << "Value of outer count3 = " << count3;

  cout << endl;
  
  return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int x = 19;  
	
	if(x == 19) { 
		int y = 20; 	
		cout << "x + y is " << x + y << "\n"; 
	} 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int i; 
	int j; 
	
	i = 10; 
	j = 100; 
	
	if(j > 0) { 
		int i;
	 
		i = j / 2; 
		cout << "inner i: " << i << '\n'; 
	} 
	
	cout << "outer i: " << i << '\n'; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
#include <ostream>

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		int x = 2;
		if (x < i)
		{
			double x = 3.4;
			std::cout << x; 
		}
		std::cout << x;   
	}
	//std::cout << x;     // Error: no x declared in this scope
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int count1 = 100;

int main(void) 
{     
	int count1 = 10;
	int count3 = 50;
	cout << endl << "Value of outer count1 = " << count1;
	cout << endl << "Value of global count1 = " << ::count1;
	
	{              
		int count1 = 20;
		int count2 = 30;
		cout << endl << "Value of inner count1 = " << count1;
		cout << endl << "Value of global count1 = " << ::count1;
		count3 += count2;
	}                 
	
	cout << endl
	   << "Value of outer count1 = " << count1
	   << endl
	   << "Value of outer count3 = " << count3;
	
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream.h>

int n=0;  //Global

int main(void) 
{ 
	int n = 1;
	{
	       int n = 2 ;
	       {
	                int n = 3;
	                cout << "In inner  n=" <<n<<endl;
	                cout << "Global    n=" << ::n <<endl;
	       }
	       cout << "In outter n=" <<n<<endl;
	       cout << "Global    n=" <<::n<<endl;
	}
	cout << "In main() n=" << n<<endl;
	return 0 ;
}
#endif


#if 0
#include <iostream>

using namespace std;

int glob = 10;  // global variable

void access_global(void);
void hide_global(void);
void change_global(void);

int main()
{
    cout << "In main() glob is: " << glob << "\n\n";
    access_global();

    hide_global();
    cout << "In main() glob is: " << glob << "\n\n";

    change_global();
    cout << "In main() glob is: " << glob << "\n\n";

    return 0;
}

void access_global()
{
    cout << "In access_global() glob is: " << glob << "\n\n";
}

void hide_global()
{
    int glob = 0;  // hide global variable glob
    cout << "In hide_global() glob is: " << glob << "\n\n";
}

void change_global()
{
    glob = -10;  // change global variable glob
    cout << "In change_global() glob is: " << glob << "\n\n";
}
#endif


#if 0
#include <iostream>
#include <ostream>

namespace n {
	struct counter {
		static int n;
	};
	double n = 2.8;
}

int n::counter::n = 7; 

int main()
{
	int counter = 0;    
	int n = 10;         
	
	std::cout << n::counter::n; 
	std::cout << n::n;          
	//std::cout << x.n;           
	std::cout << n;             
	std::cout << counter;       
}
#endif

