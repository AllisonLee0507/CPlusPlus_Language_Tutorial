#if 0
#include <iostream>
#include <iterator>
using namespace std;

int main(void)
{
	ostream_iterator<char> out_it(cout);

	*out_it = 'X';
	out_it++;
	*out_it = 'Y';
	out_it++;
	*out_it = ' ';

	char str[] = "C++ Iterators are powerful.\n";
	char *p = str;

	while (*p) *out_it++ = *p++;

	ostream_iterator<double> out_double_it(cout);
	*out_double_it = 187.23;
	out_double_it++;
	*out_double_it = -102.7;

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iterator>

int main(void)
{
	cout << "Enter two integers: ";

	std::istream_iterator< int > inputInt(cin);

	int number1 = *inputInt;
	++inputInt;
	int number2 = *inputInt;

	std::ostream_iterator< int > outputInt(cout);

	cout << "The sum is: ";
	*outputInt = number1 + number2;
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <list>      // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	int array[4] = { 2, 6, 4, 8 };
	std::list< int > values;      // create list of ints
	std::list< int > otherValues; // create list of ints
	std::ostream_iterator< int > output(cout, " ");

	// insert items in values
	values.push_front(1);
	values.push_front(3);
	values.push_back(4);
	values.push_back(2);

	cout << "values contains: ";
	std::copy(values.begin(), values.end(), output);

	otherValues.insert(otherValues.begin(), array, array + 4);
	cout << "\n\notherValues contains: ";
	std::copy(otherValues.begin(), otherValues.end(), output);


	values.merge(otherValues);

	cout << "\n\nvalues contains: ";
	std::copy(values.begin(), values.end(), output);

	cout << endl;
	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

int sum(int val1, int val2) { return val2 + val1; }

int main(void)
{
	int array1[5] = { 0, 1, 2, 3, 4 };
	int array2[5] = { 6, 7, 8, 9, 10 };
	ostream_iterator<int> out(cout, " ");

	// Put sums of corresponding array1 and array2 elements into output stream:
	transform(&array1[0], &array1[5], &array2[0], out, sum);

	cout << endl;
	return 0;
}
#endif
