#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaNormal: public Encomenda{

	public:
		
	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custoKg << endl
			<< "  Custo total: " << calculaCusto() << endl;

	}

};

#endif