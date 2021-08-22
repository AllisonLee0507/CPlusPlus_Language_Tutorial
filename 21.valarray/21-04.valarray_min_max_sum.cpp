#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);
	int i;

	for (i = 0; i<10; i++) v[i] = i;

	cout << "Original contents: ";
	for (i = 0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);
	int i;

	for (i = 0; i<10; i++) v[i] = i;

	cout << "Original contents: ";
	for (i = 0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;

	valarray<bool> vb = v < 5;
	cout << "Those elements less than 5: ";
	for (i = 0; i<10; i++)
		cout << vb[i] << " ";
	cout << endl << endl;

	return 0;
}
#endif



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
	// define two valarrays with ten elements
	valarray<double> va1(10), va2(10);

	// assign values 0.0, 1.1, up to 9.9 to the first valarray
	for (int i = 0; i<10; i++) {
		va1[i] = i * 1.1;
	}

	// assign -1 to all elements of the second valarray
	va2 = -1;

	// print both valarrays
	printValarray(va1);
	printValarray(va2);

	// print minimum, maximum, and sum of the first valarray
	cout << "min(): " << va1.min() << endl;
	cout << "max(): " << va1.max() << endl;
	cout << "sum(): " << va1.sum() << endl;

	// assign values of the first to the second valarray
	va2 = va1;

	// remove all elements of the first valarray
	va1.resize(0);

	// print both valarrays again
	printValarray(va1);
	printValarray(va2);

	return 0;
}
#endif
