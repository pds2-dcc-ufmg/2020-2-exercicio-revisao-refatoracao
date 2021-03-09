#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		double x = peso * custoKg;

		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << peso << std::endl
			<< "  Custo por kg: " << custoKg << std::endl
			<< "  Custo total: " << pesoTotal << std::endl;

	}

};

#endif
