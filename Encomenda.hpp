#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>
#include "Cliente.hpp"

using namespace std;

class Encomenda {

	public:

        double _taxa = 0.25;
		double _PESO = 0.0;
		double _CUSTOkg = 0.0;
		double _T = 0.0;
		Cliente _remetente;
		Cliente _dest;

		void print();

		Encomenda(double PESO, double CUSTOkg, Cliente remetente, Cliente dest);
		Encomenda();
};

#endif