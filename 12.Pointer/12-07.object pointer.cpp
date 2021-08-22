#if 0
#include <iostream>
using namespace std;

class cl {
	int i;
public:
	cl(int j) { i = j; }
	int get_i() { return i; }
};

int main(void)
{
	cl ob(88), *p;

	p = &ob; // get address of ob

	cout << p->get_i(); // use -> to call get_i()

	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

class cl {
	int i;
public:
	cl() { i = 0; }
	cl(int j) { i = j; }
	int get_i() { return i; }
};

int main(void)
{
	cl ob[3] = { 1, 2, 3 };
	cl *p;
	int i;

	p = ob; // get start of array
	for (i = 0; i<3; i++) {
		cout << p->get_i() << "\n";
		p++; // point to next object
	}

	return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

class cl {
public:
	int i;
	cl(int j) { i=j; }
};

int main(void)
{
	cl ob(1);
	int *p;

	p = &ob.i; // get address of ob.i

	cout << *p; // access ob.i via p

	return 0;
}
#endif



#if 0
#include <iostream>  
using namespace std;

class Distance
{
private:  
	int feet;  
	float inches;
public:
	void getdist() {
		cout << "\nEnter feet: ";
		cin >> feet;
		cout << "Enter inches: ";
		cin >> inches;
	}
	void showdist(){
		cout << feet << "\'-" << inches << '\"';
	}
};
int main(void)
{
	Distance& dist = *(new Distance);

	dist.getdist();
	dist.showdist();
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>  
using namespace std;

class person{
protected:
	char name[40];
public:
	void setName(){
		cout << "Enter name: ";
		cin >> name;
	}
	void printName()
	{
		cout << "\n   Name is: " << name;
	}
};

int main(void)
{
	person* persPtr[100];
	int n = 0;
	char choice;

	do{
		persPtr[n] = new person;
		persPtr[n]->setName();
		n++;
		cout << "Enter another (y/n)? ";
		cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j<n; j++){
		cout << "\nPerson number " << j + 1;
		persPtr[j]->printName();
	}
	cout << endl;
	return
#endif
