#if 0
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(void)
{
	vector<double> v(3, 10.0);
	list<double> l(3, 10.0);

	cout << "Vector empty? " << boolalpha << v.empty()
		<< "\nElements in vector: " << v.size()
		<< "\nMaximum elements vector can hold: " << v.max_size()

		<< "\n\nList empty? " << l.empty()
		<< "\nElements in list: " << l.size()
		<< "\nMaximum elements list can hold: " << l.max_size();

	return 0;
}
#endif
