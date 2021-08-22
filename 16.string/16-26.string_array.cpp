#if 0
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItems = 0;
	inventory[numItems++] = "A";
	inventory[numItems++] = "B";
	inventory[numItems++] = "C";

	for (int i = 0; i < numItems; ++i)
		cout << inventory[i] << endl;

	inventory[0] = "battle axe";
	for (int i = 0; i < numItems; ++i)
		cout << inventory[i] << endl;

	cout << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	if (numItems < MAX_ITEMS)
		inventory[numItems++] = "healing potion";
	else
		cout << "You have too many items and can't carry another.";

	for (int i = 0; i < numItems; ++i)
		cout << inventory[i] << endl;

	return 0;
}
#endif