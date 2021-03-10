#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaRelampago: public Encomenda{

private:
    double taxaAdicional = 0.25;

public:

	double calcula(){
	    double x = peso * custoKg;
	    x += x * taxaAdicional;
		return x;
	}

	void print(){
	    Encomenda::print();

		std::cout << "[Encomenda Relâmpago]  " << std::endl
			      << "  Peso: " << peso << std::endl
			      << "  Custo por kg: " << custoKg << std::endl
			      << "  Taxa adicional: " << taxaAdicional << std::endl
			      << "  Custo total: " << custoTotal << std::endl;
    }
};

#endif
