#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	
		EncomendaNormal(double EncPeso, double EncCustoKg, Cliente EncRemetente, Cliente EncDest);

		double calcula() override;

		void print() override;

};

#endif