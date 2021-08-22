#if 0
#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int t,i, nums[3][4]; 
 
  for(t=0; t < 3; ++t) { 
    for(i=0; i < 4; ++i) { 
      nums[t][i] = (t*4)+i+1; 
      cout << nums[t][i] << ' '; 
    } 
    cout << '\n'; 
  } 
 
  return 0; 
}
#endif


#if 0
#include <iostream> 
using namespace std; 
 
 int main() 
{ 
  int i, j; 
  int sqrs[10][2] = { 
    {1, 1}, 
    {2, 4}, 
    {3, 9}, 
    {4, 16}, 
    {5, 25}, 
    {6, 36}, 
    {7, 49}, 
    {8, 64}, 
    {9, 81}, 
    {10, 100} 
  }; 
 
  cout << "Enter a number between 1 and 10: "; 
  cin >> i; 
 
  // look up i 
  for(j=0; j<10; j++)  
    if(sqrs[j][0]==i) break; 
  cout << "The square of " << i << " is "; 
  cout << sqrs[j][1]; 
 
  return 0; 
}
#endif



#if 0
#include <iostream>
 
 int main()
 {
     int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6}, {4,8}};
     for (int i = 0; i<5; i++)
         for (int j=0; j<2; j++)
         {
             std::cout << "a[" << i << "][" << j << "]: ";
             std::cout << a[i][j]<< std::endl;
         }
     return 0;
 }
#endif



#if 0
#include <iostream>
using std::cout;
using std::endl;

void display( const int [][ 3 ] );

int main()
{
   int array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
   int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
   int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

   cout << "Values in array1 by row are:" << endl;
   display( array1 );

   cout << "\nValues in array2 by row are:" << endl;
   display( array2 );

   cout << "\nValues in array3 by row are:" << endl;
   display( array3 );
   return 0; 
}

void display( const int a[][ 3 ] )
{
   for ( int i = 0; i < 2; i++ )
   {    
      for ( int j = 0; j < 3; j++ ){
         cout << a[ i ][ j ] << ' ';
      }
      cout << endl;
   }
}
#endif



#if 0
#include <iostream> 
#include <cstdio> 
using namespace std; 
 
int main() 
{ 
  int i; 
  char str[80]; 
  char numbers[10][80] = { 
    "A", "322", 
    "B", "976", 
    "C", "037", 
    "D", "400", 
    "E", "873" 
  }; 
 
  cout << "Enter name (A): "; 
  cin >> str; 
 
  for(i=0; i < 10; i += 2)  
    if(!strcmp(str, numbers[i])) { 
      cout << "Number is " << numbers[i+1] << "\n"; 
      break; 
    } 
   
  if(i == 10) cout << "Not found.\n"; 
   
 
  return 0; 
}
#endif



#if 0
#include <iostream>
#include <iomanip>
#include <cctype>
using std::cout;
using std::endl;
using std::setw;

int main() {
  const int table = 12;           
  long values[table][table] = {0};

  for(int i = 0; i < table ; i++)
    for(int j = 0; j < table ; j++)
      *(*(values + i) + j) = 0;  


  for(int i = 0 ; i < table ; i++) {
    for(int j = 0 ; j < table ; j++)
      cout << " " << setw(3) << values[i][j] << " |"; 
    cout << endl;                                     
  }
  return 0;
}
#endif



#if 0
#include <iostream>
using namespace std;

void vdisplay_results(char carray[][3][4]);
  
  char cglobal_cube[5][4][5]= {
                {
                  {'1','1','1','1','1'},
                  {'2','2','2','2',' '},
                  {'3','3','3','3',' '},
                  {'4','4','4',' ',' '},
                },
                {
                  {'1','1','1','1','1'},
                  {'2','2','2','2',' '},
                  {'3','3','3','3',' '}
                },
                {
                  {'1','1','1','1','1'},
                  {'2','2','2','2',' '}
                },
                {
                  {'1','1','1','1','1'},
                  {'2','2','2','2',' '},
                  {'3','3','3','3',' '},
                  {'4','4','4',' ',' '},
                },
                {
                  {'1','1','1','1','1'},
                  {'2','2','2','2',' '},
                  {'3','3','3','3',' '},
                  {'4','4','4',' ',' '},
                }
};

int imatrix[4][3]={ {1},{2},{3},{4} };
  
int main( )
{
 int irow_index, icolumn_index;
 char clocal_cube[2][3][4];

 cout << "sizeof clocal_cube         = "<< sizeof(clocal_cube)           << "\n";
 cout << "sizeof clocal_cube[0]      = "<< sizeof(clocal_cube[0])        << "\n";
 cout << "sizeof clocal_cube[0][0]   = "<< sizeof(clocal_cube[0][0])     << "\n";
 cout << "sizeof clocal_cube[0][0][0]= "<< sizeof(clocal_cube[0][0][0])  << "\n";

 vdisplay_results(clocal_cube);

 cout << "cglobal_cube[0][1][2] is     = " << cglobal_cube[0][1][2] << "\n";
 cout << "cglobal_cube[1][0][2] is     = " << cglobal_cube[1][0][2] << "\n";

 for(irow_index=0; irow_index < 4; irow_index++) {
   for(icolumn_index=0; icolumn_index < 5; icolumn_index++)
     cout << cglobal_cube[0][irow_index][icolumn_index];
   cout << "\n";
 }


 for(irow_index=0; irow_index < 4; irow_index++) {
   for(icolumn_index=0; icolumn_index < 5; icolumn_index++)
     cout << cglobal_cube[4][irow_index][icolumn_index];
   cout << "\n";
 }

 cout << "\nprint all of imatrix\n";
 for(irow_index=0; irow_index < 4; irow_index++) {
   for(icolumn_index=0; icolumn_index < 3; icolumn_index++)
     cout << imatrix[irow_index][icolumn_index];
   cout << "\n";
 }

 return (0);
}
  
void vdisplay_results(char carray[][3][4])
{
    cout << "sizeof carray           =" << sizeof(carray) << "\n";
    cout << " sizeof  carray[0]      =" << sizeof(carray[0]) << "\n";
    cout << " sizeof  cglobal_cube   =" << sizeof(cglobal_cube) << "\n";
    cout << " sizeof cglobal_cube[0] =" << sizeof(cglobal_cube[0])
                                        << "\n";
}
#endif

