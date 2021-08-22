#if 0
#include <iostream>
using namespace std;

int radiation(int health);

int main(void)
{
	int health = 80;
	cout << "Your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	return 0;
}

inline int radiation(int health) {
	return (health / 2);
}
#endif


#if 0
#include <iostream>

inline int Double(int);

int main(void)
{
	int target;
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Enter a number to work with: ";
	cin >> target;
	cout << "\n";

	target = Double(target);
	cout << "Target: " << target << endl;

	target = Double(target);
	cout << "Target: " << target << endl;

	target = Double(target);
	cout << "Target: " << target << endl;
	return 0;
}

int Double(int target)
{
	return 2 * target;
}
#endif




#if 0
#include <iostream>
using namespace std;

inline long squareit(int iValue) { return iValue * iValue; }

int main(void)
{
	int iValue = 5;

	cout << squareit(iValue) << endl;

	return (0);
}
#endif




#if 0
#include <iostream>
using namespace std;

inline int max(int a, int b)
{
	return a>b ? a : b;
}

int main(void)
{
	cout << max(10, 20);
	cout << " " << max(99, 88);

	return 0;
}
#endif
