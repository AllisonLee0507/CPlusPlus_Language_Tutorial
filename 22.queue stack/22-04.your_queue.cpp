#if 0
#include <iostream>
#include <string>

using namespace std;

#include <deque>
#include <exception>

template <class T>
class Queue {
protected:
	std::deque<T> c;        // container for the elements

public:
	/* exception class for pop() and top() with empty queue
	*/
	class ReadEmptyQueue : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "read empty queue";
		}
	};

	// number of elements
	typename std::deque<T>::size_type size() const {
		return c.size();
	}

	// is queue empty?
	bool empty() const {
		return c.empty();
	}

	// insert element into the queue
	void push(const T& elem) {
		c.push_back(elem);
	}

	// read element from the queue and return its value
	T pop() {
		if (c.empty()) {
			throw ReadEmptyQueue();
		}
		T elem(c.front());
		c.pop_front();
		return elem;
	}

	// return value of next element
	T& front() {
		if (c.empty()) {
			throw ReadEmptyQueue();
		}
		return c.front();
	}
};


int main(void)
{
	try {
		Queue<string> q;

		// insert three elements into the queue
		q.push("These ");
		q.push("are ");
		q.push("more than ");

		// read and print two elements from the queue
		cout << q.pop();
		cout << q.pop();

		// push two new elements
		q.push("four ");
		q.push("words!");

		// skip one element
		q.pop();

		// read and print two elements from the queue
		cout << q.pop();
		cout << q.pop() << endl;

		// print number of remaining elements
		cout << "number of elements in the queue: " << q.size()
			<< endl;

		// read and print one element
		cout << q.pop() << endl;
	}
	catch (const exception& e) {
		cerr << "EXCEPTION: " << e.what() << endl;
	}

	return 0;
}
#endif