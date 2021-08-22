#if 0
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

int main(void)
{
	vector<int> coll1;
	vector<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");
	cout << endl;


	vector<int>::iterator pos1, pos2;
	pos1 = partition(coll1.begin(), coll1.end(), not1(bind2nd(modulus<int>(), 2)));
	pos2 = stable_partition(coll2.begin(), coll2.end(), not1(bind2nd(modulus<int>(), 2)));

	PRINT_ELEMENTS(coll1, "coll1: ");
	cout << "first odd element: " << *pos1 << endl;
	PRINT_ELEMENTS(coll2, "coll2: ");
	cout << "first odd element: " << *pos2 << endl;

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
bool IsEven(const int& nNumber)
{
	return ((nNumber % 2) == 0);
}

int main(void)
{
	vector <int> v;
	vector <int> vecCopy(v);

	for (int nNum = 0; nNum < 10; ++nNum)
		v.push_back(nNum);

	stable_partition(vecCopy.begin(), vecCopy.end(), IsEven);

	for (size_t nItem = 0; nItem < vecCopy.size(); ++nItem)
		cout << vecCopy[nItem] << ' ';

	return 0;
}
#endif
