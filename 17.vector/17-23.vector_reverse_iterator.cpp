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

	bi = vector1.begin();           // Set iterator 
	while (bi != vector1.end()) cout << (*bi++) << " ";

	// Traverse backward 
	bi = (vector1.end());
	do {
		cout << (*--bi) << " ";
	} while (bi != vector1.begin());
	cout << endl << endl;

	bi = vector1.begin();
	cout << *bi << " ";                // First element 
	cout << *(bi += 3) << " ";           // 1+3 is 4th element 
	cout << *(bi -= 1) << " ";           // 4-1 is third element 
	cout << bi[-1] << " ";             // 3-1 is second element 
	cout << bi[1] << endl << endl;     // 3+1 is fourth element 

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

	vector<double>::reverse_iterator ri;

	ri = vector1.rbegin();          // Set iterator 
	while (ri != vector1.rend()) cout << (*ri++) << " ";
	cout << endl << endl;

	// Traverse reverse backward 
	cout << "Traverse reverse backward" << endl;
	ri = (vector1.rend());
	do
	{
		cout << (*--ri) << " ";
	} while (ri != vector1.rbegin());
	cout << endl << endl;

}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<char> vect);

int main(void)
{
	vector<char> v;

	// Declare an iterator to a vector<char>.
	vector<char>::iterator itr;

	// Obtain an iterator to the start of v.
	itr = v.begin();

	// Insert characters into v. An iterator to the inserted object is returned.
	itr = v.insert(itr, 'A');
	itr = v.insert(itr, 'B');
	v.insert(itr, 'C');

	// Display the contents of v.
	show("The contents of v: ", v);

	// Declare a reverse iterator.
	vector<char>::reverse_iterator ritr;

	// Use a reverse iterator to show the contents of v in reverse.
	cout << "Here is v in reverse: ";
	for (ritr = v.rbegin(); ritr != v.rend(); ++ritr)
		cout << *ritr << " ";
	cout << "\n\n";

	return 0;
}

void show(const char *msg, vector<char> vect) {
	vector<char>::iterator itr;

	cout << msg << endl;
	for (itr = vect.begin(); itr != vect.end(); ++itr)
		cout << *itr << endl;
}
#endif



#if 0
#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<char> vect);

int main(void)
{
	vector<char> v;

	// Declare an iterator to a vector<char>.
	vector<char>::iterator itr;

	// Obtain an iterator to the start of v.
	itr = v.begin();

	// Insert characters into v. An iterator to the inserted object is returned.
	itr = v.insert(itr, 'A');
	itr = v.insert(itr, 'B');
	v.insert(itr, 'C');

	// Display the contents of v.
	show("The contents of v: ", v);

	// Declare a reverse iterator.
	vector<char>::reverse_iterator ritr;

	// Use a reverse iterator to show the contents of v in reverse.
	cout << "Here is v in reverse: ";
	for (ritr = v.rbegin(); ritr != v.rend(); ++ritr)
		cout << *ritr << " ";
	cout << "\n\n";

	return 0;
}

void show(const char *msg, vector<char> vect) {
	vector<char>::iterator itr;

	cout << msg << endl;
	for (itr = vect.begin(); itr != vect.end(); ++itr)
		cout << *itr << endl;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(void)
{
	cout << "Normal and reverse iteration through a vector:\n";
	vector<int> vector1;
	vector1.push_back(2);
	vector1.push_back(3);
	vector1.push_back(5);
	vector1.push_back(7);
	vector1.push_back(11);

	cout << "Elements in normal (forward) order:  ";
	vector<int>::iterator i;

	for (i = vector1.begin(); i != vector1.end(); ++i)
		cout << *i << "  ";
	cout << endl;
	cout << "Elements in reverse order:           ";
	vector<int>::reverse_iterator r;
	for (r = vector1.rbegin(); r != vector1.rend(); ++r)
		cout << *r << "  ";
	cout << endl;


	cout << "Normal and reverse iteration through a list:\n";
	list<int> list1(vector1.begin(), vector1.end());

	cout << "Elements in normal (forward) order:  ";
	for (i = vector1.begin(); i != vector1.end(); ++i)
		cout << *i << "  ";
	cout << endl;
	cout << "Elements in reverse order:           ";
	for (r = vector1.rbegin(); r != vector1.rend(); ++r)
		cout << *r << "  ";
	cout << endl;

	return 0;
}
#endif