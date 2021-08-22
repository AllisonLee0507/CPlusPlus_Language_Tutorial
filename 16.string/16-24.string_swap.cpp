#if 0
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(void)
{
	string first("one");
	string second("two");

	cout << "Before swap:\n first: " << first << "\nsecond: " << second;

	first.swap(second); // swap strings

	cout << "\n\nAfter swap:\n first: " << first
		<< "\nsecond: " << second << endl;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string first( "one" ), second( "two" );

	cout << "Before swap:\n first: " << first << "\nsecond: " << second;
	first.swap(second);
	cout << "\n\nAfter swap:\n first: " << first << "\nsecond: " << second << endl;

	return 0;
}
#endif