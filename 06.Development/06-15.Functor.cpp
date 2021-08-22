#if 0
#include <iostream>

#include <cmath>
#include <cstdlib>

class Abs {
  public:
    // ''function call'':
    double operator() (double v) const {
        return std::abs(v);
    }
};

class Sine {
  public:
    // ''function call'':
    double operator() (double a) const {
        return std::sin(a);
    }
};


template <typename FO1, typename FO2>
class Composer {
  private:
    FO1 fo1;  // first/inner function object to call
    FO2 fo2;  // second/outer function object to call
  public:
    // constructor: initialize function objects
    Composer (FO1 f1, FO2 f2)
     : fo1(f1), fo2(f2) {
    }

    // ''function call'': nested call of function objects
    double operator() (double v) {
        return fo2(fo1(v));
    }
};


template<typename FO>
void print_values (FO fo)
{
    for (int i=-2; i<3; ++i) {
        std::cout << "f(" << i*0.1
                  << ") = " << fo(i*0.1)
                  << "\n";
    }
}

int main(void)
{
	// print sin(abs(-0.5))
	std::cout << Composer<Abs,Sine>(Abs(),Sine())(-0.5) << "\n\n";
	
	// print abs() of some values
	print_values(Abs());
	std::cout << '\n';
	
	// print sin() of some values
	print_values(Sine());
	std::cout << '\n';
	
	// print sin(abs()) of some values
	print_values(Composer<Abs, Sine>(Abs(), Sine()));
	std::cout << '\n';
	
	// print abs(sin()) of some values
	print_values(Composer<Sine, Abs>(Sine(), Abs()));
	
	return 0;
}
#endif


#if 0
#include <iostream>

#include <cmath>
#include <cstdlib>

class Abs {
  public:
    // ''function call'':
    double operator() (double v) const {
        return std::abs(v);
    }
};

class Sine {
  public:
    // ''function call'':
    double operator() (double a) const {
        return std::sin(a);
    }
};



template <typename FO1, typename FO2>
class Composer {
  private:
    FO1 fo1;  // first/inner function object to call
    FO2 fo2;  // second/outer function object to call
  public:
    // constructor: initialize function objects
    Composer (FO1 f1, FO2 f2)
     : fo1(f1), fo2(f2) {
    }

    // ''function call'': nested call of function objects
    double operator() (double v) {
        return fo2(fo1(v));
    }
};


template <typename FO1, typename FO2>
inline
Composer<FO1,FO2> compose (FO1 f1, FO2 f2) {
    return Composer<FO1,FO2> (f1, f2);
}


template<typename FO>
void print_values (FO fo)
{
    for (int i=-2; i<3; ++i) {
        std::cout << "f(" << i*0.1
                  << ") = " << fo(i*0.1)
                  << "\n";
    }
}

int main(void)
{
    // print sin(abs(-0.5))
    std::cout << compose(Abs(),Sine())(0.5) << "\n\n";

    // print abs() of some values
    print_values(Abs());
    std::cout << '\n';

    // print sin() of some values
    print_values(Sine());
    std::cout << '\n';

    // print sin(abs()) of some values
    print_values(compose(Abs(),Sine()));
    std::cout << '\n';

    // print abs(sin()) of some values
    print_values(compose(Sine(),Abs()));
    
    return 0;
}
#endif



#if 0
#include <iostream>
#include <cmath>
#include <cstdlib>

class Abs {
  public:
    // ''function call'':
    double operator() (double v) const {
        return std::abs(v);
    }
};

class Sine {
  public:
    // ''function call'':
    double operator() (double a) const {
        return std::sin(a);
    }
};

template <typename C, int N>
class BaseMem : public C {
  public:
    BaseMem(C& c) : C(c) { }
    BaseMem(C const& c) : C(c) { }
};

template <typename FO1, typename FO2>
class Composer : private BaseMem<FO1,1>,
                 private BaseMem<FO2,2> {
  public:
    // constructor: initialize function objects
    Composer(FO1 f1, FO2 f2)
     : BaseMem<FO1,1>(f1), BaseMem<FO2,2>(f2) {
    }

    // ''function call'': nested call of function objects
    double operator() (double v) {
        return BaseMem<FO2,2>::operator()
                 (BaseMem<FO1,1>::operator()(v));
    }
};
template <typename FO1, typename FO2>
inline
Composer<FO1,FO2> compose (FO1 f1, FO2 f2) {
    return Composer<FO1,FO2> (f1, f2);
}


template<typename FO>
void print_values (FO fo)
{
    for (int i=-2; i<3; ++i) {
        std::cout << "f(" << i*0.1
                  << ") = " << fo(i*0.1)
                  << "\n";
    }
}

int main(void)
{
	// print sin(abs(-0.5))
	std::cout << compose(Abs(),Sine())(0.5) << "\n\n";
	
	// print abs() of some values
	print_values(Abs());
	std::cout << '\n';
	
	// print sin() of some values
	print_values(Sine());
	std::cout << '\n';
	
	// print sin(abs()) of some values
	print_values(compose(Abs(),Sine()));
	std::cout << '\n';
	
	// print abs(sin()) of some values
	print_values(compose(Sine(),Abs()));
	std::cout << '\n';
	
	// print sin(sin()) of some values
	print_values(compose(Sine(),Sine()));
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <iomanip>
#include <cassert>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
template <typename T>
class less_with_count : public binary_function<T, T, bool> {
public:
  less_with_count() : counter(0), progenitor(0) { }
  // Copy constructor:
  less_with_count(less_with_count<T>& x) : counter(0), 
      progenitor(x.progenitor ? x.progenitor : &x) { }
  bool operator()(const T& x, const T& y) {
    ++counter;
    return x < y;
  }
  long report() const { return counter; }
  ~less_with_count() {  // Destructor
    if (progenitor) {
      progenitor->counter += counter; 
    }
  }
private:
  long counter;
  less_with_count<T>* progenitor;
};
int main()
{
  cout << "Using a function object for operation counting, "
       << "second version." << endl;
  const long N1 = 1000, N2 = 128000;
  for (long N = N1; N <= N2; N *= 2) { 
    vector<int> vector1;
    for (int k = 0; k < N; ++k) 
      vector1.push_back(k);
    random_shuffle(vector1.begin(), vector1.end());
    less_with_count<int> comp_counter;
    sort(vector1.begin(), vector1.end(), comp_counter);
    cout << "Problem size " << setw(9) << N 
         << ",  comparisons performed: " 
         << setw(9) << comp_counter.report() << endl;
  }
  return 0;
}
#endif



#if 0
#include <iostream>
#include <iomanip>
#include <cassert>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template <typename T>
class less_with_count : public binary_function<T, T, bool> {
public:
  less_with_count() { }
  bool operator()(const T& x, const T& y) {
        ++counter;
        return x < y;
  }
  long report() const {return counter;}
  static long counter;
};

template <typename T>
long less_with_count<T>::counter = 0;

int main(void) 
{
  const long N1 = 1000, N2 = 128000;
  for (long N = N1; N <= N2; N *= 2) { 
    vector<int> vector1;
    for (int k = 0; k < N; ++k) 
      vector1.push_back(k);
      
    random_shuffle(vector1.begin(), vector1.end());
    less_with_count<int> comp_counter;
    less_with_count<int>::counter = 0;
    sort(vector1.begin(), vector1.end(), comp_counter);
    cout << comp_counter.report() << endl;
  }
  return 0;
}
#endif



#if 0
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template <typename InputIterator, typename T>
T accumulate1(InputIterator first, InputIterator last, T init, T (*binary_funct
ion)(T x, T y)) // New parameter
{
  while (first != last) {
    init = (*binary_function)(init, *first);
    ++first;
  }
  return init;
}

int multfun(int x, int y) { return x * y; }

int main(void)
{
	int x[5] = {2, 3, 5, 7, 11};
	
	vector<int> vector1(&x[0], &x[5]);
	
	int product = accumulate1(vector1.begin(), vector1.end(), 1, &multfun);
	
	cout << product << endl;
	return 0;
}
#endif
