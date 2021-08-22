#if 0
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool greater10(int value);

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
	vector< int > v(a, a + SIZE);

	vector< int >::iterator location;
	location = find(v.begin(), v.end(), 16);

	if (location != v.end())
		cout << "\n\nFound 16 at location " << (location - v.begin());
	else
		cout << "\n\n16 not found";

	location = find(v.begin(), v.end(), 100);

	if (location != v.end())
		cout << "\nFound 100 at location " << (location - v.begin());
	else
		cout << "\n100 not found";

	location = find_if(v.begin(), v.end(), greater10);

	if (location != v.end())
		cout << "\n\nThe first value greater than 10 is " << *location << "\nfound at location " << (location - v.begin());
	else
		cout << "\n\nNo values greater than 10 were found";

	return 0;
}

bool greater10(int value) 
{
	return value > 10; 
}
#endif
