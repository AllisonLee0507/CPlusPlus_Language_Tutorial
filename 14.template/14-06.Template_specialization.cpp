#if 0
#include <iostream.h>

template <class T>
class MyClass {
	T value1, value2;
public:
	MyClass(T first, T second)
	{
		value1 = first; value2 = second;
	}
	T module() { return 0; }
};

template <>
class MyClass <int> {
	int value1, value2;
public:
	MyClass(int first, int second){
		value1 = first;
		value2 = second;
	}
	int module(){
		return value1value2;
	}
};

int main(void)
{
	MyClass <int> myints(100, 75);
	MyClass <float> myfloats(100.0, 75.0);

	cout << myints.module() << '\n';
	cout << myfloats.module() << '\n';

	return 0;
}
#endif


#if 0
#include <iostream>


// primary template to compute 3 to the Nth
template<int N>
class Pow3 {
public:
	enum { result = 3 * Pow3<N - 1>::result };
};

// full specialization to end the recursion
template<>
class Pow3<0> {
public:
	enum { result = 1 };
};

int main(void)
{
	std::cout << "Pow3<7>::result = " << Pow3<7>::result << '\n';

	return 0;
}
#endif



#if 0
#include <iostream>


// primary template
template <int DIM, typename T>
class DotProduct {
public:
	static T result(T* a, T* b) {
		return *a * *b + DotProduct<DIM - 1, T>::result(a + 1, b + 1);
	}
};

// partial specialization as end criteria
template <typename T>
class DotProduct<1, T> {
public:
	static T result(T* a, T* b) {
		return *a * *b;
	}
};

// convenience function
template <int DIM, typename T>
inline T dot_product(T* a, T* b)
{
	return DotProduct<DIM, T>::result(a, b);
}

int main(void)
{
	int a[3] = { 1, 2, 3 };
	int b[3] = { 5, 6, 7 };

	cout << '\n';
	cout << '\n';

	return; 
}

#endif