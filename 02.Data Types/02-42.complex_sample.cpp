#if 0
#include <iostream>
#include <math.h>
using namespace std;
class complex {
public:
   complex(double r) { real = r; imag = 0; }
   void  assign(double r, double i) { real = r; imag = i; }
   void  print() { cout << real << " + " << imag << "i "; }
   operator double() { return (sqrt(real * real + imag * imag));}
   friend ostream& operator<<(ostream& out, complex x);
private:
   double real, imag;
};

ostream& operator<<(ostream& out, complex x)
{
   out << x.real << " + " << x.imag << "i ";
   return out;
}

int main(void)
{
   complex c1(50.3);

   cout << c1;
   
   return 0;
}
#endif

