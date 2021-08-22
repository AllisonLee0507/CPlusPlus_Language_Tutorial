#if 0
#include <iostream>
#include <valarray>
using namespace std;

int main(void)
{
	valarray<int> v(12), result;
	valarray<size_t> len(2), interval(2);
	unsigned int i;

	for (i = 0; i<12; i++) v[i] = i;

	len[0] = 3; len[1] = 3;
	interval[0] = 2; interval[1] = 3;

	cout << "Contents of v: ";
	for (i = 0; i<12; i++)
		cout << v[i] << " ";
	cout << endl;

	result = v[gslice(0, len, interval)];

	cout << "Contents of result: ";
	for (i = 0; i<result.size(); i++)
		cout << result[i] << " ";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <valarray>
using namespace std;

int main(void)
{
	valarray<int> v(10), result;
	unsigned int i;

	for (i = 0; i<10; i++) v[i] = i;

	cout << "Contents of v: ";
	for (i = 0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;

	result = v[slice(0, 5, 2)];

	cout << "Contents of result: ";
	for (i = 0; i<result.size(); i++)
		cout << result[i] << " ";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
using namespace std;

template<class T>
void printValarray(const valarray<T>& va, int num)
{
	for (int i = 0; i<va.size() / num; ++i) {
		for (int j = 0; j<num; ++j) {
			cout << va[i*num + j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

int main(void)
{
	valarray<double> va(12);

	for (int i = 0; i<12; i++) {
		va[i] = i;
	}

	printValarray(va, 3);

	va[slice(0, 4, 3)] = pow(valarray<double>(va[slice(1, 4, 3)]),
		valarray<double>(va[slice(2, 4, 3)]));

	printValarray(va, 3);

	valarray<double> vb(va[slice(2, 4, 0)]);

	va[slice(2, 4, 3)] *= vb;
	printValarray(va, 3);

	printValarray(sqrt(valarray<double>(va[slice(3, 3, 1)])));

	va[slice(2, 4, 3)] = valarray<double>(va[slice(2, 4, 3)]) * 2.0;

	printValarray(va, 3);

	return 0;
}
#endif
