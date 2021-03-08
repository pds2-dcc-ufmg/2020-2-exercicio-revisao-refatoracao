#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula() override;

	void print() override;

  EncomendaNormal(double mass, double cost, Cliente rement, Cliente dest);

};

#endif
