#ifndef _put_h_
#define _put_h_
#include "Tacka.h"
#include "Lista.h"

class Put
{
	Lista<Tacka> lista;

public:
	Put& operator+=(Tacka& t);
	friend ostream& operator<<(ostream& it,Put& p);
	double duzinaPuta();	

};

#endif