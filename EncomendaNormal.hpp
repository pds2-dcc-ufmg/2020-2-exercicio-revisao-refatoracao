#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	EncomendaNormal(double _peso,double _custoKg) : Encomenda(_peso,_custoKg){};
	
	double calcularValor() override{

		double valor = peso * custoKg;
		return valor;
	}

	void print() override{

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custoKg << endl
			<< "  Custo total: " << custoTotal << endl;

	}

};

#endif