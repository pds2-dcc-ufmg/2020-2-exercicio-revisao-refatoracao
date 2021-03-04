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

		Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario) {
			this->_peso = peso;
			this->_custoKg = custoKg;
			this->_remetente = remetente;
			this->_destinatario = destinatario;
		};
	
	public:
		Encomenda() {};

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