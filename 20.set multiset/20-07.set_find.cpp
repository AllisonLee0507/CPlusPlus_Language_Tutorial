#if 0
#include <set>
#include <iostream>

using namespace std;
typedef set <int> SETINT;

int main(void)
{
	SETINT setIntegers;

	setIntegers.insert(43);
	setIntegers.insert(78);
	setIntegers.insert(-1);
	setIntegers.insert(124);

	SETINT::const_iterator iElement;

	for (iElement = setIntegers.begin(); iElement != setIntegers.end(); ++iElement)
		cout << *iElement << endl;

	SETINT::iterator iElementFound = setIntegers.find(-1);

	if (iElementFound != setIntegers.end())
		cout << "Element " << *iElementFound << " found!" << endl;
	else
		cout << "Element not found in set!" << endl;

	SETINT::iterator iAnotherFind = setIntegers.find(12345);

	if (iAnotherFind != setIntegers.end())
		cout << "Element " << *iAnotherFind << " found!" << endl;
	else
		cout << "Element 12345 not found in set!" << endl;

	return 0;
}
#endif