#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;

		void printEncomenda(){ // imprime na tela os dados de uma encomenda cadastrada

			std::cout << "[Remetente]" << endl;
			remetente.printCliente();
			std::cout << "[Destinatário]" << endl;
			dest.printCliente();
		}

};

#endif
