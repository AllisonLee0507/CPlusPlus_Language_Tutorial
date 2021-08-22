#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int x, y; 
	
	x = 10; 
	y = 3; 
	cout << x << " / " << y << " is " << x / y << " with a remainder of " << x  y << "\n";  
	
	x = 1; 
	y = 2; 
	cout << x << " / " << y << " is " << x / y << "\n" << x << "  y;  
	
	return 0; 
}
#endif


#if 0
#include <iostream>

using namespace std;

int main(void)
{  
	cout << "How many pennies do you have? ";
	int pennies;
	cin >> pennies;
	
	cout << "How many nickels do you have? ";
	int nickels;
	cin >> nickels;
	
	cout << "How many dimes do you have? ";
	int dimes;
	cin >> dimes;
	
	cout << "How many quarters do you have? ";
	int quarters;
	cin >> quarters;
	
	int value = pennies + 5 * nickels + 10 * dimes 
	  + 25 * quarters;
	int dollar = value / 100;
	int cents = value % 100;
	
	cout << "Total value = " << dollar << " dollar and "
	  << cents << " cents\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;
int main(void)
{
	int num;
	cout << "Enter a whole number: ";
	cin >> num;
	if ( num % 2 == 0 )
	  cout << "The number is even" << endl;
	  
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int total, dollars, quarters, dimes, nickels, leftover;
	
	cout << "Enter number of pennies to make change for: ";
	cin >> total;
	
	dollars = total / 100;
	leftover = total % 100;
	quarters = leftover / 25;
	leftover %= 25;
	dimes = leftover / 10;
	leftover %= 10;
	nickels = leftover / 5;
	leftover %= 5;
	
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << leftover << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int total, dollars, quarters, dimes, nickels, leftover;
	cout << "Enter number of pennies to make change for: ";
	cin >> total;
	
	dollars = total / 100;
	leftover = total % 100;
	quarters = leftover / 25;
	leftover %= 25;
	dimes = leftover / 10;
	leftover %= 10;
	nickels = leftover / 5;
	leftover %= 5;
	
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << leftover << endl;
	
	return 0;
}
#endif
