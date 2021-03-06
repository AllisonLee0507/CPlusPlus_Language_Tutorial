#if 0
#include <string>
#include <iostream>
#include <ostream>
#include <cstdlib>

enum Week { Monday = 0, Tuesday = 1, Wednesday = 2, Friday = 4 };

// Explicitly cast to int, to avoid infinite recursion.
inline Week operator|(Week a, Week b) {
	return Week(int(a) | int(b));
}
inline Week& operator|=(Week& a, Week b) {
	a = a | b;
	return a;
}

inline Week operator&(Week a, Week b) {
	return Week(int(a) & int(b));
}
inline Week& operator&=(Week& a, Week b) {
	a = a & b;
	return a;
}

inline Week operator^(Week a, Week b) {
	return Week(int(a) ^ int(b));
}
inline Week& operator^=(Week& a, Week b) {
	a = a ^ b;
	return a;
}

inline Week operator~(Week a) {
	return Week(~int(a));
}

bool error()
{
	return std::rand()  2 != 0;
}

int main()
{
	Week a = Monday;
	std::cout << a << std::endl;
	a |= Tuesday;
	std::cout << a;

}
#endif