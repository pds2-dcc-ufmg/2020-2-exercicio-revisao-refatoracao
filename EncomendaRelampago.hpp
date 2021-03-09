#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		double calcula();
		void print();
		EncomendaRelampago(double _peso, double _CustoKg);

};

#endif