#if 0
#include <iostream>
using std::cout; // this file uses std::cout

class Animal
{
public:
	Animal() :itsAge(1) {
		cout << "Animal constructor...\n";
	}
	virtual ~Animal() {
		cout << "Animal destructor...\n";
	}
	virtual void Speak() const {
		cout << "Animal speak!\n";
	}
protected:
	int itsAge;
};

class Cat : public Animal
{
public:
	Cat() {
		cout << "Cat constructor...\n";
	}
	~Cat() {
		cout << "Cat destructor...\n";
	}
	void Speak()const {
		cout << "Meow\n";
	}
	void Miao() const {
		cout << "Miao\n";
	}
};

class Dog : public Animal
{
public:
	Dog() {
		cout << "Dog Constructor...\n";
	}
	~Dog() {
		cout << "Dog destructor...\n";
	}
	void Speak()const {
		cout << "Woof!\n";
	}
};


int main(void)
{
	const int NumberAnimals = 3;
	Animal* animalArray[NumberAnimals];

	int i;

	animalArray[0] = new Dog;
	animalArray[1] = new Cat;
	animalArray[2] = new Cat;

	for (i = 0; i<NumberAnimals; i++)
	{
		animalArray[i]->Speak();

		Cat *pRealCat = dynamic_cast<Cat *> (animalArray[i]);

		if (pRealCat)
			pRealCat->Miao();
		else
			cout << "not a cat!\n";

		delete animalArray[i];
		cout << "\n";
	}

	return 0;
}

#endif


#if 0
#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
	virtual void f() {}
};

class Derived : public Base {
public:
	void derivedOnly() {
		cout << "Is a Derived Object.\n";
	}
};

int main(void)
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	// use typeid
	bp = &b_ob;
	if (typeid(*bp) == typeid(Derived)) {
		dp = (Derived *)bp;
		dp->derivedOnly();
	}
	else
		cout << "Cast from Base to Derived failed.\n";

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Inside Base\n";
	}
};

class Derived : public Base {
public:
	void f() {
		cout << "Inside Derived\n";
	}
};

int main(void)
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	dp = dynamic_cast<Derived *> (&b_ob);
	if (dp)
		cout << "Error\n";
	else
		cout << "Cast from Base * to Derived * not OK.\n";

	cout << endl;

	return
#endif



#if 0
#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Inside Base\n";
	}
};

class Derived : public Base {
public:
	void f() {
		cout << "Inside Derived\n";
	}
};

int main(void)
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	bp = dynamic_cast<Base *> (&b_ob);
	if (bp) {
		cout << "Cast from Base * to Base * OK.\n";
		bp->f();
	}
	else
		cout << "Error\n";

	cout << endl;

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Inside Base\n";
	}
};

class Derived : public Base {
public:
	void f() {
		cout << "Inside Derived\n";
	}
};

int main(void)
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	dp = dynamic_cast<Derived *> (&d_ob);
	if (dp) {
		cout << "Cast from Derived * to Derived * OK.\n";
		dp->f();
	}
	else
		cout << "Error\n";

	cout << endl;

	return 0;
}
#endif

#if 0
#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Inside Base\n";
	}
};

class Derived : public Base {
public:
	void f() {
		cout << "Inside Derived\n";
	}
};

int main(void)
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	bp = dynamic_cast<Base *> (&d_ob);
	if (bp) {
		cout << "Cast from Derived * to Base * OK.\n";
		bp->f();
	}
	else
		cout << "Error\n";


	cout << endl;

	return 0;
}
#endif