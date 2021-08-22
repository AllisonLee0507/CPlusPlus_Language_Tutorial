#if 0
#include <iostream>
using namespace std;

template <class T> class MyType {
	T x;
public:
	MyType(T a) {
		cout << "Inside generic MyType\n";
		x = a;
	}
	T getx() {
		return x;
	}
};

// Explicit specialization for int.
template <> class MyType<int> {
	int x;
public:
	MyType(int a) {
		cout << "Inside MyType<int> specialization\n";
		x = a * a;
	}
	int getx() {
		return x;
	}
};

int main(void)
{
	MyType<double> d(10.1);
	cout << "double: " << d.getx() << "\n\n";

	MyType<int> i(5);
	cout << "int: " << i.getx() << "\n";

	return 0;
}
#endif