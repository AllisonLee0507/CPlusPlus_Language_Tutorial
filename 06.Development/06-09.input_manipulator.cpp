#if 0
#include <iostream> 
#include <iomanip> 
using namespace std; 
 
istream &customMessage(istream &stream) 
{ 
	cin >> hex; 
	cout << "Enter number using hex format: "; 
	
	return stream; 
} 
 
int main(void) 
{ 
	int i; 
	
	cin >> customMessage >> i; 
	cout << i; 
	
	return 0; 
}
#endif

