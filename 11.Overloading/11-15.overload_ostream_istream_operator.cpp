#if 0
#include<iostream.h>
#include<fstream.h>

class ThreeD
{
	int x, y, z;
public:
	ThreeD(int i, int j, int k){
		x = i;
		y = j;
		z = k;
	}
	friend ostream& operator<<(ostream& stream, ThreeD ob);
	friend istream& operator>>(istream& stream, ThreeD ob);
};
ostream& operator<<(ostream& stream, ThreeD ob)
{
	stream << ob.x << ' ' << ob.y << ' ' << ob.z << '\n';
	return stream;
}
istream& operator>>(istream& stream, ThreeD  ob)
{
	stream >> ob.x >> ob.y >> ob.z;
	return stream;
}

int main(void)
{
	ThreeD o1(1, 2, 3), o2(4, 5, 6);
	ofstream out("test");
	if (!out)
	{
		cout << "Cannot open output file\n";
		return 1;
	}
	cout << o1 << o2;
	out.close();
	ifstream in("test");
	if (!in)
	{
		cout << "Cannot open input file\n";
		return 1;
	}
	ThreeD o3(0, 0, 0), o4(0, 0, 0);
	in >> o3 >> o4;
	return 0;
}
#endif


#if 0
#include<iostream.h>

class Time
{
	int hour;
	int minute;
	int second;
public:
	friend ostream& operator<<(ostream &, Time);
	friend istream& operator>>(istream &, Time &);
};

ostream& operator<<(ostream & out, Time t)
{
	out << "\nHere's the time:\n";
	out << t.hour << ":" << t.minute << ":" << t.second << "\n";
	return out;
}

istream& operator>>(istream & in, Time & t)
{
	cout << "Please enter the time as follow\n";
	do{
		cout << "What is the hour(0-23)?";
		in >> t.hour;
		if ((t.hour<0) || (t.hour>23))
			cout << "You have inpitted a wrong data! Please try again!\n";
	} while ((t.hour<0) || (t.hour>23));
	do{
		cout << "What is the minute(0-59)?";
		in >> t.minute;
		if ((t.minute<0) || (t.minute>59))
			cout << "You have inpitted a wrong data! Please try again!\n";
	} while ((t.minute<0) || (t.minute>59));
	do{
		cout << "What is the second(0-23)?";
		in >> t.second;
		if ((t.second<0) || (t.second>59))
			cout << "You have inpitted a wrong data! Please try again!\n";
	} while ((t.second<0) || (t.second>59));
	return in;
}

int main(void)
{
	Time now;

	cin >> now;
	cout << now;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cstring>
using namespace std;

class MyClass {
public:
	char name[80];
	int areacode;
	int prefix;
	int num;
	MyClass(char *n, int a, int p, int nm)
	{
		strcpy(name, n);
		areacode = a;
		prefix = p;
		num = nm;
	}
};

ostream &operator<<(ostream &stream, MyClass o)
{
	stream << o.name << " ";
	stream << "(" << o.areacode << ") ";
	stream << o.prefix << "-" << o.num << "\n";

	return stream;
}

int main(void)
{
	MyClass a("T", 1, 5, 1);
	MyClass b("A", 3, 5, 5);
	MyClass c("T", 2, 5, 9);

	cout << a << b << c;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cstring>
using namespace std;

class MyClass {
	char name[80];
	int id;
	int prefix;
	int value;
public:
	MyClass() { };
	MyClass(char *n, int a, int p, int nm)
	{
		strcpy(name, n);
		id = a;
		prefix = p;
		value = nm;
	}
	friend ostream &operator<<(ostream &stream, MyClass o);
	friend istream &operator>>(istream &stream, MyClass &o);
};

// Display name and phone valueber.
ostream &operator<<(ostream &stream, MyClass o)
{
	stream << o.name << " ";
	stream << "(" << o.id << ") ";
	stream << o.prefix << "-" << o.value << "\n";

	return stream; // must return stream
}

// Input name and telephone valueber.
istream &operator>>(istream &stream, MyClass &o)
{
	cout << "Enter name: ";
	stream >> o.name;
	cout << "Enter id: ";
	stream >> o.id;
	cout << "Enter prefix: ";
	stream >> o.prefix;
	cout << "Enter value: ";
	stream >> o.value;
	cout << "\n";

	return stream;
}

int main(void)
{
	MyClass a;

	cin >> a;

	cout << a;

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class Line {
	int x;
public:
	Line(int i) { x = i; }
	friend ostream &operator<<(ostream &stream, Line o);
};

ostream &operator<<(ostream &stream, Line o)
{
	register int i, j;

	for (i = 0; i<o.x; i++)
		stream << "*";
	stream << "\n";

	return stream;
}

int main(void)
{
	Line a(14), b(30), c(40);

	cout << a << b << c;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <cstring>
using namespace std;

class MyClass {
	// now private
	char name[80];
	int areacode;
	int prefix;
	int num;
public:
	MyClass(char *n, int a, int p, int nm)
	{
		strcpy(name, n);
		areacode = a;
		prefix = p;
		num = nm;
	}
	friend ostream &operator<<(ostream &stream, MyClass o);
};

ostream &operator<<(ostream &stream, MyClass o)
{
	stream << o.name << " ";
	stream << "(" << o.areacode << ") ";
	stream << o.prefix << "-" << o.num << "\n";

	return stream;
}

int main(void)
{
	MyClass a("T", 1, 5, 1);
	MyClass b("A", 3, 5, 5);
	MyClass c("T", 2, 5, 9);

	cout << a << b << c;

	return 0;
}

#endif



#if 0
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class MyClass {
	char name[80];
	char areacode[4];
	char prefix[4];
	char num[5];
public:
	MyClass() { };
	MyClass(char *n, char *a, char *p, char *nm)
	{
		strcpy(name, n);
		strcpy(areacode, a);
		strcpy(prefix, p);
		strcpy(num, nm);
	}
	friend ostream &operator<<(ostream &stream, MyClass o);
	friend istream &operator>>(istream &stream, MyClass &o);
};

// Display name and phone number.
ostream &operator<<(ostream &stream, MyClass o)
{
	stream << o.name << " ";
	stream << "(" << o.areacode << ") ";
	stream << o.prefix << "-";
	stream << o.num << "\n";
	return stream; // must return stream
}

// Input name and telephone number.
istream &operator>>(istream &stream, MyClass &o)
{
	cout << "Enter name: ";
	stream >> o.name;
	cout << "Enter area code: ";
	stream >> o.areacode;
	cout << "Enter prefix: ";
	stream >> o.prefix;
	cout << "Enter number: ";
	stream >> o.num;
	cout << "\n";
	return stream;
}

int main(void)
{
	MyClass a;
	char c;

	fstream pb("phone", ios::in | ios::out | ios::app);

	if (!pb) {
		cout << "Cannot open phone book file.\n";
		return 1;
	}

	cin >> a;
	pb << a;    // write to disk

	char ch;
	pb.seekg(0, ios::beg);
	while (!pb.eof()) {
		pb.get(ch);
		if (!pb.eof()) cout << ch;
	}
	pb.clear();  // reset eof
	cout << endl;
	pb.close();

}

#endif



#if 0
#include <iostream>
#include <limits>

// Ignore: manipulator that ignores N lines
class Ignore {
public:
	int num;
	Ignore(int n) : num(n) {
	}
};

// convenience function
Ignore ignore(int n)
{
	return Ignore(n);
}

std::istream& operator >> (std::istream& strm, const Ignore& manip)
{
	for (int i = 0; i<manip.num; ++i) {
		strm.ignore(std::numeric_limits<int>::max(), '\n');
	}
	return strm;
}


int main(void)
{
	char c;
	std::cout << "ignore two lines and print frist character following them\n";

	std::cin >> ignore(2) >> c;
	std::cout << "c: " << c << std::endl;
}

#endif



#if 0
#include <iostream>
#include <cstring>
using namespace std;

class phonebook {
public:
	char name[80];
	int areacode;
	int prefix;
	int num;
	phonebook(char *n, int a, int p, int nm)
	{
		strcpy(name, n);
		areacode = a;
		prefix = p;
		num = nm;
	}
};

// Display name and phone number.
ostream &operator<<(ostream &stream, phonebook o)
{
	stream << o.name << " ";
	stream << "(" << o.areacode << ") ";
	stream << o.prefix << "-" << o.num << "\n";

	return stream; // must return stream
}

int main(void)
{
	phonebook a("A", 111, 555, 1234);
	phonebook b("B", 312, 555, 5768);
	phonebook c("C", 212, 555, 9991);

	cout << a << b << c;

	return 0;
}

#endif


#if 0
#include <iostream>
#include <cstring>
using namespace std;

class phonebook {
	// now private
	char name[80];
	int areacode;
	int prefix;
	int num;
public:
	phonebook(char *n, int a, int p, int nm)
	{
		strcpy(name, n);
		areacode = a;
		prefix = p;
		num = nm;
	}
	friend ostream &operator<<(ostream &stream, phonebook o);
};

// Display name and phone number.
ostream &operator<<(ostream &stream, phonebook o)
{
	stream << o.name << " ";
	stream << "(" << o.areacode << ") ";
	stream << o.prefix << "-" << o.num << "\n";

	return stream; // must return stream
}

int main(void)
{
	phonebook a("A", 111, 555, 1234);
	phonebook b("B", 312, 555, 5768);
	phonebook c("C", 212, 555, 9991);

	cout << a << b << c;

	return 0;
}

#endif