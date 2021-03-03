#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal : public Encomenda
{

public:
	EncomendaNormal() {} // construtor padrão
	EncomendaNormal(double _peso, double _custokg, Cliente _remetente, Cliente _dest)
	{
		this->PESO = _peso;
		this->CUSTOkg = _custokg;
		this->remetente = _remetente;
		this->dest = _dest;
	} // construtor

	void printEncomenda() override
	{
		std::cout << "[Remetente]" << endl;
		remetente.printCliente();
		std::cout << "[Destinatário]" << endl;
		dest.printCliente();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
				  << "  Custo por kg: " << CUSTOkg << endl
				  << "  Custo total: " << custoTotal << endl;
	} // função para imprimir dados da entrega Normal
};

#endif
