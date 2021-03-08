#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		double x = PESO * CUSTOkg;

		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << PESO << std::endl
			<< "  Custo por kg: " << CUSTOkg << std::endl
			<< "  Custo total: " << T << std::endl;

	}

};

#endif