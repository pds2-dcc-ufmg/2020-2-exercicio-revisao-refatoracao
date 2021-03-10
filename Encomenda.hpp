#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
	protected:
		double _peso = 0.0;
		double _custo_kg = 0.0;
		double _taxa = 0.0;
		Cliente _remetente;
		Cliente _destinatario;

	public:
		void print() {
			std::cout << "[Remetente]" << std::endl;
			this->_remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			this->_destinatario.print();
		}

		double custo_total() {
			double custo_inicial = this->_peso * this->_custo_kg;
			double aumento_taxa = custo_inicial * this->_taxa;
			double custo_total = custo_inicial + aumento_taxa;
			
			return custo_total;
		}

};

#endif