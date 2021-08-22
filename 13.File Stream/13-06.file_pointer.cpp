#if 0
#include <iostream>    
#include <fstream>   
#include <stdlib.h>   
using namespace std;
main(int argc, char *argv[])   
{   
	if (argc != 3) {
		cout << "Usage: CHANGE <filename> <byte>\n";
		return 1;
	}

	fstream out(argv[1], ios::in | ios::out);
	if (!out) {
		cout << "Cannot open file";
		return 1;
	}

	out.seekp(atoi(argv[2]), ios::beg);

	out.put('X');
	out.close();

	return 0;
}
#endif


#if 0
#include <iostream>    
#include <fstream>   
#include <stdlib.h>   
using namespace std;
main(int argc, char *argv[])
{
	char ch;

	if (argc != 3) {
		cout << "Usage: NAME <filename> <starting location>\n";
		return 1;
	}

	ifstream in(argv[1]);
	if (!in) {
		cout << "Cannot open file";
		return 1;
	}

	in.seekg(atoi(argv[2]), ios::beg);

	while (in.get(ch))
		cout << ch;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[]){
	if(argc!=4){
		cout << "Usage: change <filename> <byte> <character>" << endl;
		exit(1);
	}
	fstream out(argv[1], ios::in | ios::out | ios::binary);
	if (!out)
	{
		cout << "Cannot open file!";
		exit(1);
	}
	out.seekp(atoi(argv[2]), ios::beg);
	out.put(*argv[3]);
	out.close();
}
#endif



#if 0
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
	ofstream fout("test.out");

	fout << "12345";

	long curPos = fout.tellp();
	if (curPos == 5) {
		cout << "Test passed: Currently at position 5" << endl;
	}
	else {
		cout << "Test failed: Not at position 5" << endl;
	}

	fout.seekp(2, ios_base::beg);
	fout << 0;
	fout.flush();

	ifstream fin("test.out");
	int testVal;
	fin >> testVal;

	if (testVal == 12045) {
		cout << "Test passed: Value is 12045" << endl;
	}
	else {
		cout << "Test failed: Value is not 12045 (it was " << testVal << ")" << endl;
	}
}
#endif



#if 0
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
	ofstream fout("test.out");

	fout << "12345";

	long curPos = fout.tellp();
	if (curPos == 5) {
		cout << "Test passed: Currently at position 5" << endl;
	}
	else {
		cout << "Test failed: Not at position 5" << endl;
	}

	fout.seekp(2, ios_base::beg);
	fout << 0;
	fout.flush();

	ifstream fin("test.out");
	int testVal;
	fin >> testVal;
	if (testVal == 12045) {
		cout << "Test passed: Value is 12045" << endl;
	}
	else {
		cout << "Test failed: Value is not 12045 (it was " << testVal << ")" << endl;
	}
}
#endif


#if 0
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[]){
	if(argc!=4){
		cout << "Usage: change <filename> <byte> <character>" << endl;
		exit(1);
	}
	fstream out(argv[1], ios::in | ios::out | ios::binary);
	if (!out)
	{
		cout << "Cannot open file!";
		exit(1);
	}
	out.seekp(atoi(argv[2]), ios::beg);
	out.put(*argv[3]);
	cout << "Current position is: " << out.tellp() << endl;
	out.close();
}
#endif



#if 0
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	ifstream in("datafile");
	in.unsetf(ios::skipws);
	char ch;
	while (in >> ch) {
		cout << ch;
	}
	cout << '\n';
	in.clear();
	in.seekg(ios::beg);
	in.setf(ios::skipws);
	while (in >> ch) {
		cout << ch;
	}
	cout << '\n';
	return 0;
}
#endif



#if 0
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main() {
	fstream inout("invoice.dat", ios::in | ios::out);

	inout << 1234 << " " << 56.78 << " " << "apples" << '\n';

	cout << inout.tellg() << endl;

	cout << inout.tellp() << endl;

	inout.seekg(ios::beg);

	cout << inout.tellg() << endl;

	cout << inout.tellp() << endl;
	int x;
	double y;
	string z;

	inout >> x >> y;
	inout >> z;
	cout << x << " " << y << " " << z << endl;
	return 0;
}
#endif



#if 0
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
	fstream inout("invoice.dat", ios::in | ios::out);

	inout << 1234 << " " << 56.78 << " " << "apples" << '\n';

	cout << inout.tellg() << endl;

	cout << inout.tellp() << endl;

	inout.seekg(0);

	cout << inout.tellg() << endl;

	cout << inout.tellp() << endl;
	int x = 0;
	double y = 0.0;
	string z = " ";

	inout >> x;
	inout.seekg(8, ios::cur);

	inout >> z;
	cout << x << " " << y << " " << z << endl;
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
	if (argc != 4) {
		cout << "Usage: CHANGE <filename> <character> <char>\n";
		return 1;
	}

	fstream out(argv[1], ios::in | ios::out | ios::binary);
	if (!out) {
		cout << "Cannot open file.";
		return 1;
	}

	out.seekp(atoi(argv[2]), ios::beg);

	out.put(*argv[3]);
	out.close();

	return 0;
}
#endif


#if 0
include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 3) {
		cout << "Usage: Reverse <filename> <num>\n";
		return 1;
	}

	fstream inout(argv[1], ios::in | ios::out | ios::binary);

	if (!inout) {
		cout << "Cannot open input file.\n";
		return 1;
	}

	long e, i, j;
	char c1, c2;
	e = atol(argv[2]);

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
#include <cctype>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "Usage: Display <filename>\n";
		return 1;
	}

	ifstream in(argv[1], ios::in | ios::binary);

	if (!in) {
		cout << "Cannot open input file.\n";
		return 1;
	}

	register int i, j;
	int count = 0;
	char c[16];

	cout.setf(ios::uppercase);
	while (!in.eof()) {
		for (i = 0; i<16 && !in.eof(); i++) {
			in.get(c[i]);
		}
		if (i<16) i--; // get rid of eof

		for (j = 0; j<i; j++)
			cout << setw(3) << hex << (int)c[j];
		for (; j<16; j++) cout << "  ";

		cout << "\t";
		for (j = 0; j<i; j++)
		if (isprint(c[j])) cout << c[j];
		else cout << ".";

		cout << endl;

		count++;
		if (count == 16) {
			count = 0;
			cout << "Press ENTER to continue: ";
			cin.get();
			cout << endl;
		}
	}

	in.close();

	return 0;
}
#endif