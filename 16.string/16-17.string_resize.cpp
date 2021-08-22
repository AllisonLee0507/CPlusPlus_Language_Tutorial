#if 0
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::boolalpha;

#include <string>
using std::string;

void display(const string &);

int main(void)
{
	string string1;

	cout << "Statistics before input:\n" << boolalpha;
	display(string1);

	cout << "\n\nEnter a string: ";
	cin >> string1; // delimited by whitespace
	cout << "The string entered was: " << string1;

	cout << "\nStatistics after input:\n";
	display(string1);

	string1.resize(string1.length() + 10);
	cout << "\n\nStats after resizing by (length + 10):\n";
	display(string1);

	return 0;
}

void display(const string &stringRef)
{
	cout << "capacity: " << stringRef.capacity() << "\nmax size: "
		<< stringRef.max_size() << "\nsize: " << stringRef.size()
		<< "\nlength: " << stringRef.length()
		<< "\nempty: " << stringRef.empty();
}
#endif