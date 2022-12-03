#ifndef _vozilo_h_
#define _vozilo_h_
#include "Put.h"

class Vozilo
{
	string model;
protected:
	double cenaPrPuta(Put& p) {
		return 0.1 * p.duzinaPuta();
	}

public:
	Vozilo(string model) : model(model) {}


	virtual double cenaPrevoza(Put& p) = 0;
	friend ostream& operator<<(ostream& it, const Vozilo& v) {
		return it << v.model;
	}
};

#endif