#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal : public Encomenda
{

public:
	EncomendaNormal(double Peso, double Custo, Cliente Remetente,Cliente Destinatario){
		this->peso = Peso;
		this->custo = Custo;
		this->remetente = Remetente;
		this->dest = Destinatario;
	}
	double calcula()
	{
		return this->peso * this->custo;
	}

	void print()
	{
		Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << this->peso << std::endl
				  << "  Custo por kg: " << this->custo << std::endl
				  << "  Custo total: " << this->taxaAdicional << std::endl;
	}
};

#endif
