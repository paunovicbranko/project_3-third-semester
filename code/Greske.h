#ifndef _greske_h_
#define _greske_h_
#include <iostream>
using namespace std;

class GPraznaPozicija {

	friend ostream& operator<<(ostream& it, const GPraznaPozicija& t) {
		it << "Ne postoji artikal na toj poziciji!";
		return it;
	}
};

class GTackaPostoji {

	friend ostream& operator<<(ostream& it, const GTackaPostoji& t) {
		it << "Tacka vec postoji u putu!";
		return it;
	}
};

class GPrazanPut {

	friend ostream& operator<<(ostream& it, const GPrazanPut& t) {
		it << "Put nema tacaka!";
		return it;
	}
};


#endif