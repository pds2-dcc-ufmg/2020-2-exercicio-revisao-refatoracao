#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	protected:
		double _peso;
		double _custoKg;
		double _taxa;
		Cliente _remetente;
		Cliente _destinatario;
		
	public:

		double calculaCustoTotal() {
			double multiplicador = 1.0 + this->_taxa;
			return (this->_peso * this->_custoKg) * multiplicador;
		}
		
		void print(){
			std::cout << "[Remetente]" << std::endl;
			this->_remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			this->_destinatario.print();
		}
};

#endif