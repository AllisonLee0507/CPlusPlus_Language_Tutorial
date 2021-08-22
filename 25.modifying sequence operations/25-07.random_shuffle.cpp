#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::vector< int > v(a1, a1 + 10); // copy of a1
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v before random_shuffle: ";
	std::copy(v.begin(), v.end(), output);

	std::random_shuffle(v.begin(), v.end()); // shuffle elements of v
	cout << "\nVector v after random_shuffle: ";
	
	std::copy(v.begin(), v.end(), output);
	cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void)
{
	vector<int> v;
	back_insert_iterator<std::vector<int> > p = back_inserter(v);

	for (int i = 0; i < 10; ++i)
		*p = i;

	for (int i = 0; i < 10; ++i){
		cout << v[i];
	}

	cout << "\n\n\n";
	random_shuffle(v.begin(), v.end());

	for (int i = 0; i < 10; ++i){
		cout << v[i];
	}

	return 0;
}
#endif



#if 0
#include <cstdlib>

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>

template <class T>inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template <class T>inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

using namespace std;

class MyRandom {
public:
	ptrdiff_t operator() (ptrdiff_t max) {
		double tmp;
		tmp = static_cast<double>(rand())
			/ static_cast<double>(RAND_MAX);
		return static_cast<ptrdiff_t>(tmp * max);
	}
};

int main(void)
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll:     ");

	// sort them again
	sort(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "sorted:   ");

	// shuffle all elements randomly
	random_shuffle(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "shuffled: ");

	return 0;
}
#endif



#if 0
#include <cstdlib>

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>
using namespace std;

template <class T>inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = "")
{
	typename T::const_iterator pos;

	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template <class T>inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
	for (int i = first; i <= last; ++i) {
		coll.insert(coll.end(), i);
	}
}

class MyRandom {
public:
	ptrdiff_t operator() (ptrdiff_t max) {
		double tmp;
		tmp = static_cast<double>(rand())
			/ static_cast<double>(RAND_MAX);
		return static_cast<ptrdiff_t>(tmp * max);
	}
};

int main(void)
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll:     ");

	sort(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "sorted:   ");

	MyRandom rd;
	random_shuffle(coll.begin(), coll.end(), rd);

	PRINT_ELEMENTS(coll, "shuffled: ");

	return 0;
}

#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(const char *msg, vector<int> vect);

int main(void)
{
	vector<int> v;

	for(int i=0; i<10; i++) 
		v.push_back(i);

	show("Original order: ", v);

	random_shuffle(v.begin(), v.end());
	show("After shuffle: ", v);

	return 0;
}

void show(const char *msg, vector<int> vect) {
	cout << msg << endl;
	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << endl;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{
	vector <int> v (6);

	fill(v.begin(), v.begin() + 3, 8);
	fill_n(v.begin() + 3, 3, 5);

	random_shuffle(v.begin(), v.end());

	for (size_t nIndex = 0; nIndex < v.size(); ++nIndex){
		cout << "Element [" << nIndex << "] = ";
		cout << v[nIndex] << endl;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

bool greater9(int);

int main(void)
{
	const int SIZE = 10;
	int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector< int > v(a1, a1 + SIZE);

	random_shuffle(v.begin(), v.end());

	int a2[] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	vector< int > v2(a2, a2 + SIZE);

	int result = count_if(v2.begin(), v2.end(), greater9);
	cout << "\nNumber of elements greater than 9: " << result;

	return 0;
}

bool greater9(int value) 
{ 
	return value > 9; 
}
#endif
