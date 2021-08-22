#if 0
#include <iostream> 
using namespace std;

int f(const int *val);

int main(void)
{
	int result;
	int v = 10;

	result = f(&v);

	cout << v << " fd is " << result;
	cout << "\n";

	return 0;
}

int f(const int *val)
{
	return -*val;
}
#endif


#if 0
#include <iostream>
class MyType
{
public:
	MyType();
	MyType(int initialValue);
	~MyType(){}
	int GetItsVal()const { return itsVal; }
	void SetItsVal(int x) { itsVal = x; }
	MyType Add(const MyType &);

private:
	int itsVal;
};

MyType::MyType(int initialValue) : itsVal(initialValue) {}
MyType::MyType() : itsVal(0) {}
MyType MyType::Add(const MyType & rhs)
{
	return MyType(itsVal + rhs.GetItsVal());
}

int main(void)
{
	MyType varOne(2), varTwo(4), varThree;
	varThree = varOne.Add(varTwo);
	std::cout << "varOne: " << varOne.GetItsVal() << std::endl;
	std::cout << "varTwo: " << varTwo.GetItsVal() << std::endl;
	std::cout << "varThree: " << varThree.GetItsVal() << std::endl;

	return 0;
}
#endif
