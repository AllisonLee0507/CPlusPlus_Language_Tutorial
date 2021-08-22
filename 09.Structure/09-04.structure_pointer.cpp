#if 0
#include <iostream>
using namespace std;

struct MyStructure
{
	int n;
	float f;
	float f2;
};

int main(void)
{ 
	MyStructure myMyStructure;
	MyStructure *ptrMyStructure;
	
	//set the f of the structure
	myMyStructure.f = 1000;
	
	//intialize the pointer
	ptrMyStructure = &myMyStructure;
	
	//change the pointers f
	ptrMyStructure->f = 2000;
	
	//print out the structures f
	cout << myMyStructure.f << "\n";
	
	return 0;
}
#endif


#if 0
#include <iostream.h>
#include <stdlib.h>

struct Employee {
	char title [50];
	int year;
};


int main(void)
{
	char buffer[50];
	
	Employee aEmployee;
	Employee * pEmployee;
	pEmployee = & aEmployee;
	
	cout << "Enter title: ";
	cin.getline (pEmployee->title,50);
	cout << "Enter year: ";
	cin.getline (buffer,50);
	pEmployee->year = atoi (buffer);
	
	cout << "\nYou have entered:\n";
	cout << pEmployee->title;
	cout << " (" << pEmployee->year << ")\n";
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

struct account
{
	int accountnum;
	float balance;
	float interestrate;
};

int main(void)
{ 
	account myaccount;
	account *ptraccount;
	
	ptraccount->balance = 1000;
	
	return 0;
}
#endif



#if 0
#include <ios>
#include <iostream>
#include <ostream>

struct MyStruct {
  int x;
  int y;
};

int main(void)
{
	MyStruct demo[10];
	std::cout << std::boolalpha;
	
	std::cout << (&demo[0]   < &demo[2])   << '\n';
	std::cout << (&demo[0]   == demo)      << '\n';
	std::cout << (&demo[10]  > &demo[9])   << '\n';
	std::cout << (&demo[0].x < &demo[0].y) << '\n';

	return 0;
}
#endif
