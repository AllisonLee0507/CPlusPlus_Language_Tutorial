#if 0
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	srand(time(0));  
	
	int randomNumber = rand();
	
	int die = (randomNumber % 6) + 1;
	cout << "You rolled a " << die << endl;
	
	return 0;
}
#endif
