#if 0
#include <iostream> 
using namespace std; 
 
class ThreeD { 
	int x, y, z; 
public: 
	ThreeD() { x = y = z = 0; } 
	ThreeD(int i, int j, int k) { x = i; y = j; z = k; } 
	
	ThreeD operator+(ThreeD op2); // op1 is implied 
	ThreeD operator=(ThreeD op2); // op1 is implied 
	ThreeD operator-(ThreeD op2); // op1 is implied 
	void show() ; 
}; 
// Overload subtraction. 
ThreeD ThreeD::operator-(ThreeD op2) 
{ 
	ThreeD temp; 
	
	temp.x = x - op2.x; 
	temp.y = y - op2.y; 
	temp.z = z - op2.z; 
	return temp; 
}
 
// Overload +. 
ThreeD ThreeD::operator+(ThreeD op2) 
{ 
	ThreeD temp; 
	
	temp.x = x + op2.x;  
	temp.y = y + op2.x;  
	temp.z = z + op2.z;  
	return temp; 
} 
 
// Overload assignment. 
ThreeD ThreeD::operator=(ThreeD op2) 
{ 
	x = op2.x;  
	y = op2.y;  
	z = op2.z;  
	return *this; 
} 
 
// Show X, Y, Z coordinates. 
void ThreeD::show() 
{ 
	cout << x << ", "; 
	cout << y << ", "; 
	cout << z << "\n"; 
} 
 
int main(void) 
{ 
	ThreeD a(1, 2, 3), b(10, 10, 10), c; 
	
	cout << "Original value of a: "; 
	a.show(); 
	cout << "Original value of b: "; 
	b.show(); 
	
	c = a - c; 
	cout << "a - c: "; 
	c.show(); 
	
	cout << "\n"; 
	
	
	return 0; 
}
#endif


#if 0
#include <iostream>
 
class MyType
{
public:
	MyType(); 
	int GetAge() const { return *itsAge; }
	int GetWeight() const { return *itsWeight; }
	void SetAge(int age) { *itsAge = age; }
	MyType operator=(const MyType &);

private:
	int *itsAge;
	int *itsWeight;
};

MyType::MyType()
{
	itsAge = new int;
	itsWeight = new int;
	*itsAge = 5;
	*itsWeight = 9;
}


MyType MyType::operator=(const MyType & rhs)
{
	if (this == &rhs)
		return *this;
		
	delete itsAge;
	delete itsWeight;
	
	itsAge = new int;
	itsWeight = new int;
	*itsAge = rhs.GetAge();
	*itsWeight = rhs.GetWeight();
	
	return *this;
}


int main(void)
{
	MyType myObject;
	std::cout << "myObject's age: " << myObject.GetAge() << std::endl;
	std::cout << "Setting myObject to 6...\n";
	myObject.SetAge(6);
	MyType whiskers;
	std::cout << "whiskers' age: " << whiskers.GetAge() << std::endl;
	std::cout << "copying myObject to whiskers...\n";
	whiskers = myObject;
	std::cout << "whiskers' age: " << whiskers.GetAge() << std::endl;
	return 0;
}
#endif



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

int main()
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
	loc() {} // needed to construct temporaries
	loc(int lg, int lt) {
		longitude = lg;
		latitude = lt;
	}
	
	void show() {
		cout << longitude << " ";
		cout << latitude << "\n";
	}
	
	friend loc operator+(loc op1, loc op2); // now a friend
	loc operator-(loc op2);
	loc operator=(loc op2);
	loc operator++();
};
   
// + is overloaded using friend function.
loc operator+(loc op1, loc op2)
{
	loc temp;
	
	temp.longitude = op1.longitude + op2.longitude;
	temp.latitude = op1.latitude + op2.latitude;
	
	return temp;
}
   
// Overload - for loc.
loc loc::operator-(loc op2)
{
	loc temp;
	
	// notice order of operands
	temp.longitude = longitude - op2.longitude;
	temp.latitude = latitude - op2.latitude;
	
	return temp;
}
   
// Overload assignment for loc.
loc loc::operator=(loc op2)
{
	longitude = op2.longitude;
	latitude = op2.latitude;
	
	return *this; // i.e., return object that generated call
}
   
// Overload ++ for loc.
loc loc::operator++()
{
	longitude++;
	latitude++;
	
	return *this;
}
   
int main(void)
{
	loc ob1(10, 20), ob2( 5, 30);
	
	ob1 = ob1 + ob2;
	ob1.show();
	
	return 0;
}
#endif
