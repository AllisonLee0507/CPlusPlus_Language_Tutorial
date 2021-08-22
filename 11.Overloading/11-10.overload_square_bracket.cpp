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
	int operator[](int i) { return a[i]; }
};

int main(void)
{
	Point ob(1, 2, 3);
	
	cout << ob[1]; // displays 2
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
	int a[3];
public:
	Point(int i, int j, int k) {
		a[0] = i;
		a[1] = j;
		a[2] = k;
	}
	int &operator[](int i);
};

// Provide range checking for Point.
int &Point::operator[](int i)
{
	if(i<0 || i> 2) {
		cout << "Boundary Error\n";
		exit(1);
	}
	return a[i];
}

int main(void)
{
	Point ob(1, 2, 3);
	
	cout << ob[1]; // displays 2
	cout << " ";
	
	ob[1] = 25; // [] appears on left
	cout << ob[1]; // displays 25
	
	ob[3] = 44; // generates runtime error, 3 out-of-range
	
	return 0;
}
#endif

