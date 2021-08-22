#if 0
#include <iostream>
using std::cout;
using std::endl;

class MyType {
public:
	MyType (int arg = 0) : x(arg) {	}	
	bool operator!=(const MyType& arg) const {      
		cout << "comparing" << endl;  
		return x != arg.x;
	}
	int operator*() const { return x; }              
	MyType& operator++() {                          
		++x;
		return *this;
	}	
private:
	int x;
};

int main(void)
{
	MyType begin(3);
	MyType end(7);
	
	for( ; begin != end ; ++begin)
		cout << *begin << " ";
	
	return 0;
}
#endif


#if 0
#include <iostream>
 
class MyType
{
public:
	MyType();
	~MyType(){}
	int getValue()const { 
	return myValue; 
	}
	void setValue(int x) {
	myValue = x; 
	}
	void Increment() { 
	++myValue; 
	}
	const MyType& operator++ ();

private:
	int myValue;
};

MyType::MyType():myValue(0){}

const MyType& MyType::operator++()
{
	++myValue;
	return *this;
}

int main(void)
{
	MyType i;
	
	std::cout << "The value of i is " << i.getValue() << std::endl;
	
	i.Increment();
	
	std::cout << "The value of i is " << i.getValue() << std::endl;
	++i;
	std::cout << "The value of i is " << i.getValue() << std::endl;
	
	MyType a = ++i;
	std::cout << "The value of a: " << a.getValue();
	std::cout << " and i: " << i.getValue() << std::endl;
	
	return 0;
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class ThreeD { 
	int x, y, z; 
public: 
	ThreeD() { x = y = z = 0; } 
	ThreeD(int i, int j, int k) {x = i; y = j; z = k; } 
	
	ThreeD operator++(); // prefix version of ++ 
	
	void show() ; 
}; 
 
// Overload the prefix version of ++. 
ThreeD ThreeD::operator++() 
{ 
	x++; // increment x, y, and z  
	y++;  
	z++; 
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
	ThreeD a(1, 2, 3); 
	
	cout << "Original value of a: "; 
	a.show(); 
	
	++a;  // increment a 
	cout << "Value after ++a: "; 
	a.show(); 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class ThreeD { 
	int x, y, z; 
public: 
	ThreeD() { x = y = z = 0; } 
	ThreeD(int i, int j, int k) {x = i; y = j; z = k; } 
	
	ThreeD operator++(int notused); // postfix version of ++ 
	
	void show() ; 
}; 
 
// Show X, Y, Z coordinates. 
void ThreeD::show() 
{ 
	cout << x << ", "; 
	cout << y << ", "; 
	cout << z << "\n"; 
} 

ThreeD ThreeD::operator++(int notused) 
{ 
	ThreeD temp = *this; // save original value 
	
	x++;  // increment x, y, and z 
	y++; 
	z++; 
	return temp; // return original value 
}

 
int main(void) 
{ 
	ThreeD a(1, 2, 3); 
	
	cout << "Original value of a: "; 
	a.show(); 
	
	a++;  // increment a 
	cout << "Value after ++a: "; 
	a.show(); 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
class ThreeD { 
	int x, y, z; 
public: 
	ThreeD() { x = y = z = 0; } 
	ThreeD(int i, int j, int k) {x = i; y = j; z = k; } 
	
	ThreeD operator++(); // prefix version of ++ 
	ThreeD operator++(int notused); // postfix version of ++ 
	
	void show() ; 
}; 
 
// Overload the prefix version of ++. 
ThreeD ThreeD::operator++() 
{ 
	x++;  // increment x, y, and z 
	y++; 
	z++; 
	return *this; // return altered value 
} 
 
// Overload the postfix version of ++. 
ThreeD ThreeD::operator++(int notused) 
{ 
	ThreeD temp = *this; // save original value 
	
	x++; // increment x, y, and z 
	y++; 
	z++; 
	return temp; // return original value 
} 
 
// Show X, Y, Z coordinates. 
void ThreeD::show( ) 
{ 
	cout << x << ", "; 
	cout << y << ", "; 
	cout << z << "\n"; 
} 
 
int main(void) 
{ 
	ThreeD a(1, 2, 3); 
	ThreeD b; 
	
	cout << "Original value of a: "; 
	a.show(); 
	
	++a; // prefix increment 
	cout << "Value after ++a: "; 
	a.show(); 
	
	a++; // postfix increment 
	cout << "Value after a++: "; 
	a.show(); 
	
	
	b = ++a; 
	cout << "\nValue of a after b = ++a: "; 
	a.show(); 
	cout << "Value of b after b = ++a: "; 
	b.show(); 
	
	b = a++; 
	cout << "\nValue of a after b = a++: "; 
	a.show(); 
	cout << "Value of b after b = a++: "; 
	b.show(); 
	
	return 0; 
}
#endif



#if 0
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point() {} // needed to construct temporaries
	Point(int px, int py) {
		x = px;
		y = py;
	}
	
	void show() {
		cout << x << " ";
		cout << y << "\n";
	}
	
	Point operator+(Point op2);
	Point operator-(Point op2);
	Point operator=(Point op2);
	Point operator++();
};

// Overload + for Point.
Point Point::operator+(Point op2)
{
	Point temp;
	
	temp.x = op2.x + x;
	temp.y = op2.y + y;
	
	return temp;
}

// Overload - for Point.
Point Point::operator-(Point op2)
{
	Point temp;
	
	// notice order of operands
	temp.x = x - op2.x;
	temp.y = y - op2.y;
	
	return temp;
}

// Overload asignment for Point.
Point Point::operator=(Point op2)
{
	x = op2.x;
	y = op2.y;
	
	return *this; // i.e., return object that generated call
}

// Overload prefix ++ for Point.
Point Point::operator++()
{
	x++;
	y++;
	
	return *this;
}

int main(void)
{
	Point ob1(10, 20), ob2( 5, 30), ob3(90, 90);
	
	ob1.show();
	ob2.show();
	
	++ob1;
	ob1.show(); // displays 11 21
	
	ob2 = ++ob1;
	ob1.show(); // displays 12 22
	ob2.show(); // displays 12 22
	
	ob1 = ob2 = ob3; // multiple assignment
	ob1.show(); // displays 90 90
	ob2.show(); // displays 90 90
	
	return 0;
}
#endif



#if 0
#include <iostream>

class number {
public:
	number(int i = 0) : value(i) {	}
	operator int() const {
		return value;
	}
	
	number& operator=(const number& n) {
		std::cout<<"=";
		value = static_cast<int>(n);
		return *this;
	}
private:
	int value;
};

number operator+(const number& x, const number& y)
{
	std::cout<<"+";
	return number(static_cast<int>(x) + static_cast<int>(y));
}

int main(void)
{
	number a[10], b(42);
	number* p;
	a;           // lvalue
	a[0];        // lvalue
	&a[0];       // rvalue
	*a;          // lvalue
	p;           // lvalue
	*p;          // lvalue
	10;          // rvalue
	number(10);  // rvalue
	a[0] + b;    // rvalue
	b = a[0];    // lvalue
	
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
	
	loc operator=(loc op2);
	friend loc operator++(loc &op);
	friend loc operator--(loc &op);
};
   
// Overload assignment for loc.
loc loc::operator=(loc op2)
{
	longitude = op2.longitude;
	latitude = op2.latitude;
	
	return *this; // i.e., return object that generated call
}
   
// Now a friend; use a reference parameter.
loc operator++(loc &op)
{
	op.longitude++;
	op.latitude++;
	
	return op;
}
   
// Make op-- a friend; use reference.
loc operator--(loc &op)
{
	op.longitude--;
	op.latitude--;
	
	return op;
}
   
int main(void)
{
	loc ob1(10, 20), ob2;
	
	ob1.show();
	++ob1;
	ob1.show(); 
	
	ob2 =  ++ob1;
	ob2.show(); 
	
	--ob2;
	ob2.show(); 
	
	return 0;
}
#endif

