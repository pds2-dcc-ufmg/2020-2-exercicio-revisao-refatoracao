#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:

		// Impressão dos atributos da classe EncomendaNormal
		void print_data() override
		{
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl
					  << "  Custo por kg: " << this->_custo_kg << std::endl
					  << "  Custo total: " << this->_custo_total << std::endl;
		}

		// Construtor - EncomendaNormal
		EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{ 
			this->_custo_total = this->calcula();		
		}

		double calcula() override
		{
			return this->_peso * this->_custo_kg;
		}
};

#endif