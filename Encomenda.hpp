#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
#define valor_padrao 0.0
using namespace std;

class Encomenda{
	public:

		virtual double calcula(){
      return 0;
    }		
    double PESO = valor_padrao;
		double CUSTO_kg = valor_padrao;
		double PRECO = valor_padrao;
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
