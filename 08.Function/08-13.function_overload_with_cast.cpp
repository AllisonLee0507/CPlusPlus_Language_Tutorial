#if 0
#include <iostream> 
using namespace std;

void f(int x);

void f(double x);

int main(void)
{
	int i = 1;
	double d = 1.1;
	short s = 9;
	float r = 1.5F;

	f(i); // calls f(int) 
	f(d); // calls f(double) 

	f(s); // calls f(int) -- type conversion 
	f(r); // calls f(double) -- type conversion 

	return 0;
}

void f(int x) {
	cout << "Inside f(int): " << x << "\n";
}

void f(double x) {
	cout << "Inside f(double): " << x << "\n";
}
#endif


#if 0
#include <iostream> 
using namespace std;

void f(int x);
void f(short x);
void f(double x);

int main(void)
{
	int i = 1;
	double d = 1.1;
	short s = 9;
	float r = 1.5F;

	f(i); // calls f(int) 
	f(d); // calls f(double) 

	f(s); // now calls f(short)  

	f(r); // calls f(double) -- type conversion 

	return 0;
}

void f(int x) {
	cout << "Inside f(int): " << x << "\n";
}

void f(short x) {
	cout << "Inside f(short): " << x << "\n";
}

void f(double x) {
	cout << "Inside f(double): " << x << "\n";
}
#endif

