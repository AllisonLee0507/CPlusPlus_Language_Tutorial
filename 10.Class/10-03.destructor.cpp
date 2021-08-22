#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
public: 
	int x; 
	
	MyClass();  // constructor 
	~MyClass(); // destructor 
};   
 
// Implement MyClass constructor. 
MyClass::MyClass() { 
	x = 10; 
}   
 
// Implement MyClass destructor. 
MyClass::~MyClass() { 
	cout << "Destructing...\n"; 
} 
   
int main(void)
{   
	MyClass ob1; 
	MyClass ob2; 
	
	cout << ob1.x << " " << ob2.x << "\n"; 
	
	return 0; 
}
#endif


#if 0
#include <fstream>
#include <iostream>
using namespace std;

class MyClass
{
private:
       char msg[20];
       int loopcounter;
       fstream myfile;
       
public:
  void display(); 
  MyClass();
  ~MyClass();
};

MyClass::MyClass()
{
	myfile.open("input.txt",ios::in);
	myfile.getline(msg,20);
}

MyClass::~MyClass()
{
	myfile.close();
}

void MyClass::display()
{
	cout << msg << "\n";
}

int main()
{
	MyClass obj;
	obj.display();
	
	return 0;
}
#endif



#if 0
#include <iostream>

class Animal
{
public:
	Animal():itsAge(1) { std::cout << "Animal constructor...\n"; }
	virtual ~Animal() { std::cout << "Animal destructor...\n"; }
virtual void Speak() const { std::cout << "Animal speak!\n"; }
protected:
	int itsAge;
};

class Cat: public Animal
{
public:
	Cat() { std::cout << "Cat constructor...\n"; }
	~Cat() { std::cout << "Cat destructor...\n"; }
	void Speak()const { std::cout << "Meow!\n"; }
};

int main(void)
{
	Animal *pCat = new Cat;
	pCat->Speak();
	return 0;
}
#endif



#if 0
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class MyClass 
{
public:
	MyClass( int, string ); // constructor
	~MyClass();             // destructor
private:
	int objectID;
	string message; 
};

MyClass::MyClass( int ID, string s )
{
	objectID = ID;
	message = s; 
	
	cout << "Object " << objectID << " constructor runs " << message << endl;
}
MyClass::~MyClass()
{ 
	cout << "Object " << objectID << " destructor runs " << message << endl; 
}

void create( void );
MyClass first( 1, "(global before main)" );

int main()
{
	MyClass second( 2, "(local automatic in main)" );
	static MyClass third( 3, "(local static in main)" );
	
	create(); // call function to create objects
	
	MyClass fourth( 4, "(local automatic in main)" );
	
	return 0;
}
void create( void )
{
	cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
	MyClass fifth( 5, "(local automatic in create)" );
	static MyClass sixth( 6, "(local static in create)" );
	cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}
#endif
