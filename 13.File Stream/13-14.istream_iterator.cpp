#if 0
#include <iostream>
#include <iterator>
using namespace std;

int main(void)
{
	istream_iterator<char> in_it(cin);

	do {
		cout << *in_it++;
	} while (*in_it != '.');

	return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iterator>

int main(void)
{
	cout << "Enter two integers: ";

	std::istream_iterator< int > inputInt(cin);

	int number1 = *inputInt;
	++inputInt;
	int number2 = *inputInt;

	std::ostream_iterator< int > outputInt(cout);

	cout << "The sum is: ";
	*outputInt = number1 + number2;
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	unsigned i;
	double d;
	string str;
	vector<int> vi;
	vector<double> vd;
	vector<string> vs;

	cout << "Enter some integers, enter 0 to stop.\n";
	istream_iterator<int> int_itr(cin);
	do {
		i = *int_itr;
		if (i != 0) {
			vi.push_back(i);
			++int_itr;
		}
	} while (i != 0);

	cout << "Enter some doubles, enter 0 to stop.\n";
	istream_iterator<double> double_itr(cin);
	do {
		d = *double_itr;
		if (d != 0.0) {
			vd.push_back(d);
			++double_itr;
		}
	} while (d != 0.0);

	cout << "Enter some strings, enter 'quit' to stop.\n";
	istream_iterator<string> string_itr(cin);
	do {
		str = *string_itr;
		if (str != "quit") {
			vs.push_back(str);
			++string_itr;
		}
	} while (str != "quit");

	cout << endl;

	cout << "Here is what you entered:\n";
	for (i = 0; i < vi.size(); i++) cout << vi[i] << " ";
	cout << endl;

	for (i = 0; i < vd.size(); i++) cout << vd[i] << " ";
	cout << endl;

	for (i = 0; i < vs.size(); i++) cout << vs[i] << " ";


	// Now, use ostream_iterator to write to cout.

	// Create an output iterator for string.
	ostream_iterator<string> out_string_itr(cout);
	*out_string_itr = "\n";
	*out_string_itr = string("\nThis is a string\n");
	*out_string_itr = "This is too.\n";

	// Create an output iterator for int.
	ostream_iterator<int> out_int_itr(cout);
	*out_int_itr = 10;
	*out_string_itr = " ";
	*out_int_itr = 15;
	*out_string_itr = " ";
	*out_int_itr = 20;

	*out_string_itr = "\n";

	// Create an output iterator for bool.
	ostream_iterator<bool> out_bool_itr(cout);
	*out_bool_itr = true;
	*out_string_itr = " ";
	*out_bool_itr = false;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 5) {
		cout << "Usage: replace in out oldchar newchar\n";
		return 1;
	}

	ifstream in(argv[1]);
	ofstream out(argv[2]);

	if (!in.is_open()) {
		cout << "Cannot open input file.\n";
		return 1;
	}
	if (!out.is_open()) {
		cout << "Cannot open output file.\n";
		return 1;
	}

	// Create stream iterators.
	istreambuf_iterator<char> in_itr(in);
	ostreambuf_iterator<char> out_itr(out);

	// Copy the file, replacing characters in the process.
	replace_copy(in_itr, istreambuf_iterator<char>(), out_itr, *argv[3], *argv[4]);

	in.close();
	out.close();

	return 0;
}
#endif