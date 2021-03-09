#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	
	private:
	
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

	public:

		void print_cliente(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

		double calculo_padrao(){

			double x = PESO * CUSTOkg;

			return x;
		}
};

#endif
