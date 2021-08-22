#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
#include <list>
#include <deque>
#include <vector>
using namespace std;

int main(void)
{
	list<string> driver_list;
	vector<string> vec;
	deque<string> deq;

	driver_list.insert(driver_list.end(), "AAA");
	driver_list.insert(driver_list.end(), "BBBB");
	driver_list.insert(driver_list.end(), "CCCCC");

	deq.insert(deq.end(), "AAA");
	deq.insert(deq.end(), "DDDDDD");

	cout << (equal(deq.begin(), deq.end(), driver_list.begin()));

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
#include <list>
#include <deque>
#include <vector>
using namespace std;

int main(void)
{
	list<string> driver_list;
	vector<string> vec;
	deque<string> deq;

	driver_list.insert(driver_list.end(), "AAA");
	driver_list.insert(driver_list.end(), "BBBB");
	driver_list.insert(driver_list.end(), "CCCCC");

	vec.insert(vec.end(), "AAA");
	vec.insert(vec.end(), "BBBB");
	vec.insert(vec.end(), "CCCCC");
	vec.insert(vec.end(), "DDDDDD");

	cout << (equal(driver_list.begin(), driver_list.end(), vec.begin()));

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main(void)
{
	int a1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2[10] = { 1, 2, 3, 4, 9, 6, 7, 8, 9, 10 };
	std::vector< int > v1(a1, a1 + 10);
	std::vector< int > v2(a1, a1 + 10);
	std::vector< int > v3(a2, a2 + 10);
	std::ostream_iterator< int > output(cout, " ");

	cout << "Vector v1 contains: ";
	std::copy(v1.begin(), v1.end(), output);
	cout << "\nVector v2 contains: ";
	std::copy(v2.begin(), v2.end(), output);
	cout << "\nVector v3 contains: ";
	std::copy(v3.begin(), v3.end(), output);

	// compare vectors v1 and v2 for equality
	bool result = std::equal(v1.begin(), v1.end(), v2.begin());
	cout << "\n\nVector v1 " << (result ? "is" : "is not")
		<< " equal to vector v2.\n";

	return 0;
}
#endif
