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
	Point operator,(Point op2);
};

// overload comma for Point
Point Point::operator,(Point op2)
{
	Point temp;
	
	temp.x = op2.x;
	temp.y = op2.y;
	cout << op2.x << " " << op2.y << "\n";
	
	return temp;
}

// Overload + for Point
Point Point::operator+(Point op2)
{
	Point temp;
	
	temp.x = op2.x + x;
	temp.y = op2.y + y;
	
	return temp;
}

int main(void)
{
	Point ob1(10, 20), ob2( 5, 30), ob3(1, 1);
	
	ob1.show();
	ob2.show();
	ob3.show();
	cout << "\n";
	
	ob1 = (ob1, ob2+ob2, ob3);
	
	ob1.show(); // displays 1 1, the value of ob3
	
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
	loc operator,(loc op2);
};
   
// overload comma for loc
loc loc::operator,(loc op2)
{
	loc temp;
	
	temp.longitude = op2.longitude;
	temp.latitude = op2.latitude;
	cout << op2.longitude << " " << op2.latitude << "\n";
	
	return temp;
}
   
// Overload + for loc
loc loc::operator+(loc op2)
{
	loc temp;
	
	temp.longitude = op2.longitude + longitude;
	temp.latitude = op2.latitude + latitude;
	
	return temp;
}
   
int main(void)
{
	loc ob1(10, 20), ob2( 5, 30), ob3(1, 1);
	
	ob1.show();
	ob2.show();
	ob3.show();
	cout << "\n";
	
	ob1 = (ob1, ob2+ob2, ob3);
	
	ob1.show(); // displays 1 1, the value of ob3
	
	return 0;
}
#endif

