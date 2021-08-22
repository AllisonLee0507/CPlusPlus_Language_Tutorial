#if 0
#include <vector>

using namespace std;

int main(void)
{
	// fill a vector with one million numbers the slow way
	vector<int> v1;
	for (int i = 0; i < 1000000; ++i)
		v1.push_back(i);

	// fill a vector with one million numbers the fast way
	vector<int> v2;        // has zero elements
	v2.reserve(1000000); // still has zero elements
	for (int i = 0; i < 1000000; ++i)
		v2.push_back(i);

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	// create empty vector for strings
	vector<string> sentence;

	// reserve memory for five elements to avoid reallocation
	sentence.reserve(5);

	// append some elements
	sentence.push_back("Hello,");
	sentence.push_back("how");
	sentence.push_back("are");
	sentence.push_back("you");
	sentence.push_back("?");

	// print elements separated with spaces
	copy(sentence.begin(), sentence.end(),
		ostream_iterator<string>(cout, " "));
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> INTVECTOR;

int main(void)
{
	// Dynamically allocated vector begins with 0 elements.
	INTVECTOR theVector;

	theVector.push_back(42);

	// Ensure there's room for at least 1000 elements.
	theVector.reserve(1000);
	cout << endl << "After reserving storage for 1000 elements:" << endl;
	cout << "theVector's size is: " << theVector.size() << endl;
	cout << "theVector's maximum size is: " << theVector.max_size() << endl;
	cout << "theVector's capacity is: " << theVector.capacity() << endl;

	return 0;
}
#endif