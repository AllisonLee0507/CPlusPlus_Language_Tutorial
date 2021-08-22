#if 0
#include <iostream> 
using namespace std; 
 
int main() 
{ 
	int *i, j[10]; 
	double *f, g[10]; 
	int x; 
	
	i = j;  
	f = g;  
	
	for(x=0; x<10; x++)  
		cout << i+x << ' ' << f+x << '\n';     
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cctype> 
using namespace std; 
 
int main(void) 
{ 
	char *p; 
	int i; 
	char str[80] = "This Is A Test"; 
	
	cout << "Original string: " << str << "\n"; 
	
	p = str;
	
	for(i = 0; p[i]; i++) { 
		if(isupper(p[i])) 
			p[i] = tolower(p[i]); 
		else if(islower(p[i])) 
			p[i] = toupper(p[i]); 
	} 
	
	cout << "Inverted-case string: " << str; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
  
int main() { 
 
	char *dictionary[][2] = { 
							"A", "AA", 
							"B", "BB", 
							"C", "CC", 
							"D", "DD", 
							"E", "EE", 
							"", "" 
							}; 
	char word[80]; 
	int i; 
	
	cout << "Enter word: "; 
	cin >> word; 
	
	for(i = 0; *dictionary[i][0]; i++)
	{ 
		if(!strcmp(dictionary[i][0], word))
		{ 
		  cout << dictionary[i][1] << "\n"; 
		  break; 
		} 
	} 
	
	if(!*dictionary[i][0]) 
		cout << word << " not found.\n"; 
		
	return 0; 
}
#endif



#if 0
#include <assert.h>
#include <iostream>
#include <iomanip>

char array[10] = "012345678";

int main(void)
{ 
	for (int i = 0; i < 10; ++i) {
	    std::cout << std::hex;
	    std::cout << "&array[i]=0x" <<  reinterpret_cast<int>(&array[i]) <<
	                 " (array+i)=0x" << reinterpret_cast<int>(array+i) <<
	                 " array[i]=0x" <<  static_cast<int>(array[i]) << '\n',
	    std::cout << std::dec;
	}
	return (0);
}
#endif



#if 0
#include <iostream>

using namespace std;

void increase(int* const array, const int NUM_ELEMENTS);
void display(const int* const array, const int NUM_ELEMENTS);

int main(void)
{ 
	const int NUM_SCORES = 3;
	int highScores[NUM_SCORES] = {5, 3, 2};
	
	cout << "passing array as a constant pointer.\n\n";
	increase(highScores, NUM_SCORES);
	
	cout << "passing array as a constant pointer to a constant.\n";
	display(highScores, NUM_SCORES);
	
	return 0;
}

void increase(int* const array, const int NUM_ELEMENTS)
{
    for (int i = 0; i < NUM_ELEMENTS; ++i)
        array[i] += 500;
}

void display(const int* const array, const int NUM_ELEMENTS)
{
    for (int i = 0; i < NUM_ELEMENTS; ++i)
        cout << array[i] << endl;
}
#endif



#if 0
#include <iostream>  
using namespace std;  
    
int main(void)
{ 
	int intarray[5] = { 31, 54, 77, 52, 93 };  
	
	for(int j=0; j<5; j++)  
	cout << intarray[j] << endl;
	return 0;  
}
#endif



#if 0
#include <iostream>  
using namespace std;  

int main(void)
{  
	int intarray[5] = { 31, 54, 77, 52, 93 };  
	
	for(int j=0; j<5; j++) 
		cout << *(intarray+j) << endl; 
		
	return 0;  
}
#endif



#if 0
#include <iostream>  
using namespace std;  
    
int main(void)
{  
	int intarray[] = { 31, 54, 77, 52, 93 }; 
	int* ptrint;                             
	ptrint = intarray;                       
	
	for(int j=0; j<5; j++)                     
		cout << *(ptrint++) << endl;     
		     
	return 0;  
}
#endif



#if 0
#include <iostream>  
using namespace std;  
const int DAYS = 7;            

int main(void)
{                           
	char* arrptrs[DAYS] = { "Sunday", "Monday", "Tuesday",  
	                 "Wednesday", "Thursday",  
	                 "Friday", "Saturday"  };  
	
	for(int j=0; j<DAYS; j++)
		cout << arrptrs[j] << endl;  
		
	return 0;  
}
#endif





