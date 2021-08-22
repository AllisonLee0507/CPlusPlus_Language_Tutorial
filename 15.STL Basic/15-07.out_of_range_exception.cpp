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

	try
	{
		integers.at(100) = 777;
	}
	catch (std::out_of_range outOfRange) // out_of_range exception
	{
		cout << "\n\nException: " << outOfRange.what();
	}

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

	try
	{
		integers.at(100) = 777;
	}
	catch (std::out_of_range outOfRange) // out_of_range exception
	{
		cout << "\n\nException: " << outOfRange.what();
	}

	return 0;
}

#endif



#if 0
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept> // out_of_range exception
using namespace std;

int main(void)
{
	char carr[] = { 'a', 'b', 'c', 'd', 'e' };

	vector<char> v;
	v.push_back('a');
	v.push_back('b');
	v.push_back('c');
	v.push_back('d');
	v.push_back('e');

	try {
		cout << v.at(10000) << '\n';
	}
	catch (std::out_of_range& e) {
		cerr << e.what() << '\n';
	}

	return 0;
}
#endif