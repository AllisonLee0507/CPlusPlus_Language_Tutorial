#if 0
#include<iostream.h>
ostream & setthex(ostream & stream)
{
	stream.setf(ios::hex | ios::uppercase | ios::showbase);
	return stream;
}
ostream & reset(ostream & stream)
{
	stream.unsetf(ios::hex | ios::uppercase | ios::showbase);
	return stream;
}
int main(void)
{
	cout << setthex << 200 << '\n';
	cout << reset << 200 << '\n';
	return 0;
}
#endif


#if 0
#include <iostream>
#include <streambuf>
#include <cstdio>

// for write():
#ifdef _MSC_VER
# include <io.h>
#else
# include <unistd.h>
#endif

class fdoutbuf : public std::streambuf {
protected:
	int fd;    // file descriptor
public:
	// constructor
	fdoutbuf(int _fd) : fd(_fd) {
	}
protected:
	// write one character
	virtual int_type overflow(int_type c) {
		if (c != EOF) {
			char z = c;
			if (write(fd, &z, 1) != 1) {
				return EOF;
			}
		}
		return c;
	}
	// write multiple characters
	virtual
		std::streamsize xsputn(const char* s,
		std::streamsize num) {
			return write(fd, s, num);
		}
};

class fdostream : public std::ostream {
protected:
	fdoutbuf buf;
public:
	fdostream(int fd) : std::ostream(0), buf(fd) {
		rdbuf(&buf);
	}
};


int main(void)
{
	fdostream out(1);    // stream with buffer writing to file descriptor 1

	out << "31 hexadecimal: " << std::hex << 31 << std::endl;
}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	// stream for hexadecimal standard output
	ostream hexout(cout.rdbuf());
	hexout.setf(ios::hex, ios::basefield);
	hexout.setf(ios::showbase);

	// switch between decimal and hexadecimal output
	hexout << "hexout: " << 177 << " ";
	cout << "cout: " << 177 << " ";
	hexout << "hexout: " << -49 << " ";
	cout << "cout: " << -49 << " ";
	hexout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	// stream for hexadecimal standard output
	ostream hexout(cout.rdbuf());
	hexout.setf(ios::hex, ios::basefield);
	hexout.setf(ios::showbase);

	// switch between decimal and hexadecimal output
	hexout << "hexout: " << 177 << " ";
	cout << "cout: " << 177 << " ";
	hexout << "hexout: " << -49 << " ";
	cout << "cout: " << -49 << " ";
	hexout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>

void hexMultiplicationTable(std::streambuf* buffer, int num)
{
	std::ostream hexout(buffer);
	hexout << std::hex << std::showbase;

	for (int i = 1; i <= num; ++i) {
		for (int j = 1; j <= 10; ++j) {
			hexout << i*j << ' ';
		}
		hexout << std::endl;
	}

}   // does NOT close buffer

int main(void)
{
	using namespace std;
	int num = 5;

	cout << "We print " << num
		<< " lines hexadecimal" << endl;

	hexMultiplicationTable(cout.rdbuf(), num);

	cout << "That was the output of " << num
		<< " hexadecimal lines " << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <fstream>
using namespace std;

void redirect(ostream&);

int main(void)
{
	cout << "the first row" << endl;

	redirect(cout);

	cout << "the last row" << endl;

	return 0;
}

void redirect(ostream& strm)
{
	ofstream file("redirect.txt");

	// save output buffer of the stream
	streambuf* strm_buffer = strm.rdbuf();

	// redirect ouput into the file
	strm.rdbuf(file.rdbuf());

	file << "one row for the file" << endl;
	strm << "one row for the stream" << endl;

	// restore old output buffer
	strm.rdbuf(strm_buffer);

}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	// open file ''example.dat'' for reading and writing
	filebuf buffer;
	ostream output(&buffer);
	istream input(&buffer);
	buffer.open("example.dat", ios::in | ios::out | ios::trunc);

	for (int i = 1; i <= 4; i++) {
		// write one line
		output << i << ". line" << endl;

		// print all file contents
		input.seekg(0);          // seek to the beginning
		char c;
		while (input.get(c)) {
			cout.put(c);
		}
		cout << endl;
		input.clear();           // clear  eofbit and  failbit
	}

	return 0;
}
#endif