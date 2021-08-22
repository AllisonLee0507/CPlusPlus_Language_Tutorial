#if 0
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	// make a big vector and then deallocate all its memory
	const int big_size = 10000;
	vector<double> v(big_size);
	cout << "Before clearing, the capacity of the vector is "
		<< v.capacity() << " and its size is " << v.size();
	v.clear();
	cout << "\nAfter clearing, the capacity of the vector is "
		<< v.capacity() << " and its size is " << v.size();
	vector<double>().swap(v);

	cout << "\nAfter swapping, the capacity of the vector is "
		<< v.capacity() << " and its size is " << v.size();

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	const int big_size = 10000;
	vector<double> v(big_size);
	// make a big vector and then minimize its memory
	v.assign(big_size, 3.33);
	cout << "\n\nBefore resizing, the capacity of the vector is "
		<< v.capacity() << " and its size is " << v.size();
	v.resize(1);
	cout << "\nAfter resizing, the capacity of the vector is "
		<< v.capacity() << " and its size is " << v.size();
	vector<double>(v).swap(v);

	cout << "\nAfter swapping, the capacity of the vector is "
		<< v.capacity() << " and its size is " << v.size();

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	vector<double> v(5, 2.78);
	v[2] = 0.0;

	// make the vector as large as possible without reallocating
	v.resize(v.capacity(), 2.78);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main(void)
{
	int N = 10000; // size of vectors

	vector<int> vector1, vector2;

	for (int k = 0; k != N; ++k) {
		vector<int>::size_type cap = vector1.capacity();
		vector1.push_back(k);
		if (vector1.capacity() != cap)
			cout << "k: " << k << ", new capacity: " << vector1.capacity() << endl;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main(void)
{
	int N = 10000; // size of vectors

	vector<int> vector1, vector2;

	for (int k = 0; k != N; ++k) {
		vector<int>::size_type cap = vector1.capacity();
		vector1.push_back(k);
		if (vector1.capacity() != cap)
			cout << "k: " << k << ", new capacity: " << vector1.capacity() << endl;
	}

	vector2.reserve(N);
	for (int k = 0; k != N; ++k) {
		vector<int>::size_type cap = vector2.capacity();
		vector2.push_back(k);
		if (vector2.capacity() != cap)
			cout << "k: " << k << ", new capacity: " << vector2.capacity() << "\n";
	}

	return 0;
}
#endif