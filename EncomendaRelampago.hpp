#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago : public Encomenda
{
public:
	EncomendaRelampago(double peso, double custo, double taxa, Cliente _remetente, Cliente destinatario);

	double calcula()
	{

		double x = PESO * CUSTOkg;
		x += x * taxaAdicional;

		return x;
	}

	void print()
	{

		Encomenda::print();
		std::cout << "[Encomenda Relâmpago]" << std::endl;
		std::cout << "  Peso: " << PESO << std::endl
				  << "  Custo por kg: " << CUSTOkg << std::endl
				  << "  Taxa adicional: " << taxaAdicional << std::endl
				  << "  Custo total: " << taxaAdicional << std::endl;
	}
};

#endif