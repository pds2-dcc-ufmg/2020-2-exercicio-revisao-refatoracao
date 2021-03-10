#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double peso = 0.0;
		double custoKg = 0.0;
		double total = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			destinatario.print();
			
		}

};

#endif