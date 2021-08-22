#if 0
#include <iostream> 
#include <fstream> 
using namespace std;

int main() 
{ 
	ofstream out("test.txt");
	if (!out) {
		cout << "Cannot open file.\n";
		return 1;
	}

	out << 10 << " " << 123.23 << "\n";
	out << "This is a text.";

	out.close();

	return 0;
}
#endif


#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main()
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
	return 0;
}
#endif



#if 0
#include <iostream> 
#include <fstream> 
using namespace std;

int main()
{ 
	char *p = "hello\n"; 

	ofstream out("test", ios::out | ios::binary);
	if (!out) {
		cout << "Cannot open file.\n";
		return 1;
	}

	// Write characters until the null-terminator is reached. 
	while (*p)
		out.put(*p++);

	out.close();

	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
using namespace std;
int main(void){
	ifstream in("test.cpp");
	if(!in){
		cout << "Cannot open file." << endl;
		exit(1);
	}
	in.ignore(10, ' ');
	char c;
	while (in)
	{
		in.get(c);
		cout << c;
	}
	in.close();
}
#endif



#if 0
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout("test.dat");

	if (!fout) {
		cout << "Cannot open file.\n";
		return 1;
	}

	fout << 10 << " " << -20 << " " << 30.2 << "\n";
	fout << "This is a test.";

	fout.close();

	if (!fout.good()) {
		cout << "A file error occurred.";
		return 1;
	}
}
#endif


#if 0
#include <iostream>    
#include <fstream>   
using namespace std;
main(void)
{
	char *p = "hello there";   

	ofstream out("test");
	if (!out) {
		cout << "Cannot open file";
		return 1;
	}

	while (*p) out.put(*p++);

	out.close();

	return 0;
}
#endif



#if 0
#include <strstream>    
#include <iostream>   
using namespace std;
main()
{
	char str[80];   
	int a = 10;   

	ostrstream outs(str, sizeof(str));

	outs << "Hello there ";
	outs << a + 44 << hex << " ";
	outs.setf(ios::showbase);
	outs << 100 << ends;

	cout << str;

	return 0;
}
#endif



#if 0
#include <fstream.H>


int main()
{
	ofstream myfile("test.txt");

	if (myfile.is_open())
	{
		myfile << "This outputting a line.\n";
		myfile << "this is another line.\n";
		myfile.close();
	}
	return 0;
}
#endif



#if 0
#include <fstream.h>

int main() {
	ofstream examplefile("test.txt");

	if (examplefile.is_open())
	{
		examplefile << "This is a line.\n";
		examplefile << "This is another line.\n";
		examplefile.close();
	}
	return 0;
}
#endif


#if 0
#include <fstream>                
using namespace std;

int main(){
	ofstream outfile("TEST.TXT");  

	outfile << "test\n";
	outfile << "1\n";
	outfile << "2\n";
	outfile << "3\n";
	return 0;
}
#endif


#if 0
#include <fstream>
#include <iostream>  
#include <string>  
using namespace std;

int main(){  
	string str = "AAA";  

	ofstream outfile("TEST.TXT");
	for (int j = 0; j<str.size(); j++)
		outfile.put(str[j]);
	cout << "File written\n";
	return 0;
}
#endif