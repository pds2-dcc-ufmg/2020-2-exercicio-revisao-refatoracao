#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	private:

		double _peso = 0.0;
		double _custo_kg = 0.0;
		double _custo_total = 0.0;
		Cliente _remetente;
		Cliente _dest;

	public:

		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

		virtual double calculaPreco() const override;

};

#endif