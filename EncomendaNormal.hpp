#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaNormal: public Encomenda{

	public:
		double calcula();
		void print();
		EncomendaNormal(double _peso, double _CustoKg);
};

#endif