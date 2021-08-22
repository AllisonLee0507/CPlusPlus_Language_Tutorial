#if 0
#include <iostream> 
using namespace std;

class MyClass {
	int i;
public:
	MyClass(int i) {
		i = i;
	}

	int getI() { return i; }
	void setI(int i) { i = i; }
};

void display(MyClass ob)
{
	cout << ob.getI() << '\n';
}

void change(MyClass ob)
{
	ob.setI(100); // no effect on argument 

	cout << "Value of ob inside change(): ";
	display(ob);
}

int main(void)
{
	MyClass a(10);

	cout << "Value of a before calling change(): ";
	display(a);

	change(a);
	cout << "Value of a after calling change(): ";
	display(a);

	return 0;
}
#endif


#if 0
#include <iostream> 
using namespace std;

class MyClass {
	int val;
public:
	MyClass(int i) {
		val = i;
		cout << "Inside constructor\n";
	}

	~MyClass() { cout << "Destructing\n"; }
	int getI() { return val; }
};

void display(MyClass ob)
{
	cout << ob.getI() << '\n';
}

int main(void)
{
	MyClass a(10);

	cout << "Before calling display().\n";
	display(a);
	cout << "After display() returns.\n";

	return 0;
}
#endif




#if 0
#include <iostream> 
using namespace std;

class MyClass {
	int val;
	int copynumber;
public:

	MyClass(int i) {
		val = i;
		copynumber = 0;
		cout << "Inside normal constructor\n";
	}

	// Copy constructor 
	MyClass(const MyClass &o) {
		val = o.val;
		copynumber = o.copynumber + 1;
		cout << "Inside copy constructor.\n";
	}

	~MyClass() {
		if (copynumber == 0)
			cout << "Destructing original.\n";
		else
			cout << "Destructing copy " << copynumber << "\n";
	}

	int getVal() { return val; }
};

void display(MyClass ob)
{
	cout << ob.getVal() << '\n';
}

int main(void)
{
	MyClass a(10);

	display(a);

	return 0;
}
#endif




#if 0
#include <iostream>

class MyClass
{
public:
	MyClass();                    // constructor
	MyClass(MyClass&);             // copy constructor
	~MyClass();                    // destructor
};

MyClass::MyClass()
{
	std::cout << "Constructor...\n";
}

MyClass::MyClass(MyClass&)
{
	std::cout << "Copy Constructor...\n";
}

MyClass::~MyClass()
{
	std::cout << "Destructor...\n";
}

MyClass FunctionOne(MyClass obj);
MyClass* FunctionTwo(MyClass *obj);

int main()
{
	std::cout << "Making an object...\n";
	MyClass myObject;
	std::cout << "Calling FunctionOne...\n";
	FunctionOne(myObject);
	std::cout << "Calling FunctionTwo...\n";
	FunctionTwo(&myObject);
	return 0;
}

// FunctionOne, passes by value
MyClass FunctionOne(MyClass obj)
{
	std::cout << "Function One. Returning...\n";
	return obj;
}

// functionTwo, passes by reference
MyClass* FunctionTwo(MyClass  *obj)
{
	std::cout << "Function Two. Returning...\n";
	return obj;
}
#endif




#if 0
#include <iostream>

class Animal
{
public:
	Animal() :itsAge(1) {  }
	~Animal() { }
	virtual void Speak() const { std::cout << "Animal speak!\n"; }
protected:
	int itsAge;
};

class Dog : public Animal
{
public:
	void Speak()const { std::cout << "Woof!\n"; }
};

class Cat : public Animal
{
public:

};

void ValueFunction(Animal);
void PtrFunction(Animal*);
void RefFunction(Animal&);

int main(void)
{
	Animal* ptr = 0;
	int choice;
	ptr = new Dog;

	PtrFunction(ptr);
	RefFunction(*ptr);
	ValueFunction(*ptr);

	ptr = new Cat;
	PtrFunction(ptr);
	RefFunction(*ptr);
	ValueFunction(*ptr);


	ptr = new Animal;
	PtrFunction(ptr);
	RefFunction(*ptr);
	ValueFunction(*ptr);

	return 0;
}

void ValueFunction(Animal AnimalValue)
{
	AnimalValue.Speak();
}

void PtrFunction(Animal * pAnimal)
{
	pAnimal->Speak();
}

void RefFunction(Animal & rAnimal)
{
	rAnimal.Speak();
}
#endif




#if 0
#include <iostream>
using namespace std;

class myclass {
	int i;
public:
	myclass(int n);
	~myclass();
	void set_i(int n) { i = n; }
	int get_i() { return i; }
};

myclass::myclass(int n)
{
	i = n;
	cout << "Constructing " << i << "\n";
}

myclass::~myclass()
{
	cout << "Destroying " << i << "\n";
}

void f(myclass ob);

int main()
{
	myclass o(1);

	f(o);
	cout << "This is i in main: ";
	cout << o.get_i() << "\n";

	return 0;
}

void f(myclass ob)
{
	ob.set_i(2);

	cout << "This is local i: " << ob.get_i();
	cout << "\n";
}
#endif
