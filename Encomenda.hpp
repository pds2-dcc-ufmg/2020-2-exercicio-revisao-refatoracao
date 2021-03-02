#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	
	public:
		
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}
	
	private:
		
		bool prioridade = 0;
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif
