#if 0
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	const char* name_data[] = { "A", "B", "C", "D", "E", "F", "G" };
	const bool girl_data[] = { true, true, false, false, true, true, true };
	const int num_graduates = sizeof(girl_data) / sizeof(girl_data[0]);

	list< pair< string, bool > > graduate;

	while (!graduate.empty())
	{
		cout << graduate.front().first;
		graduate.pop_front();
		if (!graduate.empty())
		{
			cout << " and " << graduate.back().first;
			graduate.pop_back();
		}
		cout << endl;
	}

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	const char* name_data[] = { "A", "B", "C", "D", "E", "F", "G" };
	const bool girl_data[] = { true, true, false, false, true, true, true };
	const int num_graduates = sizeof(girl_data) / sizeof(girl_data[0]);

	list< pair< string, bool > > graduate;

	for (int i = 0; i < num_graduates; ++i)
	if (girl_data[i])
		graduate.push_front(
		make_pair(name_data[i], girl_data[i]));
	else
		graduate.push_back(
		make_pair(name_data[i], girl_data[i]));

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst;
	int i;

	for (i = 0; i<10; i++) lst.push_back(i);

	cout << "List printed forwards:\n";
	list<int>::iterator p = lst.begin();
	while (p != lst.end()) {
		cout << *p << endl;
		p++;
	}

	cout << "List printed backwards:\n";
	p = lst.end();
	while (p != lst.begin()) {
		p--;
		cout << *p << " ";
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lst; // create an empty list
	int i;

	for (i = 0; i<10; i++) lst.push_back(i);

	cout << "List printed forwards:\n";
	list<int>::iterator p = lst.begin();
	while (p != lst.end()) {
		cout << *p << " ";
		p++;
	}
	cout << "\n\n";

	cout << "List printed backwards:\n";
	p = lst.end();
	while (p != lst.begin()) {
		p--; // decrement pointer before using
		cout << *p << " ";
	}

	return 0;
}
#endif
