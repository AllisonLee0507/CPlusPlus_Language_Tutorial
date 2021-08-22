#if 0
#include <iostream> 
using namespace std;

class MyClass { 
public:
	int x, y, z;
	MyClass(int a, int b, int c) { x = a; y = b; z = c; }
};

// Display X, Y, Z coordinates - MyClass inserter. 
ostream &operator<<(ostream &stream, MyClass obj)
{
	stream << obj.x << ", ";
	stream << obj.y << ", ";
	stream << obj.z << "\n";
	return stream;  // return the stream 
}

int main(void)
{
	MyClass a(1, 2, 3), b(3, 4, 5), c(5, 6, 7);

	cout << a << b << c;

	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std;

class MyClass {
	int x, y, z; // 3-D coordinates - now private 
public:
	MyClass(int a, int b, int c) { x = a; y = b; z = c; }
	friend ostream &operator<<(ostream &stream, MyClass obj);
};

// Display X, Y, Z coordinates - MyClass inserter. 
ostream &operator<<(ostream &stream, MyClass obj)
{
	stream << obj.x << ", ";
	stream << obj.y << ", ";
	stream << obj.z << "\n";
	return stream;  // return the stream 
}

int main(void)
{
	MyClass a(1, 2, 3), b(3, 4, 5), c(5, 6, 7);

	cout << a << b << c;

	return 0;
}
#endif
