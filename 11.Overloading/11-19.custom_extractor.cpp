#if 0
#include <iostream> 
using namespace std;

class MyClass {
	int x, y, z;
public:
	MyClass(int a, int b, int c) { x = a; y = b; z = c; }
	friend ostream &operator<<(ostream &stream, MyClass obj);
	friend istream &operator>>(istream &stream, MyClass &obj);
};

ostream &operator<<(ostream &stream, MyClass obj)
{
	stream << obj.x << ", ";
	stream << obj.y << ", ";
	stream << obj.z << "\n";
	return stream; // return the stream 
}

istream &operator>>(istream &stream, MyClass &obj)
{
	cout << "Enter X,Y,Z values: ";
	stream >> obj.x >> obj.y >> obj.z;
	return stream;
}

int main(void)
{
	MyClass a(1, 2, 3);

	cout << a;

	cin >> a;
	cout << a;

	return 0;
}
#endif
