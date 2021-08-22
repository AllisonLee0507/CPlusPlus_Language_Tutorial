#if 0
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	string s("helio");
	string s2("hello");

	vector<char> vector1(s.begin(), s.end());
	vector<char> vector2(s.begin(), s.end());

	// Show that vector1 is lexicographically less than vector2:
	bool result = lexicographical_compare(vector1.begin(), vector1.end(), vector2.begin(), vector2.end());

	cout << result;
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
	char c1[10] = "HELLO";
	char c2[10] = "BYE BYE";

	// perform lexicographical comparison of c1 and c2
	bool result = std::lexicographical_compare(c1, c1 + 10, c2, c2 + 10);
	cout << c1 << (result ? " is less than " :
		" is greater than or equal to ") << c2 << endl;

	return 0;
}
#endif
