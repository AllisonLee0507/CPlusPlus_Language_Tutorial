#if 0
#include <iostream>
using std::cout;
using std::endl;

class MyType {
public:
	MyType(int arg = 0) : x(arg) {}

	bool operator!=(const MyType& arg) const {
		return x != arg.x;
	}

	int operator*() const { return x; }

	MyType& operator++() {
		++x;
		return *this;
	}

	const MyType operator++(int) {
		MyType temp(*this);
		++x;
		return temp;
	}

private:
	int x;
};


template <typename Iter>
double average(Iter a, Iter end) {
	double sum = 0.0;
	for (; a != end;){
		cout << *a++;
		sum += *a++;
	}

	return sum;
}

int main(void)
{
	MyType first(1);
	MyType last(11);
	cout << average(first, last) << endl;

	return 0;
}
#endif