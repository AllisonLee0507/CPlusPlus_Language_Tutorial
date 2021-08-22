#if 0
#include <iostream.h>

class Num
{
	friend Num operator+(Num ob, int i);
	friend Num operator+(int i, Num ob);
	int count;
public:
	Num(int cc = 0){
		count = cc;
	}
	Num& operator=(int i);
	void Show(){
		cout << count << endl;
	}
};

Num& Num::operator=(int i){
	count = i;
	return *this;
}

Num operator+(Num ob, int i) // This handles ob+int.
{
	Num temp;
	temp.count = ob.count + i;
	return temp;
}

Num operator+(int i, Num ob) // This handles int+ob.
{
	Num temp;
	temp.count = ob.count + i;
	return temp;
}

int main(void)
{
	Num obj;
	obj = 10;
	obj.Show();
	obj = 10 + obj;
	obj.Show();
	obj = obj + 12;
	obj.Show();

	return 0;
}
#endif