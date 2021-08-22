#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int sample[10]; // this reserves 10 integer elements 
	int t; 
	
	// load the array 
	for(t=0; t<10; ++t) sample[t] = t; 
	
	// display the array 
	for(t=0; t<10; ++t) 
	cout << "This is sample[" << t << "]: " << sample[t] << "\n"; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>   
using namespace std;   
   
int main(void)   
{   
	int i, avg, min_val, max_val; 
	int nums[10];   
	
	nums[0] = 13;   
	nums[1] = 18;   
	nums[2] = 75;   
	nums[3] = 120;   
	nums[4] = 1321;   
	nums[5] = 56;   
	nums[6] = 13124;   
	nums[7] = 12123;   
	nums[8] = -19312;   
	nums[9] = 88123;   
	
	// compute the average 
	avg = 0; 
	for(i=0; i<10; i++) 
	avg += nums[i]; 
	
	avg /= 10; 
	
	cout << "Average is " << avg << '\n';   
	
	return 0;   
}
#endif


#if 0
#include <iostream>   
using namespace std;   
   
int main()   
{   
	int i, avg, min_val, max_val; 
	int nums[10];   
	
	nums[0] = 13;   
	nums[1] = 18;   
	nums[2] = 75;   
	nums[3] = 120;   
	nums[4] = 1321;   
	nums[5] = 56;   
	nums[6] = 13124;   
	nums[7] = 12123;   
	nums[8] = -19312;   
	nums[9] = 88123;   
	
	
	// find minimum and maximum values      
	min_val = max_val = nums[0];   
	for(i=1; i<10; i++) {   
	if(nums[i] < min_val) min_val = nums[i];  
	if(nums[i] > max_val) max_val = nums[i];  
	}  
	
	cout << "Minimum value: " << min_val << '\n';   
	cout << "Maximum value: " <<  max_val << '\n';   
	
	return 0;   
}
#endif

