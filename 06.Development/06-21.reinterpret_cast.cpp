#if 0
#include <iostream>
using namespace std;

int main(void)
{
	int i;
	char *p = "This is a string";
	
	i = reinterpret_cast<int> (p); // cast pointer to integer
	
	cout << i;
	
	return 0;
}
#endif


#if 0
#include <cassert>
#include <iomanip>
#include <iostream>
#include <ostream>

using namespace std;

int main(void)
{
  	float pi = 1.1;
	int   ipi;
	
	cout << setfill('0') << showbase << hex << internal;
	
	assert(sizeof(int) == sizeof(float));
	ipi = reinterpret_cast<int&>(pi);
	cout << "pi bits=" << setw(10) << ipi << '\n';
	
	return 0;
}
#endif

