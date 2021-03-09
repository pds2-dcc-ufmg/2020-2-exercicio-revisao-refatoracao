#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	void calcula();

	void print();

	EncomendaNormal(double weight, double costKg, Cliente sender, Cliente recipient);
};

#endif