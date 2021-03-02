#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda {
	public:
		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
		void print() {
			cout << "[Remetente]" << endl;
			remetente.print();
			cout << "[Destinatário]" << endl;
			destinatario.print();
		}
};

#endif