#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>
#include "Cliente.hpp"

class Encomenda{

	public:
	
		void print() {

			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			dest.print();
		}

		double get_peso() { return this->peso; };
		double get_custoKG() { return this->custoKG; };
		double get_T() { return this->T; };
		Cliente get_remetente() { return this->remetente; };
		Cliente get_dest() { return this->dest; };

		void set_peso( double peso ) { this->peso = peso; };
		void set_custoKG( double custoKG ) { this->custoKG = custoKG; };
		void set_T( double T ) { this->T = T; };
		void set_remetente( Cliente remetente ) { this->remetente = remetente; };
		void set_dest( Cliente dest ) { this->dest = dest; };

	protected:

		double peso = 0.0;
		double custoKG = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif