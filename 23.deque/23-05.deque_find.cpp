#if 0
#include <iostream>
#include <cassert>
#include <deque>
#include <algorithm>  // For find
using namespace std;

int main(void)
{
	int x[5] = { 1, 2, 3, 4, 5 };

	deque<int> deque1(&x[0], &x[5]);

	// Search for the first occurrence
	deque<int>::iterator where = find(deque1.begin(), deque1.end(), 1);

	cout << *where << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

int main(void)
{
	vector<int> vector1(20);
	deque<int>  deque1(5);

	int i;
	for (i = 0; i < 20; ++i)
		vector1[i] = i;

	for (i = 0; i < 5; ++i)
		deque1[i] = i + 5;


	vector<int>::iterator k = search(vector1.begin(), vector1.end(), deque1.begin(), deque1.end());

	for (i = 0; i < 5; ++i)
		cout << *(k + i);

	return 0;
}
#endif