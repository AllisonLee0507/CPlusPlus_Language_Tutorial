#if 0
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int> lst;
	list<int>::iterator p, endp;

	for (int i = 1; i < 20; i++) lst.push_back(i);

	cout << "Original sequence:\n";
	p = lst.begin();
	while (p != lst.end()) {
		cout << *p << " ";
		p++;
	}
	cout << endl;

	endp = remove_if(lst.begin(), lst.end(),
		bind2nd(greater<int>(), 8));

	cout << "Resulting sequence:\n";
	p = lst.begin();
	while (p != endp) {
		cout << *p << " ";
		p++;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <functional>
using namespace std;

int main(void)
{
	int a[] = { 0, 0, 0, 1, 1, 1, 2, 2, 2 };

	int final_count = count_if(&a[0], &a[9], bind2nd(not_equal_to<int>(), 1));

	cout << final_count << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
#include <functional>
#include <algorithm>

using namespace std;

int main(void)
{
	list<int> list1;
	list<int>::iterator res_itr;

	for (unsigned i = 1; i < 20; ++i) list1.push_back(i);

	res_itr = remove_if(list1.begin(), list1.end(), bind2nd(greater<int>(), 10));

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
using namespace std;

void print(int elem)
{
	cout << elem << " ";
}

int main(int argc, char** argv)
{
	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);
	myVector.push_back(6);


	replace_if(myVector.begin(), myVector.end(), bind2nd(less<int>(), 0), 0);
	replace_if(myVector.begin(), myVector.end(), bind2nd(greater<int>(), 100), 100);
	for_each(myVector.begin(), myVector.end(), &print);
	cout << endl;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
using namespace std;

void print(int elem)
{
	cout << elem << " ";
}

int main(int argc, char** argv)
{
	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);
	myVector.push_back(6);


	replace_if(myVector.begin(), myVector.end(), bind2nd(greater<int>(), 100), 100);
	for_each(myVector.begin(), myVector.end(), &print);
	cout << endl;

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

void print(int elem)
{
	cout << elem << " ";
}

int main(int argc, char** argv)
{
	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);


	for_each(myVector.begin(), myVector.end(), &print);
	transform(myVector.begin(), myVector.end(), myVector.begin(), bind2nd(plus<int>(), 100));

	for_each(myVector.begin(), myVector.end(), &print);
	cout << endl;
	
	return 0;
}
#endif
