#if 0
#include <iostream>
#include <cstdlib>               // For random number generator
#include <ctime>                 // For time function
using std::cout;
using std::endl;

class Box {
public:
	Box(double aLength, double aWidth, double aHeight):length(aLength), width(a	Width), height(aHeight) {}
	
	double volume() const {
		return length*width*height;
	}
	
	double getLength()  const { return length; }
	double getWidth() const { return width; }
	double getHeight()  const { return height; }
	
	inline bool operator<(const Box& aBox) const {
		return volume() < aBox.volume();
	}
	
	inline bool operator<(const double aValue) const {
		return volume() < aValue;
	}
	
private:
	double length;
	double width;
	double height;
};


int main(void)
{
	Box firstBox(17.0, 11.0, 5.0);
	
	if(firstBox < 100000){
		cout << "less than";
	}else{
		cout << "not less than";
	}
	
	return 0;
}
#endif

