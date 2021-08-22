#if 0
#include <iostream> 
using namespace std;

void f1(void);

int main(void)
{
	int val = 10;

	cout << "val in main(): " << val << '\n';
	f1();
	cout << "val in main(): " << val << '\n';

	return 0;
}

void f1()
{
	int val = 88;

	cout << "val in f1(): " << val << "\n";
}
#endif


#if 0
#include <iostream> 
using namespace std;

void f(void);

int main(void)
{
	for (int i = 0; i < 3; i++) f();

	return 0;
}

// num is initialized each time f() is called. 
void f(void)
{
	int num = 99;

	cout << num << "\n";

	num++; // this has no lasting effect 
}
#endif

