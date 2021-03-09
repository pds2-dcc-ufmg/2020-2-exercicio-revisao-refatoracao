#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	EncomendaNormal (double peso, double kg, Cliente remet, Cliente destinatario):
		Encomenda (peso, kg, remet, destinatario) {}

	double calcula(){

		double x = getPeso() * getKg();

		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << getPeso() << endl
			<< "  Custo por kg: " << getKg() << endl
			<< "  Custo total: " << getTotal() << endl;

	}

};

#endif
