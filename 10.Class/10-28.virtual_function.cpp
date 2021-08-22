#if 0
#include <iostream> 
using namespace std; 
 
class BaseClass { 
public: 
  virtual void who() { // specify a virtual function 
    cout << "Base\n"; 
  } 
}; 
 
class DerivedClass1 : public BaseClass { 
public: 
  void who() { // redefine who() for DerivedClass1  
    cout << "First derivation\n"; 
  } 
}; 
 
class DerivedClass2 : public BaseClass { 
public: 
  void who() { // redefine who() for DerivedClass2 
    cout << "Second derivation\n"; 
  } 
}; 
 
int main() 
{ 
	BaseClass base_obj; 
	BaseClass *p; 
	DerivedClass1 DerivedClass1_obj; 
	DerivedClass2 DerivedClass2_obj; 
	
	p = &base_obj; 
	p->who();  // access BaseClass's who 
	
	p = &DerivedClass1_obj; 
	p->who(); // access DerivedClass1's who 
	
	p = &DerivedClass2_obj; 
	p->who();  // access DerivedClass2's who 
	
	return 0; 
}

#endif


#if 0
#include <iostream> 
using namespace std; 
 
class BaseClass { 
public: 
  virtual void who() { 
    cout << "Base\n"; 
  } 
}; 
 
class DerivedClass1 : public BaseClass { 
public: 
  void who() { 
    cout << "First derivation\n"; 
  } 
}; 
 
class DerivedClass2 : public BaseClass { 
// who() not defined 
}; 
 
int main() 
{ 
  BaseClass base_obj; 
  BaseClass *p; 
  DerivedClass1 DerivedClass1_obj; 
  DerivedClass2 DerivedClass2_obj; 
 
  p = &base_obj; 
  p->who();  // access BaseClass's who() 
 
  p = &DerivedClass1_obj; 
  p->who(); // access DerivedClass1's who() 
 
  p = &DerivedClass2_obj; 
  p->who(); /* access BaseClass's who() because 
               DerivedClass2 does not redefine it */ 
 
  return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
  double width; 
  double height; 
 
  char name[20]; 
public: 
  Shape() { 
    width = height = 0.0; 
    strcpy(name, "unknown"); 
  } 
 
  Shape(double w, double h, char *n) { 
    width = w; 
    height = h; 
    strcpy(name, n); 
  } 
 
  Shape(double x, char *n) { 
    width = height = x; 
    strcpy(name, n); 
  } 
 
  void display() { 
    cout << "Width and height are " << width << " and " << height << "\n"; 
  } 
 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
  char *getName() { return name; } 
 
  virtual double area() {   
    cout << "Error: area() must be overridden.\n";  
    return 0.0;  
  }   
 
}; 
 
class Triangle : public Shape { 
  char style[20];
public: 
 
  Triangle() { 
    strcpy(style, "unknown"); 
  } 
 
  Triangle(char *str, double w, double h) : Shape(w, h, "triangle") { 
    strcpy(style, str); 
  } 
   
  Triangle(double x) : Shape(x, "triangle") { 
    strcpy(style, "isosceles");  
  } 
 
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
class Rectangle : public Shape { 
public: 
 
  Rectangle(double w, double h) : Shape(w, h, "rectangle") { }  
  
  Rectangle(double x) : Shape(x, "rectangle") { }  
 
  bool isSquare() { 
    if(getWidth() == getHeight()) 
       return true; 
    return false; 
  } 
 
  double area() { 
    return getWidth() * getHeight(); 
  } 
}; 
 
int main() { 
  Shape *shapes[5]; 
  
  shapes[0] = &Triangle("right", 8.0, 12.0);  
  shapes[1] = &Rectangle(10);  
  shapes[2] = &Rectangle(10, 4);  
  shapes[3] = &Triangle(7.0);  
  shapes[4] = &Shape(10, 20, "generic"); 
  
  for(int i=0; i < 5; i++) {  
    cout << "object is " << shapes[i]->getName() << "\n";  
    cout << "Area is " << shapes[i]->area() << "\n\n";  
  }  
 
  return 0; 
}
#endif



#if 0
#include <iostream> 
#include <cstring> 
using namespace std; 
 
class Shape { 
  double width; 
  double height; 
 
  char name[20]; 
public: 
 
  Shape() { 
    width = height = 0.0; 
    strcpy(name, "unknown"); 
  } 
 
  Shape(double w, double h, char *n) { 
    width = w; 
    height = h; 
    strcpy(name, n); 
  } 
 
  Shape(double x, char *n) { 
    width = height = x; 
    strcpy(name, n); 
  } 
 
  void display() { 
    cout << "Width and height are " << width << " and " << height << "\n"; 
  } 
 
  double getWidth() { return width; } 
  double getHeight() { return height; } 
  void setWidth(double w) { width = w; } 
  void setHeight(double h) { height = h; } 
  char *getName() { return name; } 
 
  virtual double area() = 0; 
 
}; 
 
class Triangle : public Shape { 
  char style[20];
public: 
 
  Triangle() { 
    strcpy(style, "unknown"); 
  } 
 
  Triangle(char *str, double w, double h) : Shape(w, h, "triangle") { 
    strcpy(style, str); 
  } 
   
  Triangle(double x) : Shape(x, "triangle") { 
    strcpy(style, "isosceles");  
  } 
 
  double area() { 
    return getWidth() * getHeight() / 2; 
  } 
 
  void showStyle() { 
    cout << "Triangle is " << style << "\n"; 
  } 
}; 
 
class Rectangle : public Shape { 
public: 
 
  Rectangle(double w, double h) : Shape(w, h, "rectangle") { }  
  
  Rectangle(double x) : Shape(x, "rectangle") { }  
 
  bool isSquare() { 
    if(getWidth() == getHeight()) 
       return true; 
    return false; 
  } 
 
  double area() { 
    return getWidth() * getHeight(); 
  } 
}; 
 
int main() { 
  Shape *shapes[4]; 
  
  shapes[0] = &Triangle("right", 8.0, 12.0);  
  shapes[1] = &Rectangle(10);  
  shapes[2] = &Rectangle(10, 4);  
  shapes[3] = &Triangle(7.0);  
  
  for(int i=0; i < 4; i++) {  
    cout << "object is " << shapes[i]->getName() << "\n";  
    cout << "Area is " << shapes[i]->area() << "\n\n";  
  }  
 
  return 0; 
}
#endif



#if 0
#include <iostream>
 
 class Animal
 {
 public:
     Animal():itsAge(1) {  }
     ~Animal() { }
     virtual void Speak() const { std::cout << "Animal speak!\n"; }
 protected:
     int itsAge;
 };
 
 class Dog : public Animal
 {
 public:
     void Speak()const { std::cout << "Woof!\n"; }
 };
 
 
 class Cat : public Animal
 {
 public:
     void Speak()const { std::cout << "Meow!\n"; }
 };
 
 
 class Horse : public Animal
 {
 public:
     void Speak()const { std::cout << "Winnie!\n"; }
 };
 
 class Pig : public Animal
 {
 public:
     void Speak()const { std::cout << "Oink!\n"; }
 };
 
 int main()
 {
     Animal* theArray[5];
     Animal* ptr;
     int i;

     theArray[0] = new Dog;
     theArray[1] = new Cat;
     theArray[2] = new Horse;
     theArray[3] = new Pig;
     theArray[4] = new Animal;
     
     for (i=0;i<5;i++)
         theArray[i]->Speak();
     return 0;
 }
#endif



#if 0
#include <iostream>
 
 class Shape
 {
 public:
     Shape(){}
     virtual ~Shape(){}
     virtual long GetArea() = 0; 
     virtual long GetPerim()= 0;
     virtual void Draw() = 0;
 };
 
 class Circle : public Shape
 {
 public:
     Circle(int radius):itsRadius(radius){}
     ~Circle(){}
     long GetArea() { return 3 * itsRadius * itsRadius; }
     long GetPerim() { return 9 * itsRadius; }
     void Draw();
 private:
     int itsRadius;
     int itsCircumference;
 };
 
 void Circle::Draw()
 {
     std::cout << "Circle drawing \n";
 }
 
 
 class Rectangle : public Shape
 {
 public:
     Rectangle(int len, int width):
         itsLength(len), itsWidth(width){}
     virtual ~Rectangle(){}
     virtual long GetArea() { return itsLength * itsWidth; }
     virtual long GetPerim() {return 2*itsLength + 2*itsWidth; }
     virtual int GetLength() { return itsLength; }
     virtual int GetWidth() { return itsWidth; }
     virtual void Draw();
 private:
     int itsWidth;
     int itsLength;
 };
 
 void Rectangle::Draw()
 {
     for (int i = 0; i<itsLength; i++)
     {
         for (int j = 0; j<itsWidth; j++)
             std::cout << "x ";
 
         std::cout << "\n";
     }
 }
 
 class Square : public Rectangle
 {
 public:
     Square(int len);
     Square(int len, int width);
     ~Square(){}
     long GetPerim() {return 4 * GetLength();}
 };
 
 Square::Square(int len):Rectangle(len,len) {}
 
 Square::Square(int len, int width):Rectangle(len,width)
 {
     if (GetLength() != GetWidth())
         std::cout << "Error, not a square... a Rectangle??\n";
 }
 
 int main()
 {
     Shape * sp;
 
     sp = new Circle(5);
     sp->Draw();
     
     sp = new Rectangle(4,6);
     sp->Draw();
     
     sp = new Square(5);
     sp->Draw();
     return 0;
 }
#endif



#if 0
#include <iostream>  
  using namespace std;
  class Shape {  
  protected:  
    double x, y;  
  public:  
    void set_dim(double i, double j=0) {  
      x = i;  
      y = j;  
    }  
    virtual void show_area(void) {  
      cout << "No area computation defined ";  
      cout << "for this class.\n";  
    }  
  } ;  
       
  class triangle : public Shape {  
    public:  
      void show_area(void) {  
        cout << "Triangle with height ";  
        cout << x << " and base " << y;  
        cout << " has an area of ";  
        cout << x * 0.5 * y << ".\n";  
      }  
  };  
       
  class square : public Shape {  
    public:  
      void show_area(void) {  
        cout << "Square with dimensions ";  
        cout << x << "x" << y;  
        cout << " has an area of ";  
        cout << x *  y << ".\n";  
       }  
  };  
       
  class circle : public Shape {  
    public:  
      void show_area(void) {  
        cout << "Circle with radius ";  
        cout << x;  
        cout << " has an area of ";  
        cout << 3.14 * x * x;  
      }  
  } ;  
       
  main(void)  
  {  
    Shape *p;  
    triangle t; 
    square s;  
    circle c;  
       
    p = &t;  
    p->set_dim(10.0, 5.0);  
    p->show_area();  
       
    p = &s;  
    p->set_dim(10.0, 5.0);  
    p->show_area();  
       
    p = &c;  
    p->set_dim(9.0);  
    p->show_area();  
       
    return 0;  
  }
#endif



#if 0
#include <iostream>  
using namespace std;
class Base {  
public:  
  virtual void who(void) {
    cout << "Base\n";  
  }  
};  
     
class first_d : public Base {  
public:  
  void who(void) { // define who() relative to first_d  
    cout << "First derivation\n";  
  }  
};  
     
class second_d : public Base {  
public:  
  void who(void) { // define who() relative to second_d  
    cout << "Second derivation\n";  
  }  
};  
     
int main(void)  
{  
	Base base_obj;  
	Base *p;  
	first_d first_obj;  
	second_d second_obj;  
	 
	p = &base_obj;  
	p->who();  // access Base's who  
	 
	p = &first_obj;  
	p->who(); // access first_d's who  
	 
	p = &second_obj;  
	p->who();  // access second_d's who  
	 
	return 0;  
}
#endif



#if 0
#include <iostream>  
using namespace std;       
class Shape {  
protected:  
double x, y;  
public:  
	void set_dim(double i, double j) {  
		x = i;  
		y = j;  
	}  
	virtual void show_area(void) {  
		cout << "No area computation defined ";  
		cout << "for this class.\n";  
	}  
} ;  

class triangle : public Shape {  
public:  
	void show_area(void) {  
		cout << "Triangle with height ";  
		cout << x << " and base " << y;  
		cout << " has an area of ";  
		cout << x * 0.5 * y << ".\n";  
	}  
};  

class square : public Shape {  
public:  
	void show_area(void) {  
		cout << "Square with dimensions ";  
		cout << x << "x" << y;  
		cout << " has an area of ";  
		cout << x *  y << ".\n";  
	}  
};  

int main(void)  
{  
	Shape *p;  
	
	triangle t; 
	square s;  
	
	p = &t;  
	p->set_dim(10.0, 5.0);  
	p->show_area();  
	p = &s;  
	p->set_dim(10.0, 5.0);  
	p->show_area();  
	
	return 0;  
}
#endif
