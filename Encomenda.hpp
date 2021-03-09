#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	protected:

		double _peso = 0.0;
		double _custokg = 0.0;
		double _total = 0.0;
		double _taxa = 0.0;
		Cliente _remetente;
		Cliente _dest;

	public:

		Encomenda(double peso, double custo, Cliente remetente, Cliente destinatario) {
			this->_peso = peso;
		 	this->_custokg = custo;
		 	this->_remetente = remetente;
		 	this->_dest = destinatario;
		}

		void print_remet_dest(){

			std::cout << "[Remetente]" << std::endl;
			this->_remetente.print_cliente();
			std::cout << "[Destinatário]" << std::endl;
			this->_dest.print_cliente();
		}

		virtual double calcula() {
			double x = this->_peso * this->_custokg;
			this->_total = x;

			return x;
		}

		virtual void print_encom() = 0;

};

#endif