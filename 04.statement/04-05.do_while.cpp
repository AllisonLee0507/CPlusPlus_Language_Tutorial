#if 0
#include <iostream>

int main(void)
{
	int counter;
	std::cout << "How many hellos? ";
	std::cin >> counter;
	do
	{
		std::cout << "Hello\n";
		counter--;
	} while (counter >0 );
	
	std::cout << "counter is: " << counter << std::endl;
	
	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int num; 
	
	do { 
		cout << "Enter a number (100 to stop): "; 
		cin >> num; 
	} while(num != 100); 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cstdlib> 
using namespace std; 
 
int main(void) 
{ 
	int magic; 
	int guess;
	
	magic = rand(); // get a random number 
	
	do { 
		cout << "Enter your guess: "; 
		cin >> guess; 
		if(guess == magic) { 
			cout << "Right"; 
			cout << magic << " is the magic number.\n"; 
		} 
		else { 
			cout << "...Sorry, you're wrong."; 
			if(guess > magic) 
				cout << " Your guess is too high.\n"; 
			else cout << " Your guess is too low.\n"; 
		} 
	} while(guess != magic); 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void)
{ 
	char choice; 
	
	do { 
		cout << "Help on:\n"; 
		cout << "  1. if\n"; 
		cout << "  2. switch\n"; 
		cout << "  3. for\n"; 
		cout << "  4. while\n"; 
		cout << "  5. do-while\n"; 
		cout << "Choose one: "; 
		
		cin >> choice; 
	
	} while( choice < '1' || choice > '5'); 
	
	cout << "\n\n"; 
	
	switch(choice) { 
		case '1': cout << "The if:\n\n"; 	  break; 
		case '2': cout << "The switch:\n\n";  break; 
		case '3': cout << "The for:\n\n"; 	  break; 
		case '4': cout << "The while:\n\n";   break; 
		case '5': cout << "The do-while:\n\n";break; 
	} 
	
	return 0; 
}
#endif
