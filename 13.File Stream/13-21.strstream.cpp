#if 0
#include <iostream>   
#include <strstream>   
using namespace std;
int main(void)
{ 
	char iostr[80];   

	strstream ios(iostr, sizeof(iostr), ios::in | ios::out);

	int a, b;
	char str[80];

	ios << "1734 534abcdefghijklmnopqrstuvwxyz";
	ios >> a >> b >> str;
	cout << a << " " << b << " " << str << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <strstream>
using namespace std;

int main(void)
{
	char iostr[80];

	strstream strio(iostr, sizeof(iostr), ios::in | ios::out);

	int a, b;
	char str[80];

	strio << "10 20 testing ";
	strio >> a >> b >> str;
	cout << a << " " << b << " " << str << endl;

	return 0;
}
#endif