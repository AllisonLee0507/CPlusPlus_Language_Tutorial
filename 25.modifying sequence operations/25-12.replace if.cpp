#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;

bool greater9(int);

int main(void)
{
	int a[10] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
	std::ostream_iterator< int > output(cout, " ");

	std::vector< int > v3(a, a + 10); // copy of a
	cout << "Vector v3 before replacing values greater than 9:\n   ";
	std::copy(v3.begin(), v3.end(), output);

	// replace values greater than 9 in v3 with 100
	std::replace_if(v3.begin(), v3.end(), greater9, 100);
	cout << "\nVector v3 after replacing all values greater"
		<< "\nthan 9 with 100s:\n   ";
	std::copy(v3.begin(), v3.end(), output);

	cout << endl;
	return 0;
}

bool greater9(int x)
{
	return x > 9;
}
#endif


#if 0
#include <iostream>
#include <set>
#include <deque>
#include <algorithm>
using namespace std;

template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

int main(void)
{
	set<int, greater<int> > coll1;
	deque<int> coll2;

	for (int i = 1; i <= 9; ++i) {
		coll1.insert(i);
	}

	PRINT_ELEMENTS(coll1, "initialized: ");

	transform(coll1.begin(), coll1.end(),back_inserter(coll2), bind2nd(multiplies<int>(), 10));
	PRINT_ELEMENTS(coll2, "transformed: ");

	replace_if(coll2.begin(), coll2.end(), bind2nd(equal_to<int>(), 70), 42);
	PRINT_ELEMENTS(coll2, "replaced:    ");

}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <vector>

bool IsEven (const int & nNum){
	return ((nNum % 2) == 0);
}
int main(void){
	using namespace std;

	vector <int> v(6);

	fill(v.begin(), v.begin() + 3, 8);
	fill_n(v.begin() + 3, 3, 5);

	for (size_t nIndex = 0; nIndex < v.size(); ++nIndex){
		cout << "Element [" << nIndex << "] = ";
		cout << v[nIndex] << endl;
	}

	cout << "Using 'std::replace_if' to replace even values by -1" << endl;
	replace_if(v.begin(), v.end(), IsEven, -1);

	for (size_t nIndex = 0; nIndex < v.size(); ++nIndex) {
		cout << "Element [" << nIndex << "] = ";
		cout << v[nIndex] << endl;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool greater9(int);

int main(void)
{
	const int SIZE = 10;
	int a[SIZE] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };

	// Replace 10s in v1 with 100
	vector< int > v1(a, a + SIZE);
	replace(v1.begin(), v1.end(), 10, 100);

	// Replace values greater than 9 in v3 with 100
	vector< int > v3(a, a + SIZE);
	replace_if(v3.begin(), v3.end(), greater9, 100);

	return 0;
}

bool greater9(int x)
{
	return x > 9;
}
#endif