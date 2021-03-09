#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal : public Encomenda {

public:

	EncomendaNormal(double pes, double cust, Cliente remet, Cliente destin) : Encomenda(pes, cust, remet, destin) {};

	double calcula() {

		double x = this->getpeso() * this->getCustoKg();

		return x;
	}

	void print() {

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << this->getpeso() << endl
			<< "  Custo por kg: " << this->getCustoKg() << endl
			<< "  Custo total: " << this->getCustoTotal() << endl;

	}

};

#endif
