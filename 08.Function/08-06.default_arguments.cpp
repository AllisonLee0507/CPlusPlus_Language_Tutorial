#if 0
#include <iostream>  
using namespace std;

void f(int x = 0, int y = 100);

int main(void)
{
	f(1, 2);

	f(10);

	f();

	return 0;
}

void f(int x, int y)
{
	cout << "x: " << x << ", y: " << y << "\n";
}
#endif


#if 0
#include <iostream> 
#include <cstring> 
using namespace std;
void f(char *s1, char *s2, int len = 0);

int main(void)
{
	char str1[80] = "This is a test";
	char str2[80] = "0123456789";

	f(str1, str2, 5);
	f(str1, str2);
	return 0;
}

void f(char *s1, char *s2, int len)
{
	cout << s1;
	cout << " " << len << " ";
	cout << s2;
}
#endif




#if 0
#include <iostream>

int f(int length, int width = 25, int height = 1);

int main(void)
{
	int length = 100;
	int width = 50;
	int height = 2;
	int area;

	area = f(length, width, height);
	std::cout << "First time area equals " << area << "\n";

	area = f(length, width);
	std::cout << "Second time area equals " << area << "\n";

	area = f(length);
	std::cout << "Third time area equals " << area << "\n";
	return 0;
}

int f(int length, int width, int height)
{
	return (length * width * height);
}
#endif




#if 0
#include <iostream>
using namespace std;

int myfunc(int i);
int myfunc(int i, int j = 1);

int main(void)
{
	cout << myfunc(4, 5) << " "; // unambiguous
	//cout << myfunc(10); // ambiguous

	return 0;
}

int myfunc(int i)
{
	return i;
}

int myfunc(int i, int j)
{
	return i*j;
}
#endif




#if 0
#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::endl;
using std::string;

void show_data(const int data[], int count = 1,
	const string& title = "Data Values", int width = 10, int perLine = 5);

int main(void)
{
	int data[] = { 1, 2, 3, 4 };

	int dataItem = 99;
	show_data(&dataItem);

	dataItem = 13;
	show_data(&dataItem, 1, "Unlucky for some!");

	show_data(data, sizeof data / sizeof data[0]);
	show_data(data, sizeof data / sizeof data[0], "title 1");
	show_data(data, sizeof data / sizeof data[0], "title 2", 14);
	show_data(data, sizeof data / sizeof data[0], "title 3", 14, 4);

	return 0;
}

void show_data(const int data[], int count, const string& title, int width, int perLine) {
	cout << endl << title;
	cout << endl << perLine;
	cout << endl << width << data[2];
	cout << endl;
}
#endif




#if 0
#include <iostream>   
using namespace std;

void repchar(char = '*', int = 45);

int main(void)
{
	repchar();
	repchar('=');
	repchar('+', 30);
	return 0;
}
void repchar(char ch, int n)
{
	for (int j = 0; j<n; j++)
		cout << ch;
}
#endif

