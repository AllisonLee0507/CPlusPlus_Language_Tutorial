#if 0
#include <iostream.h>

template <class T>
class MyClass {
	T value1, value2;
public:
	MyClass(T first, T second){
		value1 = first;
		value2 = second;
	}
	T getmax()
	{
		T retval;
		retval = value1>value2 ? value1 : value2;
		return retval;
	}

};

int main(void)
{
	MyClass <int> myobject(100, 75);

	cout << myobject.getmax();

	return 0;
}
#endif


#if 0
#include <iostream>


template<typename T>
class AccumulationTraits;

template<>
class AccumulationTraits<char> {
public:
	typedef int AccT;
};

template<>
class AccumulationTraits<short> {
public:
	typedef int AccT;
};

template<>
class AccumulationTraits<int> {
public:
	typedef long AccT;
};

template<>
class AccumulationTraits<unsigned int> {
public:
	typedef unsigned long AccT;
};

template<>
class AccumulationTraits<float> {
public:
	typedef double AccT;
};


template <typename T>
inline
typename AccumulationTraits<T>::AccT accum(T const* beg,
T const* end)
{
	// return type is traits of the element type
	typedef typename AccumulationTraits<T>::AccT AccT;

	AccT total = AccT();  // assume AccT() actually creates a zero value
	while (beg != end) {
		total += *beg;
		++beg;
	}
	return total;
}

int main(void)
{
	// create array of 5 integer values
	int num[] = { 1, 2, 3, 4, 5 };

	// print average value
	std::cout << "the average value of the integer values is "
		<< accum(&num[0], &num[5]) / 5
		<< '\n';

	// create array of character values
	char name[] = "templates";
	int length = sizeof(name)-1;

	// (try to) print average character value
	std::cout << "the average value of the characters in \""
		<< name << "\" is "
		<< accum(&name[0], &name[length]) / length
		<< '\n';
	return 0;
}
#endif



#if 0
#include <iostream.h>
#include <math.h>
template <class T>

class Vector
{
	T * pData;
	int nSize;
public:
	Vector(int);
	~Vector() { delete[] pData; }
	T& operator [] (int i) { return pData[i]; }
};
template <class T>
Vector <T>::Vector(int n)
{
	pData = new T[n];
	nSize = n;
};
int main(void)
{
	Vector <int> iV(4);
	int i;
	for (i = 0; i < 4; i++)
		iV[i] = i*i;
	for (i = 0; i < 4; i++)
		cout << iV[i] << "  ";
	cout << endl;
	Vector <double> dV(4);
	for (i = 0; i < 4; i++)
		dV[i] = sqrt(i);
	for (i = 0; i < 4; i++)
		cout << dV[i] << "  ";
	cout << endl;
	return 0;
}
#endif



#if 0
#include <iostream>


template<typename T>
class AccumulationTraits;

template<>
class AccumulationTraits<char> {
public:
	typedef int AccT;
	static AccT const zero = 0;
};

template<>
class AccumulationTraits<short> {
public:
	typedef int AccT;
	static AccT const zero = 0;
};

template<>
class AccumulationTraits<int> {
public:
	typedef long AccT;
	static AccT const zero = 0;
};


template <typename T>
inline
typename AccumulationTraits<T>::AccT accum(T const* beg,
T const* end)
{
	// return type is traits of the element type
	typedef typename AccumulationTraits<T>::AccT AccT;

	AccT total = AccumulationTraits<T>::zero;
	while (beg != end) {
		total += *beg;
		++beg;
	}
	return total;
}


int main(void)
{
	// create array of 5 integer values
	int num[] = { 1, 2, 3, 4, 5 };

	// print average value
	std::cout << "the average value of the integer values is "
		<< accum(&num[0], &num[5]) / 5
		<< '\n';

	// create array of character values
	char name[] = "templates";
	int length = sizeof(name)-1;

	// (try to) print average character value
	std::cout << "the average value of the characters in \""
		<< name << "\" is "
		<< accum(&name[0], &name[length]) / length
		<< '\n';
	return 0;
}
#endif



#if 0
template <typename T>
class Holder {
private:
	T* ptr;    // refers to the object it holds (if any)

public:
	// default constructor: let the holder refer to nothing
	Holder() : ptr(0) {
	}

	// constructor for a pointer: let the holder refer to where the pointer refers
	explicit Holder(T* p) : ptr(p) {
	}

	// destructor: releases the object to which it refers (if any)
	~Holder() {
		delete ptr;
	}

	// assignment of new pointer
	Holder<T>& operator= (T* p) {
		delete ptr;
		ptr = p;
		return *this;
	}

	// pointer operators
	T& operator* () const {
		return *ptr;
	}

	T* operator-> () const {
		return ptr;
	}

	// get referenced object (if any)
	T* get() const {
		return ptr;
	}

	// release ownership of referenced object
	void release() {
		ptr = 0;
	}

	// exchange ownership with other holder
	void exchange_with(Holder<T>& h) {
		swap(ptr, h.ptr);
	}

	// exchange ownership with other pointer
	void exchange_with(T*& p) {
		swap(ptr, p);
	}

private:
	// no copying and copy assignment allowed
	Holder(Holder<T> const&);
	Holder<T>& operator= (Holder<T> const&);
};


class Something {
public:
	void perform() const {
	}
};

void do_two_things()
{
	Holder<Something> first(new Something);
	first->perform();

	Holder<Something> second(new Something);
	second->perform();
}

int main(void)
{
	do_two_things();
	return 0;
}
#endif


#if 0
#include <iostream>

#include <stddef.h>

template <typename CountedType>
class ObjectCounter {
private:
	static size_t count;    // number of existing objects

protected:
	// default constructor
	ObjectCounter() {
		++count;
	}

	// copy constructor
	ObjectCounter(ObjectCounter<CountedType> const&) {
		++count;
	}

	// destructor
	~ObjectCounter() {
		--count;
	}

public:
	// return number of existing objects:
	static size_t live() {
		return count;
	}
};

// initialize counter with zero
template <typename CountedType>
size_t ObjectCounter<CountedType>::count = 0;


template <typename CharT>
class MyString : public ObjectCounter<MyString<CharT> > {
	//...
};

int main()
{
	MyString<char> s1, s2;
	MyString<wchar_t> ws;

	std::cout << "number of MyString<char>:    "
		<< MyString<char>::live() << std::endl;
	std::cout << "number of MyString<wchar_t>: "
		<< ws.live() << std::endl;
	return 0;
}
#endif



#if 0
#include <stddef.h>
#include <cassert>

template<typename T>
class SArray {
public:
	// create array with initial size
	explicit SArray(size_t s)
		: storage(new T[s]), storage_size(s) {
		init();
	}

	// copy constructor
	SArray(SArray<T> const& orig)
		: storage(new T[orig.size()]), storage_size(orig.size()) {
		copy(orig);
	}

	// destructor: free memory
	~SArray() {
		delete[] storage;
	}

	// assignment operator
	SArray<T>& operator= (SArray<T> const& orig) {
		if (&orig != this) {
			copy(orig);
		}
		return *this;
	}

	// return size
	size_t size() const {
		return storage_size;
	}

	// index operator for constants and variables
	T operator[] (size_t idx) const {
		return storage[idx];
	}
	T& operator[] (size_t idx) {
		return storage[idx];
	}

protected:
	// init values with default constructor
	void init() {
		for (size_t idx = 0; idx<size(); ++idx) {
			storage[idx] = T();
		}
	}
	// copy values of another array
	void copy(SArray<T> const& orig) {
		assert(size() == orig.size());
		for (size_t idx = 0; idx<size(); ++idx) {
			storage[idx] = orig.storage[idx];
		}
	}

private:
	T*     storage;       // storage of the elements
	size_t storage_size;  // number of elements

public:
	SArray<T>& operator+= (SArray<T> const& b);
	SArray<T>& operator*= (SArray<T> const& b);
	SArray<T>& operator*= (T const& s);
};



// addition of two SArrays
template<typename T>
SArray<T> operator+ (SArray<T> const& a, SArray<T> const& b)
{
	SArray<T> result(a.size());
	for (size_t k = 0; k<a.size(); ++k) {
		result[k] = a[k] + b[k];
	}
	return result;
}

// multiplication of two SArrays
template<typename T>
SArray<T> operator* (SArray<T> const& a, SArray<T> const& b)
{
	SArray<T> result(a.size());
	for (size_t k = 0; k<a.size(); ++k) {
		result[k] = a[k] * b[k];
	}
	return result;
}

// multiplication of scalar and SArray
template<typename T>
SArray<T> operator* (T const& s, SArray<T> const& a)
{
	SArray<T> result(a.size());
	for (size_t k = 0; k<a.size(); ++k) {
		result[k] = s*a[k];
	}
	return result;
}

// multiplication of SArray and scalar
// addition of scalar and SArray
// addition of SArray and scalar
//...


// additive assignment of SArray
template<class T>
SArray<T>& SArray<T>::operator+= (SArray<T> const& b)
{
	for (size_t k = 0; k<size(); ++k) {
		(*this)[k] += b[k];
	}
	return *this;
}

// multiplicative assignment of SArray
template<class T>
SArray<T>& SArray<T>::operator*= (SArray<T> const& b)
{
	for (size_t k = 0; k<size(); ++k) {
		(*this)[k] *= b[k];
	}
	return *this;
}

// multiplicative assignment of scalar
template<class T>
SArray<T>& SArray<T>::operator*= (T const& s)
{
	for (size_t k = 0; k<size(); ++k) {
		(*this)[k] *= s;
	}
	return *this;
}


int main(void)
{
	SArray<double> x(1000), y(1000);
	//...
	// process x = 1.2*x + x*y
	SArray<double> tmp(x);
	tmp *= y;
	x *= 1.2;
	x += tmp;

	return 0;
}
#endif
