#if 0
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	vector<int>::iterator itr;
	int i;

	for (i = 0; i<5; i++)
		v.push_back(i);

	itr = v.begin();
	while (itr != v.end())
		cout << *itr++ << endl;

	itr = v.begin();
	itr += 2; // point to element 2

	// create insert_iterator to element 2
	insert_iterator<vector<int> > i_itr(v, itr);

	// insert rather than overwrite
	*i_itr++ = 100;
	*i_itr++ = 200;

	cout << "Array after insertion: ";
	itr = v.begin();
	while (itr != v.end())
		cout << *itr++ << " ";

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <functional>
#include <iterator>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> vectorOne;
	set<int> setOne;
	vectorOne.push_back(1);
	vectorOne.push_back(2);
	vectorOne.push_back(3);
	vectorOne.push_back(4);


	insert_iterator<set<int> > inserter(setOne, setOne.begin());
	remove_copy_if(vectorOne.begin(), vectorOne.end(), inserter, bind2nd(equal_to<int>(), 100));

	copy(setOne.begin(), setOne.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	vector<int>::iterator itr;
	int i;

	for (i = 0; i<5; i++)
		v.push_back(i);

	itr = v.begin();
	while (itr != v.end())
		cout << *itr++ << endl;

	itr = v.begin();
	itr += 2; // point to element 2

	// create insert_iterator to element 2
	insert_iterator<vector<int> > i_itr(v, itr);

	// insert rather than overwrite
	*i_itr++ = 100;
	*i_itr++ = 200;

	itr = v.begin();
	while (itr != v.end())
		cout << *itr++ << " ";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	vector<int>::iterator itr;

	for (int i = 0; i<5; i++)
		v.push_back(i);

	cout << "Original array: ";
	itr = v.begin();
	while (itr != v.end())
		cout << *itr++ << " ";
	cout << endl;

	itr = v.begin();
	itr += 2; // point to element 2

	// create insert_iterator to element 2
	insert_iterator<vector<int> > i_itr(v, itr);

	// insert rather than overwrite
	*i_itr++ = 100;
	*i_itr++ = 200;

	cout << "Array after insertion: ";
	itr = v.begin();
	while (itr != v.end())
		cout << *itr++ << " ";

	return 0;
}
#endif
