#if 0
#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> INTVECTOR;
const int ARRAY_SIZE = 4;

int main(void)
{
	INTVECTOR theVector;

	// Intialize the array to contain the members [100, 200, 300, 400]
	for (int cEachItem = 0; cEachItem < ARRAY_SIZE; cEachItem++)
		theVector.push_back((cEachItem + 1) * 100);

	cout << "First element: " << theVector.front() << endl;
	cout << "Last element: " << theVector.back() << endl;
	cout << "Elements in vector: " << theVector.size() << endl;

	cout << "Deleting last element." << endl;
	theVector.erase(theVector.end() - 1);
	cout << "New last element is: " << theVector.back() << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> INTVECTOR;
const int ARRAY_SIZE = 4;

int main(void)
{
	INTVECTOR theVector;

	// Intialize the array to contain the members [100, 200, 300, 400]
	for (int cEachItem = 0; cEachItem < ARRAY_SIZE; cEachItem++)
		theVector.push_back((cEachItem + 1) * 100);

	cout << "First element: " << theVector.front() << endl;
	cout << "Last element: " << theVector.back() << endl;
	cout << "Elements in vector: " << theVector.size() << endl;

	// Delete the first element of the vector.
	theVector.erase(theVector.begin());
	cout << "New first element is: " << theVector.front() << endl;
	cout << "Elements in vector: " << theVector.size() << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <vector>    // vector class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator iterator
#include <stdexcept> // out_of_range exception

int main(void)
{
	int array[6] = { 1, 2, 3, 4, 5, 6 };
	std::vector< int > integers(array, array + 6);
	std::ostream_iterator< int > output(cout, " ");

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	cout << "Vector integers contains: ";
	std::copy(integers.begin(), integers.end(), output);

	cout << "\nFirst element of integers: " << integers.front();

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> INTVECTOR;
const int ARRAY_SIZE = 4;

int main(void)
{
	INTVECTOR theVector;

	// Intialize the array to contain the members [100, 200, 300, 400]
	for (int cEachItem = 0; cEachItem < ARRAY_SIZE; cEachItem++)
		theVector.push_back((cEachItem + 1) * 100);

	cout << "Last element: " << theVector.back() << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(void)
{
	vector<char> v(10); // create a vector of length 10
	vector<char>::iterator p; // create an iterator
	int i;

	// assign elements in vector a value
	p = v.begin();
	i = 0;
	while (p != v.end()) {
		*p = i + 'a';
		p++;
		i++;
	}

	return 0;
}
#endif
