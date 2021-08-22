#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>

bool greater9(int);

int main(void)
{
	std::ostream_iterator< int > output(cout, " ");

	int a2[10] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	std::vector< int > v2(a2, a2 + 10); // copy of a2
	cout << "\n\nVector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);

	// count number of elements in v2 that are greater than 9
	int result = std::count_if(v2.begin(), v2.end(), greater9);
	cout << "\nNumber of elements greater than 9: " << result;

	cout << endl;
	return 0;
}
bool greater9(int value)
{
	return value > 9;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool dividesBy3(int i)
{
	if ((i % 3) == 0) return true;

	return false;
}

int main(void)
{
	vector<int> v;
	int i;

	for (i = 1; i < 20; i++) v.push_back(i);

	for (i = 0; i<v.size(); i++)
		cout << v[i] << endl;

	i = count_if(v.begin(), v.end(), dividesBy3);
	cout << i << " numbers are divisible by 3.\n";

	return 0;
}
#endif