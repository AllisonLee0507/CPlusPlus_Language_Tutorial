#if 0
include <iostream>
#include <vector> 
using std::cout;
using std::endl;
using std::vector;

template <typename Iter>
double vectorSum(Iter begin, Iter end) {
	double sum = 0.0;

	while (begin != end)
		sum += *begin++;
	return sum;
}

int main(void)
{
	vector<int> sunny;
	sunny.push_back(7);
	sunny.push_back(12);
	sunny.push_back(15);
	cout << sunny.size() << " months on record" << endl;
	cout << "vectorSum number of sunny days: ";
	cout << vectorSum(sunny.begin(), sunny.end()) << endl;

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

	cout << "Size = " << v.size() << endl;

	for (int i = 0; i<10; i++)
		v[i] = i + 'a';

	cout << "Current Contents:\n";
	for (int i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << "\n\n";

	cout << "Expanding vector\n";
	for (int i = 0; i<10; i++)
		v.push_back(i + 10 + 'a');

	cout << "Size now = " << v.size() << endl;

	cout << "Current contents:\n";
	for (int i = 0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << "\n\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;

	// Instantiate a vector object that holds 5 integers of default value
	vector <int> v(5);

	cout << "Size: " << v.size();
	cout << ", Capacity: " << v.capacity() << endl;

	// Inserting a 6th element in to the vector
	v.push_back(666);

	cout << "Size: " << v.size();
	cout << ", Capacity: " << v.capacity() << endl;

	// Inserting another element
	v.push_back(777);

	cout << "After inserting yet another element... " << endl;
	cout << "Size: " << v.size();
	cout << ", Capacity: " << v.capacity() << endl;

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
	unsigned int i;

	// display original size of v
	cout << "Size = " << v.size() << endl;

	// assign the elements of the vector some values
	for (i = 0; i<10; i++) v[i] = i + 'a';

	// display contents of vector
	cout << "Current Contents:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << "\n\n";

	cout << "Expanding vector\n";

	for (i = 0; i<10; i++) v.push_back(i + 10 + 'a');

	// display current size of v
	cout << "Size now = " << v.size() << endl;

	// display contents of vector
	cout << "Current contents:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << "\n\n";

	// change contents of vector
	for (i = 0; i<v.size(); i++) v[i] = toupper(v[i]);
	cout << "Modified Contents:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
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

	// Show statistics about vector.
	cout << "theVector's size is: " << theVector.size() << endl;
	cout << "theVector's maximum size is: " << theVector.max_size() << endl;
	cout << "theVector's capacity is: " << theVector.capacity() << endl;

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

	cout << "  max_size(): " << sentence.max_size() << endl;
	cout << "  size():     " << sentence.size() << endl;
	cout << "  capacity(): " << sentence.capacity() << endl;

	return 0;
}
#endif