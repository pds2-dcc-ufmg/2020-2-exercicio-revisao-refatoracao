#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double TOTAL = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
		void print();
		
		void preencher_enc(double PESO_, double CUSTOkg_, Cliente remetente_, Cliente destinatario_);


};

#endif