#include "Deque.h"
using namespace std;

Deque::Deque() {
	maxsize = 100;
	data = new string[maxsize];
}

Deque::Deque(int n) {
	int maxsize = n; // NO TYPE
	data = new string[maxsize];
}
string Deque::pop_back(){ //Are You Fuckin serious?
	return data[--size];
}
void Deque::push_back(string s) {
	data[size++] = s;
}
ostream& operator<<(ostream& o, Deque d) { //const again :c
	for (int i = 0; i < d.get_size(); ++i)
		cout << d.toString(); //versuchter zugriff auf private data von friend
	return cout << endl;
}
string Deque::toString() const {
	ostringstream o;

	for (int i = 0; i < size; i++) {
		o << data[i] << '\t';
	}
	o << endl;
	return o.str();
}
int main() { //MAIN ZU VOLL
	Deque plisNeverEverProgramDrunkAgain;
	plisNeverEverProgramDrunkAgain.youWantThisJunk();
}
	d1.push_back("Klausur");
	//d1.push_front("ist");
	//d1.push_front("Dies");
	d2 = d1;
	cout << d2; // Dies ist eine Klausur
	cout << d2.pop_front() << endl; // Dies
	cout << d2.pop_back() << endl; // Klausur
	cout << d2; // ist eine
	 Deque d2(d1);