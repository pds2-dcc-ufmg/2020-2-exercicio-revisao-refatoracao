#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda {

	public:

		double peso = 0.0;
		double custoEmKg = 0.0;
		double custoTotal = 0.0;

		Cliente remetente;
		Cliente destinatario;
			
		void print() {

			std::cout << "[Remetente]" << std::endl;
			remetente.print();

			std::cout << "[Destinatário]" << std::endl;
			destinatario.print();
		}
};

#endif
