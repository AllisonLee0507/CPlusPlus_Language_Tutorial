#if 0
#include <iostream>

void Square(int&, int&);
void Cube(int&, int&);
void Swap(int&, int &);
void PrintVals(int, int);

int main(void)
{
	void(*pFunc) (int &, int &);

	int valOne = 1, valTwo = 2;

	PrintVals(valOne, valTwo);
	pFunc(valOne, valTwo);
	PrintVals(valOne, valTwo);

	pFunc = Square;
	PrintVals(valOne, valTwo);
	pFunc(valOne, valTwo);
	PrintVals(valOne, valTwo);

	pFunc = Cube;
	PrintVals(valOne, valTwo);
	pFunc(valOne, valTwo);
	PrintVals(valOne, valTwo);

	pFunc = Swap;
	PrintVals(valOne, valTwo);
	pFunc(valOne, valTwo);
	PrintVals(valOne, valTwo);

	return 0;
}

void PrintVals(int x, int y)
{
	std::cout << "x: " << x << " y: " << y << std::endl;
}

void Square(int & rX, int & rY)
{
	rX *= rX;
	rY *= rY;
}

void Cube(int & rX, int & rY)
{
	int tmp;

	tmp = rX;
	rX *= rX;
	rX = rX * tmp;

	tmp = rY;
	rY *= rY;
	rY = rY * tmp;
}

void Swap(int & rX, int & rY)
{
	int temp;
	temp = rX;
	rX = rY;
	rY = temp;
}
#endif


#if 0
#include <iostream>

void Square(int&, int&);
void Cube(int&, int&);
void Swap(int&, int &);
void GetVals(int&, int&);
void PrintVals(int, int);

int main()
{
	int valOne = 1, valTwo = 2;
	int i;
	const int MaxArray = 5;
	void(*pFuncArray[MaxArray])(int&, int&);

	pFuncArray[0] = GetVals;
	pFuncArray[1] = Square;
	pFuncArray[2] = Cube;
	pFuncArray[3] = Swap;
	pFuncArray[4] = Square;

	for (i = 0; i<MaxArray; i++)
	{
		pFuncArray[i](valOne, valTwo);
		PrintVals(valOne, valTwo);
	}
	return 0;
}

void PrintVals(int x, int y)
{
	std::cout << "x: " << x << " y: " << y << std::endl;
}

void Square(int & rX, int & rY)
{
	rX *= rX;
	rY *= rY;
}

void Cube(int & rX, int & rY)
{
	int tmp;

	tmp = rX;
	rX *= rX;
	rX = rX * tmp;

	tmp = rY;
	rY *= rY;
	rY = rY * tmp;
}

void Swap(int & rX, int & rY)
{
	int temp;
	temp = rX;
	rX = rY;
	rY = temp;
}

void GetVals(int & rValOne, int & rValTwo)
{
	std::cout << "New value for ValOne: ";
	std::cin >> rValOne;
	std::cout << "New value for ValTwo: ";
	std::cin >> rValTwo;
}
#endif




#if 0
#include <iostream>
using namespace std;

void Square(int&, int&);
void Cube(int&, int&);
void Swap(int&, int &);
void GetVals(int&, int&);
void PrintVals(void(*)(int&, int&), int&, int&);

int main(void)
{
	int valOne = 1, valTwo = 2;
	void(*pFunc)(int&, int&);

	pFunc = GetVals;
	PrintVals(pFunc, valOne, valTwo);

	pFunc = Square;
	PrintVals(pFunc, valOne, valTwo);

	pFunc = Cube;
	PrintVals(pFunc, valOne, valTwo);

	pFunc = Swap;
	PrintVals(pFunc, valOne, valTwo);

	return 0;
}

void PrintVals(void(*pFunc)(int&, int&), int& x, int& y)
{
	cout << "x: " << x << " y: " << y << endl;
	pFunc(x, y);
	cout << "x: " << x << " y: " << y << endl;
}

void Square(int & rX, int & rY)
{
	rX *= rX;
	rY *= rY;
}

void Cube(int & rX, int & rY)
{
	int tmp;

	tmp = rX;
	rX *= rX;
	rX = rX * tmp;

	tmp = rY;
	rY *= rY;
	rY = rY * tmp;
}

void Swap(int & rX, int & rY)
{
	int temp;
	temp = rX;
	rX = rY;
	rY = temp;
}

void GetVals(int & rValOne, int & rValTwo)
{
	cout << "New value for ValOne: ";
	cin >> rValOne;
	cout << "New value for ValTwo: ";
	cin >> rValTwo;
}
#endif




#if 0
#include <iostream>
using namespace std;

void Square(int&, int&);
void Cube(int&, int&);
void Swap(int&, int &);
void GetVals(int&, int&);

typedef  void(*VPF) (int&, int&);
void PrintVals(VPF, int&, int&);

int main(void)
{
	int valOne = 1, valTwo = 2;
	VPF pFunc;

	pFunc = GetVals;

	pFunc = Square;

	pFunc = Cube;

	pFunc = Swap;

	PrintVals(pFunc, valOne, valTwo);
	return 0;
}

void PrintVals(VPF pFunc, int& x, int& y)
{
	cout << "x: " << x << " y: " << y << endl;
	pFunc(x, y);
	cout << "x: " << x << " y: " << y << endl;
}

void Square(int & rX, int & rY)
{
	rX *= rX;
	rY *= rY;
}

void Cube(int & rX, int & rY)
{
	int tmp;

	tmp = rX;
	rX *= rX;
	rX = rX * tmp;

	tmp = rY;
	rY *= rY;
	rY = rY * tmp;
}

void Swap(int & rX, int & rY)
{
	int temp;
	temp = rX;
	rX = rY;
	rY = temp;
}

void GetVals(int & rValOne, int & rValTwo)
{
	cout << "New value for ValOne: ";
	cin >> rValOne;
	cout << "New value for ValTwo: ";
	cin >> rValTwo;
}
#endif




#if 0
#include <iostream>  
using namespace std;

int main(void)
{
	void centimize(double&);

	double var = 10.0;
	cout << "var = " << var << " inches" << endl;

	centimize(var);
	cout << "var = " << var << " centimeters" << endl;

	return 0;
}
void centimize(double& v){
	v *= 2.54;
}
#endif




#if 0
#include <iostream>  
using namespace std;

int main(void)
{
	void centimize(double*);

	double var = 10.0;
	cout << "var = " << var << " inches" << endl;

	centimize(&var);
	cout << "var = " << var << " centimeters" << endl;
	return 0;
}

void centimize(double* ptrd){
	*ptrd *= 2.54;
}
#endif




#if 0
#include <iostream>  
using namespace std;
const int MAX = 5;

int main(void){
	void centimize(double*);

	double varray[MAX] = { 10.0, 43.1, 95.9, 59.7, 87.3 };

	centimize(varray);

	for (int j = 0; j<MAX; j++)
		cout << "varray[" << j << "]=" << varray[j] << " centimeters" << endl;
	return 0;
}
void centimize(double* ptrd){
	for (int j = 0; j<MAX; j++)
		*ptrd++ *= 2.54;
}
#endif




#if 0
#include <iostream>  
using namespace std;

int main(){
	void order(int*, int*);

	int n1 = 99, n2 = 11;
	int n3 = 22, n4 = 88;

	order(&n1, &n2);
	order(&n3, &n4);

	cout << "n1=" << n1 << endl;
	cout << "n2=" << n2 << endl;
	cout << "n3=" << n3 << endl;
	cout << "n4=" << n4 << endl;
	return 0;
}

void order(int* numb1, int* numb2){
	if (*numb1 > *numb2){
		int temp = *numb1;
		*numb1 = *numb2;
		*numb2 = temp;
	}
}
#endif




#if 0
#include <iostream>  
using namespace std;
void order(int*, int*);

int main(void)
{
	void bsort(int*, int);
	const int N = 10;
	int arr[N] = { 37, 84, 62, 91, 11, 65, 57, 28, 19, 49 };

	bsort(arr, N);

	for (int j = 0; j<N; j++)
		cout << arr[j] << " ";
	cout << endl;
	return 0;
}
void bsort(int* ptr, int n){
	int j, k;

	for (j = 0; j<n - 1; j++)
	for (k = j + 1; k<n; k++)
		order(ptr + j, ptr + k);
}
void order(int* numb1, int* numb2){
	if (*numb1 > *numb2){
		int temp = *numb1;
		*numb1 = *numb2;
		*numb2 = temp;
	}
}
#endif




#if 0
#include <iostream>
using namespace std;

int myfunc(int);
int myfunc(int, int);

int main(void)
{
	int(*fp)(int a); // pointer to int f(int)
	//int (*fp)(int a, int b);
	fp = myfunc; // points to myfunc(int)

	cout << fp(5);

	return 0;
}

int myfunc(int a)
{
	return a;
}

int myfunc(int a, int b)
{
	return a*b;
}
#endif

