#if 0
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	vector<int> intVector(10, 0);
	intVector.assign(5, 100);

	vector<int> v1(10, 0);
	vector<int> v2(5, 100);

	v1.swap(v2);
	// v1 now has 5 elements with the value 100.
	// v2 now has 10 elements with the value 0

	return (0);
}
#endif