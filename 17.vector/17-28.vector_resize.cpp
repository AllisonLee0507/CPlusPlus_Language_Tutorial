#if 0
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v(10, 66);
	v[1] = 100;

	// get an iterator that points to the maximum
	vector<int>::iterator before_itr = max_element(v.begin(), v.end());
	cout << "The maximum before resizing is " << *before_itr;

	// make the index of the maximum
	vector<int>::difference_type max_index = before_itr - v.begin();

	// force the vector to reallocate
	v.resize(v.capacity() + 1);

	return 0;
}
#endif