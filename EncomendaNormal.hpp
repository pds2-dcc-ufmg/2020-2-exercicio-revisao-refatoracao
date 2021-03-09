#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	
	double calcula(){
	
		Encomenda::calculo_padrao;
		double x = calculo_padrao;
		
		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << T << endl;

	}

};

#endif
