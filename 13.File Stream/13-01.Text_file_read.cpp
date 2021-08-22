#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{  
	ofstream out("test.txt"); // output, normal file

	if (!out) {
		cout << "Cannot open test.txt file.\n";
		return 1;
	}

	out << "R " << 9.9 << endl;
	out << "T " << 9.9 << endl;
	out << "M " << 4.8 << endl;

	out.close();


	ifstream in("test.txt"); // input

	if (!in) {
		cout << "Cannot open test.txt file.\n";
		return 1;
	}

	char item[20];
	float cost;

	in >> item >> cost;
	cout << item << " " << cost << "\n";
	in >> item >> cost;
	cout << item << " " << cost << "\n";
	in >> item >> cost;
	cout << item << " " << cost << "\n";

	in.close();
	return 0;
}
#endif


#if 0
#include <iostream> 
#include <fstream> 
using namespace std;

int main(void)
{  
	char ch; 
	int i;
	float f;
	char str[80];

	ofstream out("test.txt");
	if (!out) {
		cout << "Cannot open file.\n";
		return 1;
	}

	out << 10 << " " << 123.23 << "\n";
	out << "This is a text.";
	out.close();

	ifstream in("test.txt");
	if (!in) {
		cout << "Cannot open file.\n";
		return 1;
	}

	in >> i;
	in >> f;
	in >> ch;
	in >> str;

	cout << i << " " << f << " " << ch << "\n";
	cout << str;

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
	ifstream in("text.txt");
	if (!in){
		cout << "Cannot open file.";
		exit(1);
	}
	char str[255];
	while (in){
		in.getline(str, 255);      // Delimiter defaults to newline
		cout << str << endl;
	}
	in.close();
}
#endif



#if 0
#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{  
	char buffer[256];
	ifstream myfile("test.txt");

	while (!myfile.eof())
	{
		myfile.getline(buffer, 100);
		cout << buffer << endl;
	}
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{  
	ifstream inFile("test.cpp");

	if (inFile.fail()) {
		cerr << "Unable to open file for reading." << endl;
		exit(1);
	}

	string nextToken;
	while (inFile >> nextToken) {
		cout << "Token: " << nextToken << endl;
	}

	inFile.close();

	return 0;
}
#endif


#if 0
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

void readIntegerFile(const string& fileName, vector<int>& dest)throw (invalid_argument, runtime_error)
{
	ifstream istr;
	int temp;

	istr.open(fileName.c_str());
	if (istr.fail()) {
		string error = "Unable to open file " + fileName;
		throw invalid_argument(error);
	}

	while (istr >> temp) {
		dest.push_back(temp);
	}

	if (istr.eof()) {
		istr.close();
	}
	else {
		istr.close();
		string error = "Unable to read file " + fileName;
		throw runtime_error(error);
	}
}

int main(int argc, char** argv)
{
	vector<int> myInts;
	const string fileName = "test.txt";

	try {
		readIntegerFile(fileName, myInts);
	}
	catch (const invalid_argument& e) {
		cerr << e.what() << endl;
		exit(1);
	}
	catch (const runtime_error& e) {
		cerr << e.what() << endl;
		exit(1);
	}

	for (unsigned int i = 0; i < myInts.size(); i++) {
		cout << myInts[i] << " ";
	}
	cout << endl;

	return (0);
}
#endif



#if 0
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>

int main(void)
{  
	char buffer[256];

	ifstream examplefile("test.txt");

	if (!examplefile.is_open())
	{
		cout << "Error opening file";
		exit(1);
	}

	while (!examplefile.eof())
	{
		examplefile.getline(buffer, 100);
		cout << buffer << endl;
	}
	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{  
	ofstream out("INVNTRY"); // output, normal file

	if (!out) {
		cout << "Cannot open INVENTORY file.\n";
		return 1;
	}

	out << "Radios " << 39.95 << endl;
	out << "Toasters " << 19.95 << endl;
	out << "Mixers " << 24.80 << endl;

	out.close();
	return 0;
}
#endif



#if 0
#include <fstream>  
#include <iostream>  
using namespace std;

int main(void)
{  
	const int MAX = 80;
	char buffer[MAX];
	ifstream infile("TEST.TXT");
	while (!infile.eof()){
		infile.getline(buffer, MAX);
		cout << buffer << endl;
	}
	return 0;
}
#endif



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