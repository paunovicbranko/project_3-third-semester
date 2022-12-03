#ifndef _lista_h_
#define _lista_h_
#include "Greske.h"

template<typename T>
class Lista {

	struct Elem {
		T podatak; Elem* sled;
		Elem(T podatak, Elem* sled = nullptr) : podatak(podatak), sled(sled) {}
	};
	Elem* prvi, * posl;
	int broj;
	mutable Elem* tek;

	void kopiraj(const Lista& l);
	void brisi();

	void premesti(Lista& l) {
		prvi = l.prvi;
		posl = l.posl;
		tek = l.tek;
		l.prvi = l.posl = l.tek = nullptr;
	}

	void zameni(Lista& l1, Lista& l2) {
		std::swap(l1.prvi, l2.prvi);
		std::swap(l1.posl, l2.posl);
		std::swap(l1.broj, l2.broj);
		std::swap(l1.tek, l2.tek);
	}

public:
	Lista() {
		prvi = posl = tek = nullptr;
	}

	Lista(const Lista& l) {
		kopiraj(l);
	}

	Lista(Lista&& l) {
		premesti(l);
	}

	~Lista() {
		brisi();
	}

	Lista operator=(Lista l) {
		swap(*this, l);
		return *this;
	}

	Lista& operator+=(T& t) {
		posl = (!prvi ? prvi : posl->sled) = new Elem(t);
		broj++;
		return *this;
	}
	int dohBroj() const { return broj; }

	T& operator[](int i) {
		int temp = 0;
		tek = prvi;
		while (tek) {
			if (temp == i) return tek->podatak;
			temp++;
			tek = tek->sled;
		}
		throw GPraznaPozicija();
	}
};

template<typename T>
inline void Lista<T>::kopiraj(const Lista& l)
{
	prvi = posl = tek = nullptr;

	for (Elem* pok = l.prvi; pok; pok = pok->sled) {
		Elem* novi = new Elem(pok->pod);
		posl = (!prvi ? prvi : posl->sled) = novi;

		if (pok == l.tek) tek = novi;
	}
}

template<typename T>
inline void Lista<T>::brisi()
{
	while (prvi) {
		Elem* stari = prvi;
		prvi = prvi->sled;
		delete stari;
	}
	posl = tek = nullptr;
}

#endif 