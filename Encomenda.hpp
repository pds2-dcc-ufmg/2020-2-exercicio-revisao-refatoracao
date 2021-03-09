#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
			
			/*O método print foi transformado em
			virtual para que as classes filhas pudessem
			utilizá-lo com pequenas modificações em
			suas respectivas classes */
		virtual void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}
		void encomenda(double PESO, double CUSTOkg, Cliente remetente, Cliente dest);
};

#endif