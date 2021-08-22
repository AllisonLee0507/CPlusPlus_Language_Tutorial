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

	v = v.cshift(3);

	cout << "Shifted contents: ";
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

	for (int i = 0; i<10; i++)
		v[i] = i;

	cout << "Original contents: ";
	for (int i = 0; i<10; i++)
		cout << v[i] << " ";

	v = v.cshift(3);
	cout << "Shifted contents: ";
	for (int i = 0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;


	cout << endl;

	return 0;
}
#endif