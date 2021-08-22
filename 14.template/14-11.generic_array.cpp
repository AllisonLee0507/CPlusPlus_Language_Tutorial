#if 0
#include<iostream.h>
#include<iomanip.h>
template<class T>
class Array
{
	T *elems;
	int size;
public:
	Array(int s)
	{
		size = s;
		elems = new T[size];
		for (int i = 0; i<size; i++)
			elems[i] = 0;
	}

	~Array()
	{
		delete elems;
	}

	T& operator[](int index)
	{
		return elems[index];
	}

	void operator=(T temp)
	{
		for (int i = 0; i<size; i++)
			elems[i] = temp;
	}
};

int main(void)
{
	int n = 10;
	Array<int>arr1(n);
	Array<char>arr2(n);

	for (int i = 0; i<n; i++)
	{
		arr1[i] = 'a' + i;
		arr2[i] = 'a' + i;
	}
	cout << endl;
	for (int i = 0; i<n; i++){
		cout << setw(8) << arr1[i] << setw(8) << arr2[i] << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 10;

template <class T> class MyType {
	T a[SIZE];
public:
	MyType() {
		register int i;
		for (i = 0; i<SIZE; i++) a[i] = i;
	}
	T &operator[](int i){

		if (i<0 || i> SIZE - 1) {
			cout << "\nIndex value of ";
			cout << i << " is out-of-bounds.\n";
			exit(1);
		}
		return a[i];

	}
};

int main(void)
{
	MyType<int> intob;
	MyType<double> doubleob;

	cout << "Integer array: ";
	for (int i = 0; i<SIZE; i++)
		intob[i] = i;
	for (int i = 0; i<SIZE; i++)
		cout << intob[i] << "  ";
	cout << '\n';

	cout << "Double array: ";
	for (int i = 0; i<SIZE; i++)
		doubleob[i] = (double)i / 3;
	for (int i = 0; i<SIZE; i++)
		cout << doubleob[i] << "  ";
	cout << '\n';

	intob[12] = 100;

	return 0;
}
#endif