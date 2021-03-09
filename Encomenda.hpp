#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

using namespace std;

class Encomenda{//Classe com variaveis que calcula o total de uma encomenda feita.

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double TOTAL = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){//Função que vai imprimir os dados do remetente e do destinatário.

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

};

#endif
