#if 0
#include <iostream>
#include <valarray>
using namespace std;

int main(void)
{
	valarray<int> v(12), result;
	valarray<size_t> len(2), interval(2);

	for (int i = 0; i<12; i++)
		v[i] = i;

	len[0] = 3;
	len[1] = 3;
	interval[0] = 2;
	interval[1] = 3;

	cout << "Contents of v: ";
	for (int i = 0; i<12; i++)
		cout << v[i] << " ";
	cout << endl;

	result = v[gslice(0, len, interval)];

	cout << "Contents of result: ";
	for (int i = 0; i<result.size(); i++)
		cout << result[i] << " ";

	return 0;
}
#endif
