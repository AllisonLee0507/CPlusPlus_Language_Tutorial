#if 0
#include <deque>
#include <iostream>

using namespace std;
typedef deque<char >  CHARDEQUE;
void print_contents (CHARDEQUE deque, char*);

int main(void)
{
	CHARDEQUE a;

	a.push_back('A');
	a.push_back('B');
	a.push_back('C');
	a.push_back('D');

	print_contents(a, "a");

	cout << "max_size of a is " << a.max_size() << endl;
	cout << "size of a is " << a.size() << endl;

	a.resize(10, 'X');
	print_contents(a, "a");
	cout << "size of a is " << a.size() << endl;
	a.resize(5);        // resize it to 5
	print_contents(a, "a");
	cout << "size of a is " << a.size() << endl;
	cout << "max_size of a is still " << a.max_size() << endl;

	return 0;
}

void print_contents(CHARDEQUE  deque, char *name){
	CHARDEQUE::iterator pdeque;

	cout << "The contents of " << name << " : ";
	for (pdeque = deque.begin(); pdeque != deque.end(); pdeque++){
		cout << *pdeque << " ";
	}
	cout << endl;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main(void)
{
	std::deque< double > values; // create deque of doubles
	std::ostream_iterator< double > output(cout, " ");

	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);

	cout << "values contains: ";
	// use subscript operator to obtain elements of values
	for (int i = 0; i < values.size(); i++)
		cout << values[i] << ' ';
	cout << endl;

	return 0;
}
#endif