#if 0
#include <iostream.h>
#include <stdlib.h>

#define Length 5

struct Employee {
	char title [50];
	int year;
}employee [Length];

void printemployee (Employee employee);

int main(void)
{
	char buffer [50];
	
	for (int n=0; n<Length; n++)
	{
		cout << "Enter title: ";
		cin.getline (employee[n].title,50);
		cout << "Enter year: ";
		cin.getline (buffer,50);
		employee[n].year = atoi (buffer);
	}
	cout << "\nYou have entered these employees:\n";
	
	for (int n=0; n<Length; n++)
		printemployee (employee[n]);
	
	return 0;
}

void printemployee (Employee employee)
{
	cout << employee.title;
	cout << " (" << employee.year << ")\n";
}
#endif


#if 0
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	char name[20];
	long num;
	int age;
	char sex;
	float score;
};

int main(void)
{
	struct st student[3],*p;
	
	p=student;
	
	for(int i=0;p<student+3;p++,i++)
	{
		cout<<"Enter all data of student :["<<i<<"]\n";
		cin>>student[i].name;
		cin>>p->num;
		cin>>p->age;
		cin>>p->sex;
		cin>>p->score;
	}
	
	cout<<"record num name age sex score"<<"\n";
	
	p=student;
	
	for(int i=0;p<student+3;p++,i++)
		cout<<i<<p->name<<p->num<<p->age<<p->sex<<p->score<<"\n";

	return 0;
}
#endif

