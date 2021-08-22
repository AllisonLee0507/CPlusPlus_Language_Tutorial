#if 0
#include <iostream>
using namespace std;

const int SIZE=100;

class stack {
	int stck[SIZE];
	int tos;
public:
	stack() { 
		tos=0; 
	}
	void push(int i)
	{
		if(tos==SIZE) {
			cout << "Stack is full.\n";
			return;
		}
		stck[tos] = i;
		tos++;
	}
	
	int pop()
	{
		if(tos==0) {
			cout << "Stack underflow.\n";
			return 0;
		}
		tos--;
		return stck[tos];
	}
	
	operator int() { 
		return tos; 
	}
};

int main(void)
{
	stack stck;
	int i, j;
	
	for(i=0; i<20; i++)  stck.push(i);
	
	j = stck; // convert to integer
	
	cout << j << " items on stack.\n";
	
	cout << SIZE - stck << " spaces open.\n";
	return 0;
}
#endif


#if 0
#include <iostream>


using std::cout;
using std::cin;
using std::endl;

template< class T >
class Stack {
public:
   Stack( int = 10 );    
   ~Stack() { delete [] stackPtr; } 
   bool push( const T& ); 
   bool pop( T& );        
private:
   int size;             
   int top;              
   T *stackPtr;          

   bool isEmpty() const { return top == -1; }
   bool isFull() const { return top == size - 1; } 
}; 

template< class T >
Stack< T >::Stack( int s )
{
   size = s > 0 ? s : 10;  
   top = -1;               
   stackPtr = new T[ size ]; 
}
template< class T >
bool Stack< T >::push( const T &pushValue )
{
   if ( !isFull() ) {
      stackPtr[ ++top ] = pushValue; 
      return true;  
   } 
   return false;     
}

template< class T > 
bool Stack< T >::pop( T &popValue )
{
   if ( !isEmpty() ) {
      popValue = stackPtr[ top-- ]; 
      return true;  
   } 
   return false;    
} 


int main(void)
{
	Stack< double > doubleStack( 5 );
	double f = 1.1;
	cout << "Pushing elements onto doubleStack\n";
	
	while ( doubleStack.push( f ) ) {
		cout << f << ' ';
		f += 1.1;
	}
	
	cout << f;
	
	while ( doubleStack.pop( f ) )  
		cout << f << ' ';
	
	Stack< int > intStack;
	int i = 1;
	
	while ( intStack.push( i ) ) { 
		cout << i << ' ';
		++i;
	} 
	
	cout << i ;
	
	while ( intStack.pop( i ) )
		cout << i << ' ';
	
	return 0;
}
#endif


#if 0
#include <iostream>  
using namespace std;  

class Stack  {  
private:  
	enum { MAX = 10 };   
	int st[MAX];         
	int top;             
public:  
	Stack(){ top = 0; }  
	void push(int var) { st[++top] = var; }  
	int pop(){ return st[top--]; }  
};  

int main(){  
	Stack s1;  
	
	s1.push(11);  
	s1.push(22);  
	cout << "1: " << s1.pop() << endl;  //22  
	cout << "2: " << s1.pop() << endl;  //11  
	s1.push(33);  
	s1.push(44);  
	s1.push(55);  
	s1.push(66);  
	cout << "3: " << s1.pop() << endl;  //66  
	cout << "4: " << s1.pop() << endl;  //55  
	cout << "5: " << s1.pop() << endl;  //44  
	cout << "6: " << s1.pop() << endl;  //33  
	return 0;  
}
#endif


#if 0
#include <iostream>
#include <assert.h>
using namespace std;
class ch_stack {
public:
   explicit ch_stack(int size): max_len( size), top(EMPTY)
   { assert(size > 0);s = new char[size]; assert(s != 0);}
   ch_stack();
   ch_stack(const ch_stack& str);
   ch_stack(int size, const char str[]);
  ~ch_stack() { delete []s; }
   void  reset() { top = EMPTY; }
   void  push(char c) { s[++top]= c; }
   char  pop() { return s[top--]; }
   char  top_of() const { return s[top]; }
   bool  empty() const { return (top == EMPTY); }
   bool  full() const { return (top == max_len - 1); }
private:
   enum  { EMPTY = -1 };
   char*  s;              
   int    max_len;
   int    top;
};

//default constructor for ch_stack
ch_stack::ch_stack():max_len(100),top(EMPTY)
{
   s = new char[100];
   assert(s != 0);
}

//domain transfer
ch_stack::ch_stack(int size, const char str[]):
   max_len(size)
{
   int i;
   assert(size > 0);
   s = new char[size];
   assert(s != 0);
   for (i = 0; i < max_len && str[i] != 0; ++i)
      s[i] = str[i];
   top = --i;
}

//Copy constructor for ch_stack of characters
ch_stack::ch_stack(const ch_stack& str):
   max_len(str.max_len),top(str.top)
{
   s = new char[str.max_len];
   assert(s != 0);
   memcpy(s, str.s, max_len);
}

int cnt_char(char c, ch_stack s)
{
   int  count = 0;

   while (!s.empty())
      count += (c == s.pop());
   return count;
}

int main(void)
{
	ch_stack  typea(100);  
	ch_stack  typeb;       
	ch_stack  typec(50, "this is a test");  
	ch_stack  typed(typec);
	char reverseline[200];
	char a [30] = {"aaaa"};
	char b [40] = {"bbbb"};
	int  i = 0;
	
	cout << cnt_char('a', typec) << endl;
	
	typea.reset();
	
	while (a[i])
		if (!typea.full())
			typea.push(a[i++]);
	
	i = 0;
	while (!typea.empty())
		reverseline[i++] = typea.pop();
	reverseline[i] = '\0';
	cout << reverseline;
	
	i = 0;
	while (b[i])
		if (!typeb.full())
			typeb.push(b[i++]);
	
	i = 0;
	while (!typeb.empty())
		reverseline[i++] = typeb.pop();
	reverseline[i] = '\0';
	cout << reverseline;
	
	i = 0;
	while (!typec.empty())
		reverseline[i++] = typec.pop();
	reverseline[i] = '\0';
	cout << reverseline;
	i = 0;
	
	while (!typed.empty())
		reverseline[i++] = typed.pop();
	reverseline[i] = '\0';
	cout << reverseline;
	
	return 0;
}
#endif


#if 0
#endif



#if 0
#endif
