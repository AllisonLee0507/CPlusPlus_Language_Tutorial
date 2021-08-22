#if 0
#include <iostream>

int main(void)
{
	unsigned short int Width = 5, Length;
	Length = 10;
	
	unsigned short int Area = Width * Length;
	
	std::cout << "Width: " << Width << "\n";
	std::cout << "Length: "  << Length << std::endl;
	std::cout << "Area: " << Area << std::endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>

typedef unsigned short int USHORT;

int main(void)
{

	using std::cout;
	using std::endl;
	
	USHORT  Width = 5;
	USHORT Length;
	Length = 10;
	USHORT Area  = Width * Length;
	cout << "Width:" << Width << endl;
	cout << "Length: "  << Length << endl;
	cout << "Area: " << Area <<endl;
	return 0;
}
#endif


#if 0
#include <iostream>
int main(void)
{
	short int smallNumber;
	smallNumber = 32767;
	std::cout << "small number:" << smallNumber << std::endl;
	smallNumber++;
	std::cout << "small number:" << smallNumber << std::endl;
	smallNumber++;
	std::cout << "small number:" << smallNumber << std::endl;
	return 0;
}
#endif


#if 0
#include <iostream>
int main()
{
	using std::cout;
	using std::endl;
	
	unsigned short int smallNumber;
	smallNumber = 65535;
	cout << "small number:" << smallNumber << endl;
	smallNumber++;
	cout << "small number:" << smallNumber << endl;
	smallNumber++;
	cout << "small number:" << smallNumber << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void)
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	
	short lives, aliensKilled;
	
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	
	double engineTemp = 6572.89;
	
	cout << "\nscore: "           << score << endl;
	cout << "distance: "      << distance << endl;
	cout << "playAgain: "      << playAgain << endl;
	
	cout << "lives: "           << lives << endl;
	cout << "aliensKilled: "<< aliensKilled << endl;
	cout << "engineTemp: "     << engineTemp << endl;
	
	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
	
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>

int main(void)
{
	using std::cout;
	using std::endl;
	
	unsigned short int Width = 5, Length;
	Length = 10;
	
	
	unsigned short int Area  = (Width * Length);
	
	cout << "Width:" << Width << endl;
	cout << "Length: "  << Length << endl;
	cout << "Area: " << Area << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
 
int main(void)
{
	unsigned short int smallNumber;
	smallNumber = 65535;
	std::cout << "small number:" << smallNumber << std::endl;
	smallNumber++;
	std::cout << "small number:" << smallNumber << std::endl;
	smallNumber++;
	std::cout << "small number:" << smallNumber << std::endl;
	
	short int smallNumber1;
	smallNumber1 = 32767;
	std::cout << "small number:" << smallNumber1 << std::endl;
	smallNumber1++;
	std::cout << "small number:" << smallNumber1 << std::endl;
	smallNumber1++;
	std::cout << "small number:" << smallNumber1 << std::endl;
	
	return 0;
}
#endif
