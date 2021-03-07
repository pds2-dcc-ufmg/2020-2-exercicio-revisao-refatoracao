#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		return peso * custokg;

		
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custokg << endl
			<< "  Custo total: " << T << endl;

	}

};

#endif
