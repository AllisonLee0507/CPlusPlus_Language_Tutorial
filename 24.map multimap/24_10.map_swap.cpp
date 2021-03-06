#if 0
#include <iostream>
#include <string>
#include <map>

using namespace std;

void show(const char *msg, map<string, int> mp);

int main(void)
{
	map<string, int> m, m2;

	m.insert(pair<string, int>("A", 100));
	m.insert(pair<string, int>("G", 300));
	m.insert(pair<string, int>("B", 200));

	// Exchange the contents of m and m2.
	cout << "Exchange m and m2.\n";
	m.swap(m2);
	show("Contents of m: ", m);
	show("Contents of m2: ", m2);

	// Clear m.
	m.clear();
	if (m.empty()) cout << "m is now empty.";

	return 0;
}

// Display the contents of a map<string, int> by using an iterator.
void show(const char *msg, map<string, int> mp) {
	map<string, int>::iterator itr;

	cout << msg << endl;
	for (itr = mp.begin(); itr != mp.end(); ++itr)
		cout << "  " << itr->first << ", " << itr->second << endl;
	cout << endl;
}
#endif
