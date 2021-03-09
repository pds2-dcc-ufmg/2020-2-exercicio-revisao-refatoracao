#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>
#include "Cliente.hpp"

class Encomenda{

	public:

		double peso = 0.0;
		double custoKg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void printInfo(){

			std::cout << "[Remetente]" << endl;
			remetente.printInfo();
			std::cout << "[Destinatário]" << endl;
			dest.printInfo();

		}

};

#endif
