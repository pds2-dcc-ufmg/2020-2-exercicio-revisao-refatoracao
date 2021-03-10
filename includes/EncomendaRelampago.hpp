#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include <iostream>

#include "./Encomenda.hpp"
#include "./Cliente.hpp"

using namespace std;

class EncomendaRelampago: public Encomenda {
 
	public:

		void calcula();

		void print();

		EncomendaRelampago(double weight, double costKg, Cliente sender, Cliente recipient);
};

#endif