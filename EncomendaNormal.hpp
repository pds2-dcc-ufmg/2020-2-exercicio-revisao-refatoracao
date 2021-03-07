#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda {

	public:

	EncomendaNormal(double peso, double custo_por_kg, Cliente remetente, Cliente dest) : 
		Encomenda(peso, custo_por_kg, remetente, dest) {}
		
	double calcula() override {
		_total = _peso * _custo_por_kg;
		return _total;
	}

	void print(){

		Encomenda::print();
		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << _peso << endl
			<< "  Custo por kg: " << _custo_por_kg << endl
			<< "  Custo total: " << _total << endl;
	}

};

#endif