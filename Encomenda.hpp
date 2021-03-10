#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	protected:

		double _peso = 0.0;
		double _custo_kg = 0.0;
		double custo_total = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){
			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

	public:

		Encomenda(double peso, double custo_kg, Cliente remetente, Cliente dest){
			this->_peso=peso;
			this->_custo_kg=custo_kg;
			this->_remetente=remetente;
			this->_dest=dest;
		}
};

#endif