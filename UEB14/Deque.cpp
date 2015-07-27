#include "Deque.h"
#include <queue>
using namespace std;

Deque::Deque() {
	maxSize = 100;
	size = 0;
	data = new string[maxSize];
}

Deque::Deque(int maxSize) {
	this->maxSize = maxSize;
	size = 0;
	data = new string[maxSize];
}

const string Deque::pop_front(){
	string* erg;
	if(isEmpty()){
		throw "Deque ist leer!";
	}
	erg = &data[0];
	for (int i = 0; i < size; ++i) {
		data[i] = data[i+1];
	}
	size--;
	return *erg;
}

void Deque::push_front(string s){
	if (full()){
		throw "Deque ist voll!";
	}
	for (int i = size; i >= 0; --i) {
		data[i+1] = data[i];
	}
	data[0] = s;
	size++;
}
const string Deque::pop_back(){
	string* s;
	if(isEmpty()){
		throw "Deque ist leer!";
	}
	s = &data[--size];
	return *s;
}
void Deque::push_back(string s) {
	if(full()){
		throw "Deque ist voll!";
	}
	data[size++] = s;
}
ostream& operator<<(ostream& o, const Deque d) {
	o << d.toString();
	return o;
}
string Deque::toString() const{
	ostringstream o;
	for (int i = 0; i < size; i++) {
		o << data[i] << '\t';
	}
	o << endl;
	return o.str();
}
int main() {
	Deque d1(10), d2(d1);
	d1.push_back("eine");
	d1.push_back("Klausur");
	d1.push_front("ist");
	d1.push_front("Dies");
	d2 = d1;
	cout << d2; // Dies ist eine Klausur
	cout << d2.pop_front() << endl; // Dies
	cout << d2.pop_back() << endl; // Klausur
	cout << d2; // ist eine
}