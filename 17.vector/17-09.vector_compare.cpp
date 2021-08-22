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

	cout << "\nEvaluating: integers1 != integers2" << endl;

	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;

	return 0;
}
#endif


#if 0
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	vector<int> v1(10, 0);
	vector<int> v2(10, 0);

	if (v1 == v2) {
		cout << "equal!\n";
	}
	else {
		cout << "not equal!\n";
	}

	v1[3] = 50;

	if (v1 < v2) {
		cout << "v1 is less than v2\n";
	}
	else {
		cout << "v1 is not less than v2\n";
	}
	return (0);
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

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2; // integers1 is larger than integers2

	// use equality (==) operator with vector objects
	if (integers1 == integers2)
		cout << "integers1 and integers2 are equal" << endl;


	return 0;
}
#endif
