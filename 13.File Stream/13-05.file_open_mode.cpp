#if 0
#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
	char buffer[256];

	fstream myfile;
	// open it for input and read in
	myfile.open("test.txt", ios::in);
	myfile.getline(buffer, 100);
	cout << "The file contains   " << buffer << "\n";
	myfile.close();

	return 0;
}
#endif


#if 0
#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
	char buffer[256];

	fstream myfile;
	//open for appending and append
	myfile.open("test.txt", ios::app);
	myfile << " Hey this is another line \n";
	myfile.close();

	return 0;
}
#endif



#if 0
#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
	long start,end;
	ifstream myfile("test.txt", ios::in | ios::binary);

	start = myfile.tellg();
	myfile.seekg(0, ios::end);
	end = myfile.tellg();
	myfile.close();

	cout << "size of " << "test.txt";
	cout << " is " << (end - start) << " bytes.\n";
	return 0;
}
#endif



#if 0
#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
	char buffer[255];

	ofstream fout("text.txt");
	fout << "this is a test\n";
	cout << "Enter text for the file: ";
	cin.ignore(1, '\n');
	cin.getline(buffer, 255);
	fout << buffer << "\n";
	fout.close();

	ifstream fin("text.txt");
	cout << "Here's the contents of the file:\n";
	char ch;
	while (fin.get(ch))
		cout << ch;

	fin.close();
	return 0;
}
#endif



#if 0
#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
	char buffer[255];

	ifstream fin("text.txt");
	if (fin)
	{
		char ch;
		while (fin.get(ch))
			cout << ch;
	}
	fin.close();

	cout << "in append mode...\n";

	ofstream fout("text.txt", ios::app);
	if (!fout)
	{
		cout << "Unable to open for appending.\n";
		return(1);
	}

	cout << "\nEnter text for the file: ";
	cin.ignore(1, '\n');
	cin.getline(buffer, 255);
	fout << buffer << "\n";
	fout.close();

	fin.open("text.txt");
	if (!fin)
	{
		cout << "Unable to open for reading.\n";
		return(1);
	}
	char ch;
	while (fin.get(ch))
		cout << ch;
	fin.close();
	return 0;
}
#endif


#if 0
#include <fstream>
#include <iostream>

using namespace std;

int main(void)
{
	char buffer[255];    

	ofstream fout("text.txt");
	fout << "test\n";
	cout << "Enter text for the file: ";
	cin.ignore(1, '\n');
	cin.getline(buffer, 255);
	fout << buffer << "\n";
	fout.close();

	ifstream fin("text.txt");
	char ch;
	while (fin.get(ch))
		cout << ch;

	fin.close();
	return 0;
}
#endif