#if 0
#include<iostream.h>
#include<fstream.h>

int main(void)
{
	ofstream out("test.txt");
	if (!out)
	{
		cout << "Cannot open output file\n";
		return 1;
	}
	char nums[4] = { 'a', 'b', 'c', 'd' };
	out.write((char *)nums, sizeof(nums));
	out.close();

	ifstream in("test.txt");
	if (!in)
	{
		cout << "Cannot open input file\n";
		return 1;
	}
	in.read((char *)& nums, sizeof(nums));

	for (int i = 0; i<4; i++)
		cout << nums[i] << ' ';
	cout << '\n';
	cout << in.gcount() << "characters read\n";
	in.close();
	return 0;
}
#endif


#if 0
#include<iostream.h>
#include<fstream.h>

int main(void)
{
	ofstream out("test.txt");
	if(! out)
	{
		cout << "Cannot open output file\n";
		return 1;
	}
	char nums[4] = { 'a', 'b', 'c', 'd' };
	out.write((char *)nums, sizeof(nums));
	out.close();

	ifstream in("test.txt");
	if (!in)
	{
		cout << "Cannot open input file\n";
		return 1;
	}
	in.read((char *)& nums, sizeof(nums));

	for (int i = 0; i<4; i++)
		cout << nums[i] << ' ';
	cout << '\n';
	cout << in.gcount() << "characters read\n";
	in.close();
	return 0;
}
#endif



#if 0
#include <fstream>                             
#include <iomanip>

int main(void)
{
	std::ofstream outFile("test.txt");

	for(int i = 0 ; i < 100 ; i++) {
		if (i  5 == 0)
			outFile << std::endl;
		outFile << std::setw(10) << i;
	}

	return 0;
}
#endif



#if 0
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	ofstream out("test.txt");

	if (!out)
	{
		cout << "Cannot open file";
		return 1;
	}
	out.seekp(2, ios::beg);
	out.put('X');
	out.close();
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	double fnum[4] = { 9.5, -3.4, 1.0, 2.1 };
	int i;

	ofstream out("numbers", ios::out | ios::binary);
	if (!out) {
		cout << "Cannot open file.";
		return 1;
	}

	out.write((char *)&fnum, sizeof fnum);

	out.close();

	for (i = 0; i<4; i++) // clear array
		fnum[i] = 0.0;

	ifstream in("numbers", ios::in | ios::binary);
	in.read((char *)&fnum, sizeof fnum);

	// see how many bytes have been read
	cout << in.gcount() << " bytes read\n";

	for (i = 0; i<4; i++) // show values read from file
		cout << fnum[i] << " ";

	in.close();

	return 0;
}
#endif


#if 0
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct MyRecord {
	char name[80];
	double balance;
	unsigned long account_num;
};

int main(void)
{
	struct MyRecord acc;

	strcpy(acc.name, "R");
	acc.balance = 1.3;
	acc.account_num = 34;

	ofstream outbal("balance", ios::out | ios::binary);
	if (!outbal) {
		cout << "Cannot open file.\n";
		return 1;
	}

	outbal.write((char *)&acc, sizeof(struct MyRecord));
	outbal.close();

	ifstream inbal("balance", ios::in | ios::binary);
	if (!inbal) {
		cout << "Cannot open file.\n";
		return 1;
	}

	inbal.read((char *)&acc, sizeof(struct MyRecord));

	cout << acc.name << endl;
	cout << "Account # " << acc.account_num;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << endl << "Balance: $" << acc.balance;

	inbal.close();
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct MyRecord {
	char name[80];
	double balance;
	unsigned long account_num;
};

int main()
{
	struct MyRecord acc;

	strcpy(acc.name, "R");
	acc.balance = 1.3;
	acc.account_num = 34;

	ofstream outbal("balance", ios::out | ios::binary);
	if (!outbal) {
		cout << "Cannot open file.\n";
		return 1;
	}

	outbal.write((char *)&acc, sizeof(struct MyRecord));
	outbal.close();

	ifstream inbal("balance", ios::in | ios::binary);
	if (!inbal) {
		cout << "Cannot open file.\n";
		return 1;
	}

	inbal.read((char *)&acc, sizeof(struct MyRecord));

	cout << acc.name << endl;
	cout << "Account # " << acc.account_num;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << endl << "Balance: $" << acc.balance;

	inbal.close();
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i;
	ofstream out("test.dat", ios::out | ios::binary);

	if (!out) {
		cout << "Cannot open output file.\n";
		return 1;
	}

	// write all characters to disk
	for (i = 0; i<256; i++) out.put((char)i);

	out.close();
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
	char ch;
	char idnum[5];

	idnum[4] = 0;

	ofstream fout("test.dat");

	if (!fout) {
		cout << "Cannot open test.dat for output.\n";
		return 1;
	}

	fout << "A #pending\n, B, #8875\n";

	fout.close();

	if (!fout.good()) {
		cout << "Error creating data file.";
		return 1;
	}
	ifstream fin("test.dat");

	if (!fin) {
		cout << "Cannot open test.dat for input.\n";
		return 1;
	}

	fin.exceptions(ios::badbit | ios::failbit);

	try {
		do {
			fin.ignore(40, '#');

			if (fin.eof()) {
				fin.clear(); // clear eofbit
				break;
			}
			ch = fin.peek();

			if (isdigit(ch)) {
				fin.read((char *)idnum, 4);

				cout << "ID #: " << idnum << endl;

			}
			else {
				cout << "ID not available: ";
				ch = fin.get();
				while (isalpha(ch)) {
					cout << ch;
					ch = fin.get();
				};

				fin.unget();
				cout << endl;
			}
		} while (fin.good());
	}
	catch (ios_base::failure exc) {
		cout << "Error reading data file.\n";
	}

	try {
		fin.close();
	}
	catch (ios_base::failure exc) {
		cout << "Error closing data file.";
		return 1;
	}

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <fstream>
using std::ofstream;

#include <cstdlib> 
using std::exit;

int main()
{
	ofstream outClientFile("clients.dat", ios::out);

	if (!outClientFile)
	{
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	int account = 12;
	char name[80] = "This Is A Test";
	double balance = 123.123;

	outClientFile << account << ' ' << name << ' ' << balance << endl;



	return 0;
}
#endif