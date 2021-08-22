#if 0
#include <utility>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	pair<string, int> myPair("hello", 5), myOtherPair;

	myOtherPair.first = "hello";
	myOtherPair.second = 6;

	return (0);
}
#endif


#if 0
#include <utility>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	pair<string, int> myPair("hello", 5), myOtherPair;

	return 0;
}
#endif



#if 0
#include <utility>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	pair<string, int> myPair("hello", 5), myOtherPair;

	// assign directly to first and second
	myOtherPair.first = "hello";
	myOtherPair.second = 6;

	// copy construcor
	pair<string, int> myThirdPair(myOtherPair);

	return 0;
}
#endif



#if 0
#include <utility>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char** argv){
	pair<string, int> myPair("hello", 5), myOtherPair;

	myOtherPair.first = "hello";
	myOtherPair.second = 6;

	pair<string, int> myThirdPair(myOtherPair);

	if (myPair < myOtherPair) {
		cout << "myPair is less than myOtherPair\n";
	}
	else {
		cout << "myPair is greater than or equal to myOtherPair\n";
	}

	return 0;
}
#endif



#if 0
#include <utility>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	pair<string, int> myPair("hello", 5), myOtherPair;

	myOtherPair.first = "hello";
	myOtherPair.second = 6;

	pair<string, int> myThirdPair(myOtherPair);

	if (myOtherPair == myThirdPair) {
		cout << "myOtherPair is equal to myThirdPair\n";
	}
	else {
		cout << "myOtherPair is not equal to myThirdPair\n";
	}

	pair<int, int> aPair = make_pair(5, 10);

	return 0;
}
#endif


#if 0
#include <utility>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char** argv){
	pair<string, int> myPair("hello", 5), myOtherPair;

	myOtherPair.first = "hello";
	myOtherPair.second = 6;

	pair<string, int> myThirdPair(myOtherPair);

	pair<int, int> aPair = make_pair(5, 10);

	return (0);
}
#endif



#if 0
#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

void show(const char *msg, map<string, string> mp);

int main(void)
{
	map<string, string> phonemap;

	phonemap["A"] = "444-555-1234";
	phonemap["B"] = "555-555-6576";
	phonemap["C"] = "555-555-9843";

	show("Here is the original map: ", phonemap);

	phonemap["B"] = "555 555-5555";
	cout << "New number: " << phonemap["B"] << endl;

	// Create a pair object that will contain the result of a call to insert().
	pair<map<string, string>::iterator, bool> result;

	// Use insert() to add an entry.
	result = phonemap.insert(pair<string, string>("J", "555-9999"));
	if (result.second) cout << "J added.";
	show("phonemap after adding J: ", phonemap);

	return 0;
}

// Display the contents of a map<string, string> by using an iterator.
void show(const char *msg, map<string, string> mp) {
	map<string, string>::iterator itr;

	cout << msg << endl;

	for (itr = mp.begin(); itr != mp.end(); ++itr)
		cout << " " << itr->first << ": " << itr->second << endl;

	cout << endl;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

void show(const char *msg, map<string, string> mp);

int main(void)
{
	map<string, string> phonemap;

	phonemap["A"] = "444-555-1234";
	phonemap["B"] = "555-555-6576";
	phonemap["C"] = "555-555-9843";

	show("Here is the original map: ", phonemap);
	cout << endl;

	// Create a pair object that will contain the result of a call to insert().
	pair<map<string, string>::iterator, bool> result;

	// Use insert() to add an entry.
	result = phonemap.insert(pair<string, string>("Jay", "555-9999"));
	if (result.second) cout << "Jay added.\n";
	show("phonemap after adding Jay: ", phonemap);

	return 0;
}

// Display the contents of a map<string, string> by using an iterator.
void show(const char *msg, map<string, string> mp) {
	map<string, string>::iterator itr;

	cout << msg << endl;

	for (itr = mp.begin(); itr != mp.end(); ++itr)
		cout << " " << itr->first << ": " << itr->second << endl;

	cout << endl;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <utility>

using namespace std;

typedef pair<int, string> Pair;

inline bool less_than_second(const Pair& b1, const Pair& b2){
	return b1.second < b2.second;
}

int main(void)
{
	const char* names[] = { "A", "B", "C", "D", "E" };
	const int values[] = { 18, 20, 26, 30, 41 };
	const int num_pairs = sizeof(names) / sizeof(names[0]);

	vector<Pair> pair(num_pairs);
	transform(values, values + num_pairs, names, pair.begin(), make_pair<int, string>);

	if (pair[1].first > pair[3].first)
		cout << pair[1].second << " > " << pair[3].second << endl;
	else if (pair[1].first == pair[3].first)
		cout << pair[1].second << " == " << pair[3].second << endl;
	else
		cout << pair[1].second << " < " << pair[3].second << endl;

	sort(pair.begin(), pair.end());

	vector<Pair>::const_reverse_iterator pair_rend = pair.rend();

	for (vector<Pair>::const_reverse_iterator i = pair.rbegin(); i != pair_rend; ++i)
		cout << i->first << " - " << i->second;

	sort(pair.begin(), pair.end(), less_than_second);

	vector<Pair>::const_iterator pair_end = pair.end();
	for (vector<Pair>::const_iterator i = pair.begin();
		i != pair_end; ++i)
		cout << i->second << " - $" << i->first << " values\n";

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <utility>

using namespace std;

typedef pair<int, string> Pair;

inline bool less_than_second(const Pair& b1, const Pair& b2){
	return b1.second < b2.second;
}

int main(void)
{
	const char* names[] = { "A", "B", "C", "D", "E" };
	const int values[] = { 18, 20, 26, 30, 41 };
	const int num_pairs = sizeof(names) / sizeof(names[0]);

	vector<Pair> pair(num_pairs);
	transform(values, values + num_pairs, names, pair.begin(), make_pair<int, string>);

	sort(pair.begin(), pair.end());

	vector<Pair>::const_reverse_iterator pair_rend = pair.rend();

	for (vector<Pair>::const_reverse_iterator i = pair.rbegin(); i != pair_rend; ++i)
		cout << i->first << " - " << i->second;

	sort(pair.begin(), pair.end(), less_than_second);

	vector<Pair>::const_iterator pair_end = pair.end();
	for (vector<Pair>::const_iterator i = pair.begin();
		i != pair_end; ++i)
		cout << i->second << " - $" << i->first << " values\n";

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <utility>

using namespace std;

typedef pair<int, string> Pair;

inline bool less_than_second(const Pair& b1, const Pair& b2){
	return b1.second < b2.second;
}

int main(void)
{
	const char* names[] = { "A", "B", "C", "D", "E" };
	const int values[] = { 18, 20, 26, 30, 41 };
	const int num_pairs = sizeof(names) / sizeof(names[0]);

	vector<Pair> pair(num_pairs);
	transform(values, values + num_pairs, names, pair.begin(), make_pair<int, string>);

	sort(pair.begin(), pair.end());

	sort(pair.begin(), pair.end(), less_than_second);

	vector<Pair>::const_iterator pair_end = pair.end();
	for (vector<Pair>::const_iterator i = pair.begin();
		i != pair_end; ++i)
		cout << i->second << " - $" << i->first << " values\n";

	return 0;
}
#endif