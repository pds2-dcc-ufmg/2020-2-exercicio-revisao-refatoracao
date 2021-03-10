#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"


class Encomenda
{

	public:

		double peso = 0.0;
		double custoKg = 0.0;
		double valor = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

};

#endif
