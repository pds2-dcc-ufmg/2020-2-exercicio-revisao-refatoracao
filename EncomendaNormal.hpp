#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula() override{

		double x = peso * custoKg;

		return x;
	}

	void print() override{

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << peso << std::endl
			<< "  Custo por kg: " << custoKg << std::endl
			<< "  Custo total: " << custoTotal << std::endl;

	}

};

#endif
