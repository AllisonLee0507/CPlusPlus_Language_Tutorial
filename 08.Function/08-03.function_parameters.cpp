#if 0
#include <iostream>

void swap(int x, int y);

int main(void)
{
	int x = 5, y = 10;
	std::cout << "Main. Before swap, x: " << x << " y: " << y << "\n";
	swap(x, y);
	std::cout << "Main. After swap, x: " << x << " y: " << y << "\n";
	return 0;
}

void swap(int x, int y)
{
	int temp;
	std::cout << "Swap. Before swap, x: " << x << " y: " << y << "\n";
	temp = x;
	x = y;
	y = temp;
	std::cout << "Swap. After swap, x: " << x << " y: " << y << "\n";
}
#endif


#if 0
#include <iostream> 
using namespace std;

void box(int length, int width, int height); // box()'s prototype 

int main(void)
{
	box(7, 20, 4);
	box(50, 3, 2);
	box(8, 6, 9);

	return 0;
}

void box(int length, int width, int height)
{
	cout << "volume of box is " << length * width * height << "\n";
}
#endif




#if 0
#include <iostream> 
using namespace std;

void f(int *j);

int main(void)
{
	int i;
	int *p;

	p = &i;

	f(p);   // pass a pointer 

	cout << i;

	return 0;
}

void f(int *j)
{
	*j = 100;
}
#endif




#if 0
#include <iostream> 
using namespace std;

void display(int num[10]);

int main(void)
{
	int t[10], i;

	for (i = 0; i < 10; ++i) t[i] = i;

	display(t); // pass array t to a function 

	return 0;
}

void display(int num[10])
{
	int i;

	for (i = 0; i < 10; i++) cout << num[i] << ' ';
}
#endif




#if 0
#include <iostream> 
using namespace std;

void display(int[]);

int main(void)
{
	int t[10], i;

	for (i = 0; i < 10; ++i) t[i] = i;

	display(t); // pass array t to a function 

	return 0;
}

void display(int num[])
{
	int i;

	for (i = 0; i < 10; i++) cout << num[i] << ' ';
}
#endif




#if 0
#include <iostream> 
using namespace std;

void display(int num[]);

int main(void)
{
	int t[10], i;

	for (i = 0; i < 10; ++i) t[i] = i;

	display(t); // pass array t to a function 

	return 0;
}

void display(int *num)
{
	int i;

	for (i = 0; i < 10; i++) cout << num[i] << ' ';
}
#endif




#if 0
#include <iostream.h>

float Total(float a[], int num);

const int SIZE = 10;

int main(void)
{
	float * f = new float[SIZE];

	for (int i = 0; i<SIZE; i++)
		f[i] = i + i;  //*(f+i)

	cout << "Sum = " << Total(f, SIZE) << endl;

	cout << "Average = " << Total(f, SIZE) / SIZE;

	delete[] f;

	return 0;
}

float Total(float a[], int num)
{
	int i;
	float sum = 0;
	for (i = 0; i<num; i++)
		sum += a[i];
	return sum;
}
#endif




#if 0
#include <iostream> 
using namespace std;

void f(int *n, int num);

int main(void)
{
	int i, nums[10];

	for (i = 0; i < 10; i++) nums[i] = i + 1;

	cout << "Original contents: ";
	for (i = 0; i < 10; i++) cout << nums[i] << ' ';
	cout << '\n';

	f(nums, 10); // compute cubes 

	cout << "Altered contents: ";
	for (i = 0; i<10; i++) cout << nums[i] << ' ';

	return 0;
}


void f(int *n, int num)
{
	while (num) {
		*n = *n * *n;
		num--;
		n++;
	}
}
#endif

