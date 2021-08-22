#if 0
#include <iostream>

int main(void)
{
	unsigned short int intValue = 5, yourAge = 10;
	unsigned short int * intPointer = &intValue;  // a pointer

	std::cout << "intValue:\t" << intValue;
	std::cout << "\t\tyourAge:\t" << yourAge << "\n";
	std::cout << "&intValue:\t" << &intValue;
	std::cout << "\t&yourAge:\t" << &yourAge << "\n";

	std::cout << "intPointer:\t" << intPointer << "\n";
	std::cout << "*intPointer:\t" << *intPointer << "\n\n";

	intPointer = &yourAge;       // reassign the pointer

	std::cout << "intValue:\t" << intValue;
	std::cout << "\t\tyourAge:\t" << yourAge << "\n";
	std::cout << "&intValue:\t" << &intValue;
	std::cout << "\t&yourAge:\t" << &yourAge << "\n";

	std::cout << "intPointer:\t" << intPointer << "\n";
	std::cout << "*intPointer:\t" << *intPointer << "\n\n";

	std::cout << "&intPointer:\t" << &intPointer << "\n";
	return 0;
}
#endif


#if 0
#include <iostream>

int main(void)
{
	int localVariable = 5;
	int * intPointer= &localVariable;
	int * heapPointer = new int;
	if (heapPointer == NULL)
	{
		std::cout << "Error! No memory for heapPointer!!";
		return 1;
	}
	*heapPointer = 7;
	std::cout << "localVariable: " << localVariable << "\n";
	std::cout << "*intPointer: " << *intPointer << "\n";
	std::cout << "*heapPointer: " << *heapPointer << "\n";
	delete heapPointer;
	heapPointer = new int;
	if (heapPointer == NULL)
	{
		std::cout << "Error! No memory for heapPointer!!";
		return 1;
	}
	*heapPointer = 9;
	std::cout << "*heapPointer: " << *heapPointer << "\n";
	delete heapPointer;
	return 0;
}
#endif



#if 0
#include <iostream>

int main(void)
{
	using namespace std;

	unsigned short int myAge = 5, yourAge = 10;

	unsigned short int * pAge = &myAge;

	cout << myAge << "  " << yourAge << endl;

	cout << &myAge << " " << &yourAge << endl;

	cout << pAge << " " << *pAge << endl;

	pAge = &yourAge;

	cout << myAge << " " << yourAge << endl;

	cout << &myAge << " " << &yourAge << endl;

	cout << pAge << endl;
	cout << *pAge << endl;

	cout << " " << &pAge << endl;

	return 0;
}
#endif



#if 0
#include <iostream>

typedef unsigned short int USHORT;

int main(void)
{

	using namespace std;

	USHORT myAge;
	USHORT * pAge = 0;

	myAge = 5;

	cout << myAge << endl;
	pAge = &myAge;
	cout << "*pAge: " << *pAge << endl << endl;

	*pAge = 7;

	cout << *pAge << endl;
	cout << myAge << endl << endl;

	myAge = 9;

	cout << myAge << endl;
	cout << *pAge << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
const int ARRAY_LENGTH = 5;
using namespace std;
int main(void)
{
	int Numbers [ARRAY_LENGTH] = {0, 100, 200, 300, 400};

	const int *pInt = Numbers;

	for (int nIndex = 0; nIndex < ARRAY_LENGTH; ++nIndex)
		cout << "Element [" << nIndex << "] = " << *(pInt + nIndex) << endl;

	return 0;
}
#endif


#if 0
#include <iostream>

#define iSTRING15 15
#define iSTRING20 20
#define iNULL_CHAR 1
#define iMAX_BOATS 50

using namespace std;

int iinstock;

struct stboat {
	char sztype[iSTRING15 + iNULL_CHAR];
	char szmodel[iSTRING15 + iNULL_CHAR];
	char sztitle[iSTRING20 + iNULL_CHAR];
	char szcomment[80];
	int iyear;
	long int lmotor_hours;
	float fretail;
	float fwholesale;
};

void vprint_data(stboat *stany_boatptr);

int main(void)
{
	int i;
	char newline;
	stboat astNineveh[iMAX_BOATS], *pastNineveh;
	pastNineveh = &astNineveh[0];

	cout << "How many boats in inventory? ";
	cin >> iinstock;

	for (i = 0; i<iinstock; i++) {
		cout << "\nPlease enter the make of the boat: ";
		cin >> pastNineveh->sztype;

		cout << "\nPlease enter the model of the boat: ";
		cin >> pastNineveh->szmodel;

		cout << "\nPlease enter the title number for the boat: ";
		cin >> pastNineveh->sztitle;

		cout << "\nPlease enter the model year for the boat: ";
		cin >> pastNineveh->iyear;

		cout << "\nPlease enter the current hours on "
			<< "the motor for the boat: ";
		cin >> pastNineveh->lmotor_hours;

		cout << "\nPlease enter the retail price of the boat: ";
		cin >> pastNineveh->fretail;

		cout << "\nPlease enter the wholesale price of the boat: ";
		cin >> pastNineveh->fwholesale;

		cout << "\nPlease enter a one line comment about the boat: ";
		cin.get(newline);   // process carriage return
		cin.get(pastNineveh->szcomment, 80, '.');
		cin.get(newline);   // process carriage return

		pastNineveh++;
	}

	pastNineveh = &astNineveh[0];
	vprint_data(pastNineveh);

	return (0);
}

void vprint_data(stboat *stany_boatptr)
{
	int i;
	for (i = 0; i<iinstock; i++) {
		cout << "A " << stany_boatptr->iyear << " "
			<< stany_boatptr->sztype << " "
			<< stany_boatptr->szmodel << " beauty with "
			<< stany_boatptr->lmotor_hours << " low hours.\n";
		cout << stany_boatptr->szcomment << endl;
		cout << "Grab the deal by asking your Nineveh "
			<< "salesperson for #";
		cout << stany_boatptr->sztitle << "ONLY! $"
			<< stany_boatptr->fretail << "\n\n";
		stany_boatptr++;
	}
}
#endif



#if 0
#include <iostream>
using namespace std;

class base {
	int i;
public:
	void set_i(int num) { i=num; }
	int get_i() { return i; }
};
class derived : public base {
	int j;
public:
	void set_j(int num) { j = num; }
	int get_j() { return j; }
};

int main(void)
{
	base *bp;
	derived d;

	bp = &d; // base pointer points to derived object

	// access derived object using base pointer
	bp->set_i(10);
	cout << bp->get_i() << " ";

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

void neg(int *i);

int main(void)
{
	int x;

	x = 10;
	cout << x << " negated is ";

	neg(&x);
	cout << x << "\n";

	return 0;
}

void neg(int *i)
{
	*i = -*i;
}
#endif