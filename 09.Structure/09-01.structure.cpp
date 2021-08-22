#if 0
#include <memory>
#include <iostream>
using namespace std;

struct mystruct
{
       int i;
       int x;
       int y;
};
 
int main()
{

  mystruct source,destination;

  source.i = 1;
  source.x = 2;
  source.y = 3;

  memcpy(&destination,&source,sizeof(source));

  cout << destination.i << endl;
  cout << destination.x << endl;
  cout << destination.y << endl;

  return 0;
}
#endif


#if 0
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
       struct student
       {
               int num;
           char name[20];
           float score;
       };
       struct student stu[4];
       struct student *p;
       int i,temp;
       float max;
       for(i=0;i<=4;i++)
               cin>>stu[i].num>>stu[i].name>>stu[i].score;
       for(max=stu[0].score,i=1;i<4;i++){
               if(stu[i].score>max);
               {
                       max=stu[i].score;temp=i;
               }
    }
       p=stu+temp;
       cout<<"maxmum score:";
       cout<<"NO.:"<<p->num<<"NAME:"<<p->name<<"SCORE:"<<p->score<<"\n";
}
#endif



#if 0
#include <iostream.h>

struct Time
{
       int hh,mm,ss;
};

void Disp1(struct Time t);
void Disp2(const Time & t);

int main()
{
       Time t1,t2,*p;
       
       t1.hh=10;
       t1.mm=30;
       t1.ss=0;
       t2=t1;  
       t2.hh++;                        
       p = &t2;
    
    cout << "The t2 time is " << p->hh  << ":" << t2.mm << ":"<< t1.ss << endl;

       Disp1(t2);
       Disp2(t2);
       
       return 0;
}

void Disp1(struct Time t)
{
       cout << "The time is " << t.hh <<":" << t.mm << ":"<< t.ss << endl;
}

void Disp2(const Time & t)
{
       cout << "The time is " << t.hh <<":" << t.mm << ":"<< t.ss << endl;
}
#endif



#if 0
#include <iostream.h>

struct Time
{
               int hh,mm,ss;
};
int main()
{
   Time t1,t2,*p;
   t1.hh=10;
   t1.mm=30;
   t1.ss=0;  //10:30:0
   t2=t1;
   t2.hh++;                             //11:30:0
   p = &t2;

   cout << "The t2 time is " << p->hh  << ":" << t2.mm << ":"<< t1.ss << endl;

   return 0;
}
#endif



#if 0
#include <iostream>

using std::cout;
using std::endl;

#include <iostream>

struct Name {
  char firstname[80];
  char surname[80];
  
  void show();        
};

struct Date {
  int day;
  int month;
  int year;

  void show();        
};

struct Phone {
  int areacode;
  int number;

  void show();        
};

struct Person {
  Name name;
  Date birthdate;
  Phone number;

  void show();
  int age(Date& date);
};

void Name::show() {
    std::cout << firstname << " " << surname << std::endl;
}

void Date::show() {
    std::cout << month << "/" << day << "/" << year << std::endl;
}

void Phone::show() {
    std::cout << areacode << " " << number << std::endl;
}

void Person::show() {
    std::cout << std::endl;
    name.show();
    std::cout << "Brithday: ";
    birthdate.show();
    std::cout << "phone: ";
    number.show(); 
}

int Person::age(Date& date) {
    if(date.year <= birthdate.year)
      return 0;

    int years = date.year - birthdate.year;
    
    if((date.month>birthdate.month) || (date.month == birthdate.month && date.day>= birthdate.day))
       return years;
    else
       return --years;
}


int main() {
  Person her = {{ "L", "G" },      // Initializes Name member
                {1, 4, 1976 },     // Initializes Date member
                {999,5551234}     // Initializes Phone member
               };

  Person actress;
  actress = her;
  her.show();
  Date today = { 4, 4, 2007 };

  cout << endl << "Today is ";
  today.show();
  cout <<  endl; 

  cout << "Today " << actress.name.firstname << " is " 
       << actress.age(today) << " years old."
       << endl;
  return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

struct Box {
  double length;
  double width;
  double height;

  double volume();
};

double Box::volume() {
  return length * width * height;
}


int main() {
  Box aBox = { 1, 2, 3 };
  Box* pBox = &aBox;
 
  Box* pBox2 = new Box;
  pBox2->height = pBox->height+5.0;
  pBox2->length = pBox->length+3.0;
  pBox2->width = pBox->width+2.0;
  cout << "Volume of Box in the free store is " << pBox2->volume() << endl;

  delete pBox;
  delete pBox2;
  
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

struct Box {
  double length;
  double width;
  double height;
};

int main() {
  Box firstBox = { 80.0, 50.0, 40.0 };

  cout << firstBox.length
       << firstBox.width
       << firstBox.height
       << endl;
       
  Box secondBox = firstBox;   

  secondBox.length *= 1.1;
  secondBox.width *= 1.1;
  secondBox.height *= 1.1;

  cout << secondBox.length 
       << secondBox.width
       << secondBox.height
       << endl;
  
  return 0;
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

struct Box {
  double length;
  double width;
  double height;
};

int main() {
  Box firstBox = { 80.0, 50.0, 40.0 };

  cout << firstBox.length
       << firstBox.width
       << firstBox.height
       << endl;
       
  Box secondBox = firstBox;   

  secondBox.length *= 1.1;
  secondBox.width *= 1.1;
  secondBox.height *= 1.1;

  cout << secondBox.length 
       << secondBox.width
       << secondBox.height
       << endl;
  
  return 0;
}
#endif



#if 0
#include <iostream>
#include <math.h>
using namespace std;

struct math_operations {
 double data_value;
  
 void set_value(double ang) {
     data_value=ang;
 }
 double get_square(void) {
     double answer;
     answer=data_value*data_value;                          
     return (answer);
 }
 double get_square_root(void) {
     double answer;
     answer=sqrt(data_value);
     return (answer);
 }
} math;

int main( )
{
 math.set_value(35.63);

 cout << "The square of the number is: "
      << math.get_square( ) << endl;
 cout << "The square root of the number is: "
      << math.get_square_root( ) << endl;
 return (0);
}
#endif
