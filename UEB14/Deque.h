#include <iostream>
#include <string>
#include <sstream>    

using namespace std;
class Deque {
public:
	Deque();
	Deque(int maxsize = 100);
	~Deque() {
		delete data;
	}
	const string pop_front();
	void push_front(string s);
	const string pop_back();
	void push_back(string);
	bool isEmpty(){
		return size <= 0;
	}
	bool full() { 
		return size >= maxSize; 
	}
	int get_size() const {
		return size; 
	}
	friend ostream& operator<<(ostream& o, const Deque d);
	string toString() const;

private:
	string* data;

	int size; // tatsaechliche Groesse
	int maxSize; // maximale Groesse //const
};
