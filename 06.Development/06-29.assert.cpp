#if 0
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

int main(void)
{
	int a[1000];
	int i;
	
	for (i = 0; i < 1000; ++i) 
		a[i] = 1000 - i - 1;
	
	sort(&a[0], &a[1000]);
	
	for (i = 0; i < 1000; ++i) 
		assert (a[i] == i);
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <cassert> 
#include <algorithm> // For reverse algorithm
using namespace std;

int main(void)
{
	string string1 = "abc";
	reverse(string1.begin(), string1.end());
	assert (string1 == "cba");
	
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <deque>
#include <algorithm>  // For find
using namespace std;

int main(void)
{
	char x[5] = {'a', 'r', 'e', 'q', 't'};
	deque<char> deque1(&x[0], &x[5]);
	
	// Search for the first occurrence of the letter e:
	deque<char>::iterator where = find(deque1.begin(), deque1.end(), 'e');
	
	assert (*where == 'e' );
	cout << "Ok." << endl;
	
	return 0;
}
#endif


