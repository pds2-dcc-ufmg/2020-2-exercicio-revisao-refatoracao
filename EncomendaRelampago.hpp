#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		// Impressão dos atributos da classe EncomendaRelampago
		void print_data() override
		{
			//Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << TOTAL << endl;
		}

		// Construtor da classe EncomendaRelampago
		EncomendaRelampago(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{
			this->TAXA = 0.25;
		}
};

#endif