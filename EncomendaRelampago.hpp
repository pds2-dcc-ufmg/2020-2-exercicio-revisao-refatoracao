#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

const double taxa = 0.25;

class EncomendaRelampago: public Encomenda{

	public:

		// Impressão dos atributos da classe EncomendaRelampago
		void print_data() override
		{
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << PESO << std::endl
					  << "  Custo por kg: " << CUSTOkg << std::endl
					  << "  Taxa adicional: " << 0.25 << std::endl
					  << "  Custo total: " << TOTAL << std::endl;
		}

		// Construtor da classe EncomendaRelampago
		EncomendaRelampago(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{
			this->TOTAL = this->calcula();
		}

		double calcula() override
		{
			return this->PESO * this->CUSTOkg * (1 + taxa);
		}
};

#endif