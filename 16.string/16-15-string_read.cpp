#if 0
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int count = 0;
	string word;
	while (cin >> word)
	{
		count++;
	}

	cout << count << " words.\n";

	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
	Product();

	void read();

	bool is_better_than(Product b) const;

	void print() const;
private:
	string name;
	double price;
	int score;
};

Product::Product()
{
	price = 1;
	score = 0;
}

void Product::read()
{
	cout << "Please enter the model name: ";
	getline(cin, name);
	cout << "Please enter the price: ";
	cin >> price;
	cout << "Please enter the score: ";
	cin >> score;
	string remainder; /* read remainder of line */
	getline(cin, remainder);
}

bool Product::is_better_than(Product b) const
{
	if (b.price == 0) return false;
	if (price == 0) return true;
	return score / price > b.score / b.price;
}

void Product::print() const
{
	cout << name
		<< " Price: " << price
		<< " Score: " << score << "\n";
}

int main(void)
{
	Product best;

	bool more = true;
	while (more)
	{
		Product next;
		next.read();
		if (next.is_better_than(best)) best = next;

		cout << "More data? (y/n) ";
		string answer;
		getline(cin, answer);
		if (answer != "y") more = false;
	}

	cout << "The best value is ";
	best.print();

	return 0;
}
#endif



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



#if 0
#include <iostream>  
#include <string>    
using namespace std;

int main(void)
{
	string full_name, nickname, address;  
	string greeting("Hello, ");  

	cout << "Enter your full name: ";
	getline(cin, full_name);
	cout << "Your full name is: " << full_name << endl;

	cout << "Enter your nickname: ";
	cin >> nickname;

	greeting += nickname;
	cout << greeting << endl;

	cout << "Enter your address on separate lines\n";
	cout << "Terminate with '$'\n";
	getline(cin, address, '$');
	cout << "Your address is: " << address << endl;
	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	cout << "Enter your full name (first middle last): ";
	string first;
	string middle;
	string last;
	cin >> first >> middle >> last;
	string initials = first.substr(0, 1) + middle.substr(0, 1) + last.substr(0, 1);
	cout << "Your initials are " << initials << "\n";

	return 0;
}
#endif