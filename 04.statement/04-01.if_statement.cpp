#if 0
#include <iostream> 
using namespace std; 
  
int main(void)
{  
  int a, b, c;  
  
  a = 2;  
  b = 3;  
  
  if(a < b) 
     cout << "a is less than b\n"; 
 
  if(a == b) 
     cout << "you won't see this\n";  
 
  cout << "\n"; 
 
  c = a - b;
 
  cout << "c contains -1\n"; 
  if(c >= 0) 
     cout << "c is non-negative\n"; 
  if(c < 0) 
     cout << "c is negative\n"; 
 
  cout << "\n"; 
 
  c = b - a; // c now contains 1 
  cout << "c contains 1\n"; 
  if(c >= 0) 
     cout << "c is non-negative\n"; 
  if(c < 0) 
     cout << "c is negative\n"; 
 
  return 0; 
}
#endif


#if 0
#include <iostream>
 
int main(void)
{
	int firstNumber, secondNumber;
	
	std::cout << "Please enter a big number: ";
	std::cin >> firstNumber;
	std::cout << "\nPlease enter a smaller number: ";
	std::cin >> secondNumber;
	
	if (firstNumber > secondNumber)
		std::cout << "\nThanks!\n";
	else
		std::cout << "\nOops. The second is bigger!";
	
	return 0;
}
#endif



#if 0
#include <iostream>
 
int main(void)
{
	int firstNumber =2;
	int secondNumber = 3;
	
	if (firstNumber >= secondNumber)
	{
		if ( (firstNumber  secondNumber) == 0) // evenly divisible?
		{
			if (firstNumber == secondNumber)
				std::cout << "They are the same!\n";
			else
				std::cout << "They are evenly divisible!\n";
		}
		else
			std::cout << "They are not evenly divisible!\n";
	}
	else
		std::cout << "Hey! The second one is larger!\n";
		
	return 0;
}
#endif



#if 0
#include <iostream>
 
int main(void)
{
	int x = 12;
	
	if (x > 10)
	{
		if (x > 100)
			std::cout << "More than 100, Thanks!\n";
	}
	else        // now works as intended!
		std::cout << "Less than 10, Thanks!\n";

	return 0;
}
#endif



#if 0
#include <iostream> 
#include <cstdlib> 
using namespace std; 
 
int main(void) 
{ 
	int magic;  // magic number 
	int guess;  // user's guess 
	
	magic = rand(); // get a random number 
	
	cout << "Enter your guess: "; 
	cin >> guess; 
	
	if(guess == magic) 
		cout << "Right"; 
	else 
		cout << "...Sorry, you're wrong."; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cstdlib> 
 
using namespace std; 
 
int main() 
{ 
  int magic;  // magic number 
  int guess;  // user's guess  
 
  magic = rand(); // get a random number 
   
  cout << "Enter your guess: "; 
  cin >> guess; 
 
  if (guess == magic) { 
    cout << "Right\n"; 
    cout << magic << " is the magic number.\n"; 
  } 
  else { 
    cout << "...Sorry, you're wrong."; 
    if(guess > magic) 
       cout <<" Your guess is too high.\n"; 
    else 
       cout << " Your guess is too low.\n"; 
  } 
 
  return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int x; 
	
	for(x=0; x<6; x++) { 
		if(x==1) cout << "x is one\n"; 
		else if(x==2) cout << "x is two\n"; 
		else if(x==3) cout << "x is three\n"; 
		else if(x==4) cout << "x is four\n"; 
		else cout << "x is not between 1 and 4\n"; 
	} 
	
	return 0; 
}
#endif
