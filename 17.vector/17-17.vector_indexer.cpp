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

	integers[0] = 7; // set first element to 7

	cout << "\n\nVector integers contains: ";
	std::copy(integers.begin(), integers.end(), output);

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

	for (int i = 0; i<v.size(); i++)
		v[i] = toupper(v[i]);
	cout << "Modified Contents:\n";
	for (int i = 0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;

vector<double> between(vector<double> v,
	double low, double high)
{
	vector<double> result;
	for (int i = 0; i < v.size(); i++)
	if (low <= v[i] && v[i] <= high)
		result.push_back(v[i]);
	return result;
}

int main(void)
{
	vector<double> salaries(5);
	salaries[0] = 35.0;
	salaries[1] = 63.0;
	salaries[2] = 48.0;
	salaries[3] = 78.0;
	salaries[4] = 51.0;

	vector<double> midrange_salaries = between(salaries, 45.0, 65.0);

	for (int i = 0; i < midrange_salaries.size(); i++)
		cout << midrange_salaries[i] << "\n";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int linear_search(vector<int> v, int a){
	for (int i = 0; i < v.size(); i++){
		if (v[i] == a)
			return i;
	}
	return -1;
}

void print(vector<int> a){
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << "\n";
}

void rand_seed(){
	int seed = static_cast<int>(time(0));
	srand(seed);
}

int rand_int(int a, int b){
	return a + rand() % (b - a + 1);
}

int main(void)
{
	rand_seed();
	vector<int> v(20);
	for (int i = 0; i < v.size(); i++)
		v[i] = rand_int(1, 100);
	print(v);
	cout << "Enter number to search for: ";
	int n;
	cin >> n;
	int j = linear_search(v, n);
	cout << "Found in position " << j << "\n";
	return 0;
}
#endif