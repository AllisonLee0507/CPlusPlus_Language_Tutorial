#if 0
#include <iostream>
 
class MyType
{
public:
	MyType();
	MyType(int val);
	~MyType(){}
	int getValue()const { return myValue; }
	void setValue(int x) {myValue = x; }
	operator unsigned short();
private:
	int myValue;
};

MyType::MyType():myValue(0) {}
MyType::MyType(int val): myValue(val) {}
MyType::operator unsigned short ()
{
	return ( int (myValue) );
}

int main(void)
{
	MyType ctr(5);
	int theShort = ctr;
	std::cout << "theShort: " << theShort << std::endl;
	return 0;
}
#endif


