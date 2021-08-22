#if 0
#include <iostream>
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
	Point operator+(Point op2);
	Point operator()(int i, int j);
};

// Overload ( ) for Point.
Point Point::operator()(int i, int j)
{
	x = i;
	y = j;
	
	return *this;
}

// Overload + for Point.
Point Point::operator+(Point op2)
{
	Point temp;
	
	temp.x = op2.x + x;
	temp.y = op2.y + y;
	
	return temp;
}

int main(void)
{
	Point ob1(10, 20), ob2(1, 1);
	
	ob1.show();
	ob1(7, 8); // can be executed by itself
	ob1.show();
	
	ob1 = ob2 + ob1(10, 10); // can be used in expressions
	ob1.show();
	
	return 0;
}
#endif


#if 0
#include <iostream>
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
	loc operator+(loc op2);
	loc operator()(int i, int j);
};
   
// Overload ( ) for loc.
loc loc::operator()(int i, int j)
{
	longitude = i;
	latitude = j;
	
	return *this;
}
   
// Overload + for loc.
loc loc::operator+(loc op2)
{
	loc temp;
	
	temp.longitude = op2.longitude + longitude;
	temp.latitude = op2.latitude + latitude;
	return temp;
}
   
int main(void)
{
	loc ob1(10, 20), ob2(1, 1);
	
	ob1.show();
	ob1(7, 8); // can be executed by itself
	ob1.show();
	
	ob1 = ob2 + ob1(10, 10); // can be used in expressions
	ob1.show();
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
   
class MyClass {
	int a[3];
public:
	MyClass(int i, int j, int k) {
		a[0] = i;
		a[1] = j;
		a[2] = k;
	}
	int operator[](int i) { return a[i]; }
};
   
int main(void)
{
	MyClass ob(1, 2, 3);
	
	cout << ob[1]; // displays 2
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
   
class MyClass {
	int a[3];
public:
	MyClass(int i, int j, int k) {
		a[0] = i;
		a[1] = j;
		a[2] = k;
	}
	int &operator[](int i) { return a[i]; }
};
   
int main(void)
{
	MyClass ob(1, 2, 3);
	
	cout << ob[1]; // displays 2
	cout << " ";
	
	ob[1] = 25;    // [] on left of =
	
	cout << ob[1]; // now displays 25
	
	return 0;
}
#endif



#if 0
// A safe array example.
#include <iostream>
#include <cstdlib>
using namespace std;
   
class MyClass {
	int a[3];
public:
	MyClass(int i, int j, int k) {
		a[0] = i;
		a[1] = j;
		a[2] = k;
	}
	int &operator[](int i);
};
   
// Provide range checking for MyClass.
int &MyClass::operator[](int i)
{
	if(i<0 || i> 2) {
		cout << "Boundary Error\n";
		exit(1);
	}
	return a[i];
}
   
int main(void)
{
	MyClass ob(1, 2, 3);
	
	cout << ob[1]; // displays 2
	cout << " ";
	
	ob[1] = 25;    // [] appears on left
	cout << ob[1]; // displays 25
	
	ob[3] = 44;    // generates runtime error, 3 out-of-range
	
	return 0;
}
#endif



#if 0
#include<iostream.h>
class Sample
{
	int A[10][10];
public:
	int &operator()(int,int);
};
int &Sample::operator()(int x,int y)
{
	cout << "()";
	return A[x][y];
}

int main(void)
{
	Sample a;
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)	a(i,j)=i+j;
		for(i=0;i<10;i++)	cout<<a(i,1)<<" ";
	}
	cout<<endl;
	
	return 0;
}
#endif

