#if 0
#include <iostream> 
using namespace std; 
 
const int maxQsize = 100; 
 
template <class QType> class Queue { 
  QType q[maxQsize]; 
  int size; 
  int enqueueloc, dequeueloc;
public: 
 
  Queue(int len) { 
    if(len > maxQsize) 
       len = maxQsize; 
    else if(len <= 0) 
       len = 1;  
 
    size = len; 
    enqueueloc = dequeueloc = 0; 
  } 
 
  void enqueue(QType data) { 
    if(enqueueloc == size) { 
      cout << " -- Queue is full.\n"; 
      return; 
    } 
     
    enqueueloc++; 
    q[enqueueloc] = data; 
  } 
 
  QType dequeue() { 
    if(dequeueloc == enqueueloc) { 
      cout << " -- Queue is empty.\n"; 
      return 0;  
    } 
   
    dequeueloc++; 
    return q[dequeueloc]; 
  } 
}; 
 
int main() 
{ 
  Queue<int> intQueue1(10), intQueue2(10);  // create two integer queues 
 
  intQueue1.enqueue(1); 
  intQueue1.enqueue(2); 
  intQueue1.enqueue(3); 
 
  intQueue2.enqueue(10); 
  intQueue2.enqueue(20); 
  intQueue2.enqueue(30); 
 
  cout << "Contents of integer queue intQueue1: "; 
  for(int i=0; i < 3; i++) 
    cout << intQueue1.dequeue() << " "; 
  cout << endl; 
 
  cout << "Contents of integer queue intQueue2: "; 
  for(int i=0; i < 3; i++) 
    cout << intQueue2.dequeue() << " "; 
  cout << endl; 
 
  Queue<double> doubleQueue1(10), doubleQueue(10);  // create two double queues
 
 
  doubleQueue1.enqueue(1.01); 
  doubleQueue1.enqueue(2.02); 
  doubleQueue1.enqueue(3.03); 
 
  doubleQueue.enqueue(10.01); 
  doubleQueue.enqueue(20.02); 
  doubleQueue.enqueue(30.03); 
 
  cout << "Contents of double queue doubleQueue1: "; 
  for(int i=0; i < 3; i++) 
    cout << doubleQueue1.dequeue() << " "; 
  cout << endl; 
 
  cout << "Contents of double queue doubleQueue: "; 
  for(int i=0; i < 3; i++) 
    cout << doubleQueue.dequeue() << " "; 
  cout << endl; 
 
  return 0; 
}
#endif


#if 0
#include <iostream>  
using namespace std;

class queue {  
	int q[100];  
	int sloc, rloc;  
public:  
	void init(void);  
	void qput(int i);  
	int qget(void);  
};  

void queue::init(void)  
{  
	rloc = sloc = 0;  
}  

void queue::qput(int i)  
{  
	if(sloc==100) {  
		cout << "queue is full";  
		return;  
	}  
	sloc++;  
	q[sloc] = i;  
}  

int queue::qget(void)  
{  
	if(rloc == sloc) {  
		cout << "queue underflow";  
		return 0;  
	}  
	rloc++;  
	return q[rloc];  
}  

int main(void)  
{  
	queue a, b;
	
	a.init();  
	b.init();  
	
	a.qput(10);  
	b.qput(19);  
	
	a.qput(20);  
	b.qput(1);  
	
	cout << a.qget() << endl;  
	cout << a.qget() << endl;  
	cout << b.qget() << endl;  
	cout << b.qget() << endl;  
	
	return 0;  
}
#endif

