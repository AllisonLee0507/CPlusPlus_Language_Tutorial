#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>

int main()
{
	cout << "\nThe maximum of 'G' and 'Z' is: " << std::max('G', 'Z');
	cout << "\nThe maximum of 12 and 7 is: " << std::max(12, 7);
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
	int* pmax;

	pmax = max(px, py, int_ptr_less);
	cout << *pmax;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	cout << "The minimum of 12 and 7 is: " << min(12, 7);
	cout << "\nThe maximum of 12 and 7 is: " << max(12, 7);
	cout << "\nThe minimum of 'G' and 'Z' is: "
		<< min('G', 'Z');
	cout << "\nThe maximum of 'G' and 'Z' is: "
		<< max('G', 'Z') << endl;

	return 0;
}
#endif
