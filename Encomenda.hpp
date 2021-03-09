#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
		virtual double calcula(){return 0;};
		virtual void print(){};
		
		 void setPeso(double Peso){this->PESO = Peso;};
		 void setCustokg(double Custokg){this->CUSTOkg = Custokg;};
		 void setCustoT(double t){this->T = t;};
		 void setRemetente(Cliente Remet){this->remetente = Remet;};
		 void setDest(Cliente Dest){this->dest = Dest;};
		 double getCustoT(){return this->T;};
		

	protected:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
		
};

#endif