#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago : public Encomenda
{
public:
	EncomendaRelampago(double Peso, double Custo, Cliente Remetente, Cliente Destinatario)
	{
		this->peso = Peso;
		this->custo = Custo;
		this->remetente = Remetente;
		this->dest = Destinatario;
	}
	double calcula()
	{
		double x = this->peso * this->custo;
		x += x * 0.25;
		return x;
	}

	void print()
	{
		Encomenda::print();
		std::cout << "[Encomenda Relâmpago]" << std::endl;
		std::cout << "  Peso: " << this->peso << std::endl
				  << "  Custo por kg: " << this->custo << std::endl
				  << "  Taxa adicional: " << 0.25 << std::endl
				  << "  Custo total: " << this->taxaAdicional << std::endl;
	}
};

#endif
