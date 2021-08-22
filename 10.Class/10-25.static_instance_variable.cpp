#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  static int num; 
public: 
  void setI(int i) { num = i; }; 
  void display() { cout << num << " "; } 
}; 
 
int MyClass::num; // define num 
 
int main(void)
{ 
	MyClass a, b; 
	
	a.display(); // prints 0 
	b.display(); // prints 0 
	
	a.setI(10); // set static num to 10 
	
	a.display(); // prints 10 
	b.display(); // also prints 10 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
public: 
	static int num; 
	void display() { cout << num << endl; } 
}; 
 
int MyClass::num; // define num 
 
int main(void)
{ 
	MyClass a, b; 
	
	// Set num through its class name. 
	MyClass::num = 100; 
	
	a.display();
	b.display();
	
	// Set num through an object. 
	a.num = 200; 
	
	a.display();
	b.display();
	
	return 0; 
}
#endif



#if 0
#include <iostream>

class MyClass
{
public:
	MyClass(int age = 1):intValue(age){
		InstanceCount++; 
	}
	virtual ~MyClass() { 
		InstanceCount--; 
	}
	virtual int getValue() { 
		return intValue; 
	}
	virtual void setValue(int age) { 
		intValue = age; 
	}
	static int InstanceCount;

private:
	int intValue;

};

int MyClass::InstanceCount = 0;

int main(void)
{
	const int count = 5;
	MyClass *MyClassHouse[count];
	int i;
	
	for (i = 0; i<count; i++)
		MyClassHouse[i] = new MyClass(i);
	
	for (i = 0; i<count; i++)
	{
		std::cout << "There are ";
		std::cout << MyClass::InstanceCount;
		std::cout << " left!\n";
		std::cout << "Deleting the one which is ";
		std::cout << MyClassHouse[i]->getValue();
		delete MyClassHouse[i];
		MyClassHouse[i] = 0;
	}
	return 0;
}
#endif

