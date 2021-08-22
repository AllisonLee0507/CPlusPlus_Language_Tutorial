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

	// erase remaining elements
	integers.erase(integers.begin(), integers.end());
	cout << "\nAfter erasing all elements, vector integers "
		<< (integers.empty() ? "is" : "is not") << " empty";

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

	// erase first element
	integers.erase(integers.begin());
	cout << "\n\nVector integers after erasing first element: ";
	std::copy(integers.begin(), integers.end(), output);


	return 0;
}
#endif



#if 0
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

void printVector(const vector<int>& v){
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main(int argc, char** argv)
{
	vector<int> v1, v2;
	int i;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(5);

	v1.insert(v1.begin() + 3, 4);

	// Add elements 6 through 10 to v2
	for (i = 6; i <= 10; i++) {
		v2.push_back(i);
	}

	printVector(v1);
	printVector(v2);

	// add all the elements from v2 to the end of v1
	v1.insert(v1.end(), v2.begin(), v2.end());

	printVector(v1);

	// erase the numbers 2 through 5 in v1
	v1.erase(v1.begin() + 1, v1.begin() + 5);

	printVector(v1);
	printVector(v2);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<char> v(10);
	vector<char> v2;
	char str[] = "<Vector>";
	unsigned int i;

	for (i = 0; i<10; i++) v[i] = i + 'a';

	// copy characters in str into v2
	for (i = 0; str[i]; i++)
		v2.push_back(str[i]);

	// display original contents of vector
	cout << "Original contents of v:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << "\n\n";

	vector<char>::iterator p = v.begin();
	p += 2; // point to 3rd element

	// insert 10 X's into v
	v.insert(p, 10, 'X');

	// display contents after insertion
	cout << "Size after inserting X's = " << v.size() << endl;
	cout << "Contents after insert:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << "\n\n";

	// remove those elements
	p = v.begin();
	p += 2; // point to 3rd element
	v.erase(p, p + 10); // remove next 10 elements

	// display contents after deletion
	cout << "Size after erase = " << v.size() << endl;
	cout << "Contents after erase:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
	cout << "\n\n";

	// Insert v2 into v
	v.insert(p, v2.begin(), v2.end());
	cout << "Size after v2's insertion = ";
	cout << v.size() << endl;
	cout << "Contents after insert:\n";
	for (i = 0; i<v.size(); i++) cout << v[i] << " ";
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
	vector<string> coll;

	/* read all words from the standard input
	* - source: all strings until end-of-file (or error)
	* - destination: coll (inserting)
	*/
	copy(istream_iterator<string>(cin),    // start of source
		istream_iterator<string>(),       // end of source
		back_inserter(coll));             // destination

	// sort elements
	sort(coll.begin(), coll.end());

	/* print all elements without duplicates
	* - source: coll
	* - destination: standard output (with newline between elements)
	*/
	unique_copy(coll.begin(), coll.end(),             // source
		ostream_iterator<string>(cout, "\n")); // destination
	return 0;
}
#endif


#if 0
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
typedef vector <string> VECTOR_STRINGS;
int main(void)
{
	VECTOR_STRINGS v;

	v.push_back("A");
	v.push_back("B");
	v.push_back("C");
	v.push_back("D");

	// insert a duplicate into the vector
	v.push_back("D");

	VECTOR_STRINGS::iterator i;

	// Erase adjacent duplicates
	i = unique(v.begin(), v.end());
	v.erase(i, v.end());

	for (size_t nItem = 0; nItem < v.size(); ++nItem){
		cout << "Name [" << nItem << "] = \"";
		cout << v[nItem] << "\"" << endl;
	}

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <list>
#include <numeric>
#include <vector>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const float a[] = { 1, 1.3, 1.5, 0.9, 0.1, 0.2 };
	vector<float> data(a, a + sizeof(a) / sizeof(a[0]));
	print(data);
	float mean = accumulate(data.begin(), data.end(), 0.0f) / data.size();
	vector<float> zero_mean(data);
	transform(zero_mean.begin(), zero_mean.end(), zero_mean.begin(), bind2nd(minus<float>(), mean));

	// compute the sample standard deviation
	float deviation = inner_product(zero_mean.begin(), zero_mean.end(), zero_mean.begin(), 0.0f);
	deviation = sqrt(deviation / (data.size() - 1));

	// erase all points more than three standard deviations greater than the mean
	const int num_deviations = 3;
	vector<float>::iterator end = remove_if(data.begin(), data.end(), bind2nd(greater<float>(), mean + num_deviations * deviation));
	data.erase(end, data.end());
	return 0;
}
#endif



#if 0
#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <list>
#include <numeric>
#include <vector>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const float a[] = { 1, 1.3, 1.5, 0.9, 0.1, 0.2 };

	// create and initialize vector with above data
	vector<float> data(a, a + sizeof(a) / sizeof(a[0]));

	cout << "DATA VECTOR HAS " << data.size() << " ELEMENTS\n";
	print(data);

	// compute the mean
	float mean = accumulate(data.begin(), data.end(), 0.0f) / data.size();

	// subtract the mean from every data point
	vector<float> zero_mean(data);
	transform(zero_mean.begin(), zero_mean.end(), zero_mean.begin(), bind2nd(minus<float>(), mean));

	// compute the sample standard deviation
	float deviation = inner_product(zero_mean.begin(), zero_mean.end(), zero_mean.begin(), 0.0f);
	deviation = sqrt(deviation / (data.size() - 1));

	const int num_deviations = 3;
	// erase all points more than three standard deviations less than the mean
	data.erase(remove_if(data.begin(), data.end(), bind2nd(less<float>(), mean - num_deviations * deviation)), data.end());

	return 0;
}
#endif
