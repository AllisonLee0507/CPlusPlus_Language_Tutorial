#if 0
#include <iostream> 
using namespace std; 
 
const int intCount = 100; 
 
int main(void) 
{ 
	int empNums[intCount]; 
	double salary[intCount]; 
	char *names[intCount]; 
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;
	
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;
	
	enum ship {FIGHTER = 25, BOMBER, CRUISER = 50, DESTROYER = 100};
	ship myShip = BOMBER;
	cout << (CRUISER - myShip) << " Resource Points.\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>

using namespace std;

int main()
{  
	double bottles;
	
	cout << "How many bottles do you have? ";
	cin >> bottles;
	
	double cans;
	cout << "How many cans do you have? ";
	cin >> cans;
	
	const double BOTTLE_VOLUME = 2.0;
	const double CAN_VOLUME = 0.355;
	double total = bottles * BOTTLE_VOLUME 
	  + cans * CAN_VOLUME;
	
	cout << "The total volume is " << total << " liter.\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>
int main()
{
	const int Sunday = 0;
	const int Monday = 1;
	const int Tuesday = 2;
	const int Wednesday = 3;
	const int Thursday = 4;
	const int Friday = 5;
	const int Saturday = 6;
	
	int today;
	today = Monday;
	
	if (today == Sunday || today == Saturday)
		std::cout << "\nGotta' love the weekends!\n";
	else
		std::cout << "\nBack to work.\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

void f(const int[]);

int main(void)
{
	int a[] = { 10, 20, 30 };
	
	f( a );
	cout << a[ 0 ] << ' ' << a[ 1 ] << ' ' << a[ 2 ] << '\n';
	
	return 0;
}

void f(const int b[])
{
   cout << b[ 0 ]; 
   return;
}
#endif
