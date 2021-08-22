#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int num; 
	
	cout << "Enter a number from 1 to 3: "; 
	cin >> num; 
	
	switch(num) { 
		case 1:  cout << "111.\n";  break; 
		case 2:  cout << "222.\n"; 	break; 
		case 3:  cout << "333.\n"; 	break; 
		default: cout << "You must enter either 1, 2, or 3.\n"; 
	} 
		
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main() 
{ 
	int i; 
	
	for(i=0; i<5; i++) { 
		switch(i) { 
			case 0: cout << "less than 1\n"; 
			case 1: cout << "less than 2\n"; 
			case 2: cout << "less than 3\n"; 
			case 3: cout << "less than 4\n"; 
			case 4: cout << "less than 5\n"; 
		} 
		cout << '\n'; 
	} 	
	return 0; 
}
#endif



#if 0
#include <iostream>
using namespace std; 
 
int main() 
{ 
	int i; 
	
	for(i=0; i<5; i++) { 
		switch(i) { 
			case 1: 
			case 2: 
			case 3:  cout << "i is less than 4";	break; 
			case 4:  cout << "i is 4";  break;
		}    
		cout << '\n'; 
	} 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
using namespace std; 
 
int main(void)
{ 
  char choice; 
 
  cout << "Help on:\n"; 
  cout << "  1. if\n"; 
  cout << "  2. switch\n"; 
  cout << "Choose one: "; 
  cin >> choice; 
 
  cout << "\n"; 
  
  switch(choice) { 
    case '1': cout << "The if:\n\n";             break; 
    case '2': cout << "The switch:\n\n";         break; 
    default:  cout << "Selection not found.\n"; 
  } 
 
  return 0; 
}
#endif



#if 0
#include <iostream>  
using namespace std;  
   
int main() {  
  char choice;  
  
  for(;;) {  
    do {  
      cout << "Help on:\n";  
      cout << "  1. if\n";  
      cout << "  2. switch\n";  
      cout << "  3. for\n";  
      cout << "  4. while\n";  
      cout << "  5. do-while\n";  
      cout << "  6. break\n";  
      cout << "  7. continue\n";  
      cout << "  8. goto\n";  
      cout << "Choose one (q to quit): ";  
      cin >> choice;  
    } while( choice < '1' || choice > '8' && choice != 'q');  
  
    if(choice == 'q') break;  
  
    cout << "\n\n";  
   
    switch(choice) {  
      case '1':  cout << "The if:\n\n";       break;  
      case '2':  cout << "The switch:\n\n";   break;  
      case '3':  cout << "The for:\n\n";      break;  
      case '4':  cout << "The while:\n\n";    break;  
      case '5':  cout << "The do-while:\n\n"; break;  
      case '6':  cout << "The break:\n\n";    break;  
      case '7':  cout << "The continue:\n\n"; break;  
      case '8':  cout << "The goto:\n\n";     break;  
    }  
    cout << "\n";  
  }  
  
  return 0;  
}
#endif



#if 0
#include <iostream.h>

void increase (void* data, int type)
{
  switch (type)
  {
    case sizeof(char) : (*((char*)data))++; break;
    case sizeof(short): (*((short*)data))++; break;
    case sizeof(long) : (*((long*)data))++; break;
  }
  return;
}

int main(void)
{
  char a = 5;
  short b = 9;
  long c = 12;
  
  increase (&a,sizeof(a));
  increase (&b,sizeof(b));
  increase (&c,sizeof(c));
  cout << (int) a << ", " << b << ", " << c;
  
  return 0;
}
#endif



#if 0
#include <iostream>

int   result;     
char  oper_char;   
int   value;      

int main(void)
{
    result = 0;                

    while (true) {
       std::cout << "Result: " << result << '\n';
       std::cout << "Enter operator and number: ";
    
       std::cin >> oper_char >> value;
    
       if ((oper_char == 'q') || (oper_char == 'Q'))
           break;
    
       switch (oper_char) {
           case '+':
               result += value;
               break;
           case '-':
               result -= value;
               break;
           case '*':
               result *= value;
               break;
           case '/':
               if (value == 0) {
                   std::cout << "Error:Divide by zero\n";
                   std::cout << "   operation ignored\n";
               } else
                   result /= value;
               break;
           default:
               std::cout << "Unknown operator " << oper_char << '\n';
               break;
       }
    }
    return 0;
}
#endif

