#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int high = 250, low = 0;

	swap(high, low);

	cout << high << " ";
	cout << low;


	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> vector1(100, 1), vector2(200, 2);

	swap(vector1, vector2);


	for (int i = 0; i<vector1.size(); i++){
		cout << vector1[i];
	}
	cout << "\n\n\n\n\n";

	for (int i = 0; i<vector2.size(); i++){
		cout << vector2[i];
	}
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <iterator>

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::ostream_iterator< int > output(cout, " ");

	cout << "Array a contains:\n   ";
	std::copy(a, a + 10, output);


	std::swap(a[0], a[1]);

	cout << "\nArray a after swapping a[0] and a[1] using swap:\n   ";
	std::copy(a, a + 10, output); // display array a

	cout << endl;
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


	// swap second and fourth element
	swap(sentence[1], sentence[3]);
	// print elements separated with spaces
	copy(sentence.begin(), sentence.end(),
		ostream_iterator<string>(cout, " "));
	cout << endl;

	return 0;
}
#endif