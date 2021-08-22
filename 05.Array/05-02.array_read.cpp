#if 0
#include <iostream>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;

int main(void) 
{
  int height[10]; 
  int count = 0;  
  char reply = 0; 

  do {
    cout << endl
         << "Enter a height as an integral number of inches: ";
    cin >> height[count++];

    // Check if another input is required
    cout << "Do you want to enter another (y or n)? ";
    cin >> reply;
  } while(count < 10 && std::tolower(reply) == 'y'); 

  return 0;
}
#endif


#if 0
#include <iostream>
 
int main()
{
	int myArray[5];
	
	for (int i=0; i<5; i++)  // 0-4
	{
		std::cout << "Value for myArray[" << i << "]: ";
		std::cin >> myArray[i];
	}
	
	for (int i = 0; i<5; i++)
		std::cout << i << ": " << myArray[i] << "\n";
		
	return 0;
}
#endif

