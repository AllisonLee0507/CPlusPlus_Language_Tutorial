#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	vector<int>::const_iterator iter;

	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	srand(time(0));
	random_shuffle(scores.begin(), scores.end());
	for (iter = scores.begin(); iter != scores.end(); ++iter)
		cout << *iter << endl;

	sort(scores.begin(), scores.end());
	for (iter = scores.begin(); iter != scores.end(); ++iter)
		cout << *iter << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<int> vect);

int main(void) {

	// Declare a vector that has an initial capacity of 10.
	vector<int> v(10);

	for (unsigned i = 0; i < v.size(); ++i) v[i] = i*i;

	show("Contents of v: ", v);

	// the use of the subscripting operator.
	int sum = 0;
	for (unsigned i = 0; i < v.size(); ++i) sum += v[i];
	double avg = sum / v.size();
	cout << "The average of the elements is " << avg << "\n\n";

	return 0;
}

// Display the contents of a vector<int>.
void show(const char *msg, vector<int> vect) {
	cout << msg;
	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << " ";
	cout << "\n";
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;

// comment next line out when debugging
#define NDEBUG

class Ship
{
public:
	Ship(const float cargo_weight[], int length);

	float operator[](int index) const;
	// REQUIRE: 0 <= index < cargo_loads()
	// RETURN: weight of load with specified index

	int cargo_loads() const;
private:
	vector<float> weight_;
};

inline
Ship::Ship(const float weight[], int length)
: weight_(weight, weight + length)
{} // empty

inline
float Ship::operator[](int index) const
{
#ifdef NDEBUG
	return weight_[index]; // don't check range when not debugging
#else
	return weight_.at(index); // check range when debugging
#endif
}

inline
int Ship::cargo_loads() const
{
	return static_cast<int>(weight_.size());
}

int main(void)
{
	const int num_loads = 3;
	const float weights[num_loads] = { 40.8f, 35.2f, 22.1f };

	// make a ship and load it with cargo
	Ship ship(weights, num_loads);

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

	for (vector<string>::iterator it = stringVector.begin(); it != stringVector.end(); ++it) {
		it->append(" there");
	}

	return 0;
}
#endif



#if 0
#include <vector> 
#include <iostream> 

using namespace std;

vector<double> makevector(int size){

	vector<double> result;
	for (int i = 1; i <= size; i++) {
		result.push_back(double(i));
	}
	return result;
}

void print(const vector<double>& l)
{

	cout << "Size of vector is: " << l.size() << endl;

	vector<double>::const_iterator i;

	for (i = l.begin(); i != l.end(); i++)
	{
		cout << (*i) << " ";
	}

	cout << endl;
}

int main(void)
{
	vector<double> vector1 = makevector(5);

	vector<double>::iterator bi;

	// Traverse random 
	cout << "Traverse random" << endl;
	bi = vector1.begin();
	cout << *bi << " ";                // First element 
	cout << *(bi += 3) << " ";     // 1+3 is 4th element 
	cout << *(bi -= 1) << " ";     // 4-1 is third element 
	cout << bi[-1] << " ";             // 3-1 is second element 
	cout << bi[1] << endl << endl;   // 3+1 is fourth element 

	// Create bidirectional iterator 
	vector<double>::reverse_iterator ri;


	// Traverse reverse random 
	cout << "Traverse reverse random" << endl;
	cout << *ri << " ";               // First element 
	cout << *(ri += 3) << " ";        // 1+3 is 4th element 
	cout << *(ri -= 1) << " ";        // 4-1 is third element 
	cout << ri[-1] << " ";          // 3-1 is second element 
	cout << ri[1] << endl << endl;  // 3+1 is fourth element 

	return 0;
}
#endif