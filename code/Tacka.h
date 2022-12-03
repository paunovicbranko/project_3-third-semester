#ifndef _tacka_h_
#define _tacka_h_
#include <cmath>
#include <iostream>
using namespace std;

class Tacka {

	int x, y;
public:
	Tacka(int x, int y) : x(x), y(y){}

	double udaljenost(Tacka& t2) const;

	friend bool operator==(Tacka& t1, Tacka& t2);
	friend ostream& operator<<(ostream& it, const Tacka& t);
};

#endif