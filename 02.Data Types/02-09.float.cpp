#if 0
#include <iostream.h>

const float PI = 3.1415926;
inline float Area(const float);

int main(void)
{
   float radius = 2.9;
   cout << "The Area is " << Area(radius) << "\n";
   
   return 0;
}

float Area(const float r)
{
    return PI * r * r;
}
#endif


#if 0
#include <iostream>

float data[5]; // data to average and total 
float total;   // the total of the data items 
float average; // average of the items

int main(void)
{
    data[0] = 34.0;
    data[1] = 27.0;
    data[2] = 46.5;
    data[3] = 82.0;
    data[4] = 22.0;

    total = data[0] + data[1] + data[2] + data[3] + data[4];
    average =  total / 5.0;
    std::cout << "Total " << total << " Average " << average << '\n';
    
    return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

int main(void)
{
	float temp[5];
	
	cout << "float number \n";
	cin >> temp[0];
	
	cout << "float number \n";
	cin >> temp[1];
	
	cout << "float number \n";
	cin >> temp[2];
	
	cout << "float number \n";
	cin >> temp[3];
	
	cout << "float number \n";
	cin >> temp[4];
	
	cout << temp[0] << ", " << temp[1] << ", "<< temp[2] <<      ", "<< temp[3] << ", "; 
	cout << temp[4] << endl; 
	
	return 0;
}
#endif


#if 0
#include <iostream>   
using namespace std;   
  
int main(void)
{   
	int count = 7;   
	float avgWeight = 155.5F;   
	
	double totalWeight = count * avgWeight;   
	cout << "totalWeight=" << totalWeight << endl;   
	
	return 0;   
}
#endif


#if 0
#include <iostream>                  
using namespace std;   
  
int main(void)
{   
	float rad;                        
	const float PI = 3.14159F;        
	float area = PI * rad * rad;         
	
	cout << "Enter radius of circle: ";
	cin >> rad;                        
	cout << "Area is " << area << endl;

	return 0;   
}
#endif



#if 0
#include <iostream>

float Convert(float);

int main(void)
{
	using namespace std;
	
	float TempFer = 100.00;
	float TempCel;
	
	TempCel = Convert(TempFer);
	cout << TempCel << endl;
	
	return 0;
}

float Convert(float TempFer)
{
   float TempCel;
   TempCel = ((TempFer - 32) * 5) / 9;

   return TempCel;
}
#endif



#if 0
#include <iostream>
#include <iomanip> 
using namespace std;

int main(void)
{
	cout << 2002 <<endl;
	cout << "In hex " << hex<< 2002 <<endl;
	cout.setf(ios::scientific,ios::floatfield);
	cout <<987.123456 <<endl;
	cout << setprecision(3) << 987.123456 <<endl;
	cout.fill('X');
	cout.width(10);
	cout << 1234 <<endl;
	cout.setf(ios::left,ios::adjustfield);
	cout.width(10);
	cout << 1234 <<endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
using namespace std;

float cube_number(float);

int main(void)
{
	float number;
	float number3;
	cout << "Please enter a number \n";
	cin >> number;
	
	number3 = cube_number(number);
	cout << number << " cubed is " << number3;
	
	return 1; 
}

float cube_number(float num)
{
	float answer;
	
	answer = num * num * num;
	return answer;
}
#endif


#if 0
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool approx_equal(double x, double y)
{  
   const double EPSILON = 1E-14;
   if (x == 0) return fabs(y) <= EPSILON;
   if (y == 0) return fabs(x) <= EPSILON;
   return fabs(x - y) / max(fabs(x), fabs(y)) <= EPSILON;
}

int main(void)
{  
	double x;
	cout << "Enter a number: ";
	cin >> x;
	
	double y;
	cout << "Enter another number: ";
	cin >> y;
	
	if (approx_equal(x, y))
		cout << "The numbers are approximately equal.\n";
	else
		cout << "The numbers are different.\n";
	
	return 0;
}
#endif
