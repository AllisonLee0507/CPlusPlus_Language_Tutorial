#if 0
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
   const int num_members = 6;
   const int id[num_members] = { 6, 5, 1, 8,3, 2 };
   const int month[num_members] = { 9, 1, 1, 12, 10, 4 };
   const int day[num_members] = { 2, 1, 13, 30, 31, 4 };
   const int year[num_members] = { 2000, 2003, 2004, 1998,2001, 2003 };

   cout << setfill( '0' );
   for( int i = 0; i < num_members; ++i )
      cout << ": " << setw( 8 ) << id[i]
         << " : " << setw( 2 ) << month[i] << "/"
         << setw( 2 ) << day[i] << "/" << setw( 2 )
         << year[i] % 100 << endl;
         
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using namespace std; 

int main(void)
{
	cout << setw(5) << 1 << '\n' << setw(6) << 2; 
	cout << '\n' << setw(7) << 3;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>
using namespace std; 

int main(void)
{
	cout.width(5);
	cout << setiosflags(ios::left) << 5 << '\n'; 
	cout.width(5);
	cout << 5 << '\n' << resetiosflags(ios::left); 
	cout.width(5);
	cout << 1;
	
	return 0;
}
#endif


#if 0
#include <iostream>

using namespace std;

int main(void)
{
	cout << "Root | Square | Cube\n";
	for(int i = 1; i < 11; ++i)
	{
		cout.width(4);
		cout << i << " |";
		cout.width(7);
		cout << i * i << " |";
		cout.width(8);
		cout << i * i * i;
		cout << endl;
	}
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::ios;
using std::setw;
using std::hex;
using std::dec;
using std::setfill;

int main(void)
{
	int x = 10000;
	
	cout.setf( ios::right, ios::adjustfield );
	cout.fill( '*' );
	cout << setw( 10 ) << dec << x << '\n';
	cout.setf( ios::left, ios::adjustfield );
	cout << setw( 10 ) << setfill( '%' ) << x << '\n';
	cout.setf( ios::internal, ios::adjustfield );
	cout << setw( 10 ) << setfill( '^' ) << hex << x << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	const int number = 185;
	cout << "The number is " << number << endl;
	
	cout << "The number is " << hex <<  number << endl;
	
	cout.setf(ios::showbase);
	cout << "The number is " << hex <<  number << endl;
	
	cout << "The number is " ;
	cout.width(10);
	cout << hex << number << endl;
	
	cout << "The number is " ;
	cout.width(10);
	cout.setf(ios::left);
	cout << hex << number << endl;
	
	cout << "The number is " ;
	cout.width(10);
	cout.setf(ios::internal);
	cout << hex << number << endl;
	
	cout << "The number is:" << setw(10) << hex << number << endl;
	
	return 0;
}
#endif

#if 0
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	const int number = 185;
	cout << "The number is " << number << endl;
	cout << "The number is " << hex <<  number << endl;
	
	cout.setf(ios::showbase);
	cout << "The number is " << hex <<  number << endl;
	
	cout << "The number is " ;
	cout.width(10);
	cout << hex << number << endl;
	
	cout << "The number is " ;
	cout.width(10);
	cout.setf(ios::left);
	cout << hex << number << endl;
	
	cout << "The number is " ;
	cout.width(10);
	cout.setf(ios::internal);
	cout << hex << number << endl;
	
	cout << "The number is:" << setw(10) << hex << number << endl;
	return 0;
}
#endif
