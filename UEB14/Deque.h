/**
 * @file Deque.h
 *
 * @date 28.07.2015
 * @author Simon Bastian & Andreas Schreiner
 */


#ifndef DEQUE_H_
#define DEQUE_H_

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/**
 * @brief Verbesserte Deque
 */
class Deque {
public:
	Deque();
	Deque(int maxsize = 100);
	virtual ~Deque();
	/**
	 * @brief entfernt den vordersten Wert aus der Deque
	 * und gibt ihn zurueck
	 * @returns vorderster Wert der Deque
	 */
	const string pop_front();
	/**
	 * @brief haengt einen neuen Wert vorne an
	 * @param s neuer vorderster Wert
	 */
	void push_front(string s);
	/**
	 * @brief entfernt den hintersten Wert aus der Deque
	 * und gibt ihn zurueck
	 * @returns hinterster Wert der Deque
	 */
	const string pop_back();
	/**
	 * @brief haengt einen neuen Wert hinten an
	 * @param s neuer hinterster Wert
	 */
	void push_back(string);
	/**
	 * @brief gibt an ob die Deque leer ist
	 * @returns ob die Deque leer ist
	 */
	bool isEmpty(){
		return size <= 0;
	}
	/**
	 * @brief gibt an ob die Deque voll ist
	 * @returns ob die Deque voll ist
	 */
	bool full() {
		return size >= maxSize;
	}
	/**
	 * @brief gibt die aktuelle Laenge der Deque an
	 * @returns aktuelle Laenge der Deque
	 */
	int get_size() const {
		return size;
	}
	/**
	 * @brief <<Operator zur ausgabe in einen stream
	 * @param o Streamreferenz
	 * @param d Dequereferenz
	 * @returns stream mit angehaengtem DequeString
	 */
	friend ostream& operator<<(ostream& o, const Deque& d);
	/**
	 * @brief liefert eine Stringrepresentation der Deque
	 * @returns Stringrepresentation der Deque
	 */
	string toString() const;

private:
	string* data; // gespeicherte Daten

	int size; // tatsaechliche Groesse
	int maxSize; // maximale Groesse //const
};
#endif /* DEQUE_H_ */
