#if 0
#include <cmath>
#include <iostream>
using namespace std;

// define the structures
struct DataStructure
{
	float radius;
	double angle;
};

struct ResultStructure
{
	float area;
	double sine;
	double cosine;
	double tangent;
};

ResultStructure compute(struct DataStructure mystruct);

int main(void)
{
	DataStructure input;
	ResultStructure output;
	
	input.radius = 3;
	
	input.angle = 0.8;
	
	output = compute(input);
	
	cout << " The area is "<< output.area << "\n";
	cout << " The sine of the angle is " << output.sine << "\n";
	cout << " The cosine of the angle is " << output.cosine << "\n";
	cout << " The tangent of the angle is " << output.tangent << "\n";
	
	return 0;
}

ResultStructure compute(struct DataStructure mystruct)
{
	ResultStructure answer;
	
	answer.area = pow(mystruct.radius,2);
	answer.sine = sin(mystruct.angle);
	answer.cosine = cos(mystruct.angle);
	answer.tangent = tan(mystruct.angle);
	
	return answer;
};
#endif


#if 0
using namespace std;

struct ResultStructure
{
	float base;
	float height;
	float area;
};

void f(struct ResultStructure &area);

int main(void) 
{
	ResultStructure myResultStructure;
	
	
	myResultStructure.base = 12;
	myResultStructure.height = 23;
	f(myResultStructure);
	
	cout << "The area is " << myResultStructure.area << " \n";
	return 0;
}


void f(ResultStructure &area)
{
	area.area = .5f * (area.base * area.height);
}
#endif



#if 0
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	char name[20];
	int num;
	float score[3];
};

void print(struct student *p)
{
	cout<<p->num<<"\n"<<p->name<<"\n"<<p->score[0]<<"\n"
	   <<p->score[1]<<"\n"<<p->score[2]<<"\n";
	cout<<" ";
}

int main(void)
{
	struct student stu;
	stu.num=12345;
	strcpy(stu.name,"li li");
	stu.score[0]=67.5;
	stu.score[1]=89;
	stu.score[2]=78.6;
	print(&stu);
}
#endif



#if 0
#include <iostream>  
using namespace std;  
const int SIZE = 4;  

struct part{  
	int modelnumber;              
	int partnumber;               
	float cost;                   
};  

int main(void)
{  
	int n;  
	part apart[SIZE];
	
	for(n=0; n<SIZE; n++){  
		cout << endl;  
		cout << "Enter model number: ";  
		cin >> apart[n].modelnumber;
		cout << "Enter part number: ";  
		cin >> apart[n].partnumber; 
		cout << "Enter cost: ";  
		cin >> apart[n].cost;       
	}  
	
	for(n=0; n<SIZE; n++) {  
		cout << "Model " << apart[n].modelnumber;  
		cout << "  Part "  << apart[n].partnumber;  
		cout << "  Cost "  << apart[n].cost << endl;  
	}  
	return 0;  
}
#endif
