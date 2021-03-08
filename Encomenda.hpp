#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente->print();
			std::cout << "[Destinatário]" << endl;
			dest->print();
		}
		void set_peso(double p){this->PESO= p;}
		double get_Peso(){return this->PESO;}

		void set_Custokg(double c){this->CUSTOkg= c;}
		double get_Custokg(){return this->CUSTOkg;}

		void set_Remetente(Cliente *r){this->remetente= r;}
		Cliente* get_Remetente(){return this->remetente;}

		void set_Destinatario(Cliente *d){this->dest= d;}
		Cliente* get_Destinatario(){return this->dest;}
	;
	protected:
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente* remetente;
		Cliente* dest;
	;
};

#endif