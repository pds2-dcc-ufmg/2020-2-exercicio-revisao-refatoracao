#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago : public Encomenda {

private:
	double taxaAdicional = 0.25;

public:

	EncomendaRelampago(double pes, double cust, Cliente remet, Cliente destin) : Encomenda(pes, cust, remet, destin) {};

	double getTaxa() {
		return this->taxaAdicional;
	}

	double calcula() {

		double x = this->getpeso() * this->getCustoKg();
		x += x * this->getTaxa();

		return x;
	}

	void print() {

		Encomenda::print();
		std::cout << "[Encomenda Relâmpago]" << endl;
		std::cout << "  Peso: " << this->getpeso() << endl
			<< "  Custo por kg: " << this->getCustoKg() << endl
			<< "  Taxa adicional: " << this->getTaxa() << endl
			<< "  Custo total: " << this->getCustoTotal() << endl;

	}

};

#endif
