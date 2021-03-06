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

	// insert elements from array
	integers.insert(integers.begin(), array, array + 6);
	cout << "\n\nContents of vector integers before clear: ";
	std::copy(integers.begin(), integers.end(), output);

	// empty integers; clear calls erase to empty a collection
	integers.clear();
	cout << "\nAfter clear, vector integers "
		<< (integers.empty() ? "is" : "is not") << " empty" << endl;

	return 0;
}
#endif
