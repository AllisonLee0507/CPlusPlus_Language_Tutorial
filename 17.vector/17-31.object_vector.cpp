#if 0
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class DailyTemp {
	int temp;
public:
	DailyTemp() { temp = 0; }
	DailyTemp(int x) { temp = x; }

	DailyTemp &operator=(int x) {
		temp = x; return *this;
	}

	double get_temp() { return temp; }
};

bool operator<(DailyTemp a, DailyTemp b)
{
	return a.get_temp() < b.get_temp();
}

bool operator==(DailyTemp a, DailyTemp b)
{
	return a.get_temp() == b.get_temp();
}

int main(void)
{
	vector<DailyTemp> v;
	unsigned int i;

	for (i = 0; i<7; i++)
		v.push_back(DailyTemp(60 + rand() % 30));

	cout << "Fahrenheit temperatures:\n";
	for (i = 0; i<v.size(); i++)
		cout << v[i].get_temp() << " ";

	cout << endl;

	// convert from Fahrenheit to Centigrade
	for (i = 0; i<v.size(); i++)
		v[i] = (int)(v[i].get_temp() - 32) * 5 / 9;

	cout << "Centigrade temperatures:\n";
	for (i = 0; i<v.size(); i++)
		cout << v[i].get_temp() << " ";

	return 0;
}
#endif


#if 0
#include <vector>
using namespace std;

class Element
{
public:
	Element() {}
	~Element() {}
};

int main(int argc, char** argv)
{
	vector<Element>*  elementVector = new vector<Element>(10);
	delete elementVector;

	return 0;
}
#endif



#if 0
#include <vector>
using namespace std;

class Element
{
public:
	Element() {}
	~Element() {}
};

int main(int argc, char** argv)
{
	vector<Element> elementVector;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>


class Person {
private:
	std::string name;
public:
	//...
	void print() const {
		std::cout << name << std::endl;
	}
	void printWithPrefix(std::string prefix) const {
		std::cout << prefix << name << std::endl;
	}
};

void foo(const std::vector<Person>& coll)
{
	using std::for_each;
	using std::bind2nd;
	using std::mem_fun_ref;

	// call member function print() for each element
	for_each(coll.begin(), coll.end(), mem_fun_ref(&Person::print));

	// call member function printWithPrefix() for each element
	// - "person: " is passed as an argument to the member function
	for_each(coll.begin(), coll.end(), bind2nd(mem_fun_ref(&Person::printWithPrefix), "person: "));
}


void ptrfoo(const std::vector<Person*>& coll)
// ^^^ pointer !
{
	using std::for_each;
	using std::bind2nd;
	using std::mem_fun;

	// call member function print() for each referred object
	for_each(coll.begin(), coll.end(),
		mem_fun(&Person::print));

	// call member function printWithPrefix() for each referred object
	// - "person: " is passed as an argument to the member function
	for_each(coll.begin(), coll.end(), bind2nd(mem_fun(&Person::printWithPrefix), "person: "));
}


int main(void)
{
	std::vector<Person> coll(5);
	foo(coll);

	std::vector<Person*> coll2;
	coll2.push_back(new Person);
	ptrfoo(coll2);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {         
	string firstName, lastName;
public:

	Employee(string fnam, string lnam) {
		firstName = fnam;
		lastName = lnam;
	}
	virtual void print() const {
		cout << firstName << " " << lastName << " ";
	}
	virtual ~Employee(){}
};

class Manager : public Employee {
	short level;
public:
	Manager(string fnam, string lnam, short lvl)
		: Employee(fnam, lnam), level(lvl) {}
	void print() const {
		Employee::print();
		cout << " works at level: " << level;
	}
	~Manager(){}
};

int main(void)
{
	vector<Employee*> empList;
	Employee* e1 = new Employee("A", "B");
	Employee* e2 = new Employee("C", "D");
	Employee* e3 = new Manager("E", "F", 2);
	Employee* e4 = new Manager("G", "H", 3);

	empList.push_back(e1);
	empList.push_back(e2);
	empList.push_back(e3);
	empList.push_back(e4);

	vector<Employee*>::iterator p = empList.begin();
	while (p < empList.end()) {
		(*p++)->print();
		cout << endl;
	}
	delete e1;
	delete e2;
	delete e3;
	delete e4;
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {                            
	string firstName, lastName;
public:
	Person(string fnam, string lnam) : firstName(fnam), lastName(lnam) {}
	virtual void print() const { cout << firstName << " " << lastName << " "; }
	virtual ~Person(){}
};

class Employee : public Person {
	string companyName;
public:
	Employee(string fnam, string lnam, string cnam)
		: Person(fnam, lnam), companyName(cnam) {}
	void print() const {
		Person::print();
		cout << companyName << " ";
	}
	~Employee(){}
};

class Manager : public Employee {
	short level;
public:
	Manager(string fnam, string lnam, string cnam, short lvl)
		: Employee(fnam, lnam, cnam), level(lvl) {}

	void print() const {
		Employee::print();
		cout << level;
	}
	~Manager(){}
};
int main(void)
{
	vector<Employee*> empList;

	Employee* e1 = new Employee("A", "B", "C");
	Employee* e2 = new Employee("D", "E", "F");
	Employee* m3 = new Manager("G", "H", "I", 2);
	Employee* m4 = new Manager("J", "J", "L", 2);

	empList.push_back(e1);
	empList.push_back(e2);
	empList.push_back(m3);
	empList.push_back(m4);

	vector<Employee*>::iterator p = empList.begin();
	while (p < empList.end()) {
		(*p++)->print();
		cout << endl;
	}

	delete e1;
	delete e2;
	delete m3;
	delete m4;

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>      
using namespace std;

class MyClass {
	int p;
public:
	MyClass() { p = 42; }
	MyClass(int q) { p = q; }
	int getp() const { return p; }
	void changeState(int pp) { p = pp; }
};

bool operator<(const MyClass& x1, const MyClass& x2) {
	return x1.getp() < x2.getp();
}
bool operator==(const MyClass& x1, const MyClass& x2) {
	return x1.getp() == x2.getp();
}

void print(vector<MyClass>);

int main(void)
{
	vector<MyClass> vec;

	MyClass x1(2);
	MyClass x2(3);
	MyClass x3(5);
	vec.push_back(x1);
	vec.push_back(x3);
	vec.push_back(x2);

	print(vec);
	x2.changeState(1000);

	print(vec);

	//vector elements initialized by MyClass's no-arg      constructor:
	vector<MyClass> vec_2(5);
	print(vec_2);
	vec_2.resize(7);
	print(vec_2);

	//uninitialized increase in the vector capacity:
	vec_2.reserve(10);
	cout << vec_2.capacity() << endl;
	print(vec_2);

	cout << vec_2[8].getp() << endl;

	vec_2[0] = MyClass(12);
	vec_2[1] = MyClass(36);
	vec_2[2] = MyClass(3);
	vec_2[3] = MyClass(56);
	vec_2[4] = MyClass(2);

	sort(vec_2.begin(), vec_2.end());

	print(vec_2);

	vec_2.clear();
	print(vec_2);
	cout << vec_2.capacity() << endl;

	return 0;
}

void print(vector<MyClass> v) {
	cout << "\nvector size is: " << v.size() << endl;
	vector<MyClass>::iterator p = v.begin();
	while (p != v.end())
		cout << (*p++).getp() << "  ";
	cout << endl << endl;
}
#endif
