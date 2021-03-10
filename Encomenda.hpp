#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		Cliente REMETENTE;
		Cliente DEST;
			
		void print(){

			cout << "[Remetente]" << endl;
			REMETENTE.print();
			cout << "[Destinatário]" << endl;
			DEST.print();
		}

		Encomenda(double PESO, double CUSTOkg, Cliente REMETENTE, Cliente DEST){
		this->PESO = PESO;
		this->CUSTOkg = CUSTOkg;
		this->REMETENTE = REMETENTE;
		this->DEST = DEST;
		}

};

#endif