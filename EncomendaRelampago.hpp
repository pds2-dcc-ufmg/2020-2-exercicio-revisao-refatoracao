#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

const double taxa = 0.25;

class EncomendaRelampago: public Encomenda{

	public:

		// Impressão das informações da encomenda relâmpago
		void print_info() override
		{
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl
					  << "  Custo por kg: " << this->_custo_kg << std::endl
					  << "  Taxa adicional: " << 0.25 << std::endl
					  << "  Custo total: " << this->_custo_total << std::endl;
		}

		// Construtor da classe EncomendaRelampago
		EncomendaRelampago(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{
			this->_custo_total = this->calcula();
		}

		// Cálculo do custo total
		double calcula() override
		{
			return this->_peso * this->_custo_kg * (1 + taxa);
		}
};

#endif