#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void) 
{
	long number = 50L;
	long* pnumber;
	
	pnumber = &number;
	cout << endl
		<< "The value stored in the variable number is "
		<< *pnumber
		<< endl;
	
	return 0;
}
#endif


#if 0
#include <iostream.h>

long Exp(long, long);

int main(void) 
{
	long   a,b,c;
	cout << "Enter 2 integers:";
	cin >> a >> b ;
	
	c = Exp(a,b);
	
	cout << "\nResult is:" << c << endl;
	
	return 0;
}

long Exp(long x, long n)
{
	long res=1;
	
	for (int i=1;i<=n;i++)
		res = res*x;
		
	return res;
}
#endif


#if 0
#include<iostream.h>

int main(void) 
{
  int n = 123;

  for(int i=n;i<=n+9;i++)
  {
    cout<<i;
    cout<<" "<<long(i)*i<<" "<<long(i)*i*i;
    cout<<endl;
  }
  return 0;
}
#endif


#if 0
#include <iostream>
using std::cout;
using std::endl;

int main(void) 
{
	long* pnumber;                        
	long number1 = 55L;
	long number2 = 99L;                   
	
	pnumber = &number1;                   
	*pnumber += 11;                       
	cout << endl
	   << "number1 = "     << number1
	   << "   &number1 = " << pnumber
	   << endl;
	
	pnumber = &number2;                   
	number1 = *pnumber * 10;              
	
	cout << "number1 = "     << number1
	   << "   pnumber = "  << pnumber
	   << "   *pnumber = " << *pnumber
	   << endl;
	
	return 0;
}
#endif
