#if 0
#include <iostream> 
using namespace std; 
 
int main(void)
{    
	int i, j; 
	bool b1, b2; 
	
	i = 10; 
	j = 11; 
	if(i < j) cout << "i < j\n"; 
	if(i <= j) cout << "i <= j\n"; 
	if(i != j) cout << "i != j\n"; 
	if(i == j) cout << "this won't execute\n"; 
	if(i >= j) cout << "this won't execute\n"; 
	if(i > j) cout << "this won't execute\n"; 
	
	b1 = true; 
	b2 = false; 
	if(b1 && b2) cout << "this won't execute\n"; 
	if(!(b1 && b2)) cout << "!(b1 && b2) is true\n"; 
	if(b1 || b2) cout << "b1 || b2 is true\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>

int main(void)
{
    int i1, i2;

    i1 = 4;
    i2 = 2;    

    if ((i1 != 0) && (i2 != 0))
        std::cout << "Both are not zero #1\n";

    return (0);
}
#endif


#if 0
#include <iostream>
using std::boolalpha;
using std::cout;
using std::endl;

int main(void)
{
	bool a = true;
	bool b = false;
	int c = 2;
	int d = 3;
	
	cout << boolalpha;
	
	cout << "a = " << a << "; b = " << b
	  << "; c = " << c << "; d = " << d;
	
	cout << "\n\nLogical operator keywords:";
	cout << "\n   a and a: " << ( a and a );
	cout << "\n   a and b: " << ( a and b );
	cout << "\n    a or a: " << ( a or a );
	cout << "\n    a or b: " << ( a or b );
	cout << "\n     not a: " << ( not a );
	cout << "\n     not b: " << ( not b );
	cout << "\na not_eq b: " << ( a not_eq b );
	
	return 0;
}
#endif


#if 0
#include <iostream> 
#include <cmath> 
 
using namespace std; 
 
int main() 
{ 
	bool p, q; 
	
	p = true; 
	q = true; 
	
	cout << p << " XOR " << q << " is " << 
	( (p || q) && !(p && q) ) << "\n"; 
	
	
	p = false; 
	q = true; 
	
	cout << p << " XOR " << q << " is " << 
	( (p || q) && !(p && q) ) << "\n"; 
	
	
	p = true; 
	q = false; 
	
	cout << p << " XOR " << q << " is " << 
	( (p || q) && !(p && q) ) << "\n"; 
	
	
	p = false; 
	q = false; 
	
	cout << p << " XOR " << q << " is " << 
	( (p || q) && !(p && q) ) << "\n"; 
	
	
	return 0; 
}
#endif


#if 0
#include <iostream>

using namespace std;

int main(void)
{
	int a = 4, b = 5;
	cout << a << " > " <<  b << " is " << (a > b) << endl;
	cout << a << " >= " <<  b << " is " << (a >= b) << endl;
	cout << a << " == " <<  b << " is " << (a == b) << endl;
	cout << a << " <= " <<  b << " is " << (a <= b) << endl;
	cout << a << " < " <<  b << " is " << (a < b) << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
int main(void)
{
	using std::cout;
	using std::cin;
	
	int i, i2;
	cout << "Enter the score for the Mets: ";
	cin >> i;
	
	cout << "\nEnter the score for the Yankees: ";
	cin >> i2;
	
	if (i > i2)
		cout << "Go i!\n";
	
	if (i < i2)
	{
		cout << "Go i2!\n";
	}
	
	if (i == i2)
	{
		cout << "A tie?\n";
		cout << "Give me the real score for the i2: ";
		cin >> i2;
		
		if (i > i2)
			cout << "i";
		
		if (i2 > i)
			cout << "i2";
		
		if (i2 == i)
			cout << "tie!";
	}
	return 0;
}
#endif
