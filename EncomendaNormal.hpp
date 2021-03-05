#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda, public print{

	public:
		double taxa_entrega_calcular() override{
			double preco = PESO * CUSTOkg;
			return preco;
		}

	void imprimir() override{
		Encomenda::imprimir();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << PESO << std::endl
				  << "  Custo por kg: " << CUSTOkg << std::endl
				  << "  Custo total: " << T << std::endl;
	}
};

#endif
