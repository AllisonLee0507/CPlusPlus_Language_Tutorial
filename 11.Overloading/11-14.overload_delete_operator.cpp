#if 0
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class Point {
	int x, y;
public:
	Point() {}
	Point(int px, int py) {
		x = px;
		y = py;
	}

	void show() {
		cout << x << " ";
		cout << y << "\n";
	}

	void *operator new(size_t size);
	void operator delete(void *p);
};

// new overloaded relative to Point.
void *Point::operator new(size_t size)
{
	void *p;

	cout << "In overloaded new.\n";
	p = malloc(size);
	if (!p) {
		bad_alloc ba;
		throw ba;
	}
	return p;
}

// delete overloaded relative to Point.
void Point::operator delete(void *p)
{
	cout << "In overloaded delete.\n";
	free(p);
}

int main()
{
	Point *p1, *p2;

	try {
		p1 = new Point(10, 20);
	}
	catch (bad_alloc xa) {
		cout << "Allocation error for p1.\n";
		return 1;
	}

	try {
		p2 = new Point(-10, -20);
	}
	catch (bad_alloc xa) {
		cout << "Allocation error for p2.\n";
		return 1;;
	}

	p1->show();
	p2->show();

	delete p1;
	delete p2;

	return 0;
}
#endif
