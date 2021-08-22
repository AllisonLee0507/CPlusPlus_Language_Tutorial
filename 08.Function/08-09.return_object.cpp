#if 0
#include <iostream> 
using namespace std;

class MyClass {
	int val;
public:

	MyClass(int i) {
		val = i;
		cout << "Inside constructor\n";
	}

	~MyClass() {
		cout << "Destructing\n";
	}

	int getVal() { return val; }

	// Return an object. 
	MyClass getDoubleValueClass() {
		MyClass o(val * 2);

		return o;
	}
};

void display(MyClass ob)
{
	cout << ob.getVal() << '\n';
}

int main()
{
	cout << "Before constructing a.\n";
	MyClass a(10);
	cout << "After constructing a.\n\n";

	cout << "Before call to display().\n";
	display(a);
	cout << "After display() returns.\n\n";

	cout << "Before call to getDoubleValueClass().\n";
	a = a.getDoubleValueClass();
	cout << "After getDoubleValueClass() returns.\n\n";

	cout << "Before second call to display().\n";
	display(a);
	cout << "After display() returns.\n\n";

	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

class myclass {
	int i;
public:
	void set_i(int n) { i = n; }
	int get_i() { return i; }
};

myclass f();  // return object of type myclass

int main(void)
{
	myclass o;

	o = f();

	cout << o.get_i() << "\n";

	return 0;
}

myclass f(void)
{
	myclass x;

	x.set_i(1);
	return x;
}
#endif
