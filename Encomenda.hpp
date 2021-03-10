#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda {
	
	public:
		Encomenda(double p, double c, cliente r, cliente d): PESO(p), CUSTOkg(c), remetente(r), dest(d);
		void print () { // imprime na tela os dados do remetente e do destinatário
			cout << "[Remetente]" << endl;
			remetente.print();
			cout << "[Destinatário]" << endl;
			dest.print();
		}
	
	protected:
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif
