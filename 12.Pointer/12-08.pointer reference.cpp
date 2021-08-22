#if 0
#include <iostream>
using namespace std;

struct stStudent {
	char   pszName[66],
	pszAddress[66],
	pszCity[26],
	pszState[3],
	pszPhone[13];
	int    icourses;
	float  GPA;
};

void vByValueCall(stStudent   stAStudent);
void vByVariableCall(stStudent *pstAStudent);
void vByReferenceCall(stStudent &rstAStudent);

int main(void)
{
	stStudent astLargeClass[100];

	astLargeClass[0].icourses = 10;

	vByValueCall(astLargeClass[0]);
	cout << astLargeClass[0].icourses << "\n"; // icourses still 10

	vByVariableCall(&astLargeClass[0]);
	cout << astLargeClass[0].icourses << "\n"; // icourses = 20

	vByReferenceCall(astLargeClass[0]);
	cout << astLargeClass[0].icourses << "\n"; // icourses = 30
}

void vByValueCall(stStudent  stAStudent)
{
	stAStudent.icourses += 10;    // normal structure syntax
}

void vByVariableCall(stStudent *pstAStudent)
{
	pstAStudent->icourses += 10;  // pointer syntax
}

void vByReferenceCall(stStudent &rstAStudent)
{
	rstAStudent.icourses += 10;   // simplified reference syntax
}
#endif


#if 0
#include <iostream>
using namespace std;

void neg(int &i); // i now a reference

int main(void)
{
	int x;

	x = 10;
	cout << x << " negated is ";

	neg(x); // no longer need the & operator
	cout << x << "\n";

	return 0;
}

void neg(int &i)
{
	i = -i; // i is now a reference, don't need *
}
#endif



#if 0
#include <iostream>
using namespace std;

void swap(int &i, int &j);

int main(void)
{
	int a, b, c, d;

	a = 1;
	b = 2;
	c = 3;
	d = 4;

	cout << "a and b: " << a << " " << b << "\n";
	swap(a, b); // no & operator needed
	cout << "a and b: " << a << " " << b << "\n";

	cout << "c and d: " << c << " " << d << "\n";
	swap(c, d);
	cout << "c and d: " << c << " " << d << "\n";

	return 0;
}

void swap(int &i, int &j)
{
	int t;

	t = i; // no * operator needed
	i = j;
	j = t;
}
#endif

