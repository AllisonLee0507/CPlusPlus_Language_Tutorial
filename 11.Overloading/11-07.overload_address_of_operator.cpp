#if 0
#include <iostream>
using namespace std;

class Point {
	int a[3];
public:
	Point(int i, int j, int k) {
		a[0] = i;
		a[1] = j;
		a[2] = k;
	}
	int &operator[](int i) { return a[i]; }
};

int main(void)
{
	Point ob(1, 2, 3);
	
	cout << ob[1]; // displays 2
	cout << " ";
	
	ob[1] = 25; // [] on left of =
	
	cout << ob[1]; // now displays 25
	
	return 0;
}
#endif

