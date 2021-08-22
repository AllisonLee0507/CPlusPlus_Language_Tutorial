#if 0
#include <iostream>
class MyClass {
public:                     // begin public section
	int getInt();           // accessor function
	void setint (int age);  // accessor function
	void display();         // general function
private:                    // begin private section
	int itsAge;             // member variable
};

int MyClass::getInt()
{
	return itsAge;
}

void MyClass::setint(int age)
{
		itsAge = age;
}

void MyClass::display()
{
	std::cout << "display.\n";
}

int main()
{
	MyClass obj;
	obj.setint(5);
	obj.display();
	
	std::cout << obj.getInt() << " years old.\n";
	obj.display();
	return 0;
}
#endif


#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
	// private 
	double width; 
	double height; 
public: 
	void display() { 
		cout << "Width and height are " << width << " and " << height << "\n"; 
	} 
	
	// accessor functions 
	double getWidth() { return width; } 
	double getHeight() { return height; } 
	void setWidth(double w) { width = w; } 
	void setHeight(double h) { height = h; } 
}; 
 
// Triangle is derived from Shape. 
class Triangle : public Shape { 
public: 
	char style[20]; 
	
	double area() { 
		return getWidth() * getHeight() / 2; 
	} 
	
	void showStyle() { 
		cout << "Triangle is " << style << "\n"; 
	} 
}; 
 
int main(void)
{ 
	Triangle t1; 
	Triangle t2; 
	
	t1.setWidth(4.0); 
	t1.setHeight(4.0); 
	strcpy(t1.style, "isosceles"); 
	
	t2.setWidth(8.0); 
	t2.setHeight(12.0); 
	strcpy(t2.style, "right"); 
	
	t1.showStyle(); 
	t1.display(); 
	cout << "Area is " << t1.area() << "\n"; 
	
	t2.showStyle(); 
	t2.display(); 
	cout << "Area is " << t2.area() << "\n"; 
	
	return 0; 
}
#endif


