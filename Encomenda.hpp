#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:
		
		void print(){
			
			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			destinatario.print();
		}

	protected:
		double peso = 0.0;
		double custoKg = 0.0;
		double pesoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
};

#endif
