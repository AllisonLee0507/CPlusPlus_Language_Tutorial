#if 0
#include <iostream> 
#include <cstdlib> 
using namespace std;

void f(int); // prototype 

int main()
{
	int x = 10;
	f(x);

	return 0;
}

void f(int i)
{
	i = i * i;
	cout << i;
}
#endif


#if 0
#include <iostream> 
using namespace std;

bool isEven(int num) {
	if (!(num))
		return true;
	return false;
}

int main(void)
{
	if (isEven(4))
		cout << "4 is even\n";

	if (isEven(3))
		cout << "this won't display";

	return 0;
}
#endif




#if 0
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string* ptrToElement(vector<string>* const pVec, int i);

int main()
{
	vector<string> i;
	i.push_back("A");
	i.push_back("B");
	i.push_back("C");

	cout << *(ptrToElement(&i, 0)) << "\n\n";

	string* pStr = ptrToElement(&i, 1);
	cout << *pStr << "\n\n";

	string str = *(ptrToElement(&i, 2));
	cout << str << "\n\n";

	*pStr = "test";
	cout << i[1] << endl;
	return 0;
}

string* ptrToElement(vector<string>* const pVec, int i)
{
	return &((*pVec)[i]);
}
#endif

