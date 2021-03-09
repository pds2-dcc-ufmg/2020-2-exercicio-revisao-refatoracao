#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"


class Encomenda{

	private:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
	public:	
		void print(){

			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			dest.print();
		}
		Encomenda(double PESO_, double CUSTOkg_,  Cliente remetente_, Cliente dest_):PESO(PESO_),CUSTOkg(CUSTOkg_),remetente(remetente_),dest(dest_){};
        double getpeso(){return this->PESO;};
		double getcustokg(){return this->CUSTOkg;};
		double gettotal(){return this->T;}
		Cliente getremetente(){return this->remetente;};
		Cliente getdest(){return this->dest;};
		void addTotal(double valor){T+=valor; return;}
};

#endif
