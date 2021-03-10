#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda {

	public:

		double calcula();
		void print();
		EncomendaRelampago(double PESO, double CUSTOkg, Cliente remetente, Cliente dest);

};

#endif