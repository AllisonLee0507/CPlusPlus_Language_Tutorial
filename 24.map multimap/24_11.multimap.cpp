#if 0
#include <map>
#include <iostream>

using namespace std;

typedef map <int, string> MAP_INT_STRING;
typedef multimap <int, string> MMAP_INT_STRING;

int main(void)
{
	MMAP_INT_STRING mmapIntToString;

	mmapIntToString.insert(pair <int, string>(1000, "One Thousand"));
	mmapIntToString.insert(MMAP_INT_STRING::value_type(1000, "Thousand"));

	cout << endl << "The multimap contains " << mmapIntToString.size();
	cout << " key-value pairs." << endl;
	cout << "The elements in the multimap are: " << endl;

	return 0;
}
#endif


#if 0
#include <map>
#include <iostream>

using namespace std;

typedef map <int, string> MAP_INT_STRING;
typedef multimap <int, string> MMAP_INT_STRING;

int main(void)
{
	MMAP_INT_STRING mmapIntToString;

	mmapIntToString.insert(MMAP_INT_STRING::value_type(3, "Three"));
	mmapIntToString.insert(MMAP_INT_STRING::value_type(45, "Forty Five"));

	cout << "The number of pairs in the multimap with 1000 as their key: "
		<< mmapIntToString.count(1000) << endl;

	return 0;
}
#endif



#if 0
#include <map>
#include <string>

int main(void)
{
	using namespace std;

	map <int, string> mapIntegersToString;
	multimap <int, string> mmapIntegersToString;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main(void)
{
	const char* word[] = { "A", "B", "C", "D", "E" };
	const char* clue[] = { "a", "b", "c", "d", "e" };

	map<string, string> dictionary1;
	transform(word, word + sizeof(word) / sizeof(word[0]), clue, inserter(dictionary1, dictionary1.end()), make_pair<string, string>);

	typedef multimap<string, string> Dictionary;
	Dictionary dictionary2(dictionary1.begin(), dictionary1.end());
	dictionary2.insert(make_pair("POPS", "Bursts"));
	dictionary2.insert(make_pair("POPS", "Fathers"));
	dictionary2.insert(make_pair("ADAM", "Madam"));

	pair<Dictionary::iterator, Dictionary::iterator> range = dictionary2.equal_range("POPS");
	for (Dictionary::iterator i = range.first; i != range.second; ++i)
		cout << "\nPOPS - " << i->second;

	for (Dictionary::iterator i = dictionary2.begin();
		i != dictionary2.end(); ++i)
		cout << i->first << " - " << i->second << endl;

	return 0;
}
#endif
