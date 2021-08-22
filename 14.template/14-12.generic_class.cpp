#if 0
#include <iostream> 
using namespace std;

template <class T> class MyClass {
	T x, y; 
public: 
	MyClass(T a, T b) {
		x = a;
		y = b;
	}
	T div() { return x / y; }
};

int main(void)
{

	MyClass<double> d_ob(10.0, 3.0);  // doubles. 
	cout << "double division: " << d_ob.div() << "\n";

	MyClass<int> i_ob(10, 3);         // for ints. 
	cout << "integer division: " << i_ob.div() << "\n";

	return 0;
}
#endif


#if 0
#include<iostream.h>
template<class T>
class Sample
{
	T n;
public:
	Sample(T i){
		n = i;
	}
	int operator==(Sample &s)
	{
		if (n == s.n)
			return 1;
		else
			return 0;
	}

};

int main(void)
{
	Sample<int> s1(2), s2(3);
	cout << (s1 == s2) << endl;
	Sample<double> s3(2.5), s4(2.5);
	cout << (s1 == s2) << endl;

	return 0;
}
#endif



#if 0
#include <iostream> 
using namespace std;

template <class T> class MyClass {
	T x;
public: 
	MyClass(T a) {  
		cout << "Inside generic MyClass\n";
		x = a;
	}
	T getx() { return x; }
};

// Explicit specialization for int. 
template <> class MyClass<int> {
	int x;
public:
	MyClass(int a) {
		cout << "Inside MyClass<int> specialization\n";
		x = a * a;
	}
	int getx() { return x; }
};

int main(void)
{
	MyClass<double> d(10.1);
	cout << "double: " << d.getx() << "\n\n";

	MyClass<int> i(5);
	cout << "int: " << i.getx() << "\n";

	return 0;
}
#endif



#if 0
#include <iostream.h>

template <class T, int N>
class array {
	T memblock[N];
public:
	setmember (int x, T value) {
		memblock[x] = value;
		return 0;
	}
	T getmember(int x) {
		return memblock[x];
	}
};

int main(void)
{
	array <int, 5> myints;
	array <float, 5> myfloats;

	myints.setmember(0, 100);

	myfloats.setmember(3, 3.1);

	cout << myints.getmember(0) << '\n';

	cout << myfloats.getmember(3) << '\n';

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

template <class Type1, class Type2> class MyClass
{
	Type1 i;
	Type2 j;
public:
	MyClass(Type1 a, Type2 b) {
		i = a;
		j = b;
	}
	void show() {
		cout << i << ' ' << j << '\n';
	}
};

int main(void)
{
	MyClass<int, double> ob1(10, 0.23);
	MyClass<char, char*> ob2('X', "AAAAAAA");

	ob1.show();
	ob2.show();

	return 0;
}
#endif