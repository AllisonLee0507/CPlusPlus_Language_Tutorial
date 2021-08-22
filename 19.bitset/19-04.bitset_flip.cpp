#if 0
#include <bitset>
#include <string>
#include <iostream>

int main(void)
{
	using namespace std;

	// A bitset to hold 8-bits
	bitset <8> eightBits;
	cout << "Enter a 8-bit sequence: ";

	// Store user-supplied sequence into the bitset
	cin >> eightBits;
	cout << endl;

	// flip the bits
	eightBits.flip();
	cout << eightBits << endl << endl;

	return 0;
}
#endif


#if 0
#include <bitset>
#include <iostream>

using namespace std;

int main(void)
{
	const int num_lights = 15;
	const bitset<num_lights> outside(0xf);
	const bitset<num_lights> inside(0xff0);
	const bitset<num_lights> driveway(0x7000);

	bitset<num_lights> lights;

	lights &= bitset<num_lights>(inside).flip();
	cout << lights;

	return 0;
}
#endif
