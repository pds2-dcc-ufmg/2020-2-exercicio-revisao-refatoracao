#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

	EncomendaNormal(double _PESO, double _CUSTOkg, double _T, Cliente _remetente, Cliente _dest): Encomenda(_PESO, _CUSTOkg, _T,_remetente,_dest){};	
	double calcula(){

		double x = PESO * CUSTOkg;

		return x;
	}
	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << T << endl;
		std::cout << endl;

	}

};

#endif