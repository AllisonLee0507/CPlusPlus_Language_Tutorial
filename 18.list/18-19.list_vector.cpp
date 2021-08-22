#if 0
#include <list>
#include <vector>
#include <iostream>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const double data[] = { 3.14, 2.78, 1.51, 7.66, 9.65 };
	list<double> original(data, data + sizeof(data) / sizeof(data[0]));

	vector<double> vector_data(3, 3.33);
	list<double> list_data(4, 4.44);

	// show results
	print(original);
	print(vector_data);
	print(list_data);

	// assign a list to a list
	list_data = original;

	// assign a list to a vector
	vector_data.assign(original.begin(), original.end());

	print(list_data);
	print(vector_data);

	return 0;
}
#endif


#if 0
#include <list>
#include <vector>
#include <iostream>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const double data[] = { 3.14, 2.78, 1.51, 7.66, 9.65 };
	list<double> original(data, data + sizeof(data) / sizeof(data[0]));

	vector<double> vector_data(3, 3.33);
	list<double> list_data(4, 4.44);

	// show results
	print(original);
	print(vector_data);
	print(list_data);

	// assign a list to a list
	list_data = original;

	// create an empty vector of int's and assign a list of doubles to it
	vector<int> v;
	v.assign(original.begin(), original.end());

	// show results
	print(list_data);
	print(v);
	return 0;
}
#endif



#if 0
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

list<string>
getTotalEnrollment(const vector<list<string> >& classLists, const list<string>& droppedStudents)
{
	list<string> allStudents;

	for (size_t i = 0; i < classLists.size(); ++i) {
		allStudents.insert(allStudents.end(), classLists[i].begin(), classLists[i].end());
	}

	allStudents.sort();

	allStudents.unique();

	for (list<string>::const_iterator it = droppedStudents.begin();
		it != droppedStudents.end(); ++it) {
		allStudents.remove(*it);
	}

	return (allStudents);
}

void readStudentList(list<string> &students, ifstream &istr)
{
	string name;
	while (getline(istr, name)) {
		cout << "Read name " << name << endl;
		students.push_back(name);
	}
}

void readCourseLists(vector<list<string> > &lists){
	for (int i = 1;; i++) {
		ostringstream ostr;
		ostr << "course" << i << ".txt";

		ifstream istr(ostr.str().c_str());
		if (!istr) {
			cout << "Failed to open " << ostr.str() << endl;
			break;
		}
		list<string> newList;
		readStudentList(newList, istr);
		lists.push_back(newList);
	}
}

void readDroppedStudents(list<string> &students){
	ifstream istr("dropped.txt");
	readStudentList(students, istr);
}

int main(int argc, char **argv)
{
	vector<list<string> > courseLists;
	list<string> droppedStudents;

	readCourseLists(courseLists);
	readDroppedStudents(droppedStudents);

	list<string> finalList = getTotalEnrollment(courseLists, droppedStudents);

	copy(finalList.begin(), finalList.end(), ostream_iterator<string>(cout, "\n"));
	return 0;
}
#endif



#if 0
#include <iomanip>
#include <iostream>
#include <list>
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
	const int data[] = { 1, 1, 2, 3, 5 };
	list<int> original(data, data + sizeof(data) / sizeof(data[0]));

	// make a vector from a list
	vector<int> vector_copy(original.begin(), original.end());

	// show results
	print(original);
	print(vector_copy);
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
	const float a[] = { 1, -2.3, 4.5, -6.7, 8.9, 10.2 };

	// create and initialize vector with above data
	vector<float> data(a, a + sizeof(a) / sizeof(a[0]));

	cout << "DATA VECTOR HAS " << data.size() << " ELEMENTS\n";
	print(data);

	// transfer to a list and remove all negative numbers
	list<float> l(data.begin(), data.end());
	cout << "\nSize of list before calling remove_if: " << l.size() << endl;
	l.remove_if(bind2nd(less<float>(), 0));
	cout << "Size of list after calling remove_if: " << l.size() << endl;
	print(l);

	return 0;
}
#endif
