#if 0
class ThreeDimension {  
public: 
	int X; 
	int Y;    
	int Z;        
	
	int range();   // compute and return the range 
};
#endif


#if 0
#include <iostream> 
using namespace std; 
 
// Declare the ThreeDimension class. 
class ThreeDimension {  
public: 
	int X; 
	int Y; 
	int Z; 
	
	int range();   
}; 
 
// Implement the range member function.  
int ThreeDimension::range() { 
	return Z * Y; 
} 
 
int main(void)
{  
	ThreeDimension aDimension; 
	ThreeDimension bDimension; 
	
	int range1, range2;  
	
	// Assign values to fields in aDimension. 
	aDimension.X = 7; 
	aDimension.Y = 16; 
	aDimension.Z = 21; 
	
	// Assign values to fields in bDimension. 
	bDimension.X = 2; 
	bDimension.Y = 14; 
	bDimension.Z = 12; 
	
	// Compute the ranges assuming a full tank of gas. 
	range1 = aDimension.range(); 
	range2 = bDimension.range(); 
	
	cout << range1 << "\n";  
	
	cout << range2;  
	
	return 0; 
}
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

class MyClass 
{
public: 
	void setX( int value )
	{
		x = value;
	}
	void print() 
	{ 
		cout << x << endl; 
	}
private:
	int x;  
};

int main(void)
{
	MyClass obj; 
	MyClass *objPtr = &obj;
	MyClass &objRef = obj;
	
	obj.setX(1);
	obj.print(); 
	
	objRef.setX(2);
	objRef.print();
	
	objPtr->setX(3);
	objPtr->print();
	
	return 0;  
}
#endif



#if 0
#include <iostream>
 
class Rectangle
{
public:
	Rectangle(int width, int height);
	~Rectangle(){}
	
	// overloaded class function display
	void display() const;
	void display(int aWidth, int aHeight) const;

private:
	int itsWidth;
	int itsHeight;
};

Rectangle::Rectangle(int width, int height)
{
	itsWidth = width;
	itsHeight = height;
}


void Rectangle::display() const
{
	display( itsWidth, itsHeight);
}


void Rectangle::display(int width, int height) const
{
	for (int i = 0; i<height; i++)
	{
		for (int j = 0; j< width; j++)
		{
			std::cout << "+";
		}
		std::cout << "\n";
	}
}
 
int main(void)
{
	Rectangle theRect(30,5);
	std::cout << "display(): \n";
	theRect.display();
	std::cout << "\ndisplay(40,2): \n";
	theRect.display(40,2);
	return 0;
}
#endif



#if 0
#include <iostream>


class Rectangle
{
public:
	Rectangle(int width, int height);
	~Rectangle(){}
	void display(int aWidth, int aHeight, 
	bool UseCurrentVals = false) const;

private:
	int itsWidth;
	int itsHeight;
};


Rectangle::Rectangle(int width, int height): itsWidth(width), itsHeight(height) {}                   

void Rectangle::display(int width, int height, bool UseCurrentValue) const
{
	int printWidth;
	int printHeight;
	
	if (UseCurrentValue == true)
	{
		printWidth = itsWidth;       
		printHeight = itsHeight;
	}
	else
	{
		printWidth = width;         
		printHeight = height;
	}
	
	for (int i = 0; i<printHeight; i++)
	{
		for (int j = 0; j< printWidth; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}

int main(void)
{
	Rectangle theRect(30,5);
	
	std::cout << "display(0,0,true)...\n";
	theRect.display(0,0,true);
	
	std::cout <<"display(40,2)...\n";
	theRect.display(40,2);
	
	return 0;
}
#endif



#if 0
#include<iostream.h>
#include<iomanip.h>
class Rectangle
{
private:
  float length;
  float height;
public:
  Rectangle(){}
  Rectangle(float loge,float shge)
  {
    length=loge;
       height=shge;
  }
  void getlength()
  {
    cout<<"Input large edge:";
    cin>>length;
    cout<<"Input small edge:";
    cin>>height;
  }
  void showsquare()
  {  
    cout<<setprecision(3) <<length*height<<endl;
  }
  void addsquare(Rectangle r1,Rectangle r2);
  void addedge(Rectangle r1,Rectangle r2);
};

void Rectangle::addsquare(Rectangle r1,Rectangle r2)
{
  length=r1.length+r2.length;
  height=r1.height+r2.height;
  cout<<"\n Total of Rectangle square:"
      <<r1.length*r1.height+r2.length*r2.height;
}

void Rectangle::addedge(Rectangle r1,Rectangle r2)
{
  length=r1.length+r2.length;
  height=r1.height+r2.height;
  cout<<"\n Toatal of Rectangle length:"
      <<setprecision(3)<<(length+height)*2;
}

int main(void)
{
	Rectangle room1(15.5,6.5);
	Rectangle room2,room3;
	
	room2.getlength();
	cout<<"Square of room1 Rectangle is:";
	
	room1.showsquare();
	cout<<"square of room2 Rectangle is:";
	
	room2.showsquare();
	room3.addsquare(room1,room2);
	room3.addedge(room1,room2);
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;


class absolute_value {
public:
	int number(int);
	double number(double);
};
  
int absolute_value::number(int test_data)
{
	int answer;
	
	answer=abs(test_data);
	return (answer);
}

double absolute_value::number(double test_data)
{
	double answer;
	
	answer=fabs(test_data);
	return (answer);
}

int main(void)
{
	absolute_value neg_number;
	
	cout << "The absolute value is "  << neg_number.number(-583) << endl;
	cout << "The absolute value is "  << neg_number.number(-583.1749) << endl;
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

const double DEG_TO_RAD=0.0174532925;
  
class trigonometric {
	double angle;
	double answer_sine;
	double answer_cosine;
	double answer_tangent;

public:
	void trig_calc(double);
	void trig_calc(char *);
};

void trigonometric::trig_calc(double degrees)
{
	angle=degrees;
	answer_sine=sin(angle * DEG_TO_RAD);
	answer_cosine=cos(angle * DEG_TO_RAD);
	answer_tangent=tan(angle * DEG_TO_RAD);
	
	cout << "\nFor an angle of " << angle << " degrees." << endl;
	cout << "The sine is " << answer_sine << endl;
	cout << "The cosine is " << answer_cosine << endl;
	cout << "The tangent is " << answer_tangent << endl;
}
  
void trigonometric::trig_calc(char *dat)
{
	char *deg,*min,*sec;
	
	deg=strtok(dat,"d ");  
	min=strtok(0,"m ");
	sec=strtok(0,"s");
	
	angle=atof(deg)+((atof(min))/60.0)+((atof(sec))/360.0);
	answer_sine=sin(angle * DEG_TO_RAD);
	answer_cosine=cos(angle * DEG_TO_RAD);
	answer_tangent=tan(angle * DEG_TO_RAD);
	
	cout << "\nFor an angle of " << angle << " degrees." << endl;
	cout << "The sine is " << answer_sine << endl;
	cout << "The cosine is " << answer_cosine << endl;
	cout << "The tangent is " << answer_tangent << endl;
}

int main(void)
{
	trigonometric data;
	
	data.trig_calc(75.0);
	
	char str1[] = "35d 75m 20s";
	data.trig_calc(str1);
	
	data.trig_calc(145.72);
	
	char str2[] = "65d 45m 30s";
	data.trig_calc(str2);
	
	return 0;
}
#endif



#if 0
#include <iostream>  
using namespace std;  
#include <process.h>)  

class Stack{  
protected:                   
	enum { MAX = 3 };         
	int st[MAX];              
	int top;                  
public:  
	Stack()                   
	{ top = -1; }  
	void push(int var)        
	{ st[++top] = var; }  
	int pop()                 
	{ return st[top--]; }  
};  

class Stack2 : public Stack  
{  
public:  
	void push(int var)
	{  
		if(top >= MAX-1){ cout << "\nError: stack is full"; exit(1); }  
		Stack::push(var);
	}  
	int pop()           
	{  
		if(top < 0)	{ cout << "\nError: stack is empty\n"; exit(1); }  
		return Stack::pop();     
	}  
};  

int main(void)  
{  
	Stack2 s1;  
	
	s1.push(11);                   
	s1.push(22);  
	s1.push(33);  
	
	cout << endl << s1.pop();      
	cout << endl << s1.pop();  
	cout << endl << s1.pop();  
	cout << endl << s1.pop();        
	cout << endl;  
	return 0;  
}
#endif
