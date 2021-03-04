#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

const double taxa = 0.25;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula()
		{
			return PESO * CUSTOkg * (1 + taxa);
		}

		void print()
		{
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;
		}

		EncomendaRelampago(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{
			this->T = 0;
		}
};

#endif