#if 0
#include <iostream>
#include <set>
#include <vector>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const int num_grades = 11;
	const int grade[num_grades] = { 2, 5, 3, 8, 9, 9, 6, 3, 5, 9, 10 };

	set<int> unique(grade, grade + num_grades);
	multiset<int> all(grade, grade + num_grades);
	print(unique);
	print(all);

	const int wrong_grade = 9;
	const int right_grade = 10;

	if (unique.erase(wrong_grade) == 1){
		if (unique.insert(right_grade).second)
			cout << "Added new, unique grade of " << right_grade << endl;
		else
			cout << "Already have unique grade of " << right_grade << endl;
	}
	else
		cout << "No unique grade of " << wrong_grade << endl;

	print(unique);
	print(all);

	return 0;
}
#endif


#if 0
#include <iostream>
#include <set>
#include <vector>

using namespace std;

template <class T>
void print(T& c){
	for (typename T::iterator i = c.begin(); i != c.end(); i++){
		std::cout << *i << endl;
	}
}

int main(void)
{
	const int num_grades = 11;
	const int grade[num_grades] = { 2, 5, 3, 8, 9, 9, 6, 3, 5, 9, 10 };

	set<int> unique(grade, grade + num_grades);
	multiset<int> all(grade, grade + num_grades);
	print(unique);
	print(all);

	const int wrong_grade = 9;
	const int right_grade = 10;

	if (unique.erase(wrong_grade) == 1){
		if (unique.insert(right_grade).second)
			cout << "Added new, unique grade of " << right_grade << endl;
		else
			cout << "Already have unique grade of " << right_grade << endl;
	}
	else
		cout << "No unique grade of " << wrong_grade << endl;

	print(unique);
	print(all);

	return 0;
}
#endif
