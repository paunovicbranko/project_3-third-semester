#ifndef _obicnovozilo_h_
#define _obicnovozilo_h_
#include "Vozilo.h"

class ObicnoVozilo : Vozilo
{
	int start;

public:
	ObicnoVozilo(string model, int start) : Vozilo(model) {
		start = 120;
	}
	double cenaPrevoza(Put& p) override {
		return start + cenaPrPuta(p);
	}
};

#endif