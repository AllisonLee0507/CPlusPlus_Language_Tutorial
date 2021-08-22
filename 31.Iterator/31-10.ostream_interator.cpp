#if 0
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	vector<int> myVector;
	for (int i = 0; i < 10; i++) {
		myVector.push_back(i);
	}

	// print the contents of the vector
	copy(myVector.begin(), myVector.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
#endif


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

	char str[] = "this is a test";
	char *p = str;

	while (*p)
		*out_it++ = *p++;

	ostream_iterator<double> out_double_it(cout);
	*out_double_it = 187.23;
	out_double_it++;
	*out_double_it = -102.7;

	return 0;
}
#endif
