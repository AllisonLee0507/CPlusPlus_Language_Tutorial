#if 0
#include <iostream>
using namespace std;

template <class X> void bubble(X *items, int count)
{
	X t;

	for (int a = 1; a<count; a++)
	for (int b = count - 1; b >= a; b--)
	if (items[b - 1] > items[b]) {
		t = items[b - 1];
		items[b - 1] = items[b];
		items[b] = t;
	}
}

int main(void)
{
	int iarray[7] = { 7, 5, 4, 3, 9, 8, 6 };
	double darray[5] = { 4.3, 2.5, -0.9, 10.2, 3.0 };

	cout << "Here is unsorted integer array: ";
	for (int i = 0; i<7; i++)
		cout << iarray[i] << ' ';
	cout << endl;

	bubble(iarray, 7);

	cout << "Here is sorted integer array: ";
	for (int i = 0; i<7; i++)
		cout << iarray[i] << ' ';
	cout << endl;

	cout << "Here is unsorted double array: ";
	for (int i = 0; i<5; i++)
		cout << darray[i] << ' ';
	cout << endl;

	bubble(darray, 5);

	cout << "Here is sorted double array: ";
	for (int i = 0; i<5; i++)
		cout << darray[i] << ' ';
	cout << endl;

	return 0;
}
#endif


#if 0
#include<iostream.h>
#include<iomanip.h>
#include<cstdlib>
template<class T>
inline void swap(T& v1, T& v2)
{
	T temp = v2;
	v2 = v1;
	v1 = temp;
}
template<class T>
void quicksort(T *array, int hi, int lo = 0)
{
	while (hi>lo)
	{
		int i = lo;
		int j = hi;
		do
		{
			while (array[i]<array[lo] && i<j)
				i++;
			while (array[--j]>array[lo])
				;
			if (i<j)
				swap(array[i], array[j]);
		} while (i<j);
		swap(array[lo], array[j]);

		if (j - lo>hi - (j + 1)) {
			quicksort(array, j - 1, lo);
			lo = j + 1;
		}
		else{
			quicksort(array, hi, j + 1);
			hi = j - 1;
		}
	}
}
int main(void)
{
	int dim = 100;

	int *arrs = new int[dim + 1];

	for (int i = 0; i < dim; i++)
		arrs[i] = rand();
	cout << endl << "unsorted" << endl;

	for (int i = 0; i<dim; i++)
		cout << setw(8) << arrs[i];
	quicksort(arrs, dim);

	cout << endl << "sorted" << endl;
	for (int i = 0; i<dim; i++)
		cout << setw(8) << arrs[i];
	delete arrs;
	return 0;
}
#endif