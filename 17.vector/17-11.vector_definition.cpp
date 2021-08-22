#if 0
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
	vector<bool> shots(5); // true if pet has shot

	// give shots to two pets
	shots[1] = true;
	shots[4].flip();


	// delete the first element because that pet was adopted
	shots.erase(shots.begin());


	// flip bits to show pets needing shots
	shots.flip();

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

int main(void)
{
	vector< int > integers1(7); // 7-element vector< int >
	vector< int > integers2(10); // 10-element vector< int >

	size_t i;

	cout << integers1.size() << endl;
	for (i = 0; i < integers1.size(); i++){
		cout << integers1[i];
	}
	cout << integers2.size() << endl;
	for (i = 0; i < integers2.size(); i++){
		cout << integers2[i];
	}

	for (size_t i = 0; i < integers1.size(); i++)
		integers1[i] = i;

	for (size_t i = 0; i < integers2.size(); i++)
		integers2[i] = i;

	for (i = 0; i < integers1.size(); i++){
		cout << integers1[i];
	}
	for (i = 0; i < integers2.size(); i++){
		cout << integers2[i];
	}

	return 0;
}
#endif



#if 0
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	vector<string> stringVector(10, "hello");

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
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

int main(void)
{
	vector< int > integers1(7); // 7-element vector< int >
	vector< int > integers2(10); // 10-element vector< int >

	size_t i;

	for (i = 0; i < integers1.size(); i++){
		cout << integers1[i];
	}
	for (i = 0; i < integers2.size(); i++){
		cout << integers2[i];
	}

	vector< int > integers3(integers1); // copy constructor

	cout << integers3.size() << endl;
	for (i = 0; i < integers3.size(); i++){
		cout << integers3[i];
	}

	return 0;
}
#endif