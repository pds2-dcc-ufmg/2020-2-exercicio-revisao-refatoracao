#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

	double CONTA = PESO * CUSTOKG;

	return CONTA;
	}

	void print(){

		Encomenda::print();
		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << PESO << endl
		     << "  Custo por kg: " << CUSTOKG << endl
		     << "  Custo total: " << SOMATORIA << endl;

	}

	};

#endif
