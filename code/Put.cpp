#include "Put.h"

Put& Put::operator+=(Tacka& t)
{
	for (int i = 0; i < lista.dohBroj(); i++) {
		if (lista[i] == t) throw GTackaPostoji();
	}
	lista += t;
}

double Put::duzinaPuta()
{
	double duzina = 0;
	for (int i = 0; i < lista.dohBroj() - 1; i++) {
		duzina += lista[i].udaljenost(lista[i + 1]);
	}
	return duzina;
}

ostream& operator<<(ostream& it,Put& p)
{
	if (p.lista.dohBroj() == 0) throw GPrazanPut();
	for (int i = 0; i < p.lista.dohBroj(); i++) {
		it << p.lista[i] << endl;
	}
	return it;
}
