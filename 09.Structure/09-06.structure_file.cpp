#if 0
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
   
struct status {
	char name[80];
	double balance;
	unsigned long account_num;
};
   
int main()
{
	struct status acc;
	
	strcpy(acc.name, "A");
	acc.balance = 1.23;
	acc.account_num = 34;
	
	ofstream outbal("balance", ios::out | ios::binary);
	
	if(!outbal) {
		cout << "Cannot open file.\n";
		return 1;
	}
	
	outbal.write((char *) &acc, sizeof(struct status));
	outbal.close();
	
	// now, read back;
	ifstream inbal("balance", ios::in | ios::binary);
	
	if(!inbal) {
		cout << "Cannot open file.\n";
		return 1;
	}
	
	inbal.read((char *) &acc, sizeof(struct status));
	
	cout << acc.name << endl;
	cout << "Account # " << acc.account_num;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << endl << "Balance: $" << acc.balance;
	
	inbal.close();
	
	return 0;
}
#endif


