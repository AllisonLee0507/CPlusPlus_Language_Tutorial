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
	std::ostream_iterator< int > output(cout, " ");

	int a2[10] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	std::vector< int > v2(a2, a2 + 10); // copy of a2
	cout << "\n\nVector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);

	// locate maximum element in v2
	cout << "\nMaximum element in Vector v2 is: "
		<< *(std::max_element(v2.begin(), v2.end()));

	cout << endl;
	return 0;
}
#endif


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
	std::ostream_iterator< int > output(cout, " ");

	int a2[10] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	std::vector< int > v2(a2, a2 + 10); // copy of a2
	cout << "\n\nVector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);

	// locate minimum element in v2
	cout << "\n\nMinimum element in Vector v2 is: "
		<< *(std::min_element(v2.begin(), v2.end()));

	cout << endl;
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

	// find the smallest number
	vector<double>::iterator before_itr = min_element(v.begin(), v.end());

}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
template <typename elementType>
bool IsEven (const elementType& number)
{
	return ((number % 2) == 0);
}

int main(void)
{
	vector <int> v;

	for (int nNum = -9; nNum < 10; ++nNum)
		v.push_back(nNum);

	vector <int>::const_iterator i;
	for (i = v.begin(); i != v.end(); ++i)
		cout << *i << ' ';

	cout << v.size() << "' elements" << endl;

	// Find a sample integer '3' in the vector using the 'find' algorithm
	vector <int>::iterator iFound;
	iFound = find(v.begin()    // Start of range
		, v.end()    // End of range
		, 3);             // Element to find

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
template <typename elementType>
bool IsEven (const elementType& number)
{
	return ((number % 2) == 0);
}

int main(void)
{
	vector <int> v;

	for (int nNum = -9; nNum < 10; ++nNum)
		v.push_back(nNum);

	vector <int>::const_iterator i;
	for (i = v.begin(); i != v.end(); ++i)
		cout << *i << ' ';

	cout << v.size() << "' elements" << endl;

	// Find the first even number in the collection
	vector <int>::iterator iEvenNumber;
	iEvenNumber = find_if(v.begin()// Start of range
		, v.end()  // End of range
		, IsEven <int>);     // Unary Predicate

	if (iEvenNumber != v.end())
	{
		cout << "Number '" << *iEvenNumber << "' found at position [";
		cout << distance(v.begin(), iEvenNumber);
		cout << "]" << endl;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>  // For find
using namespace std;


int main(void)
{
	char x[5] = { 'a', 'b', 'c', 'd', 'f' };

	vector<char> vector1(&x[0], &x[5]);

	// Search for the first occurrence
	vector<char>::iterator where = find(vector1.begin(), vector1.end(), 'b');


	cout << *where << endl;
	return 0;
}
#endif