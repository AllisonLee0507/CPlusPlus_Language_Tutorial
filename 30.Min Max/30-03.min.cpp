#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	cout << "\nThe minimum of 'G' and 'Z' is: " << std::min('G', 'Z');
	cout << "\nThe minimum of 12 and 7 is: " << std::min(12, 7);
	cout << endl;

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <iostream>
using namespace std;

bool int_ptr_less(int* a, int* b)
{
	return *a < *b;
}

int main(void)
{
	int x = 17;
	int y = 42;
	int* px = &x;
	int* py = &y;
	int* pmin;

	// call min() with special comparison function
	pmin = min(px, py, int_ptr_less);
	cout << *pmin;

	return  0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int x = 4, y = 5;
	cout << "x is " << x << " and y is " << y << endl;
	cout << "Max is " << max(x, y) << endl;
	cout << "Min is " << min(x, y) << endl;
	swap(x, y);
	cout << "x is " << x << " and y is " << y << endl;
	cout << "Max is " << max(x, y) << endl;
	cout << "Min is " << min(x, y) << endl;

	return 0;
}
#endif
