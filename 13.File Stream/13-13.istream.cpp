#if 0
#include <iostream.h>
#include <iomanip.h>

istream& OctInput(istream& is);

int main(void)
{
	int n;
	cin >> OctInput >> n;
	cout << "n:" << n << endl;
	cout << "hex:" << hex << n << endl;
	return 0;
}

istream& OctInput(istream& is)
{
	cout << "input:";
	cin >> oct;
	return is;
}
#endif


#if 0
#include<iostream.h>
#include<string.h>
istream & skipchar(istream &stream)
{
	int i;
	char c;
	for(i=0;i<5;i++) stream>>c;
	return stream;
}

int main(void)
{
	char str[80];
	cout << "Enter some characters:";
	cin >> skipchar >> str;
	cout << str << '\n';
	return 0;
}
#endif