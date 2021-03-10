#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double peso = 0.0;
		double custokg = 0.0;
		double tot = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}
    
    void registerEncomenda ( double peso, double custokg, Cliente remetente, Cliente dest);


};

#endif