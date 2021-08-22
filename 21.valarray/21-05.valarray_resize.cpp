#if 0
#include <iostream>
#include <valarray>
using namespace std;

// print valarray
template <class T>
void printValarray(const valarray<T>& va)
{
	for (int i = 0; i<va.size(); i++) {
		cout << va[i] << ' ';
	}
	cout << endl;
}

int main(void)
{
	valarray<double> va1(10), va2(10);

	for (int i = 0; i<10; i++) {
		va1[i] = i * 1.1;
	}

	va2 = va1;
	va1.resize(0);

	printValarray(va1);
	printValarray(va2);

	return 0;
}
#endif
