#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda {

	protected:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente dest;

	public:

		virtual double calcula() = 0;

		virtual void print() {

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

		void processaEnc() {

			this->calcula();
			this->print();
		};

};

#endif