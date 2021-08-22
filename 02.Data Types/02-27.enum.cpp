#if 0
#include <iostream>
using std::cout;

enum Language { English, French, German, Italian, Spanish };

int main(void)
{
	cout << "\nPossible languages are:\n"
	   << English << ". English\n"
	   << French  << ". French\n"
	   << German  << ". German\n"
	   << Italian << ". Italian\n"
	   << Spanish << ". Spanish\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>
int main(void)
{
	enum Days { Sunday, Monday, Tuesday,Wednesday, Thursday, Friday, Saturday };
	
	Days today;
	today = Monday;
	
	if (today == Sunday || today == Saturday)
		std::cout << " love the weekends!\n";
	else
		std::cout << "\nBack to work.\n";
	
	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
enum Letter { A, B, C, D, E }; 
 
char name[][20] = { 
  "Automobile", 
  "Bank", 
  "Cat", 
  "Day", 
  "eagle" 
}; 
 
int main(void)
{
	Letter how; 
	
	how = A; 
	cout << name[how] << '\n'; 
	
	how = C; 
	cout << name[how] << '\n'; 
	
	how = D; 
	cout << name[how] << '\n'; 
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;

enum Language { English, French, German, Italian, Spanish };

int main(void)
{  
	Language tongue = German;
	cout << "\n Current language is " << tongue;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;

enum Language { English, French, German, Italian, Spanish };

int main(void)
{   
	Language tongue = German;
	tongue = static_cast<Language>(tongue + 1);
	
	cout << "\n Current language is now " << tongue
	   << std::endl;
	
	
	return 0;
}
#endif



#if 0
#include <iostream>

enum ERR_CODE { SUCCESS, ERROR };
ERR_CODE f(int, int&, int&);

int main(void)
{   
	int number = 2, squared, cubed;
	ERR_CODE result;
	
	result = f(number, squared, cubed);
	
	if (result == SUCCESS)
	{
		;
	}
	else
		std::cout << "Error encountered!!\n";
		
	return 0;
}

ERR_CODE f(int n, int &rSquared, int &rCubed)
{
	return ERROR;   // simple error code
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void)
{ 
	enum WeekDays { Sun, Mon, Tue,Wed, Thu, Fri, Sat, DaysInWeek };
	int ArrayWeek[DaysInWeek] = { 10, 20, 30, 40, 50, 60, 70 };
	
	cout << "The value at Tuesday is: " << ArrayWeek[Tue];
	
	return 0;
}
#endif


#if 0
#include<iostream.h>

enum color{
	RED=1,
	GREEN=6,
	BLUE=9
};

int main(void)
{ 
	enum color v1=RED,v2;
	cout<<"RED="<<RED<<endl;
	cout<<"GREEN="<<GREEN<<endl;
	cout<<"BLUE="<<BLUE<<endl;
	cout<<"v1="<<v1<<endl;
	v2=GREEN;
	cout<<"(v1<v2)="<<(v1<v2)<<endl;
	
	return 0;
}
#endif


#if 0
#endif


#if 0
#endif


#if 0
#endif



#if 0
#endif

