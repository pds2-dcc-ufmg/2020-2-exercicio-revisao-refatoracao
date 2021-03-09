#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:

		// Impressão das informações da encomenda normal
		void print_info() override
		{
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl
					  << "  Custo por kg: " << this->_custo_kg << std::endl
					  << "  Custo total: " << this->_custo_total << std::endl;
		}

		// Construtor da classe EncomendaNormal
		EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{ 
			this->_custo_total = this->calcula();		
		}

		// Cálculo do custo total
		double calcula() override
		{
			return this->_peso * this->_custo_kg;
		}
};

#endif