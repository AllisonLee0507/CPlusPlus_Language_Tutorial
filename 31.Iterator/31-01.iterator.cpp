#if 0
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(void)
{
	list<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	list<int>::iterator pos = coll.begin();

	// print actual element
	cout << *pos << endl;

	// step three elements forward
	advance(pos, 3);

	// print actual element
	cout << *pos << endl;

	// step one element backward
	advance(pos, -1);

	// print actual element
	cout << *pos << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	map<char, int> m;

	// put pairs into map
	for (int i = 0; i<26; i++) {
		m.insert(pair<char, int>('A' + i, 65 + i));
	}

	char ch = 'G';

	map<char, int>::iterator p;

	// find value given key
	p = m.find(ch);
	if (p != m.end())
		cout << "Its ASCII value is  " << p->second;
	else
		cout << "Key not in map.\n";

	return 0;
}
#endif



#if 0
#include <vector>
#include <iterator>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

template <typename IteratorType>
void iteratorTraitsTest(IteratorType it)
{
	typename std::iterator_traits<IteratorType>::value_type temp;
	temp = *it;
	cout << temp << endl;
}

int main(int argc, char** argv)
{
	vector<int> v;
	v.push_back(5);
	iteratorTraitsTest(v.begin());

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> coll;

	// insert elements from 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// find position of element with value 5
	vector<int>::iterator pos;
	pos = find(coll.begin(), coll.end(),
		5);

	// print value to which iterator pos refers
	cout << "pos:  " << *pos << endl;

	// convert iterator to reverse iterator rpos
	vector<int>::reverse_iterator rpos(pos);

	// print value to which reverse iterator rpos refers
	cout << "rpos: " << *rpos << endl;

	return 0;
}
#endif
