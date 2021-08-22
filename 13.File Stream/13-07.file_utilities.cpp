#if 0
#include <iostream.h>
#include <fstream.H>

main(void)
{
	char ch;

	ifstream f1("test.txt");
	ofstream f2("text1.txt");

	if (!f1)
		cerr << "Can't open IN file\n";
	if (!f2)
		cerr << "Can't open OUT file\n";

	while (f1 && f1.get(ch))
		f2.put(ch);
	return (0);
}
#endif


#if 0
#include <iostream>
#include <fstream>
using namespace std;

void checkstatus(ifstream &in);

int main(int argc, char *argv[])
{
	ifstream in("test.txt");

	char c;
	while (in.get(c)) {
		checkstatus(in);
	}

	checkstatus(in);  // check final status
	in.close();
	return 0;
}

void checkstatus(ifstream &in)
{
	ios::iostate i;

	i = in.rdstate();

	if (i & ios::eofbit)
		cout << "EOF encountered\n";
	else if (i & ios::failbit)
		cout << "Non-Fatal I/O error\n";
	else if (i & ios::badbit)
		cout << "Fatal I/O error\n";
}
#endif



#if 0
#include <iostream.h>
#include <fstream.h>

const char * filename = "test.txt";

int main () {
	long l,m;
	ifstream file(filename, ios::in | ios::binary);

	l = file.tellg();

	file.seekg(0, ios::end);
	m = file.tellg();

	file.close();

	cout << "size of " << filename;

	cout << " is " << (m - l) << " bytes.\n";

	return 0;
}
#endif



#if 0
#include <iostream>  
#include <fstream>  
using namespace std;

int main(int argc, char *argv[])
{  
	register int i;  
	int numread;

	unsigned char buf1[1024], buf2[1024];

	ifstream f1("file1", ios::in | ios::binary);
	if (!f1) {
		cout << "Cannot open first file.\n";
		return 1;
	}
	ifstream f2("file2", ios::in | ios::binary);
	if (!f2) {
		cout << "Cannot open second file.\n";
		return 1;
	}

	do {
		f1.read((char *)buf1, sizeof buf1);
		f2.read((char *)buf2, sizeof buf2);

		if (f1.gcount() != f2.gcount()) {
			cout << "Files are of differing sizes.\n";
			f1.close();
			f2.close();
			return 0;
		}

		for (i = 0; i<f1.gcount(); i++) {
			if (buf1[i] != buf2[i]) {
				cout << "Files differ.\n";
				f1.close();
				f2.close();
				return 0;
			}
		}

	} while (!f1.eof() && !f2.eof());

	cout << "Files are the same.\n";

	f1.close();
	f2.close();

	return 0;
}

#endif



#if 0
#include <iostream>
#include <ctime>
#include <sys/types.h>
#include <sys/stat.h>
#include <cerrno>
#include <cstring>

int main(int argc, char** argv)
{
	struct stat fileInfo;

	if (stat("test.txt", &fileInfo) != 0) {  // Use stat( ) to get the info
		std::cerr << "Error: " << strerror(errno) << '\n';
		return(EXIT_FAILURE);
	}

	std::cout << "Type:         : ";
	if ((fileInfo.st_mode & S_IFMT) == S_IFDIR) { // From sys/types.h
		std::cout << "Directory\n";
	}
	else {
		std::cout << "File\n";
	}

	std::cout << "Size          : " <<
		fileInfo.st_size << '\n';               // Size in bytes
	std::cout << "Device        : " <<
		(char)(fileInfo.st_dev + 'A') << '\n';  // Device number
	std::cout << "Created       : " <<
		std::ctime(&fileInfo.st_ctime);         // Creation time
	std::cout << "Modified      : " <<
		std::ctime(&fileInfo.st_mtime);         // Last mod time
}
#endif


#if 0
#include <iterator>
#include <algorithm>
#include <fstream>
#include <iostream>

int countLines (std::istream& in);

int main(int argc, char* argv[])
{
	int count;

	if (argc == 1) {
		// no argument => count lines of standard input
		count = countLines(std::cin);
	}
	else {
		// count number of lines of all files passed as argument
		std::ifstream in;
		count = 0;
		for (int i = 1; i<argc; ++i) {
			in.open(argv[i]);
			if (!in) {
				std::cerr << "failed to open " << argv[1] << "\n";
			}
			else {
				count += countLines(in);
				in.close();
			}
		}
	}
	std::cout << count << std::endl;
}

int countLines(std::istream& in)
{
	return std::count(std::istreambuf_iterator<char>(in),
		std::istreambuf_iterator<char>(),
		'\n');
}
#endif



#if 0
#include <iostream>
#include <fstream>                                                     
#include <cstdlib>
using namespace std;

void print_error(const char*, const char* = " ");                      

int main(int argc, char* argv[])
{
	if (3 != argc)
		print_error("usage: copy source dest");

	ifstream in(argv[1], ios::binary);
	if (!in)
		print_error("can't open", argv[1]);

	ofstream out(argv[2], ios::binary);
	if (!out)
		print_error("can't open", argv[2]);

	char ch;
	while (in.get(ch))
		out.put(ch);
	if (!in.eof())
		print_error("something strange happened");
	return 0;
}
void print_error(const char* p, const char* p2) {
	cerr << p << ' ' << p2 << '\n';
	exit(1);
}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	bool equal = true;
	bool ferr = false;

	unsigned char buf1[1024], buf2[1024];

	if (argc != 3) {
		cout << "Usage: compfiles <file1> <file2>\n";
		return 1;
	}

	ifstream f1(argv[1], ios::in | ios::binary);
	if (!f1) {
		cout << "Cannot open " << argv[1] << endl;
		return 1;
	}

	ifstream f2(argv[2], ios::in | ios::binary);
	if (!f2) {
		cout << "Cannot open " << argv[2] << endl;
		f1.close();
		if (!f1.good())
			cout << "Error closing " << argv[1] << endl;
		return 1;
	}

	do {
		f1.read((char *)buf1, sizeof buf1);
		f2.read((char *)buf2, sizeof buf2);

		if (!f1.eof() && !f1.good()) {
			cout << "Error reading " << argv[1] << endl;
			ferr = true;
			break;
		}
		if (!f2.eof() && !f2.good()) {
			cout << "Error reading " << argv[2] << endl;
			ferr = true;
			break;
		}

		if (f1.gcount() != f2.gcount()) {
			cout << "Files are different lengths.\n";
			equal = false;
			break;
		}

		for (int i = 0; i < f1.gcount(); ++i)
		if (buf1[i] != buf2[i]) {
			cout << "Files differ.\n";
			equal = false;
			break;
		}

	} while (!f1.eof() && !f2.eof() && equal);

	if (!ferr && equal) cout << "Files are the same.\n";

	f1.clear();
	f2.clear();

	f1.close();
	f2.close();

	if (!f1.good() || !f2.good()) {
		cout << "Error closing files.\n";
		return 1;
	}

	return 0;
}

#endif
