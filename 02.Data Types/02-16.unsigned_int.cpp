#if 0
#include <iostream>   
using namespace std;   
  
int main(void) 
{ 
	unsigned int numb;   
	unsigned long fact=1;     
	
	cout << "Enter a number: ";   
	cin >> numb;         
	
	for(int j=numb; j>0; j--) 
	fact *= j;           
	cout << "Factorial is " << fact << endl;   
	return 0;   
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void) 
{ 
	unsigned int score = 5000;
	cout << "score: " << score << endl;
	
	score = score + 100;
	cout << "score: " << score << endl;
	
	//combined assignment operator
	score += 100;
	cout << "score: " << score << endl;
	
	//increment operators
	int lives = 3;
	++lives;
	cout << "lives: "   << lives << endl;
	
	lives = 3;
	lives++;
	cout << "lives: "   << lives << endl;
	
	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
	
	lives = 3;
	bonus = lives++ * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
	
	//integer wrap around
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: "   << score << endl;
	
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

   cout << "Int: ";
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

int main(void) 
{ 
   using std::cout;
   using std::endl;

   unsigned int difference;
   unsigned int bigNumber = 100;
   unsigned int smallNumber = 50;

   difference = bigNumber - smallNumber;
   cout << "Difference is: " << difference;

   difference = smallNumber - bigNumber;
   cout << "\nNow difference is: " << difference <<endl;
   
   return 0;
}
#endif


#if 0
#include <iostream>   
using namespace std;   
  
int main(void) 
{  
   int intVar = 1500000000;                 
   
   intVar = (intVar * 10) / 10;             
   cout << "intVar = " << intVar << endl;   
  
   intVar = 1500000000;                     
   intVar = (static_cast<double>(intVar) * 10) / 10;   
   cout << "intVar = " << intVar << endl;
   
   return 0;   
}
#endif



#if 0
#include <iostream> 
 
using namespace std; 
 
int main(void) 
{ 
	short int i;          // a signed short integer 
	short unsigned int j; // an unsigned short integer 
	
	j = 60000;  
	i = j; 
	cout << i << " " << j; 
	
	return 0; 
}
#endif

