#if 0
#include <iostream.h>
#include <stdlib.h>

int main(void)
{
	char input [100];
	int count,n;
	long *longPointer, total = 0;
	
	cout << "How many numbers do you want to type in? ";
	
	cin.getline (input,100); 
	count=atoi (input);
	
	longPointer= new long[count];
	
	if (longPointer == NULL) 
		exit (1);
	
	for (n=0; n<count; n++)
	{
		cout << "Enter number: ";
		cin.getline (input,100); 
		longPointer[n]=atol (input);
	}
	
	cout << "You have entered: ";
	for (n=0; n<count; n++)
		cout << longPointer[n] << ", ";
	
	delete[] longPointer;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class Point {
	int x, y;
public:
	Point() {x = y = 0;}
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
	
	void *operator new[](size_t size);
	void operator delete[](void *p);
};

// new overloaded relative to Point.
void *Point::operator new(size_t size)
{
	void *p;
	
	cout << "In overloaded new.\n";
	p =  malloc(size);
	if(!p) {
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

// new overloaded for Point arrays.
void *Point::operator new[](size_t size)
{
	void *p;
	
	cout << "Using overload new[].\n";
	p =  malloc(size);
	if(!p) {
		bad_alloc ba;
		throw ba;
	}
	return p;
}

// delete overloaded for Point arrays.
void Point::operator delete[](void *p)
{
	cout << "Freeing array using overloaded delete[]\n";
	free(p);
}

int main()
{
	Point *p1, *p2;
	int i;
	
	try {
		p1 = new Point (10, 20); // allocate an object
	} catch (bad_alloc xa) {
		cout << "Allocation error for p1.\n";
		return 1;;
	}
	
	try {
		p2 = new Point [10]; // allocate an array
	} catch (bad_alloc xa) {
		cout << "Allocation error for p2.\n";
		return 1;;
	}
	
	p1->show();
	
	for(i=0; i<10; i++)
	p2[i].show();
	
	delete p1; // free an object
	delete [] p2; // free an array
	
	return 0;
}
#endif



#if 0
#endif



#if 0
#endif



#if 0
#endif



#if 0
#endif
