#if 0
#include <iostream>
using namespace std;

class MyClass {
public:
	int number;
	void display(); 
};

void MyClass::display()
{
	for(int i = 0; i<= number;i++)
	{
		cout<< "Hello World \n";
	}  
}
int main(void)
{
	MyClass myfirstobject;
	
	myfirstobject.number =3; 
	myfirstobject.display();
	
	
	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

class Box {
public:
	double length;
	double width;
	double height;

	double volume() {
		return length * width * height;
	}
};

int main(void)
{
	Box firstBox = { 80.0, 50.0, 40.0 };
	
	double firstBoxVolume = firstBox.volume();
	cout << firstBox.length
		<< firstBox.width
		<< firstBox.height
		<< endl;
	
	cout << "Volume of first Box object is " << firstBoxVolume << endl;
	
	return 0;
}
#endif


