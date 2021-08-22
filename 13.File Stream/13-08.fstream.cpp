#if 0
#include <fstream>
#include <iostream>
using namespace std;

int main () 
{
	char buffer[256];

	// open it for output then write to it
	fstream myfile;
	myfile.open("test.txt", ios::out | ios::trunc);

	if (myfile.is_open())   {
		myfile << "This outputting a line.\n";
		myfile.close();
	}

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

	fstream inout("test.txt", ios::in | ios::out | ios::binary);

	if (!inout) {
		cout << "Cannot open input file.\n";
		return 1;
	}

	long e, i, j;
	char c1, c2;
	e = 5;

	for (i = 0, j = e; i<j; i++, j--) {
		inout.seekg(i, ios::beg);
		inout.get(c1);
		inout.seekg(j, ios::beg);
		inout.get(c2);

		inout.seekp(i, ios::beg);
		inout.put(c2);
		inout.seekp(j, ios::beg);
		inout.put(c1);
	}

	inout.close();
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char ch;

	fstream finout("test.dat");

	if (!finout) {
		cout << "Cannot open file for output.\n";
		return 1;
	}

	for (int i = 0; i < 3; ++i) finout.put('X');

	if (!finout.good()) {
		cout << "Error occurred while writing to the file.\n";
		return 1;
	}

	finout.flush();
	cout << "Here are the next ten characters: ";
	for (int i = 0; i < 10; ++i) {
		finout.get(ch);
		cout << ch;
	}
	cout << endl;

	if (!finout.good()) {
		cout << "Error occurred while reading from the file.\n";
		return 1;
	}

	finout.close();

	if (!finout.good()) {
		cout << "Error occurred while closing the file.\n";
		return 1;
	}

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

	fstream out("test.txt", ios::in | ios::out | ios::binary);
	if (!out) {
		cout << "Cannot open file.";
		return 1;
	}

	out.seekp(12, ios::beg);

	out.put('a');
	out.close();

	return 0;
}
#endif
