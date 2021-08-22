#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function that prints the passed argument
void print(int elem)
{
	cout << elem << ' ';
}

int main(void)
{
	vector<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// print all elements
	for_each(coll.begin(), coll.end(),    // range
		print);                      // operation
	cout << endl;

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

	return 0;
}
#endif
