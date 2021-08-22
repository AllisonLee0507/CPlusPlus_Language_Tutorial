#if 0
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>
using namespace std;

int main(void)
{
	list<double> vals;
	list<double> divisors;

	for (int i = 10; i<100; i += 10) vals.push_back((double)i);
	for (int i = 1; i<10; i++) divisors.push_back(3.0);

	cout << "Original contents of vals:\n";
	list<double>::iterator p = vals.begin();
	while (p != vals.end()) {
		cout << *p << " ";
		p++;
	}

	cout << endl;

	p = transform(vals.begin(), vals.end(),
		divisors.begin(), vals.begin(),
		divides<double>()); // call function object

	cout << "Divided contents of vals:\n";
	p = vals.begin();
	while (p != vals.end()) {
		cout << *p << " ";
		p++;
	}

	return 0;
}
#endif
