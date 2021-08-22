#if 0
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using namespace std;

class MyString {
public:
	MyString(const char* pText) {
		pString = new char[ strlen(pText) + 1 ];
		std::strcpy(pString, pText);
	}	
	~MyString() {
		cout << endl << "Destructor called." << endl;
		delete[] pString;
	}	
	MyString& operator=(const MyString& String) {
		cout << endl << "calling =." << endl;
		if(this == &String)
		return *this;
		
		delete[] pString;
		pString = new char[ strlen(String.pString) + 1];
		
		// Copy right operand string to left operand
		std::strcpy(this->pString, String.pString);
		
		return *this;
	}
	char* getString() const{ return pString; }

private:
	char* pString;
};

int main(void)
{
	MyString warning("There is a String");
	MyString standard("");
	
	cout << warning.getString();
	cout << standard.getString();
	
	standard = warning;
	
	cout << warning.getString();
	cout << standard.getString();
	cout << endl;
	
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
#include <string>
using namespace std;

int main(void)
{
	string s1( "cat" ), s2, s3;
	
	s2 = s1;          
	s3.assign( s1 );  
	cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: "
	<< s3 << "\n\n";
	
	// overloaded +=
	s3 += "pet";             // create "carpet"
	
	return 0;
}
#endif

