#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		T = PESO * CUSTOkg;

		return T;
	}

	void print(){

		Encomenda::print();
		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << T << endl;

	}

};

#endif