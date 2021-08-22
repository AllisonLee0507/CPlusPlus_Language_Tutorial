#if 0
#include <iostream>
#include <vector>
#include <cassert>
#include <numeric>  // For accumulate
using namespace std; 

class multiply {
public:
	int operator()(int x, int y) const { return x * y; }
};

int main(void)
{
	int x[5] = { 2, 3, 5, 7, 11 };

	vector<int> vector1(&x[0], &x[5]);

	int product = accumulate(vector1.begin(), vector1.end(),
		1, multiply());


	cout << product << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <cassert>
#include <numeric>  // For accumulate
#include <functional>  // For multiplies
using namespace std;

int main(void)
{
	int x[5] = { 2, 3, 5, 7, 11 };

	vector<int> vector1(&x[0], &x[5]);

	int product = accumulate(vector1.begin(), vector1.end(), 1, multiplies<int>());

	cout << product << endl;
	return 0;
}
#endif
