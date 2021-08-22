#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
class Print
{
public:
	void operator()(const T& t)
	{
		cout << t << " ";
	}
};

int main(void)
{
	Print<int>    DoPrint;
	vector<int>    vInt(5);

	for (int i = 0; i < 5; ++i)
		vInt[i] = i * 3;

	cout << "for_each()\n";
	for_each(vInt.begin(), vInt.end(), DoPrint);
	cout << "\n";

	return 0;
}
#endif


#if 0
#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>
using namespace std;

int main(int argc, char** argv)
{
	int num;

	vector<int> myVector;
	while (true) {
		cout << "Enter a test score to add (0 to stop): ";
		cin >> num;
		if (num == 0) {
			break;
		}
		myVector.push_back(num);
	}

	vector<int>::iterator it = find_if(myVector.begin(), myVector.end(), bind2nd(greater_equal<int>(), 100));
	if (it == myVector.end()) {
		cout << "No perfect scores\n";
	}
	else {
		cout << "Found a \"perfect\" score of " << *it << endl;
	}
	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
class Print
{
public:
	void operator()(const T& t)
	{
		cout << t << " ";
	}
};

int main(void)
{
	Print<int>    DoPrint;
	vector<int>    vInt(10);

	fill(vInt.begin(), vInt.begin() + 5, 1);
	fill(vInt.begin() + 5, vInt.end(), 2);

	for_each(vInt.begin(), vInt.end(), DoPrint);

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
template <typename elementType>
bool IsEven (const elementType& number)
{
	return ((number % 2) == 0);
}

int main(void)
{
	vector <int> v;

	for (int nNum = -9; nNum < 10; ++nNum)
		v.push_back(nNum);

	vector <int>::const_iterator i;
	for (i = v.begin(); i != v.end(); ++i)
		cout << *i << ' ';

	cout << v.size() << "' elements" << endl;

	// Use the count_if algorithm with the unary predicate IsEven:
	size_t nNumEvenElements = count_if(v.begin(), v.end(), IsEven <int>);

	cout << "Number of even elements: " << nNumEvenElements << endl;
	cout << "Number of odd elements: ";
	cout << v.size() - nNumEvenElements << endl;

	return 0;
}
#endif



#if 0
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
template <typename elementType>
bool IsEven (const elementType& number)
{
	return ((number % 2) == 0);
}

int main(void)
{
	vector <int> v;

	for (int nNum = -9; nNum < 10; ++nNum)
		v.push_back(nNum);

	vector <int>::const_iterator i;
	for (i = v.begin(); i != v.end(); ++i)
		cout << *i << ' ';

	cout << v.size() << "' elements" << endl;

	// Use count to determine the number of '0's in the vector
	size_t nNumZeroes = count(v.begin(), v.end(), 0);
	cout << "Number of instances of '0': " << nNumZeroes << endl << endl;

	cout << "Searching for an element of value 3 using find: " << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>

using namespace std;

int main(void)
{
	const int MAX_ELEMENTS = 8;
	typedef vector<int> IntVector;
	typedef IntVector::iterator IntVectorIt;
	typedef list<int> IntList;
	typedef IntList::iterator IntListIt;
	typedef deque<int> IntDeque;
	typedef IntDeque::iterator IntDequeIt;

	IntVector NumbersVector(MAX_ELEMENTS);
	IntVectorIt startv, endv, itv;
	IntList NumbersList;
	IntListIt first, last, itl;
	IntDeque NumbersDeque(2 * MAX_ELEMENTS);
	IntDequeIt itd;

	NumbersVector[0] = 4;
	NumbersVector[1] = 10;
	NumbersVector[2] = 70;
	NumbersVector[3] = 10;
	NumbersVector[4] = 30;
	NumbersVector[5] = 69;
	NumbersVector[6] = 96;
	NumbersVector[7] = 100;

	first = NumbersList.begin();
	last = NumbersList.end();

	//place the results in NumbersDeque
	merge(startv, endv, first, last, NumbersDeque.begin());

	for (itd = NumbersDeque.begin(); itd != NumbersDeque.end(); itd++)
		cout << *itd << " ";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	const int VECTOR_SIZE = 8;
	typedef vector<int> IntVector;
	typedef IntVector::iterator IntVectorIt;
	IntVector Numbers(VECTOR_SIZE);

	IntVectorIt start, end, it;

	Numbers[0] = 4;
	Numbers[1] = 10;
	Numbers[2] = 70;
	Numbers[3] = 30;
	Numbers[4] = 10;
	Numbers[5] = 69;
	Numbers[6] = 96;
	Numbers[7] = 100;

	start = Numbers.begin();
	end = Numbers.end();

	for (it = start; it != end; it++)
		cout << *it << " ";

	random_shuffle(start, end);

	for (it = start; it != end; it++)
		cout << *it << " ";

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Fibonacci(void){
	static int r;
	static int f1 = 0;
	static int f2 = 1;
	r = f1 + f2;
	f1 = f2;
	f2 = r;
	return f1;
}

int main(void)
{
	const int VECTOR_SIZE = 15;
	typedef vector<int> IntVector;
	typedef IntVector::iterator IntVectorIt;

	IntVector Numbers(VECTOR_SIZE);
	IntVectorIt start, end, it;
	int i;

	for (i = 0; i < VECTOR_SIZE; i++)
		Numbers[i] = i * i;

	start = Numbers.begin();
	end = Numbers.end();

	for (it = start; it != end; it++)
		cout << *it << " ";
	generate_n(start + 5, Numbers.size() - 5, Fibonacci);

	for (it = start; it != end; it++)
		cout << *it << " ";

	return 0;
}
#endif



#if 0
#include <vector> 
#include <iostream> 
#include <algorithm> 
#include <time.h> 

using namespace std; 

void print(const vector<int>& v)
{

	vector<int>::const_iterator i;

	cout << "[";

	for (i = v.begin(); i != v.end(); i++) cout << *i << ", ";
	cout << "]" << endl;
}

int main(void)
{
	srand((unsigned)time(NULL));

	int Size = 5;
	vector<int> v1, v2;
	int i;
	for (i = 0; i <= Size; i++)
		v1.push_back(rand());
	for (i = 0; i< Size; i++)
		v2.push_back(rand());

	cout << "Two random lists" << endl;
	print(v1);
	print(v2);

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	cout << "Two sorted lists" << endl;
	print(v1);
	print(v2);

	// Merge the two lists to a third list 
	vector<int> v3(v1.size() + v2.size());
	cout << endl << "Merge the two lists" << endl;
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	print(v3);

	return 0;
}
#endif


#if 0
#include <vector> 
#include <iostream> 
#include <numeric>   
using namespace std;
template <class T>
void print(T& c){
	for( typename T::iterator i = c.begin(); i != c.end(); i++ ){
		std::cout << *i << endl;
	}
}

int main(void)
{
	vector<double> vec1(4, 2.0);  // Length 4, all values == 2.0 
	vector<double> vec2(4, 4.0);  // Length 4, all values == 4.0 

	double init = 0.0;
	double summation = accumulate(vec1.begin(), vec1.end(), init);

	cout << "Sum of elements in vector 1: " << summation << endl;

	double ip = inner_product(vec1.begin(), vec1.end(), vec2.begin(), init);
	cout << "Inner product of vec1 and vec2: " << ip << endl;

	int size = 6;
	int seed_value = 2;
	vector<int> vec3(size, seed_value);
	vector<int> result(size);
	partial_sum(vec3.begin(), vec3.end(), result.begin());

	print(result);

	int sz = 10;
	int value = 2;
	vector<int> vec4(sz);

	vector<int>::iterator it;
	for (it = vec4.begin(); it != vec4.end(); it++)
	{
		(*it) = value;
		value += 1;
	}
	vector<int> result2(vec4.size());
	adjacent_difference(vec4.begin(), vec4.end(), result2.begin());
	cout << "The adjacent difference of the vector vec4\n";

	print(result2);

	return 0;
}
#endif



#if 0
#include <vector> 
#include <iostream> 
#include <numeric>   
using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}
int main(void)
{

	vector<double> vec1(4, 2.0);  // Length 4, all values == 2.0 
	vector<double> vec2(4, 4.0);  // Length 4, all values == 4.0 

	double init = 0.0;
	double summation = accumulate(vec1.begin(), vec1.end(), init);

	cout << "Sum of elements in vector 1: " << summation << endl;

	double ip = inner_product(vec1.begin(), vec1.end(), vec2.begin(), init);
	cout << "Inner product of vec1 and vec2: " << ip << endl;

	int size = 6;
	int seed_value = 2;
	vector<int> vec3(size, seed_value);
	vector<int> result(size);
	partial_sum(vec3.begin(), vec3.end(), result.begin());

	print(result);

	int sz = 10;
	int value = 2;
	vector<int> vec4(sz);

	vector<int>::iterator it;
	for (it = vec4.begin(); it != vec4.end(); it++)
	{
		(*it) = value;
		value += 1;
	}
	vector<int> result2(vec4.size());
	adjacent_difference(vec4.begin(), vec4.end(), result2.begin());
	cout << "The adjacent difference of the vector vec4\n";

	print(result2);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrintCube(int n)
{
	cout << "The cube of " << n << " is " << n * n * n << endl;
}

int main(void)
{
	const int VECTOR_SIZE = 8;
	typedef vector<int > IntVector;
	typedef IntVector::iterator IntVectorIt;

	IntVector Numbers(VECTOR_SIZE);
	IntVectorIt start, end, it;
	int i;

	for (i = 0; i < VECTOR_SIZE; i++)
		Numbers[i] = i + 1;

	start = Numbers.begin();
	end = Numbers.end();

	for (it = start; it != end; it++)
		cout << *it << " ";

	for_each(start, end, PrintCube);

	return 0;
}
#endif



#if 0
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	const int ARRAY_SIZE = 8;
	int IntArray[ARRAY_SIZE] = { 1, 2, 3, 4, 4, 5, 6, 7 };
	int *location;  //stores the position of the first matching element.
	int i;
	int value = 4;

	// print content of IntArray
	for (i = 0; i < ARRAY_SIZE; i++)
		cout << IntArray[i] << ", ";

	//Find the first element in the range (first, last + 1) that matches value.
	location = find(IntArray, IntArray + ARRAY_SIZE, value);

	//print the matching element if any was found
	if (location != IntArray + ARRAY_SIZE)
		cout << "First element that matches " << value << " is at location "
		<< (location - IntArray) << endl;
	else
		cout << "The sequence does not contain any elements with value " << value << endl;

	return 0;
}
#endif