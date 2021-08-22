#if 0
#include <iostream> 
using namespace std; 
 
class ThreeD { 
	int x, y, z; 
public: 
	ThreeD() { x = y = z = 0; } 
	ThreeD(int i, int j, int k) { x = i; y = j; z = k; } 
	
	friend ThreeD operator+(ThreeD op1, int op2); 
	friend ThreeD operator+(int op1, ThreeD obp); 
	
	void show() ; 
} ; 
 
// This allows ThreedD + int 
ThreeD operator+(ThreeD op1, int op2) 
{ 
	ThreeD temp; 
	
	temp.x = op1.x + op2;  
	temp.y = op1.y + op2;  
	temp.z = op1.z + op2;  
	return temp; 
} 
 
// This allows int + ThreedD 
ThreeD operator+(int op1, ThreeD op2) 
{ 
	ThreeD temp; 
	
	temp.x = op2.x + op1;  
	temp.y = op2.y + op1;  
	temp.z = op2.z + op1;  
	return temp; 
} 
 
// Show X, Y, Z coordinates. 
void ThreeD::show() 
{ 
	cout << x << ", "; 
	cout << y << ", "; 
	cout << z << "\n"; 
} 
 
int main() 
{ 
	ThreeD a(1, 2, 3), b; 
	
	cout << "Original value of a: "; 
	a.show(); 
	
	cout << "\n"; 
	
	b = a + 10; // object + integer 
	cout << "Value of b after b = a + 10: "; 
	b.show(); 
	
	cout << "\n"; 
	
	b = 10 + a; // integer + object 
	cout << "Value of b after b = 10 + a: "; 
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
	Point() {}
	Point(int px, int py) {
		x = px;
		y = py;
	}
	
	void show() {
		cout << x << " ";
		cout << y << "\n";
	}
	
	friend Point operator+(Point op1, int op2);
	friend Point operator+(int op1, Point op2);
};

// + is overloaded for Point + int.
Point operator+(Point op1, int op2)
{
	Point temp;
	
	temp.x = op1.x + op2;
	temp.y = op1.y + op2;
	
	return temp;
}
// + is overloaded for int + Point.
Point operator+(int op1, Point op2)
{
	Point temp;
	
	temp.x = op1 + op2.x;
	temp.y = op1 + op2.y;
	
	return temp;
}

int main()
{
	Point ob1(10, 20), ob2( 5, 30), ob3(7, 14);
	
	ob1.show();
	ob2.show();
	ob3.show();
	
	ob1 = ob2 + 10; // both of these
	ob3 = 10 + ob2; // are valid
	
	ob1.show();
	ob3.show();
	
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
	
	friend Point operator+(Point op1, int op2);
	friend Point operator+(int op1, Point op2);
};

// + is overloaded for Point + int.
Point operator+(Point op1, int op2)
{
	Point temp;
	
	temp.x = op1.x + op2;
	temp.y = op1.y + op2;
	
	return temp;
}
// + is overloaded for int + Point.
Point operator+(int op1, Point op2)
{
	Point temp;
	
	temp.x = op1 + op2.x;
	temp.y = op1 + op2.y;
	
	return temp;
}

int main(void)
{
	Point ob1(10, 20), ob2( 5, 30), ob3(7, 14);
	
	ob1.show();
	ob2.show();
	ob3.show();
	
	ob1 = ob2 + 10; // both of these
	ob3 = 10 + ob2; // are valid
	
	ob1.show();
	ob3.show();
	
	return 0;
}
#endif

