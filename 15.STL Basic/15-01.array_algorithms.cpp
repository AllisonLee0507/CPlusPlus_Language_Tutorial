#if 0
#include <iostream>
#include <string>
#include <cassert> 
#include <algorithm> // For reverse algorithm
using namespace std;

int main(void)
{
	char array1[] = "abc";
	int N1 = strlen(array1);
	reverse(&array1[0], &array1[N1]);
	assert(string(array1) == "cba");

	return 0;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

int main(void)
{

	int a[100], b[100];
	int i;
	for (i = 0; i < 100; ++i)
		a[i] = i;

	reverse_copy(&a[0], &a[100], &b[0]);

	for (i = 0; i < 100; ++i)
		cout << " a: " << a[i] << "b: " << b[i] << " \n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <cassert>
#include <functional>  
using namespace std;

int main(void)
{

	int a[100];
	int i;
	for (i = 0; i < 100; ++i)
		a[i] = i;

	random_shuffle(&a[0], &a[100]);

	for (i = 0; i < 100; ++i)
		cout << a[i] << " ";


	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <functional>
#include <numeric>
using namespace std;

int main(void)
{
	const int N = 5;
	int x1[N], x2[N];

	for (int i = 0; i < N; ++i) {
		x1[i] = i + 1;
		x2[i] = i + 2;
	}

	// compute "inner product," with roles of + and * reversed:
	int result = inner_product(&x1[0], &x1[N], &x2[0], 1, multiplies<int>(), plus<int>());

	cout << "Inner product with roles of + and * reversed: " << result << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <numeric>
using namespace std;
int main(void)
{
	const int N = 20;
	int x1[N], x2[N];
	for (int i = 0; i < N; ++i)
		x1[i] = i;

	// Compute the partial sums of 0, 1, 2, 3, ..., N - 1, putting the result inx2:
	partial_sum(&x1[0], &x1[N], &x2[0]);

	// Compute the adjacent differences of elements in x2, placing the result back in x2:
	adjacent_difference(&x2[0], &x2[N], &x2[0]);

	for (int i = 0; i < N; ++i)
		cout << x2[i] << "  ";
	return 0;
}
#endif


#if 0
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;

int main(void)
{
	const int N = 20;
	int x1[N], x2[N];

	for (int i = 0; i < N; ++i)
		x1[i] = i;

	// Compute the partial sums of 0, 1, 2, 3, ..., N - 1, putting the result inx2:
	partial_sum(&x1[0], &x1[N], &x2[0]);

	for (int i = 0; i < N; ++i)
		cout << x2[i] << " ";

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;

bool above40(int n) { return (n > 4); }

int main(void)
{
	const int N = 7;
	int array0[N] = { 5, 3, 1, 7, 6, 4, 2 };
	int array1[N];

	copy(&array0[0], &array0[N], &array1[0]);

	ostream_iterator<int> out(cout, " ");

	cout << "Original sequence:                 ";
	copy(&array1[0], &array1[N], out); cout << endl;


	int* split = partition(&array1[0], &array1[N], above40);

	cout << "Result of (unstable) partitioning: ";
	copy(&array1[0], split, out); cout << "| ";
	copy(split, &array1[N], out); cout << endl;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;

bool above40(int n) { return (n > 4); }

int main(void)
{
	const int N = 7;
	int array0[N] = { 5, 3, 1, 7, 6, 4, 2 };
	int array1[N];

	copy(&array0[0], &array0[N], &array1[0]);

	ostream_iterator<int> out(cout, " ");

	cout << "Original sequence:                 ";
	copy(&array1[0], &array1[N], out); cout << endl;


	int* split = partition(&array1[0], &array1[N], above40);

	cout << "Result of (unstable) partitioning: ";
	copy(&array1[0], split, out); cout << "| ";
	copy(split, &array1[N], out); cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;


template<class T> T max(const T* data, int size) {
	T result = data[0];
	for (int i = 1; i < size; i++)
	if (result < data[i])
		result = data[i];
	return result;
}

template<class T> T min(const T* data, int size) {
	T result = data[0];
	for (int i = 1; i < size; i++)
	if (result > data[i])
		result = data[i];
	return result;
}



int main(void)
{
	double data[] = { 1.5, 4.6, 3.1, 1.1, 3.8, 2.1 };
	int numbers[] = { 2, 22, 4, 6, 122, 12, 1, 45 };

	const int dataSize = sizeof data / sizeof data[0];
	cout << "Minimum double is " << min(data, dataSize) << endl;
	cout << "Maximum double is " << max(data, dataSize) << endl;

	const int numbersSize = sizeof numbers / sizeof numbers[0];
	cout << "Minimum integer is " << min(numbers, numbersSize) << endl;
	cout << "Maximum integer is " << max(numbers, numbersSize) << endl;

	return 0;
}
#endif