#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>
#include "Cliente.hpp"

class Encomenda{

	public:

		//Imprime os dados do Remetente e do Destinatário da encomenda
		void print() {

			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			dest.print();
		}

		//Métodos para pegar os dados da encomenda
		double get_peso() { return this->peso; };
		double get_custoKG() { return this->custoKG; };
		double get_T() { return this->T; };
		Cliente get_remetente() { return this->remetente; };
		Cliente get_dest() { return this->dest; };

		//Métodos para modificar os dados da encomenda
		void set_peso( double peso ) { this->peso = peso; };
		void set_custoKG( double custoKG ) { this->custoKG = custoKG; };
		void set_T( double T ) { this->T = T; };
		void set_remetente( Cliente remetente ) { this->remetente = remetente; };
		void set_dest( Cliente dest ) { this->dest = dest; };

	protected:

		//Dados da encomenda
		double peso = 0.0;
		double custoKG = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif