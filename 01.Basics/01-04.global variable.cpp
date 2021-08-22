#if 0
#include <iostream>
using namespace std;

void func1();
void func2();

int count; // This is a global variable.

int main()
{
  int i; // This is a local variable

  for(i=0; i<10; i++) {
    ::count = i * 2;
    func1();
  }

  return 0;
}

void func1()
{
  cout << "count: " << ::count; // access global count
  cout << '\n';
  func2();
}

void func2()
{
  int count;

  for(count=0; count<3; count++)
     cout << '.';
}
#endif


#if 0
#include<iostream.h>

class test
{
  int i;
public:
    test()
    {
      i=25;
      for(int ctr=0; ctr<10;ctr++)
      {
        cout<<"Counting at"<<ctr<<"\n";
      }
    }
    ~test(){};
};

test anObject;

int main(void)
{
  return 0;
}

#endif


#if 0
#include <stdio.h>    
       
void func1(void), func2(void);   
     
int count;  
     
int main(void)   
{   
  count = 100;   
  func1();   
  
  return 0; 
}   
     
void func1(void)   
{   
  int temp;   
     
  temp = count;   
  func2();   
  printf("count is %d", count); /* will print 100 */   
}   
     
void func2(void)   
{   
  int count;   
     
  for(count=1; count<10; count++)   
    putchar('.');   
}
#endif


#if 0
#include <iostream>
using namespace std; 
int global_name = 1001;

int main(void){
   int global_name = 1;  // Local variable

   cout << "Local variable value " << global_name << '\n';
   cout << "Global variable value " << ::global_name << '\n';
   
   return 0;
}
#endif
