#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	const int VECTOR_SIZE = 8;
	typedef vector<int> IntVector;
	typedef IntVector::iterator IntVectorIt;

	IntVector Numbers(VECTOR_SIZE);
	IntVector Result(4);

	IntVectorIt start, end, it;

	Numbers[0] = 4;
	Numbers[1] = 10;
	Numbers[2] = 70;
	Numbers[3] = 30;
	Numbers[4] = 10;
	Numbers[5] = 69;
	Numbers[6] = 96;
	Numbers[7] = 7;

	start = Numbers.begin();
	end = Numbers.end();

	for (it = start; it != end; it++)
		cout << *it << " ";

	partial_sort_copy(start, end, Result.begin(), Result.end());
	for (it = start; it != end; it++)
		cout << *it << " ";
	for (it = Result.begin(); it != Result.end(); it++)
		cout << *it << " ";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>

using namespace std;

int main(void)
{
	const int MAX_ELEMENTS = 8;
	typedef vector<int> IntVector;
	typedef IntVector::iterator IntVectorIt;
	typedef list<int> IntList;
	typedef IntList::iterator IntListIt;
	typedef deque<int> IntDeque;
	typedef IntDeque::iterator IntDequeIt;

	IntVector NumbersVector(MAX_ELEMENTS);
	IntVectorIt startv, endv, itv;
	IntList NumbersList;
	IntListIt first, last, itl;
	IntDeque NumbersDeque(2 * MAX_ELEMENTS);
	IntDequeIt itd;

	NumbersVector[0] = 4;
	NumbersVector[1] = 10;
	NumbersVector[2] = 70;
	NumbersVector[3] = 10;
	NumbersVector[4] = 30;
	NumbersVector[5] = 69;
	NumbersVector[6] = 96;
	NumbersVector[7] = 100;

	startv = NumbersVector.begin();    //location of first element of NumbersVector
	endv = NumbersVector.end();    //one past the last element of NumbersVector

	//sort NumbersVestor, mersge requires the sequences to be sorted
	sort(startv, endv);

	//print content of NumbersVector
	for (itv = startv; itv != endv; itv++)
		cout << *itv << " ";

	for (int i = 0; i < MAX_ELEMENTS; i++)
		NumbersList.push_back(i);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>);

int main(void)
{
	vector<int> vec(5);
	print(vec);

	vector<int>::iterator p = vec.begin();

	cout << *p << endl;

	vec.insert(vec.begin(), 9);
	print(vec);

	cout << *p << endl;

	p = vec.begin();
	cout << *p << endl;
	vec.erase(vec.begin());
	print(vec);

	vec.insert(vec.begin() + 2, 8);
	print(vec);

	vec.erase(vec.begin() + 2);
	print(vec);

	vec.insert(vec.end(), 7);
	print(vec);

	vec.erase(vec.end() - 1);
	print(vec);

	vec.insert(vec.begin() + 3, 6);
	print(vec);
	vec.erase(find(vec.begin(), vec.end(), 6));
	print(vec);

	vec.insert(vec.begin() + 1, 3);
	vec.insert(vec.begin() + 5, 3);
	print(vec);
	vec.erase(find(vec.begin(), vec.end(), 3));
	vec.erase(find(vec.begin(), vec.end(), 3));
	print(vec);

	vec[0] = 23;
	vec[1] = 2;
	vec[2] = 16;
	vec[3] = 45;
	vec[4] = 16;
	print(vec);

	sort(vec.begin(), vec.end());
	print(vec);

	return 0;
}

void print(vector<int> v) {
	vector<int>::iterator p = v.begin();
	while (p != v.end())
		cout << *p++ << " ";
	cout << endl;
}
#endif