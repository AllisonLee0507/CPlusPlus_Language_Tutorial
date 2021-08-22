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
#include <string>
using namespace std;

int main(void)
{
	string s("abcdefghij");

	vector<char> vector1(s.begin(), s.end());

	cout << "Popping characters off the front produces: ";

	while (vector1.size() > 0) {
		cout << vector1.front();
		vector1.erase(vector1.begin());
	}
	cout << endl;

	return 0;
}
#endif