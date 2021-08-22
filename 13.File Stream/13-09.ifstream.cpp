#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	ifstream in("test.txt");

	if (!in) {
		cout << "Cannot open input file.\n";
		return 1;
	}

	char str[255];

	while (in) {
		in.getline(str, 255);  // delim defaults to '\n'
		if (in) cout << str << endl;
	}

	in.close();

	return 0;
}
#endif


#if 0
#include <iostream> 
#include <fstream> 
using namespace std;

int main(int argc, char *argv[])
{
	char ch;

	ifstream in("test", ios::in | ios::binary);
	if (!in) {
		cout << "Cannot open file.\n";
		return 1;
	}

	while (in) { // in will be false when eof is reached 
		in.get(ch);
		if (in) cout << ch;
	}

	in.close();

	return 0;
}
#endif



#if 0
#include <iostream> 
#include <fstream> 
using namespace std;

int main()
{
	int n[5] = { 1, 2, 3, 4, 5 };
	register int i;

	ofstream out("test", ios::out | ios::binary);
	if (!out) {
		cout << "Cannot open file.\n";
		return 1;
	}

	out.write((char *)&n, sizeof n);

	out.close();

	for (i = 0; i<5; i++) // clear array 
		n[i] = 0;

	ifstream in("test", ios::in | ios::binary);
	if (!in) {
		cout << "Cannot open file.\n";
		return 1;
	}

	in.read((char *)&n, sizeof n);

	for (i = 0; i<5; i++) // show values read from file 
		cout << n[i] << " ";

	in.close();

	return 0;
}
#endif



#if 0
#include <iostream> 
#include <fstream> 
#include <cstdlib> 
using namespace std;

int main(int argc, char *argv[]) 
{ 
	char ch;

	ifstream in("test.txt", ios::in | ios::binary);
	if (!in) {
		cout << "Cannot open file.\n";
		return 1;
	}

	in.seekg(1, ios::beg);

	while (in.get(ch))
		cout << ch;

	return 0;
}
#endif



#if 0
#include <fstream>
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;


int main() {
	const char* filename = "test.txt";
	std::ifstream inFile(filename);

	// Make sure the file stream is good
	if (!inFile) {
		cout << endl << "Failed to open file " << filename;
		return 1;
	}

	long n = 0;
	while (!inFile.eof()) {
		inFile >> n;
		cout << std::setw(10) << n;
	}
	cout << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
	char ch;

	ifstream in("test.txt", ios::in | ios::binary);

	if (!in) {
		cout << "Cannot open file.";
		return 1;
	}

	in.seekg(2, ios::beg);

	while (in.get(ch))
		cout << ch;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in("test");

	if (!in) {
		cout << "Cannot open file.\n";
		return 1;
	}

	in.ignore(10, ' ');
	char c;
	while (in) {
		in.get(c);
		if (in) cout << c;
	}

	in.close();
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>

void printFileTwice(const char* filename)
{
	// open file
	std::ifstream file(filename);

	// print contents the first time
	std::cout << file.rdbuf();

	// seek to the beginning
	file.seekg(0);

	// print contents the second time
	std::cout << file.rdbuf();
}

int main(int argc, char* argv[])
{
	// print all files passed as a command-line argument twice
	for (int i = 1; i<argc; ++i) {
		printFileTwice(argv[i]);
	}
}
#endif