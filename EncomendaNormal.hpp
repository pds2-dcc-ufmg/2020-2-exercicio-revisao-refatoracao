#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		double x = this->getPeso() * this->getCusto();

		return x;
	}
	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << this->getPeso() << endl
			<< "  Custo por kg: " << this->getCusto << endl
			<< "  Custo total: " << this->getT() << endl;

	}

};

#endif
