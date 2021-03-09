#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda
{
protected:
	double peso;
	double custo;
	double taxaAdicional;
	Cliente remetente;
	Cliente dest;

public:
	Encomenda(){
		peso = 0.0;
		custo = 0.0;
		taxaAdicional = 0.0;
	}
	Encomenda(double Peso, double Custo, Cliente Remetente,Cliente Destinatario){
		this->peso = Peso;
		this->custo = Custo;
		this->remetente = Remetente;
		this->dest = Destinatario;
	}
	Encomenda(double Peso, double Custo, double TaxaAdicional,Cliente Remetente,Cliente Destinatario){
		this->peso = Peso;
		this->custo = Custo;
		this->taxaAdicional = TaxaAdicional;
		this->remetente = Remetente;
		this->dest = Destinatario;
	}
	void print()
	{
		std::cout << "[Remetente]" << std::endl;
		remetente.print();
		std::cout << "[Destinatário]" << std::endl;
		dest.print();
	}
};

#endif
