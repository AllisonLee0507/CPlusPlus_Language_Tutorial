#if 0
#include <iostream.h>
#include <math.h>

class A;
class B
{
int sum;
public:
    B(){ sum=1;}
    B(int a,int b){sum=a*a+b*b;}
    int Larger(B b,A a);
};

class A //B must be before A, for A references the B::Larger()
{
friend int B::Larger(B b,A a);//use  B::Larger()!
private:int num;
public:
    A(){num=1;}
    A(int a,int b){num=4*a+b;}
    void Display(void){cout<<num<< endl;}
};
int B::Larger(B b,A a)
{
 return (b.sum > a.num);
}

int main(void)
{
    B objB(1,2);
    A objA(3,3);
    if(objB.Larger(objB,objA)) {
        cout << "B obj is Larger , the small num is ";
        objA.Display();
    }else{
        cout << "B obj is not Larger\n";
    }
    return 0;
}
#endif
