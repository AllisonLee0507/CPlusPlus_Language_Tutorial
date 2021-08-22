#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	vector<int>::const_iterator iter;

	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	for (iter = scores.begin(); iter != scores.end(); ++iter)
		cout << *iter << endl;

	int score = 3500;
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end())
		cout << "Score found.\n";
	else
		cout << "Score not found.\n";

	return 0;
}
#endif
