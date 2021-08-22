#if 0
#include <iostream>
typedef unsigned short int USHORT;       

int main(void)
{
	USHORT Width = 5;
	USHORT Length;
	
	Length = 10;
	USHORT Area = Width * Length;
	
	std::cout << "Width: " << Width << "\n";
	std::cout << "Length: " << Length << std::endl;
	std::cout << "Area: " << Area << std::endl;
	
	return 0;
}
#endif


#if 0
#include <cmath>
#include <iostream>
using namespace std;

typedef double NewType;

NewType f(double number);
NewType f2(double number);
NewType f3(double number);

int main(void)
{
	int menu;
	double num;
	NewType response;
	
	response = f(num);
	cout << "The answer is " << response;
	
	response = f2(num);
	cout << "The answer is " << response;
	
	response = f3(num);
	cout << "The answer is " << response;
	
	return 0;
}

NewType f(double number)
{
	return sqrt(number);
}
NewType f2(double number)
{
	return pow(number,.3333);
}
NewType f3(double number)
{
	return pow (number,.25);
}
#endif


