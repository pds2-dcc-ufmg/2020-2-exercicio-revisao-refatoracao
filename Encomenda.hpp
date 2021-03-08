#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	private:

		double peso = 0.0;
		double custokg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
	
	public:
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			destinatario.print();
		}

};

#endif
