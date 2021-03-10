#ifndef EncomendaNormal_H
#define EncomendaNormal_H
#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda
{
   
public:
		
    double calcula()
	{
	    return (peso * custoKg);
    }

	void print()
	{
    
        Encomenda::print();
           
        std::cout  << "[Encomenda Normal] " << std::endl
		           << "  Peso: " << peso << std::endl
		           << "  Custo por kg: " << custoKg << std::endl
		           << "  Custo total: " << total << std::endl;

    }

};

#endif
