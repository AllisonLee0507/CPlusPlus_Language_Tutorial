#if 0
#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

bool logical_xor(bool a, bool b);

void print_result(const char* names[], const deque<bool>& print, const char* text);

int main(void)
{
	const char* contacts[] = { "A", "J", "S", "D", "R" };
	const bool salesman1_data[] = { true, true, false, false, true };
	const bool salesman2_data[] = { false, false, true, true, true };
	const int num_customers = sizeof(salesman1_data) / sizeof(salesman1_data[0]);

	// create deques and initialize with above data
	deque<bool> salesman1(salesman1_data, salesman1_data + num_customers);
	deque<bool> salesman2(salesman2_data, salesman2_data + num_customers);
	deque<bool> result(num_customers);

	print_result(contacts, salesman1, "has been called by Salesman 1");
	print_result(contacts, salesman2, "has been called by Salesman 2");

	// customers called by both salesmen
	transform(salesman1.begin(), salesman1.end(), salesman2.begin(), result.begin(), logical_and<bool>());
	print_result(contacts, result, "has been called by both salesmen");

	// customers called by at least one salesman
	transform(salesman1.begin(), salesman1.end(), salesman2.begin(), result.begin(), logical_or<bool>());
	print_result(contacts, result, "has been called by at least one salesman");

	// customers called by only one salesman
	transform(salesman1.begin(), salesman1.end(), salesman2.begin(), result.begin(), logical_xor);
	print_result(contacts, result, "has been called by only one salesman");

	// customers not called by Salesman 1
	transform(salesman1.begin(), salesman1.end(), result.begin(), logical_not<bool>());
	print_result(contacts, result, "has not been called by Salesman 1");

	return 0;
}

inline
bool logical_xor(bool a, bool b) {
	return a ? !b : b;
}
void print_result(const char* names[], const deque<bool>& which, const char* text){
	for (deque<bool>::size_type i = 0; i < which.size(); ++i)
	if (which[i])
		cout << names[i] << " " << text << endl;
	cout << endl;
}
#endif


#if 0
#include <algorithm>
#include <deque>
#include <vector>
#include <iostream>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const int data1[] = { 200, 250, 250, 100, 500, 500, 400 };
	const int data2[] = { 200, 200, 300, 500, 400, 400 };

	// create and initialize vectors to hold the debts
	vector<int> debts1(data1, data1 + sizeof(data1) / sizeof(data1[0]));
	vector<int> debts2(data2, data2 + sizeof(data2) / sizeof(data2[0]));

	// sort into descending order
	sort(debts1.begin(), debts1.end(), greater<int>());
	sort(debts2.begin(), debts2.end(), greater<int>());

	// display debts
	print(debts1);
	print(debts2);

	if (debts1 > debts2)
		cout << "\nCollect from Group 1 first";
	else
		cout << "\nCollect from Group 2 first";

	// store one group of debts in a different container
	deque<int> debts2_deque(debts2.begin(), debts2.end());

	// compare the vector to the deque
	if (lexicographical_compare(debts2_deque.begin(),
		debts2_deque.end(), debts1.begin(), debts1.end()))
		cout << "\nCollect from Group 1 in vector first";
	else
		cout << "\nCollect from Group 2 in deque first";

	return 0;
}
#endif