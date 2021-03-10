#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
    EncomendaNormal( double peso, 
		             double custoKg,
		             Cliente remetente,
		             Cliente dest ): Encomenda( peso, 
		                                        custoKg,
		                                        remetente,
		                                        dest ) {}

	double calcula(){

		double x = _peso * _custoKg;

		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << _peso << endl
			<< "  Custo por kg: " << _custoKg << endl
			<< "  Custo total: " << _custoTotal << endl;

	}

};

#endif