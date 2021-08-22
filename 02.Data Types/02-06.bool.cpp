#if 0
#include <iostream> 
using namespace std;  
 
int main() { 
	bool b; 
	
	b = false; 
	cout <<  "b is " << b << "\n"; 
	
	b = true; 
	cout <<  "b is " << b << "\n"; 
	
	
	if(b) cout <<  "This is executed.\n"; 
	
	b = false; 
	if(b) cout <<  "This is not executed.\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std;  
 
int main(void)
{ 
	bool b; 
	
	b = false; 
	cout <<  "b is " << b << "\n"; 
	
	b = true; 
	cout <<  "b is " << b << "\n"; 
	
	
	if(b) cout <<  "This is executed.\n"; 
	
	b = false; 
	if(b) cout <<  "This is not executed.\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std;  
 
int main(void)
{ 
	bool b; 
	
	b = false; 
	cout <<  "b is " << b << "\n"; 
	
	b = true; 
	cout <<  "b is " << b << "\n"; 
	
	
	return 0; 
}
#endif


#if 0
#include <iostream>
  
int main(void)
{
   using std::cout;
  
   cout << "The size of a bool is:"      << sizeof(bool)   << " bytes.\n";
  
   return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;
int main(void)
{
   int age;
   
   cout << "Enter your age: ";
   cin >> age;
   
   if (!(age > 12 && age < 65))
      cout << "Admission is free";
   else
      cout << "You have to pay";
      
   return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
int main(void)
{
	int age;
	char choice;
	bool citizen;
	
	cout << "Enter your age: ";
	cin >> age;
	cout << "Are you a citizen (Y/N): ";
	cin >> choice;
	
	if (choice == 'Y')
		citizen = true;
	else
		citizen = false;
	
	if (age >= 18 && citizen == true)
		cout << "You are eligible to vote";
	else
		cout << "You are not eligible to vote";
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	bool myBool = true;
	
	cout << "This is the default: " << myBool << endl;
	cout << "This should be true: " << boolalpha << myBool << endl;
	cout << "This should be 1: " << noboolalpha << myBool << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>

using namespace std;

int main()
{  
   string best_name = "";
   double best_price = 1;
   int best_score = 0;

   bool more = true;
   while (more)
   {  
      string next_name;
      double next_price;
      int next_score;

      cout << "Please enter the model name: ";
      getline(cin, next_name);
      cout << "Please enter the price: ";
      cin >> next_price;
      cout << "Please enter the score: ";
      cin >> next_score;
      string remainder; /* read remainder of line */
      getline(cin, remainder); 

      if (next_score / next_price > best_score / best_price)
      {  
         best_name = next_name;
         best_score = next_score;
         best_price = next_price;
      }     

      cout << "More data? (y/n) ";
      string answer;
      getline(cin, answer);
      if (answer != "y") more = false;
   }

   cout << "The best value is " << best_name
      << " Price: " << best_price 
      << " Score: " << best_score << "\n";

   return 0;
}
#endif
