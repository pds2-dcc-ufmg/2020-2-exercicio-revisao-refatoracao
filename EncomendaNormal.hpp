#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda {

	public:
		
	double calculaCustoTotal(){

		double custoTotal = peso * custoEmKg;

		return custoTotal;
	}

	void imprimeDados() {

		Encomenda::imprimeDados();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << peso << std::endl
			<< "  Custo por kg: " << custoEmKg << std::endl
			<< "  Custo total: " << custoTotal << std::endl;
	}
};

#endif
