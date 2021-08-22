#if 0
#include <algorithm>
#include <functional>
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	vector<int> vectorOne, vectorTwo;
	vectorOne.push_back(1);
	vectorOne.push_back(2);
	vectorOne.push_back(3);

	back_insert_iterator<vector<int> > inserter(vectorTwo);
	remove_copy_if(vectorOne.begin(), vectorOne.end(), inserter, bind2nd(equal_to<int>(), 100));

	copy(vectorTwo.begin(), vectorTwo.end(), ostream_iterator<int>(cout, " "));

	return 0;
}
#endif
