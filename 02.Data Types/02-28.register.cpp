#if 0
#include <iostream> 
using namespace std; 
 
int f(int[], int); 
 
int main(void) 
{ 
	int vals[] = { 1, 2, 3, 4, 5 }; 
	int result; 
	
	result = f(vals, 5); 
	
	cout << "Summation is " << result << "\n"; 
	
	return 0; 
} 
 
int f(int nums[], int n) 
{ 
	register int i; 
	register int sum = 0; 
	
	for(i = 0; i < n; i++) 
	sum = sum + nums[i]; 
	
	return sum; 
}
#endif
