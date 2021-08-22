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

	// another 8-bit sequence to perform bitwise-ops against the first
	bitset <8> eightMoreBits;
	cout << "Enter another 8-bit sequence: ";
	cin >> eightMoreBits;
	cout << endl;

	cout << eightBits << " ^ " << eightMoreBits << " = "
		<< (eightBits ^ eightMoreBits)    // bitwise XOR
		<< endl;

	return 0;
}
#endif


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


	// another 8-bit sequence to perform bitwise-ops against the first
	bitset <8> eightMoreBits;
	cout << "Enter another 8-bit sequence: ";
	cin >> eightMoreBits;
	cout << endl;

	cout << eightBits << " | " << eightMoreBits << " = "
		<< (eightBits | eightMoreBits)    // bitwise OR
		<< endl;

	return 0;
}
#endif



#if 0
#include <bitset>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	string str1 = "0011001100";
	string str2 = "0000111100";
	bitset<10> bitsOne(str1), bitsTwo(str2);

	bitset<10> bitsThree = bitsOne & bitsTwo;
	cout << bitsThree << endl;
	bitsThree <<= 4;
	cout << bitsThree << endl;

	return (0);
}
#endif



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

	// another 8-bit sequence to perform bitwise-ops against the first
	bitset <8> eightMoreBits;
	cout << "Enter another 8-bit sequence: ";
	cin >> eightMoreBits;
	cout << endl;

	cout << eightBits << " & " << eightMoreBits << " = "
		<< (eightBits & eightMoreBits)    // bitwise AND
		<< endl;


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
	cout << lights;
	lights |= outside;
	cout << lights;

	return 0;
}
#endif