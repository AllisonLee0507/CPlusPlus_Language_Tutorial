#if 0
#include <iostream> 
#include <new> 
using namespace std; 
 
int main(void)
{
	int *p; 
	
	try { 
		p = new int; // allocate space for an int 
	} catch (bad_alloc xa) { 
		cout << "Allocation Failure\n"; 
		return 1; 
	} 
	
	*p = 100; 
	
	cout << "At " << p << " is the value " << *p << "\n"; 
	
	delete p; 
	
	return 0; 
}
#endif


#if 0
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class Point {
	int x, y;
public:
	Point() {}
	Point(int px, int py) {
		x = px;
		y = py;
	}

	void show() {
		cout << x << " ";
		cout << y << "\n";
	}
};

// Global new
void *operator new(size_t size)
{
	void *p;
	
	p =  malloc(size);
	if(!p) {
		bad_alloc ba;
		throw ba;
	}
	return p;
}

// Global delete
void operator delete(void *p)
{
  free(p);
}

int main(void)
{
	Point *p1, *p2;
	float *f;
	
	try {
		p1 = new Point (10, 20);
	} catch (bad_alloc xa) {
		cout << "Allocation error for p1.\n";
		return 1;;
	}
	
	try {
		p2 = new Point (-10, -20);
	} catch (bad_alloc xa) {
		cout << "Allocation error for p2.\n";
		return 1;;
	}
	
	try {
		f = new float; // uses overloaded new, too
	} catch (bad_alloc xa) {
		cout << "Allocation error for f.\n";
		return 1;;
	}
	
	*f = 10.10F;
	cout << *f << "\n";
	
	p1->show();
	p2->show();
	
	delete p1;
	delete p2;
	delete f;
	
	return 0;
}
#endif



#if 0
#include <iostream> 
#include <new> 
using namespace std; 
 
int main(void)
{
	int *p; 
	
	try { 
		p = new int (87); // initialize to 87 
	} catch (bad_alloc xa) { 
		cout << "Allocation Failure\n"; 
		return 1; 
	} 
	
	cout << "At " << p << " is the value " << *p << "\n"; 
	
	delete p; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <new> 
using namespace std; 
 
int main(void)
{
	int *p, i; 
	
	try { 
		p = new int [10]; // allocate 10 integer array 
	} catch (bad_alloc xa) { 
		cout << "Allocation Failure\n"; 
		return 1; 
	} 
	
	for(i=0; i<10; i++ ) 
		p[i] = i; 
	
	for(i=0; i<10; i++) 
		cout << p[i] << " "; 
	
	delete [] p; // release the array 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <new> 
using namespace std; 
 
class Rectangle { 
	int width; 
	int height; 
public: 
	Rectangle(int w, int h) { 
		width = w; 
		height = h; 
		cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
	} 
	
	~Rectangle() {  
		cout << "Destructing " << width << " by " << height << " rectangle.\n"; 
	}  
	
	int area() { 
		return width * height; 
	} 
}; 
 
int main(void)
{ 
	Rectangle *p; 
	
	try { 
		p = new Rectangle(10, 8); 
	} catch (bad_alloc xa) { 
		cout << "Allocation Failure\n"; 
		return 1; 
	} 
	
	cout << "Area is " << p->area(); 
	
	delete p; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <new> 
using namespace std; 
 
class Rectangle { 
	int width; 
	int height; 
public: 
	Rectangle(int w, int h) { 
		width = w; 
		height = h; 
		cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
	} 
	
	~Rectangle() {  
		cout << "Destructing " << width << " by " << height << " rectangle.\n"; 
	}  
	
	int area() { 
		return width * height; 
	} 
};
 
int main(void)
{
	Rectangle *p; 
	
	try { 
		p = new Rectangle(10, 8); 
	} catch (bad_alloc xa) { 
		cout << "Allocation Failure\n"; 
		return 1; 
	} 
	
	cout << "Area is " << p->area(); 
	
	delete p; 
	
	return 0; 
}
#endif



#if 0
#include <iostream> 
#include <new> 
using namespace std; 
 
class Rectangle { 
	int width; 
	int height; 
public: 
	Rectangle(int w, int h) { 
		width = w; 
		height = h; 
		cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
	} 
	
	~Rectangle() {  
		cout << "Destructing " << width << " by " << height << " rectangle.\n"; 
	}  

	int area() { 
		return width * height; 
	} 
}; 
 
int main(void)
{
	Rectangle *p; 
	
	try { 
		p = new Rectangle(10, 8); 
	} catch (bad_alloc xa) { 
		cout << "Allocation Failure\n"; 
		return 1; 
	} 
	
	cout << "Area is " << p->area(); 
	
	delete p; 
	
	return 0; 
}
#endif



#if 0
#include <iostream>  
#include <cstring>       
using namespace std;  

class String {  
 private:  
    char* str;
 public:  
    String(char* s){  
       int length = strlen(s);   
       str = new char[length+1]; 
       strcpy(str, s);           
    }  
    ~String() {  
       delete[] str;             
    }  
    void display(){  
       cout << str << endl;  
    }  
};  

int main(void)
{
	String s1 = "this is a test";  
	
	cout << "s1="; 
	s1.display();  
	return 0;  
}
#endif



#if 0
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class Point {
  int x, y;
public:
	Point() {x = y = 0;}
	Point(int px, int py) {
		x = px;
		y = py;
	}
	
	void show() {
		cout << x << " ";
		cout << y << "\n";
	}
	
	void *operator new(size_t size);
	void operator delete(void *p);
	
	void *operator new[](size_t size);
	void operator delete[](void *p);
};

// new overloaded relative to Point.
void *Point::operator new(size_t size)
{
	void *p;
	
	cout << "In overloaded new.\n";
	p =  malloc(size);
	if(!p) {
		bad_alloc ba;
		throw ba;
	}
	return p;
}

// delete overloaded relative to Point.
void Point::operator delete(void *p)
{
	cout << "In overloaded delete.\n";
	free(p);
}

// new overloaded for Point arrays.
void *Point::operator new[](size_t size)
{
	void *p;
	
	cout << "Using overload new[].\n";
	p =  malloc(size);
	if(!p) {
		bad_alloc ba;
		throw ba;
	}
	return p;
}

// delete overloaded for Point arrays.
void Point::operator delete[](void *p)
{
	cout << "Freeing array using overloaded delete[]\n";
	free(p);
}

int main(void)
{
	Point *p1, *p2;
	int i;
	
	try {
		p1 = new Point (10, 20); // allocate an object
	} catch (bad_alloc xa) {
		cout << "Allocation error for p1.\n";
		return 1;;
	}
	
	try {
		p2 = new Point [10]; // allocate an array
	} catch (bad_alloc xa) {
		cout << "Allocation error for p2.\n";
		return 1;;
	}
	
	p1->show();
	
	for(i=0; i<10; i++)
		p2[i].show();
	
	delete p1; // free an object
	delete [] p2; // free an array
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <new>
#include <cstring>
using namespace std;
   
class balance {
	double cur_bal;
	char name[80];
public:
	balance(double n, char *s) {
		cur_bal = n;
		strcpy(name, s);
	}
	~balance() {
		cout << "Destructing ";
		cout << name << "\n";
	}
	void get_bal(double &n, char *s) {
		n = cur_bal;
		strcpy(s, name);
	}
};
   
int main(void)
{
	balance *p;
	char    s[80];
	double  n;
	
	// this version uses an initializer
	try {
	p = new balance (1.1, "A");
	} catch (bad_alloc xa) {
	cout << "Allocation Failure\n";
	return 1;
	}
	
	p->get_bal(n, s);
	
	cout << s << "'s balance is: " << n;
	cout << "\n";
	
	delete p;
	
	return 0;
}
#endif

