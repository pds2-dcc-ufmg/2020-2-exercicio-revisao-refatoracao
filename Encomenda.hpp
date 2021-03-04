#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda: public print{

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
		void imprimir() override{

			std::cout << "[Remetente]" << std::endl;
			remetente.imprimir();
			std::cout << "[Destinatário]" << std::endl;
			destinatario.imprimir();
		}

		virtual double taxa_entrega_calcular() = 0;

};

#endif
