#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	char ch;

	ifstream in("test.txt", ios::in | ios::binary);
	if (!in) {
		cout << "Cannot open file.";
		return 1;
	}

	while (in) { // in will be false when eof is reached
		in.get(ch);
		if (in) cout << ch;
	}

	return 0;
}
#endif


#if 0
#include <iostream.h>
#include <fstream.h>

int main() {
	char * buffer;
	long size;
	ifstream file ("example.dat", ios::in|ios::binary|ios::ate);
	size = file.tellg();
	file.seekg(0, ios::beg);
	buffer = new char[size];
	file.read(buffer, size);
	file.close();

	cout << "the complete file is in a buffer";

	delete[] buffer;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
	char ch;

	ifstream in("test.txt", ios::in | ios::binary);
	if (!in){
		cout << "Cannot open file.";
		return 1;
	}
	while (in){
		in.get(ch);
		cout << ch;
	}
}
#endif



#if 0
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]){

	ifstream in("text.txt", ios::in | ios::binary);
	if (!in){
		cout << "Cannot open input file." << endl;
		exit(1);
	}

	int i, j;
	int count = 0;
	char c[16];

	cout.setf(ios::uppercase);
	while (!in.eof()){
		for (i = 0; i<16 && !in.eof(); i++)
			in.get(c[i]);
		if (i<16)
			i--;
		for (j = 0; j < i; j++)
			cout << setw(3) << hex << (int)c[j];
		for (; j < 16; j++)
			cout << "  ";

		for (j = 0; j < i; j++)
		if (isprint(c[j]))
			cout << c[j];
		else
			cout << ".";
		cout << endl;
		count++;
		if (count == 16){
			count = 0;
			cout << "Press ENTER to continue: ";
			cin.get();
			cout << endl;
		}
	}
	in.close();
}
#endif



#if 0
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct inventory {
	char item[20];
	int quantity;
	double cost;
};

int main(int argc, char *argv[])
{
	inventory entry;
	long record_num = 2;

	ifstream fInvDB("InvDat.dat", ios::in | ios::binary);

	if (!fInvDB) {
		cout << "Cannot open file.\n";
		return 1;
	}

	fInvDB.seekg(sizeof(inventory)* record_num, ios::beg);
	fInvDB.read((char *)&entry, sizeof(inventory));
	fInvDB.close();
	if (!fInvDB.good()) {
		cout << "A file error occurred.\n";
		return 1;
	}
}
#endif


#if 0
#include <iostream>
#include <fstream>

using namespace std;

struct inventory {
	char item[20];
	int quantity;
	double cost;
};

int main()
{
	ifstream fin("InvDat.dat", ios::in | ios::binary);

	if (!fin) {
		cout << "Cannot open file.\n";
		return 1;
	}
	inventory inv[3];

	for (int i = 0; i<3; i++)
		fin.read((char *)&inv[i], sizeof(inventory));

	fin.close();

	if (!fin.good()) {
		cout << "A file error occurred.\n";
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		cout << inv[i].item << "\n";
		cout << " Quantity on hand: " << inv[i].quantity;
		cout << "\n Cost: " << inv[i].cost << "\n\n";
	}

	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct inventory {
	char item[20];
	int quantity;
	double cost;
};

int main()
{
	ofstream fout("InvDat.dat", ios::out | ios::binary);

	if (!fout) {
		cout << "Cannot open file.\n";
		return 1;
	}

	inventory inv[3];

	strcpy(inv[0].item, "A");
	inv[0].quantity = 3;
	inv[0].cost = 9.99;

	strcpy(inv[1].item, "B");
	inv[1].quantity = 12;
	inv[1].cost = 7.85;

	strcpy(inv[2].item, "C");
	inv[2].quantity = 19;
	inv[2].cost = 2.75;

	for (int i = 0; i<3; i++)
		fout.write((const char *)&inv[i], sizeof(inventory));

	fout.close();

	if (!fout.good()) {
		cout << "A file error occurred.";
		return 1;
	}

	return 0;
}
#endif



#if 0
#include <iostream>
using std::cerr;
using std::endl;
using std::ios;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit;

#include <string>
using std::string;

class Account
{
public:
	Account(int accountNumberValue, string lastNameValue, string firstNameValue, double balanceValue)
	{
		setAccountNumber(accountNumberValue);
		setLastName(lastNameValue);
		setFirstName(firstNameValue);
		setBalance(balanceValue);
	}

	int getAccountNumber() const
	{
		return accountNumber;
	}
	void setAccountNumber(int accountNumberValue)
	{
		accountNumber = accountNumberValue; // should validate
	}
	string getLastName() const
	{
		return lastName;
	}
	void setLastName(string lastNameString)
	{
		const char *lastNameValue = lastNameString.data();
		strncpy(lastName, lastNameValue, 5);
		lastName[5] = '\0';
	}

	string getFirstName() const
	{
		return firstName;
	}

	void setFirstName(string firstNameString)
	{
		const char *firstNameValue = firstNameString.data();
		strncpy(firstName, firstNameValue, 5);
		firstName[5] = '\0';
	}
	double getBalance() const
	{
		return balance;
	}
	void setBalance(double balanceValue)
	{
		balance = balanceValue;
	}

private:
	int accountNumber;
	char lastName[15];
	char firstName[10];
	double balance;
};

int main()
{
	ofstream outCredit("credit.dat", ios::binary);

	if (!outCredit)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	}

	Account blankClient(1, "AAAAA", "BBBBB", 1.2);

	// output 100 blank records to file
	for (int i = 0; i < 100; i++)
		outCredit.write(reinterpret_cast< const char * >(&blankClient),
		sizeof(Account));

	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outFile("FileWrite.out");

	if (outFile.fail()) {
		cerr << "Unable to open file for writing." << endl;
		exit(1);
	}

	outFile << "Hello!" << endl;

	outFile.close();

	ofstream appendFile("FileWrite.out", ios_base::app);

	if (appendFile.fail()) {
		cerr << "Unable to open file for writing." << endl;
		exit(1);
	}

	appendFile << "Append!" << endl;

	appendFile.close();
}
#endif


#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	char ch;

	if (argc != 2) {
		cout << "Usage: PR <filename>\n";
		return 1;
	}

	ifstream in(argv[1], ios::in | ios::binary);
	if (!in) {
		cout << "Cannot open file.";
		return 1;
	}

	while (in) { // in will be false when eof is reached
		in.get(ch);
		if (in) cout << ch;
	}

	return 0;
}
#endif