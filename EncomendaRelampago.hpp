#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

const double taxa = 0.25;

class EncomendaRelampago: public Encomenda{

	public:

		// Impressão dos atributos da classe EncomendaRelampago
		void print_data() override
		{
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << TOTAL << endl;
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