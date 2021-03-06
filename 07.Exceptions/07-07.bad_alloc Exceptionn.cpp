#if 0
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <new>
using std::bad_alloc;                  

int main(void)
{
   double *ptr[ 50 ];
   
   try 
   {
      for ( int i = 0; i < 50; i++ ) 
      {
         ptr[ i ] = new double[ 50000000 ];
         cout << "Allocated 50000000 doubles in ptr[ " << i << " ]\n";
      }
   }catch ( bad_alloc &memoryAllocationException )
   {
      cerr << "Exception occurred: " << memoryAllocationException.what() << endl;
   }
   
   return 0;
}
#endif

