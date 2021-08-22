#if 0
#include <iostream>
using namespace std;

class base {
protected:
  int i, j;
public:
  void setij(int a, int b) { i=a; j=b; }
  void showij() { cout << i << " " << j << "\n"; }
};


class derived : protected base{
  int k;
public:
  void setk() { 
    setij(10, 12); 
    
    k = i*j; 
  }

  void showall() { 
     cout << k << " "; 
     showij(); 
  }
};

int main(void)
{
	derived ob;
	
	ob.setk(); 
	ob.showall();
	
	return 0;
}
#endif


