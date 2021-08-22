#if 0
#include <iostream> 
#include <cstdlib> 
using namespace std; 
 
int main(void) 
{ 
	int nums[10]; 
	int a, b, t; 
	int size; 
	
	size = 10; // number of elements to sort 
	
	
	for(t=0; t<size; t++) 
	  nums[t] = rand(); 
	
	cout << "Original array is:\n   "; 
	for(t=0; t<size; t++) 
	  cout << nums[t] << ' '; 
	cout << '\n'; 
	
	// This is the bubble sort. 
	for(a=1; a<size; a++) 
	for(b=size-1; b>=a; b--) { 
	  if(nums[b-1] > nums[b]) { // if out of order 
	    // exchange elements  
	    t = nums[b-1]; 
	    nums[b-1] = nums[b]; 
	    nums[b] = t; 
	  } 
	} 
	
	cout << "\nSorted array is:\n   "; 
	for(t=0; t<size; t++) 
	  cout << nums[t] << ' '; 
	
	return 0; 
}
#endif


#if 0
#include <iostream> 
#include <cstring> 
 
using namespace std; 
void quicksort(char *items, int len); 
void qs(char *items, int left, int right); 
 
int main(void)
{ 
	char str[] = "fdsawertgsvbnhgfdertygfd"; 
	cout << "Original order: " << str << "\n"; 
	quicksort(str, strlen(str)); 
	cout << "Sorted order: " << str << "\n"; 
	
	return 0; 
} 
 
void quicksort(char *items, int len) 
{ 
  qs(items, 0, len-1); 
} 
 
void qs(char *items, int left, int right)  
{  
	int i, j;  
	char x, y;  
	
	i = left; j = right;  
	x = items[( left+right) / 2 ];  
	
	do {  
		while((items[i] < x) && (i < right)) 
			i++;  
		
		while((x < items[j]) && (j > left)) 
			j--;  
		
		if(i <= j) {  
			y = items[i];  
			items[i] = items[j];  
			items[j] = y;  
			i++; j--;  
		}  
	} while(i <= j);  
	
	if(left < j) 
		qs(items, left, j);  
		
	if(i < right) 
		qs(items, i, right);  
}
#endif



#if 0
#include <iostream>
#include <stdlib.h>
using namespace std;

#define IMAXVALUES 10

int icompare_funct(const void *iresult_a, const void *iresult_b);
int (*ifunct_ptr)(const void *,const void *);

int main(void)
{
	int i;
	int iarray[IMAXVALUES]={0,5,3,2,8,7,9,1,4,6};
	
	ifunct_ptr=icompare_funct;
	
	qsort(iarray,IMAXVALUES,sizeof(int),ifunct_ptr);
	
	for(i = 0; i < IMAXVALUES; i++)
		cout <<"[{||}]" << iarray[i];
}

int icompare_funct(const void *iresult_a, const void *iresult_b)
{
	return((*(int *)iresult_a) - (*(int *)iresult_b));
}
#endif



#if 0
#include <iostream>
#include <algorithm>



#include <iostream>

class SortTracer {
  private:
    int value;                // integer value to be sorted
    int generation;           // generation of this tracer
    static long n_created;    // number of constructor calls
    static long n_destroyed;  // number of destructor calls
    static long n_assigned;   // number of assignments
    static long n_compared;   // number of comparisons
    static long n_max_live;   // maximum of existing objects

    // recompute maximum of existing objects
    static void update_max_live() {
        if (n_created-n_destroyed > n_max_live) {
            n_max_live = n_created-n_destroyed;
        }
    }

  public:
    static long creations() {
        return n_created;
    }
    static long destructions() {
        return n_destroyed;
    }
    static long assignments() {
        return n_assigned;
    }
    static long comparisons() {
        return n_compared;
    }
    static long max_live() {
        return n_max_live;
    }

  public:
    // constructor
    SortTracer (int v = 0) : value(v), generation(1) {
        ++n_created;
        update_max_live();
        std::cerr << "SortTracer #" << n_created
                  << ", created generation " << generation
                  << " (total: " << n_created - n_destroyed
                  << ")\n";
    }

    // copy constructor
    SortTracer (SortTracer const& b)
     : value(b.value), generation(b.generation+1) {
        ++n_created;
        update_max_live();
        std::cerr << "SortTracer #" << n_created
                  << ", copied as generation " << generation
                  << " (total: " << n_created - n_destroyed
                  << ")\n";
    }

    // destructor
    ~SortTracer() {
        ++n_destroyed;
        update_max_live();
        std::cerr << "SortTracer generation " << generation
                  << " destroyed (total: "
                  << n_created - n_destroyed << ")\n";
    }

    // assignment
    SortTracer& operator= (SortTracer const& b) {
        ++n_assigned;
        std::cerr << "SortTracer assignment #" << n_assigned
                  << " (generation " << generation
                  << " = " << b.generation
                  << ")\n";
        value = b.value;
        return *this;
    }

    // comparison
    friend bool operator < (SortTracer const& a,
                            SortTracer const& b) {
        ++n_compared;
        std::cerr << "SortTracer comparison #" << n_compared
                  << " (generation " << a.generation
                  << " < " << b.generation
                  << ")\n";
        return a.value < b.value;
    }

    int val() const {
        return value;
    }
};


long SortTracer::n_created = 0;
long SortTracer::n_destroyed = 0;
long SortTracer::n_max_live = 0;
long SortTracer::n_assigned = 0;
long SortTracer::n_compared = 0;


int main()
{
    // prepare sample input:
    SortTracer input[] = { 7, 3, 5, 6, 4, 2, 0, 1, 9, 8 };

    // print initial values:
    for (int i=0; i<10; ++i) {
        std::cerr << input[i].val() << ' ';
    }
    std::cerr << std::endl;

    // remember initial conditions:
    long created_at_start = SortTracer::creations();
    long max_live_at_start = SortTracer::max_live();
    long assigned_at_start = SortTracer::assignments();
    long compared_at_start = SortTracer::comparisons();

    // execute algorithm:
    std::cerr << "---[ Start std::sort() ]--------------------\n";
    std::sort<>(&input[0], &input[9]+1);
    std::cerr << "---[ End std::sort() ]----------------------\n";

    // verify result:
    for (int i=0; i<10; ++i) {
        std::cerr << input[i].val() << ' ';
    }
    std::cerr << "\n\n";

    // final report:
    std::cerr << "std::sort() of 10 SortTracer's"
              << " was performed by:\n "
              << SortTracer::creations() - created_at_start
              << " temporary tracers\n "
              << "up to "
              << SortTracer::max_live()
              << " tracers at the same time ("
              << max_live_at_start << " before)\n "
              << SortTracer::assignments() - assigned_at_start
              << " assignments\n "
              << SortTracer::comparisons() - compared_at_start
              << " comparisons\n\n";
}
#endif



#if 0
#include <iostream> 
using std::cout; 
using std::endl; 

#include <iomanip>
using std::setw;

void selectionSort( int * const, const int );
void swap( int * const, int * const );

int main(void)
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 9, 1, 5, 7 };

   selectionSort( a, arraySize );
   for ( int j = 0; j < arraySize; j++ )
      cout << a[ j ];

   return 0;
}

void selectionSort( int * const array, const int size )
{
   int smallest;

   for ( int i = 0; i < size - 1; i++ )
   {
      smallest = i;

      for ( int index = i + 1; index < size; index++ )
         if ( array[ index ] < array[ smallest ] )
            smallest = index;
      swap( &array[ i ], &array[ smallest ] );
   }
}
void swap( int * const element1Ptr, int * const element2Ptr )
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}
#endif

