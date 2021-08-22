#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a[10] = { 3, 10, 2, 7, 4, 8, 1, 9, 5, 6 };

	std::vector< int > v(a, a + 10); // copy of a
	std::vector< int > v2;
	std::ostream_iterator< int > output(cout, " ");

	for (int i = 0; i < 10; i++)
	{
		v2.push_back(a[i]);
		std::push_heap(v2.begin(), v2.end());
		cout << "\nv2 after push_heap(a[" << i << "]): ";
		std::copy(v2.begin(), v2.end(), output);
	}

	for (int j = 0; j < v2.size(); j++)
	{
		cout << "\nv2 after " << v2[0] << " popped from heap\n";
		std::pop_heap(v2.begin(), v2.end() - j);
		std::copy(v2.begin(), v2.end(), output);
	}
	cout << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;

	vector <int> v;

	v.push_back(50);
	v.push_back(1);
	v.push_back(987);
	v.push_back(1001);

	cout << "The vector contains ";
	cout << v.size();
	cout << " elements before calling pop_back" << endl;

	// Erase one element at the end
	v.pop_back();

	cout << "The vector contains ";
	cout << v.size();
	cout << " elements after calling pop_back" << endl;

	cout << "Enumerating items in the vector... " << endl;

	unsigned int nElementIndex = 0;
	while (nElementIndex < v.size())
	{
		cout << "Element at position " << nElementIndex << " is: ";
		cout << v[nElementIndex] << endl;

		// move to the next element
		++nElementIndex;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	vector<string> v;
	v.push_back("A");
	v.push_back("B");
	v.push_back("C");

	cout << v.size() << endl;

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	v[0] = "battle axe";
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	cout << v[0] << endl;
	cout << v[0].size() << endl;

	v.pop_back();
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	v.clear();
	if (v.empty())
		cout << "\nYou have nothing.\n";
	else
		cout << "\nYou have at least one item.\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
#include <string>
#include <algorithm>  // for reverse
using namespace std;

int main(void)
{
	string s("qwer");

	vector<char> vector1(s.begin(), s.end());

	vector<char> vector2;

	vector<char>::iterator i;

	for (i = vector1.begin(); i != vector1.end(); ++i)
		vector2.push_back(*i);

	for (i = vector2.begin(); i != vector2.end(); ++i)
		cout << *i;

	return 0;
}
#endif