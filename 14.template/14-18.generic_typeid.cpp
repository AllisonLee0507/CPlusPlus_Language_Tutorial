#if 0
#include <iostream>
#include <typeinfo>

// declaration of template
template <typename T>
void print_typeof(T const&);

// implementation/definition of template
template <typename T>
void print_typeof(T const& x)
{
	std::cout << typeid(x).name() << std::endl;
}
int main(void)
{
	double ice = 3.0;
	print_typeof(ice);  // call function template for type double

	return 0;
}
#endif
