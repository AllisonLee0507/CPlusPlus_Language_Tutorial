#if 0
#include <iostream>
using namespace std;

int main(void)
{
	// Use default width.
	cout << "Default format.\n";
	cout << "|";
	cout << 123.45 << "|" << "\n\n";
	
	// Use default right justification
	cout << "Right-justify in a field width of 12.\n";
	cout << "|";
	cout.width(12);
	cout << 123.45 << "|" << "\n\n";
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void)
{
	// Use default width.
	cout << "Default format.\n";
	cout << "|";
	cout << 123.45 << "|" << "\n\n";
	
	// Switch to left justification.
	cout << "Left-justify in a field width of 12.\n";
	cout.setf(ios::left, ios::adjustfield);
	cout << "|";
	cout.width(12);
	cout << 123.45 << "|" << "\n\n";
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void)
{
	// Use default width.
	cout << "Default format.\n";
	cout << "|";
	cout << 123.45 << "|" << "\n\n";
	
	// Turn on showpos, use left-justification.
	cout << "Turning on showpos flag.\n";
	cout.setf(ios::showpos);
	cout << "Left-justify set in a field width of 12 again.\n";
	cout << "|";
	cout.width(12);
	cout << 123.45 << "|" << "\n\n";
	
	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

int main(void)
{
	// Use default width.
	cout << "Default format.\n";
	cout << "|";
	cout << 123.45 << "|" << "\n\n";
	
	// Now, use internal.
	cout << "Turning on internal justification.\n";
	cout.setf(ios::internal, ios::adjustfield);
	cout << "Internal justification in a field width of 12.\n";
	cout << "|";
	cout.width(12);
	cout << 123.45 << "|" << endl;
	
	return 0;
}
#endif
