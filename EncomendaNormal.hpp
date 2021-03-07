#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	EncomendaNormal(double peso, double custokg, Cliente remetente, Cliente destinatario): Encomenda(peso, custokg, remetente, destinatario){}
	EncomendaNormal(){}

	double calcula() const override{
		double valor_calculado = _peso * _custokg;

		return valor_calculado;
	}

	void print() const override{
		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << _peso << endl
			<< "  Custo por kg: " << _custokg << endl
			<< "  Custo total: " << _custo_total << endl
			<< endl;
	}

};

#endif