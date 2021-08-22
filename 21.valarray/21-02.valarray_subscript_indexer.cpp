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

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
using namespace std;

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
	valarray<double> va(9);
	for (int i = 0; i<va.size(); i++) {
		va[i] = i * 1.1;
	}

	printValarray(va);
	va *= 2.0;

	printValarray(va);

	valarray<double> vb(va + 10.0);

	printValarray(vb);

	valarray<double> vc;
	vc = sqrt(va) + vb / 2.0 - 1.0;

	printValarray(vc);

	return 0;
}
#endif
