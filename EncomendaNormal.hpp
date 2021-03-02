#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula_custo(){

		double CUSTO_TOTAL = PESO * CUSTOkg;

		return CUSTO_TOTAL;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << this->get_PESO() << endl
			<< "  Custo por kg: " << this->get_CUSTOkg() << endl
			<< "  Custo total: " << this->CUSTO_TOTAL << endl;

	}

};

#endif