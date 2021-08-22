#if 0
#include<conio.h>
#include<stdarg.h>
#include<iostream.h>
const int No=5;

class List
{
private:
   int n;
   int *array;
public:
   List(int i)
   {
     array=new int[i];
   n=i;
  }
  ~List()
  {
    delete array;
  }
  void Init(int al,...);
  void Show();
  void Add(List &v1,List &v2);
  int Inner(List &v2);
  void Scale(int x);
};
void List::Init(int al,...)
{
    va_list argp;
  va_start(argp,al);
  array[0]=al;
  for(int i=1;i<n;i++)
     array[i]=va_arg(argp,int);
  va_end(argp);
}
void List::Show()
{
   cout<<"(";
   for(int i=0;i<n;i++)
     cout<<array[i]<<",";
   cout<<")"<<endl;
}
void List:: Add(List &v1,List &v2)
{
   for(int i=0;i<n;i++)
      array[i]=v1.array[i]+v2.array[i];
}
int List::Inner(List &v2)
{
   int result=0;
   for(int i=0;i<n;i++)
      result+=array[i]*v2.array[i];
   return(result);
}
void List::Scale(int x)
{
   for(int i=0;i<n;i++)
      array[i]*=x;
}
int main(void)
{
	List vect1(No),vect2(No),vect3(No);
	int InnerProduct;
	vect1.Init(2,4,6,8,10);
	vect2.Init(1,3,5,7,9);
	int m=4;
	cout<<"vect1=";
	vect1.Show();
	cout<<"vect2=";
	vect2.Show();
	vect3.Add(vect1,vect2);
	cout<<"vect3=vect1+vect2=";
	vect3.Show();
	InnerProduct=vect1.Inner(vect2);
	
	cout<<"Inner product of vect1&vect2 is:"<<InnerProduct<<endl;
	vect3.Scale(m);
	cout<<"vect3*"<<m<<"=";
	vect3.Show();
	return 0;
}
#endif


#if 0
#include <iostream>  
using namespace std;  

struct link                       
{  
	int data;                      
	link* next;                    
};  

class linklist                    
{  
private:  
	link* first;                
public:  
	linklist(){ first = NULL; }        
	void additem(int d);          
	void display();             
};  
void linklist::additem(int d)        
{  
	link* newlink = new link;         
	newlink->data = d;                
	newlink->next = first;            
	first = newlink;                    
}  
void linklist::display()             
{  
	link* current = first;            
	while( current != NULL ){  
		cout << current->data << endl; 
		current = current->next;       
	}  
}  

int main(void)  
{  
	linklist li;       
	
	li.additem(25);      
	li.additem(36);  
	li.additem(49);  
	li.additem(64);  
	
	li.display();      
	
	return 0;  
}
#endif


#if 0
#include <iostream>

#include <string>
#include <vector>
#include <map>
#include <list>

#include <algorithm>

const unsigned int LENGTH = 5;

class EmployeeList {
    public:
    typedef std::vector<int> grades;

    std::map<std::string, grades> roster;
    std::list<std::string> waiting_list;
    public:

    public:
    void add(const std::string& name);
    void remove(const std::string& name);
    void record(const std::string& name,const int grade,const unsigned int assignment_number);
    void display();
    private:

    void newEmployee(const std::string& name)
    {
        grades no_grades;
        roster.insert(
        std::pair<std::string, grades>(name, no_grades));
    }
};

void EmployeeList::add(const std::string& name)
{
    if (roster.find(name) != roster.end())
       return;

    if (roster.size() < LENGTH) {
       newEmployee(name);
    } else {
       waiting_list.push_back(name);
    }
}

void EmployeeList::remove(const std::string& name)
{
    std::map<std::string, grades>::iterator anEmployee =  roster.find(name);

    if (anEmployee == roster.end())
       return;

    roster.erase(name);
    if (waiting_list.size() > 0) {
        std::string wait_name = waiting_list.front();
        waiting_list.pop_front();
        newEmployee(wait_name);
    }
}

void EmployeeList::record(const std::string& name,const int grade,const unsigned int assignment_number)
{
    std::map<std::string, grades>::iterator anEmployee =
    roster.find(name);

    if (anEmployee == roster.end())
    {
        std::cerr << "ERROR: No " << name << '\n';
        return;
    }
    if (anEmployee->second.size() <= assignment_number)
        anEmployee->second.resize(assignment_number+1);

    anEmployee->second[assignment_number] = grade;
}

void EmployeeList::display()
{
    std::vector<std::string> sorted_names;

    std::map<std::string, grades>::iterator curEmployee;

    for (curEmployee = roster.begin();curEmployee != roster.end();++curEmployee){
        sorted_names.push_back(curEmployee->first);
    }
    std::sort(sorted_names.begin(), sorted_names.end());

    std::vector<std::string>::const_iterator cur_print;

    for (cur_print = sorted_names.begin();cur_print != sorted_names.end();++cur_print)
    {
       std::cout << *cur_print << '\t';

        grades::const_iterator cur_grade;

        for (cur_grade = roster[*cur_print].begin();cur_grade != roster[*cur_print].end();++cur_grade)
        {
            std::cout << *cur_grade << ' ';
        }
        std::cout << '\n';
    }
}

int main()
{
	EmployeeList empList;
	
	empList.add("A, S");
	empList.add("B, M");
	empList.add("J, R");
	empList.add("S, J");
	empList.add("M, M");
	
	empList.add("G, W");
	empList.add("C, W");
	
	std::cout << "Before drop " << std::endl;
	empList.display();
	std::cout << "\n";
	
	empList.remove("J, R");
	
	std::cout << "After drop " << std::endl;
	empList.display();
	std::cout << "\n";
	
	for (int i = 0; i < 5; ++i){
		empList.record("A, S", i*10+50, i);
		empList.record("B, M", i*10+50, i);
		empList.record("S, J", i*10+50, i);
		empList.record("M, M", i*10+50, i);
		empList.record("G, W", i*10+50, i);
	}
	
	std::cout << "Final " << std::endl;
	empList.display();
	std::cout << "\n";
	
	return (0);
}
#endif


#if 0
#include <iostream>
#include <assert.h> 
#include <stdlib.h>
using namespace std;
class vect {
public:
	explicit vect(int n);
	~vect() { delete []p; }
	int  ub() const { return (size - 1); }
	vect& operator=(const vect& v);  
	void print() const;
	int&  operator[](int i) ;        
	vect operator+(const vect& v);
private:
	int*  p;
	int   size;
};

vect::vect(int n): size(n)
{
	if (n < 1) 
		throw (n);
	
	p = new int[n];
	
	if (p == 0)
		throw ("FREE STORE EXHAUSTED");
}


int& vect::operator[](int i)
{
	assert(i >= 0 && i < size);
	return p[i];
}

vect& vect::operator=(const vect& v)
{
	int s = (size < v.size) ? size : v.size;
	
	if (v.size != size)
		cerr << "copying different size arrays "
		<< size << " and " << v.size << endl;
	for (int i = 0; i < s; ++i)
		p[i] = v.p[i];
		
	return (*this);
}


void vect::print() const
{
	for (int i = 0; i <= (size-1); ++i)
		cout << p[i] << "\t";
		
	cout << endl;
}

vect vect::operator+(const vect& v)
{
	assert(size == v.size);
	vect  sum(size);
	
	for (int i = 0; i < size; ++i)
		sum.p[i] = p[i] + v.p[i];
		
	return sum;
}



void g (int m)
{
	try {
		vect  a(m), b(m);
	}
	catch(int m)
	{
		cerr << "SIZE ERROR " << m << endl;
		g(10);      
	}
	catch(const char* error)
	{
		cerr << error << endl;
		abort();
	}
}


int main(void)
{
	int n = -5;   
	
	g(n);
	
	return 0;
}
#endif
