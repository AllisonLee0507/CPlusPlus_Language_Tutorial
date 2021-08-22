#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);

	for (int i = 0; i<10; i++)
		v[i] = i;

	cout << "Original contents: ";
	for (int i = 0; i<10; i++)
		cout << v[i] << " ";

	valarray<bool> vb = v < 5;
	cout << "Those elements less than 5: ";
	for (int i = 0; i<10; i++)
		cout << vb[i] << " ";

	cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);
	int i;

	for (i = 0; i<10; i++) v[i] = i;

	cout << "Original contents: ";
	for (i = 0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;

	valarray<bool> vb = v < 5;
	cout << "Those elements less than 5: ";
	for (i = 0; i<10; i++)
		cout << vb[i] << " ";
	cout << endl << endl;

	valarray<double> fv(5);
	for (i = 0; i<5; i++) fv[i] = (double)i;

	cout << "Original contents: ";
	for (i = 0; i<5; i++)
		cout << fv[i] << " ";
	cout << endl;

	fv = sqrt(fv);

	cout << "Square roots: ";
	for (i = 0; i<5; i++)
		cout << fv[i] << " ";
	cout << endl;

	fv = fv - 10.0;
	cout << "After subtracting 10 from each element:\n";
	for (i = 0; i<5; i++)
		cout << fv[i] << " ";
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);

	for (int i = 0; i<10; i++)
		v[i] = i;

	cout << "Original contents: ";
	for (int i = 0; i<10; i++)
		cout << v[i] << " \n\n";

	v = v - 10;

	for (int i = 0; i<10; i++)
		cout << v[i] << " \n\n";


	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);
	int i;

	for (i = 0; i<10; i++) v[i] = i;

	cout << "Original contents: ";
	for (i = 0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;

	valarray<double> fv(5);
	for (i = 0; i<5; i++) fv[i] = (double)i;

	cout << "Original contents: ";
	for (i = 0; i<5; i++)
		cout << fv[i] << " ";
	cout << endl;

	fv = sqrt(fv);

	cout << "Square roots: ";
	for (i = 0; i<5; i++)
		cout << fv[i] << " ";
	cout << endl;

	fv = fv + fv;
	cout << "Double the square roots: ";
	for (i = 0; i<5; i++)
		cout << fv[i] << " ";
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);
	int i;

	for (i = 0; i<10; i++) v[i] = i;

	cout << "Original contents: ";
	for (i = 0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;

	v = v.cshift(3);

	cout << "Shifted contents: ";
	for (i = 0; i<10; i++)
		cout << v[i] << " ";
	cout << endl;

	valarray<double> fv(5);
	for (i = 0; i<5; i++) fv[i] = (double)i;

	cout << "Original contents: ";
	for (i = 0; i<5; i++)
		cout << fv[i] << " ";
	cout << endl;

	fv = sqrt(fv);

	cout << "Square roots: ";
	for (i = 0; i<5; i++)
		cout << fv[i] << " ";
	cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);

	for (int i = 0; i<10; i++)
		v[i] = i;

	cout << "Original contents: ";
	for (int i = 0; i<10; i++)
		cout << v[i] << " \n\n";

	v = v + v;

	for (int i = 0; i<10; i++)
		cout << v[i] << " \n\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main(void)
{
	valarray<int> v(10);

	for (int i = 0; i<10; i++)
		v[i] = i*i;

	cout << "Original contents: ";
	for (int i = 0; i<10; i++)
		cout << v[i] << " \n\n";

	v = sqrt(v);

	for (int i = 0; i<10; i++)
		cout << v[i] << " \n\n";


	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
using namespace std;

// print three-dimensional valarray line-by-line
template<class T>
void printValarray3D (const valarray<T>& va, int dim1, int dim2)
{
	for (int i = 0; i<va.size() / (dim1*dim2); ++i) {
		for (int j = 0; j<dim2; ++j) {
			for (int k = 0; k<dim1; ++k) {
				cout << va[i*dim1*dim2 + j*dim1 + k] << ' ';
			}
			cout << '\n';
		}
		cout << '\n';
	}
	cout << endl;
}

int main(void)
{
	valarray<double> va(24);

	// fill valarray with values
	for (int i = 0; i<24; i++) {
		va[i] = i;
	}

	// print valarray
	printValarray3D(va, 3, 4);

	size_t lengthvalues[] = { 2, 3 };
	size_t stridevalues[] = { 12, 3 };
	valarray<size_t> length(lengthvalues, 2);
	valarray<size_t> stride(stridevalues, 2);

	va[gslice(0, length, stride)]
		= valarray<double>(va[gslice(1, length, stride)]);

	va[gslice(0, length, stride)]
		+= valarray<double>(va[gslice(2, length, stride)]);

	// print valarray
	printValarray3D(va, 3, 4);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
using namespace std;

// print valarray as two-dimensional array
template<class T>
void printValarray (const valarray<T>& va, int num)
{
	for (int i = 0; i<va.size() / num; i++) {
		for (int j = 0; j<num; j++) {
			cout << va[i*num + j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

int main(void)
{
	valarray<double> va(12);

	for (int i = 0; i<12; i++) {
		va[i] = (i + 1) * 1.01;
	}
	printValarray(va, 4);

	valarray<size_t> idx(4);
	idx[0] = 8;
	idx[1] = 0;
	idx[2] = 3;
	idx[3] = 7;

	nts
		printValarray(valarray<double>(va[idx]), 4);

	va[0] = 11.11;
	va[3] = 44.44;
	printValarray(valarray<double>(va[idx]), 4);

	idx[0] = 1;
	idx[1] = 2;
	idx[2] = 5;
	idx[3] = 8;
	va[idx] = 99;

	printValarray(va, 4);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <valarray>
using namespace std;

// print valarray line-by-line
template<class T>
void printValarray(const valarray<T>& va, int num)
{
	for (int i = 0; i<va.size() / num; ++i) {
		for (int j = 0; j<num; ++j) {
			cout << va[i*num + j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

int main(void)
{
	valarray<double> va(12);

	for (int i = 0; i<12; i++) {
		va[i] = i;
	}

	printValarray(va, 3);

	va[va<5.0] = 77.0;

	va[va>5.0 && va<9.0] = valarray<double>(va[va>5.0 && va<9.0]) + 100.0;

	printValarray(va, 3);

	return 0;
}
#endif