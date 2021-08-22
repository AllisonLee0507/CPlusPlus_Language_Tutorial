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

	return 0;
}
#endif



#if 0
#include <bitset>
#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
	// Read a binary number into a bitset
	cout << "Enter a binary number: ";
	bitset< numeric_limits<unsigned long>::digits > bits;
	cin >> bits;
	unsigned long decimal_equivalent = bits.to_ulong();
	cout << "Binary number: " << bits << "\nDecimal equivalent: " << decimal_equivalent;

	return 0;
}
#endif



#if 0
#include <bitset>
#include <iostream>
using namespace std;

int main(int argc, char** argv){
	bitset<10> myBitset;

	myBitset.set(3);
	myBitset.set(6);
	myBitset[8] = true;
	myBitset[9] = myBitset[3];

	if (myBitset.test(3)) {
		cout << "Bit 3 is set!\n";
	}
	cout << myBitset << endl;

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

	// create a copy
	bitset <8> flipInput(eightBits);

	return 0;
}
#endif


#if 0
#include <bitset>
#include <iostream>

using namespace std;

int main(void){
	const int num_lights = 15;
	const bitset<num_lights> outside(0xf);
	const bitset<num_lights> inside(0xff0);
	const bitset<num_lights> driveway(0x7000);

	bitset<num_lights> lights;

	for (int i = 0; i < num_lights; i += 2)
		lights.reset(i);
	cout << lights;

	return 0;
}
#endif



#if 0
#include <bitset>
#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	bitset <8> eightbits(255);
	cout << "The initial contents of eightBits: " << eightbits << endl;

	return 0;
}
#endif



#if 0
#include <bitset>
#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	bitset <5> fiveBits(string("10101"));
	cout << fiveBits << endl;

	return 0;
}
#endif



#if 0
#include <bitset>
#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	bitset <4> fourBits;
	cout << fourBits << endl;

	return 0;
}
#endif



#if 0
#include <bitset>
#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
	// write a decimal integer as a binary number
	int num = 100;
	cout << "\n\nDecimal number: " << num << "\tBinary equivalent: " << bitset<8>(num) << endl;
	return 0;
}
#endif



#if 0
#include <bitset>
#include <iostream>
using namespace std;

int main(void)
{
	/* enumeration type for the bits
	* - each bit represents a color
	*/
	enum Color {
		red, yellow, green, blue, white, black, //...,
		numColors
	};

	// create bitset for all bits/colors
	bitset<numColors> usedColors;

	// set bits for two colors
	usedColors.set(red);
	usedColors.set(blue);

	// print some bitset data
	cout << "bitfield of used colors:   " << usedColors
		<< endl;
	cout << "number   of used colors:   " << usedColors.count()
		<< endl;
	cout << "bitfield of unused colors: " << ~usedColors
		<< endl;

	// if any color is used
	if (usedColors.any()) {
		// loop over all colors
		for (int c = 0; c < numColors; ++c) {
			// if the actual color is used
			if (usedColors[(Color)c]) {
				//...
			}
		}
	}

	return 0;
}
#endif