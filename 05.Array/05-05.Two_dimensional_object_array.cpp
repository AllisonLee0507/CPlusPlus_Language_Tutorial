#if 0
#include <iostream> 
using namespace std; 
 
class MyClass { 
  int x, y; 
public: 
  MyClass(int i, int j) { x = i; y = j; } 
  int getX() { return x; } 
  int getY() { return y; } 
}; 
 
int main(void) 
{ 
	MyClass obs[4][2] = { 
		MyClass(1, 2), MyClass(3, 4),  
		MyClass(5, 6), MyClass(7, 8), 
		MyClass(9, 10), MyClass(11, 12), 
		MyClass(13, 14), MyClass(15, 16) 
	}; 
	
	int i; 
	
	for(i=0; i < 4; i++) { 
		cout << obs[i][0].getX() << ' '; 
		cout << obs[i][0].getY() << "\n"; 
		cout << obs[i][1].getX() << ' '; 
		cout << obs[i][1].getY() << "\n"; 
	} 
	
	return 0; 
}
#endif
