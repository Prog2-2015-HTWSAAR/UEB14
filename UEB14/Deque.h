#include <iostream>
#include <string>
#include <sstream>    

using namespace std;
class Deque {
public:
	Deque();
	Deque(int a); //WTF IS THIS SHIT Deque(int = 100);
	~Deque() {
		delete data;
	} //Stilbruch
	  /*string pop_front() const;
	  void push_front(string);*/
	string pop_back();//const wtf
	void push_back(string);
	bool empty() { 
		return size <= 0; 
	}//int empty() { return size <= 0;  } BULLSHIT
	bool full() { 
		return size >= maxsize; 
	}//int full() { return size >= maxsize;  } BULLSHIT
	int get_size(){ 
		return size; 
	} //int get_size() { return size; } BULLSHIT

	void youWantThisJunk();
	string toString() const;

private:
	string* data;

	void wtfIsThisBullShit(Deque& d1, Deque& d2);
	int size; // tatsaechliche Groesse
	int maxsize; // maximale Groesse //const
};