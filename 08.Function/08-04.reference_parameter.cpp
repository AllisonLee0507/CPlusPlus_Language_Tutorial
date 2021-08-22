#if 0
#include <iostream> 
using namespace std;

void f(int&); // i is a reference parameter 

int main(void)
{
	int val = 1;

	cout << "Old value for val: " << val << '\n';

	f(val);

	cout << "New value for val: " << val << '\n';

	return 0;
}

void f(int &i)
{
	i = 10;
}
#endif


#if 0
#include <iostream> 
using namespace std;

void swap(int &x, int &y);

int main(void)
{
	int i, j;

	i = 10;
	j = 20;

	cout << "Initial values of i and j: ";
	cout << i << ' ' << j << '\n';

	swap(j, i);

	cout << "Swapped values of i and j: ";
	cout << i << ' ' << j << '\n';

	return 0;
}

void swap(int &x, int &y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}
#endif




#if 0
#include <iostream>

void swap(int *x, int *y);

int main(void)
{
	int x = 5, y = 10;

	std::cout << "Main. Before swap, x: " << x << " y: " << y << "\n";
	swap(&x, &y);
	std::cout << "Main. After swap, x: " << x << " y: " << y << "\n";

	return 0;
}

void swap(int *px, int *py)
{
	int temp;

	std::cout << "Swap. Before swap, *px: " << *px << " *py: " << *py << "\n";

	temp = *px;
	*px = *py;
	*py = temp;

	std::cout << "Swap. After swap, *px: " << *px << " *py: " << *py << "\n";

}
#endif




#if 0
#include <iostream>

void swap(int &x, int &y);

int main(void)
{
	int x = 5, y = 10;

	std::cout << "Main. Before swap, x: " << x << " y: " << y << "\n";
	swap(x, y);
	std::cout << "Main. After swap, x: " << x << " y: " << y << "\n";

	return 0;
}

void swap(int &rx, int &ry)
{
	int temp;

	std::cout << "Swap. Before swap, rx: " << rx << " ry: " << ry << "\n";

	temp = rx;
	rx = ry;
	ry = temp;

	std::cout << "Swap. After swap, rx: " << rx << " ry: " << ry << "\n";
}
#endif




#if 0
#include <iostream>

void f(int, int&, int&);

int main()
{
	int number = 2, squared, cubed;

	f(number, squared, cubed);

	std::cout << "number: " << number << "\n";
	std::cout << "square: " << squared << "\n";
	std::cout << "cubed: " << cubed << "\n";

	return 0;
}

void f(int n, int &rSquared, int &rCubed)
{
	rSquared = n*n;
	rCubed = n*n*n;
}
#endif




#if 0
#include <iostream>

class MyClass
{
public:
	MyClass();
	MyClass(MyClass&);
	~MyClass();

	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }

private:
	int itsAge;
};

MyClass::MyClass()
{
	std::cout << "Simple Cat Constructor...\n";
	itsAge = 1;
}

MyClass::MyClass(MyClass&)
{
	std::cout << "Simple Cat Copy Constructor...\n";
}

MyClass::~MyClass()
{
	std::cout << "Simple Cat Destructor...\n";
}

const MyClass & f(const MyClass & obj);

int main()
{
	MyClass myObject;
	std::cout << "myObject is " << myObject.GetAge() << " years old\n";

	int age = 5;
	myObject.SetAge(age);
	std::cout << "myObject is " << myObject.GetAge() << " years old\n";

	std::cout << "Calling f...\n";
	f(myObject);
	std::cout << "myObject is " << myObject.GetAge() << " years old\n";
	return 0;
}

const MyClass & f(const MyClass & obj)
{
	std::cout << "Function Two. Returning...\n";
	std::cout << "myObject is now " << obj.GetAge() << " years old \n";
	return obj;
}
#endif

