#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		double x = getPeso() * getCusto();

		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << getPeso() << endl
			<< "  Custo por kg: " << getCusto() << endl
			<< "  Custo total: " << calcula() << endl;

	}

};

#endif