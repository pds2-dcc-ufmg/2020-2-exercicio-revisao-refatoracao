#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

	double calcula(){

		double x = PESO * CUSTOkg;
		return x;
	}

	void print(){

		Encomenda::print();
		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << PESO << endl
		cout << "  Custo por kg: " << CUSTOkg << endl
		cout << "  Custo total: " << T << endl;

	}

};

#endif
