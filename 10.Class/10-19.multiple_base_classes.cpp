#if 0
#include <iostream> 
using namespace std; 
 
class BaseClass1 { 
protected: 
  int x; 
public: 
  void showx() { cout << x << "\n"; } 
}; 
 
class BaseClass2 { 
protected: 
  int y; 
public: 
  void showy() { cout << y << "\n"; } 
}; 
 
// Inherit multiple base classes. 
class DerivedClass: public BaseClass1, public BaseClass2 { 
public: 
  /* x and y are accessible because they are 
     protected in BaseClass1 and BaseClass2, not private. */ 
  void set(int i, int j) { x = i; y = j; } 
}; 
 
int main() 
{ 
  DerivedClass ob; 
 
  ob.set(10, 20); // provided by DerivedClass 
  ob.showx();     // from BaseClass1 
  ob.showy();     // from BaseClass2 
 
  return 0; 
}
#endif


#if 0
#include <iostream>  
  using namespace std;  
  const int LEN = 80;    

  class student{  
     private:  
        char school[LEN];
        char degree[LEN];
     public:  
        void getedu(){  
           cout << "   Enter name of school or university: ";  
           cin >> school;  
           cout << "   Enter highest degree earned \n";  
           cout << "   (Highschool, Bachelor's, Master's, PhD): ";  
           cin >> degree;  
        }  
        void putedu() const  
        {  
           cout << "\n   School or university: " << school;  
           cout << "\n   Highest degree earned: " << degree;  
        }  
    };  
  class employee{  
     private:  
        char name[LEN];
        unsigned long number;
     public:  
        void getdata(){  
           cout << "\n   Enter last name: "; cin >> name;  
           cout << "   Enter number: ";      cin >> number;  
        }  
        void putdata() const  
        {  
           cout << "\n   Name: " << name;  
           cout << "\n   Number: " << number;  
        }  
    };  
  class manager : private employee, private student {  
     private:  
        char title[LEN];        
        double dues;            
     public:  
        void getdata(){  
           employee::getdata();  
           cout << "   Enter title: ";          cin >> title;  
           cout << "   Enter golf club dues: "; cin >> dues;  
           student::getedu();  
        }  
        void putdata() const  
        {  
           employee::putdata();  
           cout << "\n   Title: " << title;  
           cout << "\n   Golf club dues: " << dues;  
           student::putedu();  
        }  
  };  
  class scientist : private employee, private student {  
     private:  
        int pubs;     
     public:  
        void getdata(){  
           employee::getdata();  
           cout << "   Enter number of pubs: "; cin >> pubs;  
           student::getedu();  
        }  
        void putdata() const  
        {  
           employee::putdata();  
           cout << "\n   Number of publications: " << pubs;  
           student::putedu();  
        }  
  };  
  class laborer : public employee    
    {  
  };  
  int main(){  
     manager m1;  
     scientist s1, s2;  
     laborer l1;  
    
     cout << endl;  
     cout << "\nEnter data for manager 1";    
     m1.getdata();                            
    
     cout << "\nEnter data for scientist 1";  
     s1.getdata();  
    
     cout << "\nEnter data for scientist 2";  
     s2.getdata();  
    
     cout << "\nEnter data for laborer 1";  
     l1.getdata();  
    
     cout << "\nData on manager 1";           
     m1.putdata();                            
    
     cout << "\nData on scientist 1";  
     s1.putdata();  
    
     cout << "\nData on scientist 2";  
     s2.putdata();  
    
     cout << "\nData on laborer 1";  
     l1.putdata();  
     cout << endl;  
     return 0;  
  }
#endif



#if 0
#include <iostream>  
  #include <string>  
  using namespace std;  

  class Type{  
     private:  
        string dimensions;  
        string grade;  
     public:                        
        Type() : dimensions("N/A"), grade("N/A"){  }  
                                    
        Type(string di, string gr) : dimensions(di), grade(gr)  
        {  }  
        void gettype(){  
           cout << "   Enter nominal dimensions (2x4 etc.): ";  
           cin >> dimensions;  
           cout << "   Enter grade (rough, const, etc.): ";  
           cin >> grade;  
        }  
        void showtype() const       
        {  
           cout << "\n   Dimensions: " << dimensions;  
           cout << "\n   Grade: " << grade;  
        }  
  };
  class Distance{  
     private:  
        int feet;  
        float inches;  
     public:    
        Distance() : feet(0), inches(0.0){  } 
        Distance(int ft, float in) : feet(ft), inches(in)  
          {  }  
        void getdist(){  
           cout << "   Enter feet: ";  cin >> feet;  
           cout << "   Enter inches: ";  cin >> inches;  
        }  
        void showdist() const       
        { cout  << feet << "\'-" << inches << '\"'; }  
  };
  class Lumber : public Type, public Distance  {  
     private:  
        int quantity;                      
        double price;                      
     public:                               
        Lumber() : Type(), Distance(), quantity(0), price(0.0)  
        {  }  
        Lumber( string di, string gr,      
                int ft, float in,          
                int qu, float prc ) :      
                Type(di, gr),              
                Distance(ft, in),          
                quantity(qu), price(prc)   
        {  }  
        void getlumber()  
        {  
           Type::gettype();  
           Distance::getdist();  
           cout << "   Enter quantity: "; cin >> quantity;  
           cout << "   Enter price per piece: "; cin >> price;  
        }  
        void showlumber() const  
        {  
           Type::showtype();  
           cout << "\n   Length: ";  
           Distance::showdist();  
           cout << "\n   Price for " << quantity  
               << " pieces: $" << price * quantity;  
        }  
  };  
  int main(){  
     Lumber siding;                   
     siding.getlumber();              
     Lumber studs( "2x4", "const", 8, 0.0, 200, 4.45F );  
    
     cout << "\nSiding";  siding.showlumber();  
     cout << "\nStuds";     studs.showlumber();  
     cout << endl;  
     return 0;  
    }
#endif



#if 0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Horse
{
  public:
    Horse() { cout << "Horse constructor... "; }
    virtual ~Horse() { cout << "Horse destructor... "; }
    virtual void Whinny() const { cout << "Whinny!... "; }
  private:
    int itsAge;
};

class Bird
{
  public:
    Bird() { cout << "Bird constructor... "; }
    virtual ~Bird() { cout << "Bird destructor... "; }
    virtual void Chirp() const { cout << "Chirp... ";  }
    virtual void Fly() const
    {
       cout << "fly! ";
    }
  private:
    int itsWeight;
};

class Pegasus : public Horse, public Bird
{
  public:
    void Chirp() const { Whinny(); }
    Pegasus() { cout << "Pegasus constructor... "; }
    ~Pegasus() { cout << "Pegasus destructor...  "; }
};

const int MagicNumber = 2;
int main(){
   Horse* Ranch[MagicNumber];
   Bird* Aviary[MagicNumber];
   Horse * pHorse;
   Bird * pBird;
   
   pHorse = new Pegasus;
   pHorse = new Horse;
   Ranch[0] = pHorse;

   pBird = new Pegasus;
   pBird = new Bird;
   Aviary[0] = pBird;

   Ranch[0]->Whinny();
   delete Ranch[0];
   
   Aviary[0]->Chirp();
   Aviary[0]->Fly();
   delete Aviary[0];

   return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

typedef int HANDS;
enum COLOR { Red, Green, Blue, Yellow, White, Black, Brown } ;

class Animal        
{
  public:
    Animal(int);
    virtual ~Animal() { cout << "Animal destructor...\n"; }
    virtual int GetAge() const { return itsAge; }
    virtual void SetAge(int age) { itsAge = age; }
  private:
    int itsAge;
};

Animal::Animal(int age):
itsAge(age)
{
   cout << "Animal constructor...\n";
}

class Horse : public Animal
{
  public:
    Horse(COLOR color, HANDS height, int age);
    virtual ~Horse() { cout << "Horse destructor...\n"; }
    virtual void Whinny()const { cout << "Whinny!... "; }
    virtual HANDS GetHeight() const { return itsHeight; }
    virtual COLOR GetColor() const { return itsColor; }
  protected:
    HANDS itsHeight;
    COLOR itsColor;
};

Horse::Horse(COLOR color, HANDS height, int age):
Animal(age),
itsColor(color),itsHeight(height)
{
   cout << "Horse constructor...\n";
}

class Bird : public Animal
{
  public:
    Bird(COLOR color, bool migrates, int age);
    virtual ~Bird() {cout << "Bird destructor...\n";  }
    virtual void Chirp()const { cout << "Chirp... ";  }
    virtual void Fly()const{ cout << "fly! "; }
    virtual COLOR GetColor()const { return itsColor; }
    virtual bool GetMigration() const { return itsMigration; }
  protected:
    COLOR itsColor;
    bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates, int age):
Animal(age),
itsColor(color), itsMigration(migrates)
{
   cout << "Bird constructor...\n";
}

class Pegasus : public Horse, public Bird
{
  public:
    void Chirp()const { Whinny(); }
    Pegasus(COLOR, HANDS, bool, long, int);
    virtual ~Pegasus() {cout << "Pegasus destructor...\n";}
    virtual long GetNumberBelievers() const
    { return  itsNumberBelievers; }
    virtual COLOR GetColor()const { return Horse::itsColor; }
    virtual int GetAge() const { return Horse::GetAge(); }
  private:
    long itsNumberBelievers;
};

Pegasus::Pegasus(
   COLOR aColor,
   HANDS height,
   bool migrates,
   long NumBelieve,
   int age):
   Horse(aColor, height,age),
   Bird(aColor, migrates,age),
   itsNumberBelievers(NumBelieve)
{
   cout << "Pegasus constructor...\n";
}

int main()
{
   Pegasus *pPeg = new Pegasus(Red, 5, true, 10, 2);
   int age = pPeg->GetAge();
   cout << "This pegasus is " << age << " years old.\n";
   delete pPeg;
   return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;
class One 
{
 public:
  One(void) 
  { 
    cout << "Constructor for One\n"; 
    one = 1;
  };
  int one;
};

class Two 
{
 public:
  Two(void) 
  { 
    cout << "Constructor for Two\n";
    two = 2;
  };
  int two;
};

class Three 
{
 public:
  Three(void) 
  { 
    cout << "Constructor for Three\n"; 
    three = 3;
  };
  int three;
};

class Derived: private One, private Three, public Two 
{
 public:
   Derived(void) : One(), Two(), Three() 
   {
     cout << "Derived constructor called\n"; };

   void show_value(void) { cout << one << two << three << endl; };
};

int main(void)
{
   Derived my_class;
   my_class.show_value();
   cout << my_class.two;
}
#endif



#if 0
#include <iostream>
using namespace std;
   
class base {
public:
  base() { cout << "Constructing base\n"; }
  ~base() { cout << "Destructing base\n"; }
};
   
class derived1 : public base {
public:
  derived1() { cout << "Constructing derived1\n"; }
  ~derived1() { cout << "Destructing derived1\n"; }
};
   
class derived2: public derived1 {
public:
  derived2() { cout << "Constructing derived2\n"; }
  ~derived2() { cout << "Destructing derived2\n"; }
};
   
int main(void)
{
	derived2 ob;
	// construct and destruct ob

	return 0;
}
#endif



#if 0
#include <iostream>
using std::ostream;
using std::cout;
using std::endl;

class Base1 {
public:
   Base1( int parameterValue )
   {
      value = parameterValue;
   }

   int getData() const
   {
      return value;
   }
protected:
   int value;
};

class Base2
{
public:
   Base2( char characterData )
   {
      letter = characterData;
   }

   char getData() const
   {
      return letter;
   }
protected:
   char letter;
};

class Derived : public Base1, public Base2
{
public:
   Derived( int integer, char character, double double1 )
      : Base1( integer ), Base2( character ), real( double1 ) { }

   double getReal() const {
      return real;
   }
    void display()
    {
       cout << "    Integer: " << value << "\n  Character: "
          << letter << "\nReal number: " << real;

    }

private:
   double real;
};

int main(void)
{
	Base1 base1( 10 ), *base1Ptr = 0;
	Base2 base2( 'Z' ), *base2Ptr = 0;
	Derived derived( 7, 'A', 3.5 );
	
	cout << base1.getData()
	    << base2.getData();
	derived.display();
	
	cout << derived.Base1::getData()
	    << derived.Base2::getData()
	    << derived.getReal() << "\n\n";
	
	base1Ptr = &derived;
	cout << base1Ptr->getData() << '\n';
	
	base2Ptr = &derived;
	cout << base2Ptr->getData() << endl;
	return 0;
}
#endif
