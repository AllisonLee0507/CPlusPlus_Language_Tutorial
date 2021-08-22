#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int t; 
	
	// Loops from 0 to 9, not to 100! 
	for(t=0; t<100; t++) { 
		if(t==10) break; 
			cout << t << ' '; 
	} 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
int main(void) 
{ 
	int t, count;  
	
	for(t=0; t<10; t++)
	{ 
		count = 1; 
		for(;;) { 
			cout << count << ' '; 
			count++; 
			if(count==10) break; 
		}  
		cout << '\n'; 
	} 
	
	return 0; 
}
#endif



#if 0
#include<iostream.h>
int main(void)
{
	int x,y,s;
	cin >> x >> y;
	s=0;
	while(1)
	{
		if(s==0)break;
		s +=x;
	}
	cout<<s<<endl;
}
#endif



#if 0
#include <iostream>

int menu();
void DoTaskOne();
void DoTaskMany(int);

using namespace std;

int main()
{
   bool exit = false;
   for (;;)
   {
      int choice = menu();
      switch(choice)
      {
        case (1):
            DoTaskOne();
            break;
        case (2):
            DoTaskMany(2);
            break;
        case (3):
            DoTaskMany(3);
            break;
        case (4):
            continue;  
            break;
        case (5):
            exit=true;
            break;
        default:
            cout << "Please select again! " << endl;
            break;
      }             

      if (exit == true)
         break;
   }                
   return 0;
}                   

int menu(void)
{
	int choice;
	
	cout << " **** Menu **** "   << endl << endl;
	cout << "(1) Choice one. "   << endl;
	cout << "(2) Choice two. "   << endl;
	cout << "(3) Choice three. " << endl;
	cout << "(4) Redisplay menu. " << endl;
	cout << "(5) Quit. "    << endl << endl;
	cout << ": ";
	cin >> choice;
	
	return choice;
}

void DoTaskOne()
{
   cout << "Task One! " << endl;
}

void DoTaskMany(int which)
{
	if (which == 2)
		cout << "Task Two! " << endl;
	else
		cout << "Task Three! " << endl;
}
#endif
