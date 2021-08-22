#if 0
#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
	MyClass() {
		cout << "constructing\n";
	}
	~MyClass() {
		cout << "destructing\n";
	}
	void f() {
		cout << "f()\n";
	}
};

int main()
{
	auto_ptr<MyClass> p1(new MyClass), p2;

	p2 = p1; // transfer ownership
	p2->f();

	// can assign to a normal pointer
	MyClass *ptr = p2.get();
	ptr->f();

	return
#endif


#if 0
#include <iostream>
#include <memory>
		using namespace std;

	/* define output operator for auto_ptr
	* - print object value or NULL
	*/
	template <class T>
	ostream& operator<< (ostream& strm, const auto_ptr<T>& p)
	{
		// does p own an object ?
		if (p.get() == NULL) {
			strm << "NULL";         // NO: print NULL
		}
		else {
			strm << *p;             // YES: print the object
		}
		return strm;
	}

	int main()
	{
		auto_ptr<int> p(new int(42));
		auto_ptr<int> q;

		cout << "after initialization:" << endl;
		cout << " p: " << p << endl;
		cout << " q: " << q << endl;

		q = p;
		cout << "after assigning auto pointers:" << endl;
		cout << " p: " << p << endl;
		cout << " q: " << q << endl;

		*q += 13;                   // change value of the object q owns
		p = q;
		cout << "after change and reassignment:" << endl;
		cout << " p: " << p << endl;
		cout << " q: " << q << endl;
	}
#endif



#if 0
#include <iostream>
#include <memory>
	using namespace std;

	/* define output operator for auto_ptr
	* - print object value or NULL
	*/
	template <class T>
	ostream& operator<< (ostream& strm, const auto_ptr<T>& p)
	{
		// does p own an object ?
		if (p.get() == NULL) {
			strm << "NULL";         // NO: print NULL
		}
		else {
			strm << *p;             // YES: print the object
		}
		return strm;
	}

	int main()
	{
		const auto_ptr<int> p(new int(42));
		const auto_ptr<int> q(new int(0));
		const auto_ptr<int> r;

		cout << "after initialization:" << endl;
		cout << " p: " << p << endl;
		cout << " q: " << q << endl;
		cout << " r: " << r << endl;

		*q = *p;
		//  *r = *p;    // ERROR: undefined behavior
		*p = -77;
		cout << "after assigning values:" << endl;
		cout << " p: " << p << endl;
		cout << " q: " << q << endl;
		cout << " r: " << r << endl;

		//  q = p;      // ERROR at compile time
		//  r = p;      // ERROR at compile time
	}
#endif



#if 0
	namespace std {
		// auxiliary type to enable copies and assignments (now global)
		template<class Y>
		struct auto_ptr_ref {
			Y* yp;
			auto_ptr_ref(Y* rhs)
				: yp(rhs) {
			}
		};

		template<class T>
		class auto_ptr {
		private:
			T* ap;    // refers to the actual owned object (if any)
		public:
			typedef T element_type;

			// constructor
			explicit auto_ptr(T* ptr = 0) throw()
				: ap(ptr) {
			}

			// copy constructors (with implicit conversion)
			// - note: nonconstant parameter
			auto_ptr(auto_ptr& rhs) throw()
				: ap(rhs.release()) {
			}
			template<class Y>
			auto_ptr(auto_ptr<Y>& rhs) throw()
				: ap(rhs.release()) {
			}

			// assignments (with implicit conversion)
			// - note: nonconstant parameter
			auto_ptr& operator= (auto_ptr& rhs) throw() {
				reset(rhs.release());
				return *this;
			}
			template<class Y>
			auto_ptr& operator= (auto_ptr<Y>& rhs) throw() {
				reset(rhs.release());
				return *this;
			}

			// destructor
			~auto_ptr() throw() {
				delete ap;
			}

			// value access
			T* get() const throw() {
				return ap;
			}
			T& operator*() const throw() {
				return *ap;
			}
			T* operator->() const throw() {
				return ap;
			}

			// release ownership
			T* release() throw() {
				T* tmp(ap);
				ap = 0;
				return tmp;
			}

			// reset value
			void reset(T* ptr = 0) throw() {
				if (ap != ptr) {
					delete ap;
					ap = ptr;
				}
			}

			/* special conversions with auxiliary type to enable copies and assignments
			*/
			auto_ptr(auto_ptr_ref<T> rhs) throw()
				: ap(rhs.yp) {
			}
			auto_ptr& operator= (auto_ptr_ref<T> rhs) throw() {  // new
				reset(rhs.yp);
				return *this;
			}
			template<class Y>
			operator auto_ptr_ref<Y>() throw() {
				return auto_ptr_ref<Y>(release());
			}
			template<class Y>
			operator auto_ptr<Y>() throw() {
				return auto_ptr<Y>(release());
			}
		};
	}
#endif