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

int main(void)
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


#if 0
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class loc {
	int longitude, latitude;
public:
	loc() {}
	loc(int lg, int lt) {
		longitude = lg;
		latitude = lt;
	}

	void show() {
		cout << longitude << " ";
		cout << latitude << "\n";
	}

	void *operator new(size_t size);
	void operator delete(void *p);
};

// new overloaded relative to loc.
void *loc::operator new(size_t size)
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

// delete overloaded relative to loc.
void loc::operator delete(void *p)
{
	cout << "In overloaded delete.\n";
	free(p);
}

int main(void)
{
	loc *p1, *p2;

	try {
		p1 = new loc(10, 20);
	}
	catch (bad_alloc xa) {
		cout << "Allocation error for p1.\n";
		return 1;
	}

	try {
		p2 = new loc(-10, -20);
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



#if 0
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class loc {
	int longitude, latitude;
public:
	loc() {}
	loc(int lg, int lt) {
		longitude = lg;
		latitude = lt;
	}

	void show() {
		cout << longitude << " ";
		cout << latitude << "\n";
	}
};

// Global new
void *operator new(size_t size)
{
	void *p;

	p = malloc(size);
	if (!p) {
		bad_alloc ba;
		throw ba;
	}
	return p;
}

// Global delete
void operator delete(void *p)
{
	free(p);
}

int main(void)
{
	loc *p1, *p2;
	float *f;

	try {
		p1 = new loc(10, 20);
	}
	catch (bad_alloc xa) {
		cout << "Allocation error for p1.\n";
		return 1;;
	}

	try {
		p2 = new loc(-10, -20);
	}
	catch (bad_alloc xa) {
		cout << "Allocation error for p2.\n";
		return 1;;
	}

	try {
		f = new float; // uses overloaded new, too
	}
	catch (bad_alloc xa) {
		cout << "Allocation error for f.\n";
		return 1;;
	}

	*f = 10.10F;
	cout << *f << "\n";

	p1->show();
	p2->show();

	delete p1;
	delete p2;
	delete f;

	return 0;
}
#endif