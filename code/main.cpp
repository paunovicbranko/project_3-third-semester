#include "Tacka.h"
#include "Put.h"
#include "Greske.h"

int main() {
	try {
		Tacka t1 = Tacka(2, 3);
		Tacka t2 = Tacka(4, 6);
		Tacka t3 = Tacka(5, 9);
		Tacka t4 = Tacka(8, 12);

		Put p1 = Put();
		p1 += t1;
		p1 += t4;

		cout << p1;
	}
	catch (GPrazanPut g1) {
		cout << g1;
	}
	catch(GPraznaPozicija g2){
		cout << g2;
	}
	catch (GTackaPostoji g3) {
		cout << g3;
	}

}