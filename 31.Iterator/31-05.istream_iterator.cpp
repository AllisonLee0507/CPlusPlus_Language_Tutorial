#if 0
#include <iostream>
#include <iterator>
using std::cout;
using std::endl;
using std::cin;
using std::istream_iterator;

template <typename Iter>

double mySum(Iter begin, Iter end) {
	double sum = 0.0;

	for (; begin != end;)
		sum += *begin++;
	return sum;
}

int main(void)
{
	cout << "Ctrl-Z to stop" << endl;

	double av = mySum(istream_iterator<double>(cin), istream_iterator<double>());

	cout << "The sum value is " << av << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <iterator> 
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::istream_iterator;
using std::istringstream;
using std::string;

template <typename Iter>

double mySum(Iter begin, Iter end) {
	double sum = 0.0;

	for (; begin != end;)
		sum += *begin++;
	return sum;
}

int main(void)
{
	std::string stock_ticker = "4.5 6.75 8.25 7.5 5.75";
	istringstream ticker(stock_ticker);
	istream_iterator<double> begin(ticker);
	istream_iterator<double> end;

	cout << stock_ticker << endl;

	cout << mySum(begin, end) << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <iterator> 
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::istream_iterator;
using std::istringstream;
using std::string;

template <typename Iter>

double mySum(Iter begin, Iter end) {
	double sum = 0.0;

	for (; begin != end;)
		sum += *begin++;
	return sum;
}

int main(void)
{
	char* stock_ticker = "4.5 6.75 8.25 7.5 5.75";

	istringstream ticker(stock_ticker);
	istream_iterator<double> begin(ticker);
	istream_iterator<double> end;

	cout << stock_ticker << endl;

	cout << mySum(begin, end) << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	vector<string> coll;

	copy(istream_iterator<string>(cin),    // start of source
		istream_iterator<string>(),       // end of source
		back_inserter(coll));             // destination

	sort(coll.begin(), coll.end());

	unique_copy(coll.begin(), coll.end(),             // source
		ostream_iterator<string>(cout, "\n")); // destination

	return 0;
}
#endif



#if 0
#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main(void)
{
	cout << "Enter a series of strings: ";
	istream_iterator<string> start(cin);
	istream_iterator<string> end;
	vector<string> v(start, end);

	vector<string>::iterator p = partition(v.begin(), v.end(), bind2nd(less<string>(), "foo"));

	cout << "*p = " << *p << endl;

	return 0;
}
#endif


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
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	istream_iterator<string> cinPos(cin);
	ostream_iterator<string> coutPos(cout, " ");

	/* while input is not at the end of the file
	* - write every third string
	*/
	while (cinPos != istream_iterator<string>()) {
		// ignore the following two strings
		advance(cinPos, 2);

		// read and write the third string
		if (cinPos != istream_iterator<string>()) {
			*coutPos++ = *cinPos++;
		}
	}
	cout << endl;

	return 0;
}
#endif