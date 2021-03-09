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
			std::cout << "  Peso: " << PESO << std::endl
					  << "  Custo por kg: " << CUSTOkg << std::endl
					  << "  Custo total: " << TOTAL << std::endl;
		}

		// Construtor - EncomendaNormal
		EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{ 
			this->TOTAL = this->calcula();		
		}

		double calcula() override
		{
			return this->PESO * this->CUSTOkg;
		}
};

#endif