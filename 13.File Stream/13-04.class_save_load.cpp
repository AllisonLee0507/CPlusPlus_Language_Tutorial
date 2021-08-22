#if 0
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;

#include <fstream>
using std::fstream;

#include <cstdlib>
using std::exit; // exit function prototype

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


int main(void)
{
	fstream outCredit("credit.dat", ios::in | ios::out | ios::binary);

	// exit program if fstream cannot open file
	if (!outCredit)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	} // end if

	Account client(1, "AAAAA", "BBBBB", 1.2);

	// seek position in file of user-specified record
	outCredit.seekp((client.getAccountNumber() - 1) * sizeof(Account));

	// write user-specified information in file
	outCredit.write(reinterpret_cast< const char * >(&client), sizeof(Account));

	return 0;
}
#endif


#if 0
#include <fstream>
#include <iostream>
using namespace std;
class Animal
{
public:
	Animal(int weight, long days):itsWeight(weight),itsNumberDaysAlive(days){}
	~Animal(){}

	int GetWeight()const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }

	long GetDaysAlive()const { return  itsNumberDaysAlive; }
	void SetDaysAlive(long days) { itsNumberDaysAlive = days; }

private:
	int itsWeight;
	long itsNumberDaysAlive;
};

int main(void)
{
	ofstream fout("text.txt", ios::binary);
	if (!fout)
	{
		cout << "Unable to open for writing.\n";
		return(1);
	}

	Animal Bear(50, 100);
	fout.write((char*)&Bear, sizeof Bear);

	fout.close();

	ifstream fin("text.txt", ios::binary);
	if (!fin)
	{
		cout << "Unable to open for reading.\n";
		return(1);
	}

	Animal BearTwo(1, 1);

	cout << "BearTwo weight: " << BearTwo.GetWeight() << endl;
	cout << "BearTwo days: " << BearTwo.GetDaysAlive() << endl;

	fin.read((char*)&BearTwo, sizeof BearTwo);

	cout << "BearTwo weight: " << BearTwo.GetWeight() << endl;
	cout << "BearTwo days: " << BearTwo.GetDaysAlive() << endl;
	fin.close();
	return 0;
}
#endif



#if 0
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

#include <string>
using std::string;

#include <iomanip>
using std::setprecision;
using std::setw;

#include <fstream>
using std::ifstream;
using std::ostream;

#include <cstdlib>
using std::exit; // exit function prototype

class Account
{
public:
	Account()
	{
	}

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


void outputLine(ostream&, const Account &); // prototype


int main(void)
{
	ifstream inCredit("credit.dat", ios::in);

	if (!inCredit)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	} // end if

	Account client; // create record

	inCredit.read(reinterpret_cast< char * >(&client), sizeof(Account));

	while (inCredit && !inCredit.eof())
	{
		if (client.getAccountNumber() != 0)
			outputLine(cout, client);

		inCredit.read(reinterpret_cast< char * >(&client), sizeof(Account));
	}

	return 0;
}
void outputLine(ostream &output, const Account &record)
{
	output << left << setw(10) << record.getAccountNumber()
		<< setw(16) << record.getLastName()
		<< setw(11) << record.getFirstName()
		<< setw(10) << setprecision(2) << right << fixed
		<< showpoint << record.getBalance() << endl;
}
#endif



#if 0
#include <fstream>                
#include <iostream>  
using namespace std;

class person{
protected:  
	char name[80];              
	short age;
public:
	void showData(){
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

int main(void)
{
	person pers;
	ifstream infile("PERSON.DAT", ios::binary);

	infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	pers.showData();
	return 0;
}
#endif



#if 0
#include <fstream>
#include <iostream>  
using namespace std;

class person      
{  
protected:
	char name[80];
	short age;
public:
	void getData(){
		cout << "Enter name: "; cin >> name;
		cout << "Enter age: "; cin >> age;
	}
};

int main(void)
{
	person pers;
	pers.getData();

	ofstream outfile("PERSON.DAT", ios::binary);
	outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));
	return 0;
}
#endif


#if 0
#include <fstream>
#include <iostream>  
using namespace std;

class person{
protected:  
	char name[80];
	int age;
public:
	void getData(){
		cout << "\n   Enter name: "; cin >> name;
		cout << "   Enter age: "; cin >> age;
	}
	void showData(){
		cout << "\n   Name: " << name;
		cout << "\n   Age: " << age;
	}
};

int main(void)
{
	char ch;
	person pers;
	fstream file;

	file.open("GROUP.DAT", ios::app | ios::out | ios::in | ios::binary);
	do {
		cout << "\nEnter person's data:";
		pers.getData();

		file.write(reinterpret_cast<char*>(&pers), sizeof(pers));
		cout << "Enter another person (y/n)? ";
		cin >> ch;
	} while (ch == 'y');
	file.seekg(0);

	file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	while (!file.eof()){
		cout << "\nPerson:";
		pers.showData();
		file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	}
	cout << endl;
	return 0;
}
#endif
