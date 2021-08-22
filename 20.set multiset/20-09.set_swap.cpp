#if 0
#include <iostream>
#include <set>

using namespace std;
typedef set<int> SET_INT;

int main(void)
{
	SET_INT s1;
	SET_INT s2;
	SET_INT::iterator i;

	s1.insert(5);
	s1.insert(10);
	s1.insert(15);
	s2.insert(2);
	s2.insert(4);

	cout << "swap(s1,s2)" << endl;
	swap(s1, s2);

	for (i = s1.begin(); i != s1.end(); i++)
		cout << "s1 has " << *i << " in its set." << endl;

	for (i = s2.begin(); i != s2.end(); i++)
		cout << "s2 has " << *i << " in its set." << endl;

	s1.swap(s2);

	for (i = s1.begin(); i != s1.end(); i++)
		cout << "s1 has " << *i << " in its set." << endl;

	for (i = s2.begin(); i != s2.end(); i++)
		cout << "s2 has " << *i << " in its set." << endl;

	return 0;
}
#endif


#if 0
#include <iostream>
#include <set>

using namespace std;
typedef set<int> SET_INT;

int main(void){
	SET_INT s1;
	SET_INT s2;
	SET_INT::iterator i;

	s1.insert(5);
	s1.insert(10);
	s1.insert(15);

	s2.insert(2);
	s2.insert(4);

	swap(s1, s2);

	for (i = s1.begin(); i != s1.end(); i++)
		cout << "s1 has " << *i << " in its set." << endl;

	for (i = s2.begin(); i != s2.end(); i++)
		cout << "s2 has " << *i << " in its set." << endl;

	s1.swap(s2);

	for (i = s1.begin(); i != s1.end(); i++)
		cout << "s1 has " << *i << " in its set." << endl;

	for (i = s2.begin(); i != s2.end(); i++)
		cout << "s2 has " << *i << " in its set." << endl;

	return 0;
}
#endif



#if 0
#include <set>
#include <iostream>
#include <string>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	set<string> first;

	first.insert("A");
	first.insert("B");
	first.insert("C");

	cout << first.size() << endl;
	set<string> second(first);   // Copy constructor

	second.insert("I");
	second.insert("S");

	swap(first, second);

	set<string> third = first;

	print(first);
	print(second);
	print(third);
}
#endif
