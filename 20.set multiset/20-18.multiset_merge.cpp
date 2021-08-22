#if 0
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const int num_years = 5;
	const char* d[num_years] = { "A", "B", "C", "D", "E" };
	const char* d2[num_years] = { "a", "b", "c", "d", "e" };
	const char* d3[num_years] = { "1", "2", "3", "4", "5" };

	multiset<string> s1(d, d + num_years);
	multiset<string> s2(d2, d2 + num_years);
	multiset<string> s3(d3, d3 + num_years);

	print(s1);
	print(s2);
	print(s3);

	vector<string> winner;
	merge(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(winner));

	return 0;
}
#endif
