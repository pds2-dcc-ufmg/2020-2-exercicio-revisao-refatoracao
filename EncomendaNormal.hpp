#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	
	EncomendaNormal(double weight, double cost_per_kg, Cliente sender,  Cliente recipient): 		Encomenda(weight, cost_per_kg, sender, recipient){}
	
	int getClassType() override{
		return 1;
	}

	double calcula() override{

		double x = PESO * CUSTOkg;

		return x;
	}

	void print() override{

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << T << endl;

	}

};

#endif
