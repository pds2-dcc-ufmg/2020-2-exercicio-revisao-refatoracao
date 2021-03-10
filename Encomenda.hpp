#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){

			cout << "[Remetente]" << endl;
			remetente.print();
			cout << "[Destinatário]" << endl;
			dest.print();
		}

};

#endif
