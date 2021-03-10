#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda
{

public:

	double calcula()
	{
	    double x = peso * custoKg;
	    x += x * taxaExtra;
		return x;
	}

	void print()
	{
	    Encomenda::print();
	    
		std::cout << "[Encomenda Relâmpago]  " << std::endl
			      << "  Peso: " << peso << std::endl
			      << "  Custo por kg: " << custoKg << std::endl 
			      << "  Taxa adicional: " << taxaExtra << std::endl   
			      << "  Custo total: " << total << std::endl;

	}

    double taxaExtra = 0.25;
};

#endif
