#if 0
#include <iostream>
using namespace std;
void f(void);

int main(void)
{
	cout << "Before call\n";

	f();

	cout << "After call\n";

	return 0;
}

void f(void){
	cout << "in f\n\n\n";
}
#endif


#if 0
#include <iostream> 
using namespace std;
void power(int base, int exp);

int main(void)
{
	power(10, 2);
	power(10, -2);

	return 0;
}


void power(int base, int exp)
{
	int i;

	if (exp < 0) return; /* Can't do negative exponents. */

	i = 1;

	for (; exp; exp--)
		i = base * i;
	cout << "The answer is: " << i;

	return;
}
#endif




#if 0
#include <iostream> 
using namespace std;
int box(int length, int width, int height); // return the volume 

int main(void)
{
	int answer;

	answer = box(10, 11, 3); // assign return value 
	cout << "The volume is " << answer;

	return 0;
}

// This function returns a value.  
int box(int length, int width, int height)
{
	return length * width * height;
}
#endif




#if 0
#include <iostream> 
using namespace std;
double box(double length, double width, double height); // use double data 

int main(void)
{
	double answer;

	answer = box(10.1, 11.2, 3.3); // assign return value 
	cout << "The volume is " << answer;

	return 0;
}

// This version of box uses double data. 
double box(double length, double width, double height)
{
	return length * width * height;
}
#endif




#if 0
#include <iostream> 
using namespace std;

char* get_substr(char *sub, char *str);

int main(void)
{
	char *substr;

	substr = get_substr("three", "one two three four");

	cout << "substring found: " << substr;

	return 0;
}

// Return pointer to substring or null if not found. 
char *get_substr(char *sub, char *str)
{
	int t;
	char *p, *p2, *start;

	for (t = 0; str[t]; t++) {
		p = &str[t];
		start = p;
		p2 = sub;
		while (*p2 && *p2 == *p) { // check for substring 
			p++;
			p2++;
		}

		/* If at end of p2 (i.e., substring), then a match has been found. */
		if (!*p2)
			return start; // return pointer to beginning of substring 
	}
	return 0;
}
#endif




#if 0
#include <iostream>
int Doubler(int AmountToDouble);
int main(void)
{
	int result = 0;
	int input = 123;

	std::cout << "\nBefore doubler is called...";
	std::cout << "\ninput: " << input << " doubled: " << result << "\n";

	result = Doubler(input);

	std::cout << "\nBack from Doubler...";
	std::cout << "\ninput: " << input << " doubled: " << result << "\n\n";

	return 0;
}

int Doubler(int original)
{
	if (original <= 10000)
		return original * 2;
	else
		return -1;
	std::cout << "You can't get here!\n";
}
#endif




#if 0
#include <iostream>

short f(int, int*, int*);

int main()
{
	int number = 2, squared, cubed;


	std::cout << "number: " << number << "\n";
	std::cout << "square: " << squared << "\n";
	std::cout << "cubed: " << cubed << "\n";
	return 0;
}

short f(int n, int *pSquared, int *pCubed)
{
	*pSquared = n*n;
	*pCubed = n*n*n;
}
#endif




#if 0
#include <iostream.h>

void f(int x, int& prev, int& next)
{
	prev = x - 1;
	next = x + 1;
}

int main()
{
	int x = 100, y, z;
	f(x, y, z);
	cout << "Previous=" << y << ", Next=" << z;
	return 0;
}
#endif




#if 0
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string& refToElement(vector<string>& inventory, int i);

int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << refToElement(inventory, 0) << endl;

	//assigns one reference to another -- inexpensive assignment
	string& rStr = refToElement(inventory, 1);
	cout << rStr << endl;

	//copies a string object -- expensive assignment
	string str = refToElement(inventory, 2);
	cout << str << endl;

	//altering the string object through a returned reference
	rStr = "Healing Potion";
	cout << inventory[1] << endl;

	return 0;
}

//returns a reference to a string
string& refToElement(vector<string>& vec, int i)
{
	return vec[i];
}
#endif
