#if 0
#include <iostream>

float Convert(float);

int main(void)
{
	float TempFer;
	float TempCel;
	
	std::cout << "Please enter the temperature in Fahrenheit: ";
	std::cin >> TempFer;
	TempCel = Convert(TempFer);
	std::cout << "\nHere's the temperature in Celsius: ";
	std::cout << TempCel << std::endl;
	
	return 0;
}

float Convert(float TempFer)
{
	float TempCel;
	TempCel = ((TempFer - 32) * 5) / 9;
	return TempCel;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void)
{
	float temp[5];
	
	cout << "Please enter the temperature for day one \n";
	cin >> temp[0];
	cout << "Please enter the temperature for day one \n";
	cin >> temp[1];
	cout << "Please enter the temperature for day one \n";
	cin >> temp[2];
	cout << "Please enter the temperature for day one \n";
	cin >> temp[3];
	cout << "Please enter the temperature for day one \n";
	cin >> temp[4];
	cout << " The temperatures for the first five days is ";
	cout << temp[0] << ", " << temp[1] << ", "<< temp[2] << ", "<< temp[3] << ", "; 
	cout << temp[4] << endl; 
	
	return 0;
}
#endif
