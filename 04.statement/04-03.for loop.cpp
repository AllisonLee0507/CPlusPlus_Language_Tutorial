#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int count; 
	
	for(count=1; count <= 100; count=count+1)  
		cout << count << " "; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>  
using namespace std;  
  
int main(void) 
{   
	double f; // holds the length in feet  
	double m; // holds the conversion to meters  
	int counter; 
	
	counter = 0; 
	
	for(f = 1.0; f <= 100.0; f++) { 
		m = f / 3.28; // convert to meters 
		cout << f << " feet is " << m << " meters.\n";  
		
		counter++;  
		
		// every 10th line, print a blank line 
		if(counter == 10) { 
			cout << "\n"; // output a blank line 
			counter = 0; // reset the line counter 
		} 
	}  
	return 0; 
}
#endif



#if 0
#include <iostream>
 
int main(void) 
{ 
	for (int i=0, j=0; i<3; i++, j++)
		std::cout << "i: " << i << " j: " << j << std::endl;
		
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	char letter; 
	
	for(letter = 'A'; letter <= 'Z'; letter++) 
		cout << letter; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int i; 
	
	for(i=50; i >= -50; i = i-10) 
		cout << i << ' '; 
 
	return 0; 
}
#endif



#if 0
#include <iostream>  
#include <cstdlib>  
using namespace std;  
  
int main(void) 
{ 
	int i, r; 
	
	r = rand(); 
	
	for(i=0; r <= 20000; i++) 
	r = rand(); 
	
	cout << "Number is " << r << ". It was generated on try " << i << "."; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int x; 
	
	for(x=0; x != 123; ) { 
		cout << "Enter a number: "; 
		cin >> x; 
	} 
	
	return 0; 
}
#endif



#if 0
#include <iostream>  
#include <cstdlib>  
using namespace std;  
  
int main(void) 
{ 
	int i;  
	int sum = 0; 
	
	
	// sum the numbers from 1 through 10 
	for(i=1; i <= 10; sum += i++) ; 
	
	cout << "Sum is " << sum; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
  
int main(void) 
{ 
	int sum = 0; 
	int fact = 1; 
	
	for(int i = 1; i <= 5; i++) {  
		sum += i;  // i is known throughout the loop 
		fact *= i; 
	} 
	
	cout << "Sum is " << sum << "\n"; 
	cout << "Factorial is " << fact; 
	
	return 0; 
}
#endif
